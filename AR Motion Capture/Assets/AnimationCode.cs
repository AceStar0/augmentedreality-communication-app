
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System;
using UnityEngine;
using System.Threading;

public class AnimationCode : MonoBehaviour
{

    public GameObject[] Body;
    List<string> lines;
    int counter = 0;
    // Start is called before the first frame update
    void Start()
    {
        lines = System.IO.File.ReadLines("Assets/AnimationFileWorld.txt").ToList();
    }

    // Update is called once per frame
    void Update()
    {
        string[] points = lines[counter].Split(',');

        for (int i =0; i<=32;i++)
        {
            float x = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture)*10;
            float y = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture)*10;
            float z = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture)*10;
            Body[i].transform.position = new Vector3(x, y, z);
        }
        
        counter += 1;
        if (counter == lines.Count) { counter = 0; }
        Thread.Sleep(35);

    }
}
/*
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System;
using UnityEngine;
using System.Threading;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;


public class AnimationCode : MonoBehaviour
{
    public GameObject[] Body;
    List<string> lines;

    static Socket listener;
    private CancellationTokenSource source;
    public ManualResetEvent allDone;
    public Renderer objectRenderer;
    private float[] x = new float[33];
    private float[] y = new float[33];
    private float[] z = new float[33];

    public static readonly int PORT = 1756;
    public static readonly int WAITTIME = 1;


    AnimationCode()
    {
        source = new CancellationTokenSource();
        allDone = new ManualResetEvent(false);
    }

    // Start is called before the first frame update
    async void Start()
    {
        await Task.Run(() => ListenEvents(source.Token));   
    }

    // Update is called once per frame
    void Update()
    {           
        for (int i =0; i<=32;i++)
        {
            Body[i].transform.localPosition = new Vector3(x[i], y[i], z[i]);
        }
    }

    private void ListenEvents(CancellationToken token)
    {
        IPHostEntry ipHostInfo = Dns.GetHostEntry(Dns.GetHostName());
        IPAddress ipAddress = ipHostInfo.AddressList.FirstOrDefault(ip => ip.AddressFamily == AddressFamily.InterNetwork);
        IPEndPoint localEndPoint = new IPEndPoint(ipAddress, PORT);

        listener = new Socket(ipAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
         
        try
        {
            listener.Bind(localEndPoint);
            listener.Listen(10);
             
            while (!token.IsCancellationRequested)
            {
                allDone.Reset();

                print("Waiting for a connection... host :" + ipAddress.MapToIPv4().ToString() + " port : " + PORT);
                listener.BeginAccept(new AsyncCallback(AcceptCallback),listener);

                while(!token.IsCancellationRequested)
                {
                    if (allDone.WaitOne(WAITTIME))
                    {
                        break;
                    }
                }
            }
        }
        catch (Exception e)
        {
            print(e.ToString());
        }
    }

    void AcceptCallback(IAsyncResult ar)
    {  
        Socket listener = (Socket)ar.AsyncState;
        Socket handler = listener.EndAccept(ar);
 
        allDone.Set();
  
        StateObject state = new StateObject();
        state.workSocket = handler;
        handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
    }

    void ReadCallback(IAsyncResult ar)
    {
        StateObject state = (StateObject)ar.AsyncState;
        Socket handler = state.workSocket;

        int read = handler.EndReceive(ar);
  
        if (read > 0)
        {
            state.colorCode.Append(Encoding.ASCII.GetString(state.buffer, 0, read));
            handler.BeginReceive(state.buffer, 0, StateObject.BufferSize, 0, new AsyncCallback(ReadCallback), state);
        }
        else
        {
            if (state.colorCode.Length > 1)
            { 
                string content = state.colorCode.ToString();
                print($"Read {content.Length} bytes from socket.\n Data : {content}");
                SetColors(content);
            }
            handler.Close();
        }
    }

    //Set color to the Material
    private void SetColors (string data) 
    {
        string[] points = data.Split(',');

        for (int i =0; i<=32;i++)
        {
            x[i] = float.Parse(points[0 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
            y[i] = -float.Parse(points[1 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 10;
            z[i] = float.Parse(points[2 + (i * 3)], System.Globalization.CultureInfo.InvariantCulture) * 3;
        }       

    }

    private void OnDestroy()
    {
        source.Cancel();
    }

    public class StateObject
    {
        public Socket workSocket = null;
        public const int BufferSize = 1024;
        public byte[] buffer = new byte[BufferSize];
        public StringBuilder colorCode = new StringBuilder();
    }
}
*/