package EchoApp;

/**
* EchoApp/echoHolder.java .
* IDL-to-Javaコンパイラ(ポータブル)、バージョン"3.2"によって生成されました
* echo.idlから
* 2017年7月4日 17時33分44秒 JST
*/

public final class echoHolder implements org.omg.CORBA.portable.Streamable
{
  public EchoApp.echo value = null;

  public echoHolder ()
  {
  }

  public echoHolder (EchoApp.echo initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = EchoApp.echoHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    EchoApp.echoHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return EchoApp.echoHelper.type ();
  }

}
