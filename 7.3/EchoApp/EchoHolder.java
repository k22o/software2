package EchoApp;

/**
* EchoApp/EchoHolder.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* echo.idlから
* 2017年7月9日 22時15分52秒 JST
*/

public final class EchoHolder implements org.omg.CORBA.portable.Streamable
{
  public EchoApp.Echo value = null;

  public EchoHolder ()
  {
  }

  public EchoHolder (EchoApp.Echo initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = EchoApp.EchoHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    EchoApp.EchoHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return EchoApp.EchoHelper.type ();
  }

}
