public class OlaJNI {

    // carga da biblioteca
    static {
        System.loadLibrary( "ola" );
    }

    // método nativo
    private native void olaMundo();

    public static void main( String[] args ) {
        new OlaJNI().olaMundo();
    }

}