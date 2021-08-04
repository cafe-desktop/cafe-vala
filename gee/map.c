/* map.c generated by balac, the Vala compiler
 * generated from map.bala, do not modify */

/* map.bala
 *
 * Copyright (C) 2007  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include "balagee.h"
#include <glib-object.h>
#include <glib.h>
#include <gobject/gvaluecollector.h>

typedef struct _ValaParamSpecMap ValaParamSpecMap;

struct _ValaMapPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
};

struct _ValaParamSpecMap {
	GParamSpec parent_instance;
};

static gint ValaMap_private_offset;
static gpointer bala_map_parent_class = NULL;

static ValaSet* bala_map_real_get_keys (ValaMap* self);
static ValaCollection* bala_map_real_get_values (ValaMap* self);
static gboolean bala_map_real_contains (ValaMap* self,
                                 gconstpointer key);
static gpointer bala_map_real_get (ValaMap* self,
                            gconstpointer key);
static void bala_map_real_set (ValaMap* self,
                        gconstpointer key,
                        gconstpointer value);
static gboolean bala_map_real_remove (ValaMap* self,
                               gconstpointer key);
static void bala_map_real_clear (ValaMap* self);
static ValaMapIterator* bala_map_real_map_iterator (ValaMap* self);
static void bala_map_finalize (ValaMap * obj);
static GType bala_map_get_type_once (void);

static inline gpointer
bala_map_get_instance_private (ValaMap* self)
{
	return G_STRUCT_MEMBER_P (self, ValaMap_private_offset);
}

gint
bala_map_get_size (ValaMap* self)
{
	g_return_val_if_fail (self != NULL, 0);
	return BALA_MAP_GET_CLASS (self)->get_size (self);
}

/**
 * Returns the keys of this map as a read-only set.
 *
 * @return the keys of the map
 */
static ValaSet*
bala_map_real_get_keys (ValaMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_get_keys'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

ValaSet*
bala_map_get_keys (ValaMap* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALA_MAP_GET_CLASS (self)->get_keys (self);
}

/**
 * Returns the values of this map as a read-only collection.
 *
 * @return the values of the map
 */
static ValaCollection*
bala_map_real_get_values (ValaMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_get_values'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

ValaCollection*
bala_map_get_values (ValaMap* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALA_MAP_GET_CLASS (self)->get_values (self);
}

/**
 * Determines whether this map contains the specified key.
 *
 * @param key the key to locate in the map
 *
 * @return    true if key is found, false otherwise
 */
static gboolean
bala_map_real_contains (ValaMap* self,
                        gconstpointer key)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `bala_map_contains'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
bala_map_contains (ValaMap* self,
                   gconstpointer key)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return BALA_MAP_GET_CLASS (self)->contains (self, key);
}

/**
 * Returns the value of the specified key in this map.
 *
 * @param key the key whose value is to be retrieved
 *
 * @return    the value associated with the key, or null if the key
 *            couldn't be found
 */
static gpointer
bala_map_real_get (ValaMap* self,
                   gconstpointer key)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_get'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
bala_map_get (ValaMap* self,
              gconstpointer key)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALA_MAP_GET_CLASS (self)->get (self, key);
}

/**
 * Inserts a new key and value into this map.
 *
 * @param key   the key to insert
 * @param value the value to associate with the key
 */
static void
bala_map_real_set (ValaMap* self,
                   gconstpointer key,
                   gconstpointer value)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_set'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
bala_map_set (ValaMap* self,
              gconstpointer key,
              gconstpointer value)
{
	g_return_if_fail (self != NULL);
	BALA_MAP_GET_CLASS (self)->set (self, key, value);
}

/**
 * Removes the specified key from this map.
 *
 * @param key the key to remove from the map
 *
 * @return    true if the map has been changed, false otherwise
 */
static gboolean
bala_map_real_remove (ValaMap* self,
                      gconstpointer key)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `bala_map_remove'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
bala_map_remove (ValaMap* self,
                 gconstpointer key)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return BALA_MAP_GET_CLASS (self)->remove (self, key);
}

/**
 * Removes all items from this collection. Must not be called on
 * read-only collections.
 */
static void
bala_map_real_clear (ValaMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_clear'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
bala_map_clear (ValaMap* self)
{
	g_return_if_fail (self != NULL);
	BALA_MAP_GET_CLASS (self)->clear (self);
}

/**
 * Returns a Iterator that can be used for simple iteration over a
 * map.
 *
 * @return a Iterator that can be used for simple iteration over a
 *         map
 */
static ValaMapIterator*
bala_map_real_map_iterator (ValaMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `bala_map_map_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

ValaMapIterator*
bala_map_map_iterator (ValaMap* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALA_MAP_GET_CLASS (self)->map_iterator (self);
}

ValaMap*
bala_map_construct (GType object_type,
                    GType k_type,
                    GBoxedCopyFunc k_dup_func,
                    GDestroyNotify k_destroy_func,
                    GType v_type,
                    GBoxedCopyFunc v_dup_func,
                    GDestroyNotify v_destroy_func)
{
	ValaMap* self = NULL;
	self = (ValaMap*) g_type_create_instance (object_type);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	return self;
}

static void
bala_value_map_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
bala_value_map_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		bala_map_unref (value->data[0].v_pointer);
	}
}

static void
bala_value_map_copy_value (const GValue* src_value,
                           GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = bala_map_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
bala_value_map_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
bala_value_map_collect_value (GValue* value,
                              guint n_collect_values,
                              GTypeCValue* collect_values,
                              guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValaMap * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = bala_map_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
bala_value_map_lcopy_value (const GValue* value,
                            guint n_collect_values,
                            GTypeCValue* collect_values,
                            guint collect_flags)
{
	ValaMap ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = bala_map_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
bala_param_spec_map (const gchar* name,
                     const gchar* nick,
                     const gchar* blurb,
                     GType object_type,
                     GParamFlags flags)
{
	ValaParamSpecMap* spec;
	g_return_val_if_fail (g_type_is_a (object_type, BALA_TYPE_MAP), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
bala_value_get_map (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_MAP), NULL);
	return value->data[0].v_pointer;
}

void
bala_value_set_map (GValue* value,
                    gpointer v_object)
{
	ValaMap * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_MAP));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_MAP));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		bala_map_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		bala_map_unref (old);
	}
}

void
bala_value_take_map (GValue* value,
                     gpointer v_object)
{
	ValaMap * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_MAP));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_MAP));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		bala_map_unref (old);
	}
}

static void
bala_map_class_init (ValaMapClass * klass,
                     gpointer klass_data)
{
	bala_map_parent_class = g_type_class_peek_parent (klass);
	((ValaMapClass *) klass)->finalize = bala_map_finalize;
	g_type_class_adjust_private_offset (klass, &ValaMap_private_offset);
	((ValaMapClass *) klass)->get_keys = (ValaSet* (*) (ValaMap*)) bala_map_real_get_keys;
	((ValaMapClass *) klass)->get_values = (ValaCollection* (*) (ValaMap*)) bala_map_real_get_values;
	((ValaMapClass *) klass)->contains = (gboolean (*) (ValaMap*, gconstpointer)) bala_map_real_contains;
	((ValaMapClass *) klass)->get = (gpointer (*) (ValaMap*, gconstpointer)) bala_map_real_get;
	((ValaMapClass *) klass)->set = (void (*) (ValaMap*, gconstpointer, gconstpointer)) bala_map_real_set;
	((ValaMapClass *) klass)->remove = (gboolean (*) (ValaMap*, gconstpointer)) bala_map_real_remove;
	((ValaMapClass *) klass)->clear = (void (*) (ValaMap*)) bala_map_real_clear;
	((ValaMapClass *) klass)->map_iterator = (ValaMapIterator* (*) (ValaMap*)) bala_map_real_map_iterator;
}

static void
bala_map_instance_init (ValaMap * self,
                        gpointer klass)
{
	self->priv = bala_map_get_instance_private (self);
	self->ref_count = 1;
}

static void
bala_map_finalize (ValaMap * obj)
{
	ValaMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_MAP, ValaMap);
	g_signal_handlers_destroy (self);
}

/**
 * A map is a generic collection of key/value pairs.
 */
static GType
bala_map_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { bala_value_map_init, bala_value_map_free_value, bala_value_map_copy_value, bala_value_map_peek_pointer, "p", bala_value_map_collect_value, "p", bala_value_map_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (ValaMapClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_map_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaMap), 0, (GInstanceInitFunc) bala_map_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType bala_map_type_id;
	bala_map_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaMap", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
	ValaMap_private_offset = g_type_add_instance_private (bala_map_type_id, sizeof (ValaMapPrivate));
	return bala_map_type_id;
}

GType
bala_map_get_type (void)
{
	static volatile gsize bala_map_type_id__volatile = 0;
	if (g_once_init_enter (&bala_map_type_id__volatile)) {
		GType bala_map_type_id;
		bala_map_type_id = bala_map_get_type_once ();
		g_once_init_leave (&bala_map_type_id__volatile, bala_map_type_id);
	}
	return bala_map_type_id__volatile;
}

gpointer
bala_map_ref (gpointer instance)
{
	ValaMap * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
bala_map_unref (gpointer instance)
{
	ValaMap * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		BALA_MAP_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

