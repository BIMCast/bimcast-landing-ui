package com.foreign.Fuse.Controls.Native;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class ImageLoader
{
    static void debug_log(Object message)
    {
        android.util.Log.d("bimcast", (message==null ? "null" : message.toString()));
    }

    public static Object LoadFile170(final String filePath)
    {
        android.graphics.Bitmap bitmap = null;
        			try
        			{
        				bitmap = android.graphics.BitmapFactory.decodeFile(filePath);
        				return bitmap;
        			}
        			catch (Exception e)
        			{
        				android.util.Log.e("Fuse.Controls.Native.Android.ImageView", e.getMessage());
        			}
        			return null;
    }
    
    public static Object LoadUri171(final String uri)
    {
        android.graphics.Bitmap bitmap = null;
        			try
        			{
        				java.io.InputStream stream = com.apps.bimcast.bimcast
        					.GetRootActivity()
        					.getAssets()
        					.open(uri);
        				bitmap = android.graphics.BitmapFactory.decodeStream(stream);
        				stream.close();
        				return bitmap;
        			}
        			catch (Exception e)
        			{
        				android.util.Log.e("Fuse.Controls.Native.Android.ImageView", e.getMessage());
        			}
        			return null;
    }
    
    public static void Release172(final Object bitmap)
    {
        ((android.graphics.Bitmap)bitmap).recycle();
    }
    
}
