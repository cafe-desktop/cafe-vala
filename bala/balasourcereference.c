/* balasourcereference.c generated by balac, the Bala compiler
 * generated from balasourcereference.bala, do not modify */

/* balasourcereference.bala
 *
 * Copyright (C) 2006-2012  Jürg Billeter
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

#include "bala.h"
#include <balagee.h>
#include <glib-object.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _BalaParamSpecSourceReference BalaParamSpecSourceReference;

struct _BalaSourceReferencePrivate {
	BalaSourceFile* _file;
	BalaSourceLocation _begin;
	BalaSourceLocation _end;
	BalaList* _using_directives;
};

struct _BalaParamSpecSourceReference {
	GParamSpec parent_instance;
};

static gint BalaSourceReference_private_offset;
static gpointer bala_source_reference_parent_class = NULL;

static void bala_source_reference_set_using_directives (BalaSourceReference* self,
                                                 BalaList* value);
static void bala_source_reference_finalize (BalaSourceReference * obj);
static GType bala_source_reference_get_type_once (void);

static inline gpointer
bala_source_reference_get_instance_private (BalaSourceReference* self)
{
	return G_STRUCT_MEMBER_P (self, BalaSourceReference_private_offset);
}

BalaSourceFile*
bala_source_reference_get_file (BalaSourceReference* self)
{
	BalaSourceFile* result;
	BalaSourceFile* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_file;
	result = _tmp0_;
	return result;
}

void
bala_source_reference_set_file (BalaSourceReference* self,
                                BalaSourceFile* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_file = value;
}

void
bala_source_reference_get_begin (BalaSourceReference* self,
                                 BalaSourceLocation * result)
{
	BalaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_begin;
	*result = _tmp0_;
	return;
}

void
bala_source_reference_set_begin (BalaSourceReference* self,
                                 BalaSourceLocation * value)
{
	BalaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = *value;
	self->priv->_begin = _tmp0_;
}

void
bala_source_reference_get_end (BalaSourceReference* self,
                               BalaSourceLocation * result)
{
	BalaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_end;
	*result = _tmp0_;
	return;
}

void
bala_source_reference_set_end (BalaSourceReference* self,
                               BalaSourceLocation * value)
{
	BalaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = *value;
	self->priv->_end = _tmp0_;
}

BalaList*
bala_source_reference_get_using_directives (BalaSourceReference* self)
{
	BalaList* result;
	BalaList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_using_directives;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static void
bala_source_reference_set_using_directives (BalaSourceReference* self,
                                            BalaList* value)
{
	BalaList* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_iterable_ref0 (value);
	_bala_iterable_unref0 (self->priv->_using_directives);
	self->priv->_using_directives = _tmp0_;
}

/**
 * Creates a new source reference.
 *
 * @param _file        a source file
 * @param begin        the begin of the referenced source code
 * @param end          the end of the referenced source code
 * @return             newly created source reference
 */
BalaSourceReference*
bala_source_reference_construct (GType object_type,
                                 BalaSourceFile* _file,
                                 BalaSourceLocation* begin,
                                 BalaSourceLocation* end)
{
	BalaSourceReference* self = NULL;
	BalaSourceLocation _tmp0_;
	BalaSourceLocation _tmp1_;
	BalaSourceFile* _tmp2_;
	BalaList* _tmp3_;
	BalaList* _tmp4_;
	g_return_val_if_fail (_file != NULL, NULL);
	g_return_val_if_fail (begin != NULL, NULL);
	g_return_val_if_fail (end != NULL, NULL);
	self = (BalaSourceReference*) g_type_create_instance (object_type);
	bala_source_reference_set_file (self, _file);
	_tmp0_ = *begin;
	bala_source_reference_set_begin (self, &_tmp0_);
	_tmp1_ = *end;
	bala_source_reference_set_end (self, &_tmp1_);
	_tmp2_ = self->priv->_file;
	_tmp3_ = bala_source_file_get_current_using_directives (_tmp2_);
	_tmp4_ = _tmp3_;
	bala_source_reference_set_using_directives (self, _tmp4_);
	return self;
}

BalaSourceReference*
bala_source_reference_new (BalaSourceFile* _file,
                           BalaSourceLocation* begin,
                           BalaSourceLocation* end)
{
	return bala_source_reference_construct (BALA_TYPE_SOURCE_REFERENCE, _file, begin, end);
}

/**
 * Checks if given source location is part of this source reference.
 *
 * @param location     a source location
 * @return             whether this source location is part of this
 */
gboolean
bala_source_reference_contains (BalaSourceReference* self,
                                BalaSourceLocation* location)
{
	gboolean _tmp0_ = FALSE;
	BalaSourceLocation _tmp1_;
	BalaSourceLocation _tmp2_;
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (location != NULL, FALSE);
	_tmp1_ = *location;
	_tmp2_ = self->priv->_begin;
	if (_tmp1_.line > _tmp2_.line) {
		BalaSourceLocation _tmp3_;
		BalaSourceLocation _tmp4_;
		_tmp3_ = *location;
		_tmp4_ = self->priv->_end;
		_tmp0_ = _tmp3_.line < _tmp4_.line;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		result = TRUE;
		return result;
	} else {
		gboolean _tmp5_ = FALSE;
		BalaSourceLocation _tmp6_;
		BalaSourceLocation _tmp7_;
		_tmp6_ = *location;
		_tmp7_ = self->priv->_begin;
		if (_tmp6_.line == _tmp7_.line) {
			BalaSourceLocation _tmp8_;
			BalaSourceLocation _tmp9_;
			_tmp8_ = *location;
			_tmp9_ = self->priv->_end;
			_tmp5_ = _tmp8_.line == _tmp9_.line;
		} else {
			_tmp5_ = FALSE;
		}
		if (_tmp5_) {
			gboolean _tmp10_ = FALSE;
			BalaSourceLocation _tmp11_;
			BalaSourceLocation _tmp12_;
			_tmp11_ = *location;
			_tmp12_ = self->priv->_begin;
			if (_tmp11_.column >= _tmp12_.column) {
				BalaSourceLocation _tmp13_;
				BalaSourceLocation _tmp14_;
				_tmp13_ = *location;
				_tmp14_ = self->priv->_end;
				_tmp10_ = _tmp13_.column <= _tmp14_.column;
			} else {
				_tmp10_ = FALSE;
			}
			result = _tmp10_;
			return result;
		} else {
			BalaSourceLocation _tmp15_;
			BalaSourceLocation _tmp16_;
			_tmp15_ = *location;
			_tmp16_ = self->priv->_begin;
			if (_tmp15_.line == _tmp16_.line) {
				BalaSourceLocation _tmp17_;
				BalaSourceLocation _tmp18_;
				_tmp17_ = *location;
				_tmp18_ = self->priv->_begin;
				result = _tmp17_.column >= _tmp18_.column;
				return result;
			} else {
				BalaSourceLocation _tmp19_;
				BalaSourceLocation _tmp20_;
				_tmp19_ = *location;
				_tmp20_ = self->priv->_end;
				if (_tmp19_.line == _tmp20_.line) {
					BalaSourceLocation _tmp21_;
					BalaSourceLocation _tmp22_;
					_tmp21_ = *location;
					_tmp22_ = self->priv->_end;
					result = _tmp21_.column <= _tmp22_.column;
					return result;
				} else {
					result = FALSE;
					return result;
				}
			}
		}
	}
}

/**
 * Returns a string representation of this source reference.
 *
 * @return human-readable string
 */
gchar*
bala_source_reference_to_string (BalaSourceReference* self)
{
	BalaSourceFile* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	BalaSourceLocation _tmp3_;
	BalaSourceLocation _tmp4_;
	BalaSourceLocation _tmp5_;
	BalaSourceLocation _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_file;
	_tmp1_ = bala_source_file_get_relative_filename (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = self->priv->_begin;
	_tmp4_ = self->priv->_begin;
	_tmp5_ = self->priv->_end;
	_tmp6_ = self->priv->_end;
	_tmp7_ = g_strdup_printf ("%s:%d.%d-%d.%d", _tmp2_, _tmp3_.line, _tmp4_.column, _tmp5_.line, _tmp6_.column);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp2_);
	result = _tmp8_;
	return result;
}

static void
bala_value_source_reference_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
bala_value_source_reference_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		bala_source_reference_unref (value->data[0].v_pointer);
	}
}

static void
bala_value_source_reference_copy_value (const GValue* src_value,
                                        GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = bala_source_reference_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
bala_value_source_reference_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
bala_value_source_reference_collect_value (GValue* value,
                                           guint n_collect_values,
                                           GTypeCValue* collect_values,
                                           guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		BalaSourceReference * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = bala_source_reference_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
bala_value_source_reference_lcopy_value (const GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
	BalaSourceReference ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = bala_source_reference_ref (value->data[0].v_pointer);
	}
	return NULL;
}

GParamSpec*
bala_param_spec_source_reference (const gchar* name,
                                  const gchar* nick,
                                  const gchar* blurb,
                                  GType object_type,
                                  GParamFlags flags)
{
	BalaParamSpecSourceReference* spec;
	g_return_val_if_fail (g_type_is_a (object_type, BALA_TYPE_SOURCE_REFERENCE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

gpointer
bala_value_get_source_reference (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_SOURCE_REFERENCE), NULL);
	return value->data[0].v_pointer;
}

void
bala_value_set_source_reference (GValue* value,
                                 gpointer v_object)
{
	BalaSourceReference * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_SOURCE_REFERENCE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_SOURCE_REFERENCE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		bala_source_reference_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		bala_source_reference_unref (old);
	}
}

void
bala_value_take_source_reference (GValue* value,
                                  gpointer v_object)
{
	BalaSourceReference * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, BALA_TYPE_SOURCE_REFERENCE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, BALA_TYPE_SOURCE_REFERENCE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		bala_source_reference_unref (old);
	}
}

static void
bala_source_reference_class_init (BalaSourceReferenceClass * klass,
                                  gpointer klass_data)
{
	bala_source_reference_parent_class = g_type_class_peek_parent (klass);
	((BalaSourceReferenceClass *) klass)->finalize = bala_source_reference_finalize;
	g_type_class_adjust_private_offset (klass, &BalaSourceReference_private_offset);
}

static void
bala_source_reference_instance_init (BalaSourceReference * self,
                                     gpointer klass)
{
	self->priv = bala_source_reference_get_instance_private (self);
	self->ref_count = 1;
}

static void
bala_source_reference_finalize (BalaSourceReference * obj)
{
	BalaSourceReference * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_SOURCE_REFERENCE, BalaSourceReference);
	g_signal_handlers_destroy (self);
	_bala_iterable_unref0 (self->priv->_using_directives);
}

/**
 * Represents a reference to a location in a source file.
 */
static GType
bala_source_reference_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { bala_value_source_reference_init, bala_value_source_reference_free_value, bala_value_source_reference_copy_value, bala_value_source_reference_peek_pointer, "p", bala_value_source_reference_collect_value, "p", bala_value_source_reference_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (BalaSourceReferenceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_source_reference_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaSourceReference), 0, (GInstanceInitFunc) bala_source_reference_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType bala_source_reference_type_id;
	bala_source_reference_type_id = g_type_register_fundamental (g_type_fundamental_next (), "BalaSourceReference", &g_define_type_info, &g_define_type_fundamental_info, 0);
	BalaSourceReference_private_offset = g_type_add_instance_private (bala_source_reference_type_id, sizeof (BalaSourceReferencePrivate));
	return bala_source_reference_type_id;
}

GType
bala_source_reference_get_type (void)
{
	static volatile gsize bala_source_reference_type_id__volatile = 0;
	if (g_once_init_enter (&bala_source_reference_type_id__volatile)) {
		GType bala_source_reference_type_id;
		bala_source_reference_type_id = bala_source_reference_get_type_once ();
		g_once_init_leave (&bala_source_reference_type_id__volatile, bala_source_reference_type_id);
	}
	return bala_source_reference_type_id__volatile;
}

gpointer
bala_source_reference_ref (gpointer instance)
{
	BalaSourceReference * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

void
bala_source_reference_unref (gpointer instance)
{
	BalaSourceReference * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		BALA_SOURCE_REFERENCE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

