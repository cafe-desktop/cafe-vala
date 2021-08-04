/* iterator.c generated by valac, the Vala compiler
 * generated from iterator.vala, do not modify */

/* iterator.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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

#include "valagee.h"
#include <glib-object.h>
#include <glib.h>
#include <gobject/gvaluecollector.h>

typedef struct _ValaParamSpecIterator ValaParamSpecIterator;

struct _ValaIteratorPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

struct _ValaParamSpecIterator {
	GParamSpec parent_instance;
};

static gint ValaIterator_private_offset;
static gpointer vala_iterator_parent_class = NULL;

static gboolean vala_iterator_real_next (ValaIterator* self);
static gboolean vala_iterator_real_has_next (ValaIterator* self);
static gpointer vala_iterator_real_get (ValaIterator* self);
static void vala_iterator_real_remove (ValaIterator* self);
static void vala_iterator_finalize (ValaIterator * obj);
static GType vala_iterator_get_type_once (void);

static inline gpointer
vala_iterator_get_instance_private (ValaIterator* self)
{
	return G_STRUCT_MEMBER_P (self, ValaIterator_private_offset);
}

/**
 * Advances to the next element in the iteration.
 *
 * @return true if the iterator has a next element
 */
static gboolean
vala_iterator_real_next (ValaIterator* self)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `vala_iterator_next'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
vala_iterator_next (ValaIterator* self)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return BALA_ITERATOR_GET_CLASS (self)->next (self);
}

/**
 * Checks whether there is a next element in the iteration.
 *
 * @return ``true`` if the iterator has a next element
 */
static gboolean
vala_iterator_real_has_next (ValaIterator* self)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `vala_iterator_has_next'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
vala_iterator_has_next (ValaIterator* self)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return BALA_ITERATOR_GET_CLASS (self)->has_next (self);
}

/**
 * Returns the current element in the iteration.
 *
 * @return the current element in the iteration
 */
static gpointer
vala_iterator_real_get (ValaIterator* self)
{
	g_critical ("Type `%s' does not implement abstract method `vala_iterator_get'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
vala_iterator_get (ValaIterator* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return BALA_ITERATOR_GET_CLASS (self)->get (self);
}

/**
 * Removes the current element in the iteration. The cursor is set in an
 * in-between state. Both {@link get} and {@link remove} will fail until
 * the next move of the cursor (calling {@link next}).
 */
static void
vala_iterator_real_remove (ValaIterator* self)
{
	g_critical ("Type `%s' does not implement abstract method `vala_iterator_remove'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
vala_iterator_remove (ValaIterator* self)
{
	g_return_if_fail (self != NULL);
	BALA_ITERATOR_GET_CLASS (self)->remove (self);
}

gboolean
vala_iterator_get_valid (ValaIterator* self)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return BALA_ITERATOR_GET_CLASS (self)->get_valid (self);
}

ValaIterator*
vala_iterator_construct (GType object_type,
                         GType g_type,
                         GBoxedCopyFunc g_dup_func,
                         GDestroyNotify g_destroy_func)
{
	ValaIterator* self = NULL;
	self = (ValaIterator*) g_type_create_instance (object_type);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

static void
vala_value_iterator_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
vala_value_iterator_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		vala_iterator_unref (value->data[0].v_pointer);
	}
}

static void
vala_value_iterator_copy_value (const GValue* src_value,
                                GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_iterator_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
vala_value_iterator_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
vala_value_iterator_collect_value (GValue* value,
                                   guint n_collect_values,
                                   GTypeCValue* collect_values,
                                   guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValaIterator * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_iterator_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
vala_value_iterator_lcopy_value (const GValue* value,
                                 guint n_collect_values,
                                 GTypeCValue* collect_values,
                                 guint collect_flags)
{
	ValaIterator ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_iterator_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
vala_param_spec_iterator (const gchar* name,
                          const gchar* nick,
                          const gchar* blurb,
                          GType object_type,
                          GParamFlags flags)
{
	ValaParamSpecIterator* spec;
	g_return_val_if_fail (g_type_is_a (object_type, BALA_TYPE_ITERATOR), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
vala_value_get_iterator (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_ITERATOR), NULL);
	return value->data[0].v_pointer;
}

void
vala_value_set_iterator (GValue* value,
                         gpointer v_object)
{
	ValaIterator * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_ITERATOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_ITERATOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_iterator_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_iterator_unref (old);
	}
}

void
vala_value_take_iterator (GValue* value,
                          gpointer v_object)
{
	ValaIterator * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_ITERATOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_ITERATOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_iterator_unref (old);
	}
}

static void
vala_iterator_class_init (ValaIteratorClass * klass,
                          gpointer klass_data)
{
	vala_iterator_parent_class = g_type_class_peek_parent (klass);
	((ValaIteratorClass *) klass)->finalize = vala_iterator_finalize;
	g_type_class_adjust_private_offset (klass, &ValaIterator_private_offset);
	((ValaIteratorClass *) klass)->next = (gboolean (*) (ValaIterator*)) vala_iterator_real_next;
	((ValaIteratorClass *) klass)->has_next = (gboolean (*) (ValaIterator*)) vala_iterator_real_has_next;
	((ValaIteratorClass *) klass)->get = (gpointer (*) (ValaIterator*)) vala_iterator_real_get;
	((ValaIteratorClass *) klass)->remove = (void (*) (ValaIterator*)) vala_iterator_real_remove;
}

static void
vala_iterator_instance_init (ValaIterator * self,
                             gpointer klass)
{
	self->priv = vala_iterator_get_instance_private (self);
	self->ref_count = 1;
}

static void
vala_iterator_finalize (ValaIterator * obj)
{
	ValaIterator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_ITERATOR, ValaIterator);
	g_signal_handlers_destroy (self);
}

/**
 * Implemented by classes that support a simple iteration over instances of the
 * collection.
 */
static GType
vala_iterator_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { vala_value_iterator_init, vala_value_iterator_free_value, vala_value_iterator_copy_value, vala_value_iterator_peek_pointer, "p", vala_value_iterator_collect_value, "p", vala_value_iterator_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (ValaIteratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_iterator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaIterator), 0, (GInstanceInitFunc) vala_iterator_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType vala_iterator_type_id;
	vala_iterator_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaIterator", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
	ValaIterator_private_offset = g_type_add_instance_private (vala_iterator_type_id, sizeof (ValaIteratorPrivate));
	return vala_iterator_type_id;
}

GType
vala_iterator_get_type (void)
{
	static volatile gsize vala_iterator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_iterator_type_id__volatile)) {
		GType vala_iterator_type_id;
		vala_iterator_type_id = vala_iterator_get_type_once ();
		g_once_init_leave (&vala_iterator_type_id__volatile, vala_iterator_type_id);
	}
	return vala_iterator_type_id__volatile;
}

gpointer
vala_iterator_ref (gpointer instance)
{
	ValaIterator * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
vala_iterator_unref (gpointer instance)
{
	ValaIterator * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		BALA_ITERATOR_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

