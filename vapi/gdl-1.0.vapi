/* gdl-1.0.vapi generated by vapigen, do not modify. */

namespace Gdl {
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class Dock : Gdl.DockObject, Atk.Implementor, Gtk.Buildable {
		public weak Gdl.DockObject root;
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public Dock ();
		public void add_floating_item (Gdl.DockItem item, int x, int y, int width, int height);
		public void add_item (Gdl.DockItem item, Gdl.DockPlacement place);
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public Dock.from (Gdl.Dock original, bool floating);
		public unowned Gdl.DockItem get_item_by_name (string name);
		public unowned GLib.List get_named_items ();
		public unowned Gdl.DockPlaceholder get_placeholder_by_name (string name);
		public static GLib.Type param_get_type ();
		public void xor_rect (Gdk.Rectangle rect);
		[NoAccessorMethod]
		public string default_title { owned get; set; }
		[NoAccessorMethod]
		public bool floating { get; construct; }
		[NoAccessorMethod]
		public int floatx { get; set construct; }
		[NoAccessorMethod]
		public int floaty { get; set construct; }
		[NoAccessorMethod]
		public int height { get; set construct; }
		[NoAccessorMethod]
		public int width { get; set construct; }
		public virtual signal void layout_changed ();
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockBar : Gtk.Box, Atk.Implementor, Gtk.Buildable, Gtk.Orientable {
		public weak Gdl.Dock dock;
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public DockBar (Gdl.Dock dock);
		public Gtk.Orientation get_orientation ();
		public Gdl.DockBarStyle get_style ();
		public void set_orientation (Gtk.Orientation orientation);
		public void set_style (Gdl.DockBarStyle style);
		[NoAccessorMethod]
		public Gdl.DockBarStyle dockbar_style { get; set construct; }
		[NoAccessorMethod]
		public Gdl.DockMaster master { owned get; set; }
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockItem : Gdl.DockObject, Atk.Implementor, Gtk.Buildable {
		public weak Gtk.Widget child;
		public int dragoff_x;
		public int dragoff_y;
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public DockItem (string name, string long_name, Gdl.DockItemBehavior behavior);
		public void bind (Gtk.Widget dock);
		public void dock_to (Gdl.DockItem? target, Gdl.DockPlacement position, int docking_param);
		public unowned Gtk.Widget get_grip ();
		public unowned Gtk.Widget get_tablabel ();
		public void hide_grip ();
		public void hide_item ();
		public void iconify_item ();
		public void @lock ();
		public void notify_selected ();
		public void preferred_size (Gtk.Requisition req);
		public void set_default_position (Gdl.DockObject reference);
		public virtual void set_orientation (Gtk.Orientation orientation);
		public void set_tablabel (Gtk.Widget tablabel);
		public void show_grip ();
		public void show_item ();
		public void unbind ();
		public void @unlock ();
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public DockItem.with_stock (string name, string long_name, string stock_id, Gdl.DockItemBehavior behavior);
		[NoAccessorMethod]
		public Gdl.DockItemBehavior behavior { get; set; }
		[NoAccessorMethod]
		public bool locked { get; set; }
		[NoAccessorMethod]
		public Gtk.Orientation orientation { get; set construct; }
		[NoAccessorMethod]
		public int preferred_height { get; set; }
		[NoAccessorMethod]
		public int preferred_width { get; set; }
		[NoAccessorMethod]
		public bool resize { get; set; }
		public virtual signal void dock_drag_begin ();
		public virtual signal void dock_drag_end (bool cancelled);
		public virtual signal void dock_drag_motion (int x, int y);
		public virtual signal void selected ();
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockItemGrip : Gtk.Container, Atk.Implementor, Gtk.Buildable {
		public weak Gdk.Window title_window;
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public DockItemGrip (Gdl.DockItem item);
		public void hide_handle ();
		public void set_label (Gtk.Widget label);
		public void show_handle ();
		public Gdl.DockItem item { construct; }
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockLayout : GLib.Object {
		[CCode (has_construct_function = false)]
		public DockLayout (Gdl.Dock dock);
		public void attach (Gdl.DockMaster master);
		public void delete_layout (string name);
		public unowned Gtk.Widget get_items_ui ();
		public unowned GLib.List get_layouts (bool include_default);
		public unowned Gtk.Widget get_layouts_ui ();
		public unowned Gtk.Widget get_ui ();
		public bool is_dirty ();
		public bool load_from_file (string filename);
		public bool load_layout (string name);
		public void run_manager ();
		public void save_layout (string name);
		public bool save_to_file (string filename);
		[NoAccessorMethod]
		public bool dirty { get; }
		[NoAccessorMethod]
		public Gdl.DockMaster master { owned get; set; }
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockMaster : GLib.Object {
		public weak Gdl.DockObject controller;
		public int dock_number;
		public weak GLib.HashTable dock_objects;
		public weak GLib.List toplevel_docks;
		[CCode (has_construct_function = false)]
		protected DockMaster ();
		public void add (Gdl.DockObject object);
		public void @foreach (GLib.Func<Gdl.DockObject> function);
		public void foreach_toplevel (bool include_controller, GLib.Func<Gdl.DockObject> function);
		public unowned Gdl.DockObject get_controller ();
		public unowned Gdl.DockObject get_object (string nick_name);
		public void remove (Gdl.DockObject object);
		public void set_controller (Gdl.DockObject new_controller);
		[NoAccessorMethod]
		public string default_title { owned get; set; }
		[NoAccessorMethod]
		public int locked { get; set; }
		[NoAccessorMethod]
		public Gdl.SwitcherStyle switcher_style { get; set; }
		public virtual signal void layout_changed ();
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockObject : Gtk.Container, Atk.Implementor, Gtk.Buildable {
		public Gdl.DockObjectFlags flags;
		public int freeze_count;
		public bool reduce_pending;
		[CCode (has_construct_function = false)]
		protected DockObject ();
		public void bind (GLib.Object master);
		public virtual bool child_placement (Gdl.DockObject child, Gdl.DockPlacement placement);
		public void detach (bool recursive);
		public void dock (Gdl.DockObject requestor, Gdl.DockPlacement position, GLib.Value? other_data);
		public virtual bool dock_request (int x, int y, Gdl.DockRequest request);
		public void freeze ();
		public unowned Gdl.DockObject get_parent_object ();
		public unowned Gdl.Dock get_toplevel ();
		[CCode (cname = "GDL_DOCK_OBJECT_ATTACHED")]
		public bool is_attached ();
		[CCode (cname = "GDL_DOCK_OBJECT_AUTOMATIC")]
		public bool is_automatic ();
		public bool is_bound ();
		public bool is_compound ();
		[CCode (cname = "GDL_DOCK_OBJECT_FROZEN")]
		public bool is_frozen ();
		[CCode (cname = "GDL_DOCK_OBJECT_IN_DETACH")]
		public bool is_in_detach ();
		[CCode (cname = "GDL_DOCK_OBJECT_IN_REFLOW")]
		public bool is_in_reflow ();
		[CCode (cname = "GDL_DOCK_OBJECT_SET_FLAGS")]
		public bool is_set_flags (Gdl.DockObjectFlags flags);
		[CCode (cname = "GDL_DOCK_OBJECT_UNSET_FLAGS")]
		public bool is_unset_flags (Gdl.DockObjectFlags flags);
		public static unowned string nick_from_type (GLib.Type type);
		public virtual void present (Gdl.DockObject child);
		public virtual void reduce ();
		public virtual bool reorder (Gdl.DockObject child, Gdl.DockPlacement new_position, GLib.Value other_data);
		public static GLib.Type set_type_for_nick (string nick, GLib.Type type);
		public void thaw ();
		public static GLib.Type type_from_nick (string nick);
		public void unbind ();
		[NoAccessorMethod]
		public string long_name { owned get; set; }
		[NoAccessorMethod]
		public Gdl.DockMaster master { owned get; set construct; }
		[NoAccessorMethod]
		public string name { owned get; construct; }
		[NoAccessorMethod]
		public string stock_id { owned get; set; }
		[CCode (cname = "detach")]
		public virtual signal void detached (bool recursive);
		[CCode (cname = "dock")]
		public virtual signal void docked (Gdl.DockObject requestor, Gdl.DockPlacement position, GLib.Value other_data);
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public class DockPlaceholder : Gdl.DockObject, Atk.Implementor, Gtk.Buildable {
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public DockPlaceholder (string name, Gdl.DockObject object, Gdl.DockPlacement position, bool sticky);
		public void attach (Gdl.DockObject object);
		[NoAccessorMethod]
		public bool floating { get; construct; }
		[NoAccessorMethod]
		public int floatx { get; construct; }
		[NoAccessorMethod]
		public int floaty { get; construct; }
		[NoAccessorMethod]
		public int height { get; set construct; }
		[NoAccessorMethod]
		public Gdl.DockObject host { owned get; set; }
		[NoAccessorMethod]
		public Gdl.DockPlacement next_placement { get; set; }
		[NoAccessorMethod]
		public bool sticky { get; construct; }
		[NoAccessorMethod]
		public int width { get; set construct; }
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	[Compact]
	public class DockRequest {
		public weak Gdl.DockObject applicant;
		public GLib.Value extra;
		public Gdl.DockPlacement position;
		public Gdk.Rectangle rect;
		public weak Gdl.DockObject target;
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	[Compact]
	public class Pixmap {
		public weak string fname;
		public weak string path;
		public weak string pixbuf;
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_BAR_")]
	public enum DockBarStyle {
		ICONS,
		TEXT,
		BOTH,
		AUTO
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_ITEM_BEH_")]
	[Flags]
	public enum DockItemBehavior {
		NORMAL,
		NEVER_FLOATING,
		NEVER_VERTICAL,
		NEVER_HORIZONTAL,
		LOCKED,
		CANT_DOCK_TOP,
		CANT_DOCK_BOTTOM,
		CANT_DOCK_LEFT,
		CANT_DOCK_RIGHT,
		CANT_DOCK_CENTER,
		CANT_CLOSE,
		CANT_ICONIFY,
		NO_GRIP
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_")]
	[Flags]
	public enum DockItemFlags {
		IN_DRAG,
		IN_PREDRAG,
		ICONIFIED,
		USER_ACTION
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_")]
	[Flags]
	public enum DockObjectFlags {
		AUTOMATIC,
		ATTACHED,
		IN_REFLOW,
		IN_DETACH
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_PARAM_")]
	[Flags]
	public enum DockParamFlags {
		EXPORT,
		AFTER
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_DOCK_")]
	public enum DockPlacement {
		NONE,
		TOP,
		BOTTOM,
		RIGHT,
		LEFT,
		CENTER,
		FLOATING
	}
	[CCode (cheader_filename = "gdl/gdl.h", cprefix = "GDL_SWITCHER_STYLE_")]
	public enum SwitcherStyle {
		TEXT,
		ICON,
		BOTH,
		TOOLBAR,
		TABS,
		NONE
	}
	[CCode (cheader_filename = "gdl/gdl.h")]
	public const string DOCK_MASTER_PROPERTY;
	[CCode (cheader_filename = "gdl/gdl.h")]
	public const string DOCK_NAME_PROPERTY;
	[CCode (cheader_filename = "gdl/gdl.h")]
	public const int DOCK_OBJECT_FLAGS_SHIFT;
}
