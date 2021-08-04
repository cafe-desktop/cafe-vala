/* table.c generated by balac, the Bala compiler
 * generated from table.bala, do not modify */

/* table.bala
 *
 * Copyright (C) 2008-2009 Didier Villevalois
 * Copyright (C) 2008-2012 Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include "baladoc.h"
#include <balagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

enum  {
	BALADOC_CONTENT_TABLE_0_PROPERTY,
	BALADOC_CONTENT_TABLE_ROWS_PROPERTY,
	BALADOC_CONTENT_TABLE_NUM_PROPERTIES
};
static GParamSpec* baladoc_content_table_properties[BALADOC_CONTENT_TABLE_NUM_PROPERTIES];
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _BaladocContentTablePrivate {
	BalaList* _rows;
};

static gint BaladocContentTable_private_offset;
static gpointer baladoc_content_table_parent_class = NULL;
static BaladocContentBlockIface * baladoc_content_table_baladoc_content_block_parent_iface = NULL;

G_GNUC_INTERNAL BaladocContentTable* baladoc_content_table_new (void);
G_GNUC_INTERNAL BaladocContentTable* baladoc_content_table_construct (GType object_type);
static void baladoc_content_table_real_check (BaladocContentContentElement* base,
                                       BaladocApiTree* api_root,
                                       BaladocApiNode* container,
                                       const gchar* file_path,
                                       BaladocErrorReporter* reporter,
                                       BaladocSettings* settings);
G_GNUC_INTERNAL void baladoc_content_content_element_set_parent (BaladocContentContentElement* self,
                                                 BaladocContentContentElement* value);
static void baladoc_content_table_real_accept (BaladocContentContentElement* base,
                                        BaladocContentContentVisitor* visitor);
static void baladoc_content_table_real_accept_children (BaladocContentContentElement* base,
                                                 BaladocContentContentVisitor* visitor);
static gboolean baladoc_content_table_real_is_empty (BaladocContentContentElement* base);
static BaladocContentContentElement* baladoc_content_table_real_copy (BaladocContentContentElement* base,
                                                               BaladocContentContentElement* new_parent);
static void baladoc_content_table_finalize (GObject * obj);
static GType baladoc_content_table_get_type_once (void);
static void _bala_baladoc_content_table_get_property (GObject * object,
                                               guint property_id,
                                               GValue * value,
                                               GParamSpec * pspec);

static inline gpointer
baladoc_content_table_get_instance_private (BaladocContentTable* self)
{
	return G_STRUCT_MEMBER_P (self, BaladocContentTable_private_offset);
}

BalaList*
baladoc_content_table_get_rows (BaladocContentTable* self)
{
	BalaList* result;
	BalaList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_rows;
	result = _tmp0_;
	return result;
}

G_GNUC_INTERNAL BaladocContentTable*
baladoc_content_table_construct (GType object_type)
{
	BaladocContentTable * self = NULL;
	GEqualFunc _tmp0_;
	BalaArrayList* _tmp1_;
	self = (BaladocContentTable*) baladoc_content_content_element_construct (object_type);
	_tmp0_ = g_direct_equal;
	_tmp1_ = bala_array_list_new (BALADOC_CONTENT_TYPE_TABLE_ROW, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	_bala_iterable_unref0 (self->priv->_rows);
	self->priv->_rows = (BalaList*) _tmp1_;
	return self;
}

G_GNUC_INTERNAL BaladocContentTable*
baladoc_content_table_new (void)
{
	return baladoc_content_table_construct (BALADOC_CONTENT_TYPE_TABLE);
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static void
baladoc_content_table_real_check (BaladocContentContentElement* base,
                                  BaladocApiTree* api_root,
                                  BaladocApiNode* container,
                                  const gchar* file_path,
                                  BaladocErrorReporter* reporter,
                                  BaladocSettings* settings)
{
	BaladocContentTable * self;
	self = (BaladocContentTable*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	{
		BalaList* _row_list = NULL;
		BalaList* _tmp0_;
		BalaList* _tmp1_;
		gint _row_size = 0;
		BalaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _row_index = 0;
		_tmp0_ = self->priv->_rows;
		_tmp1_ = _bala_iterable_ref0 (_tmp0_);
		_row_list = _tmp1_;
		_tmp2_ = _row_list;
		_tmp3_ = bala_collection_get_size ((BalaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_row_size = _tmp4_;
		_row_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			BaladocContentTableRow* row = NULL;
			BalaList* _tmp7_;
			gpointer _tmp8_;
			BaladocContentTableRow* _tmp9_;
			BaladocContentTableRow* _tmp10_;
			_row_index = _row_index + 1;
			_tmp5_ = _row_index;
			_tmp6_ = _row_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _row_list;
			_tmp8_ = bala_list_get (_tmp7_, _row_index);
			row = (BaladocContentTableRow*) _tmp8_;
			_tmp9_ = row;
			baladoc_content_content_element_set_parent ((BaladocContentContentElement*) _tmp9_, (BaladocContentContentElement*) self);
			_tmp10_ = row;
			baladoc_content_content_element_check ((BaladocContentContentElement*) _tmp10_, api_root, container, file_path, reporter, settings);
			_g_object_unref0 (row);
		}
		_bala_iterable_unref0 (_row_list);
	}
}

static void
baladoc_content_table_real_accept (BaladocContentContentElement* base,
                                   BaladocContentContentVisitor* visitor)
{
	BaladocContentTable * self;
	self = (BaladocContentTable*) base;
	g_return_if_fail (visitor != NULL);
	baladoc_content_content_visitor_visit_table (visitor, self);
}

static void
baladoc_content_table_real_accept_children (BaladocContentContentElement* base,
                                            BaladocContentContentVisitor* visitor)
{
	BaladocContentTable * self;
	self = (BaladocContentTable*) base;
	g_return_if_fail (visitor != NULL);
	{
		BalaList* _element_list = NULL;
		BalaList* _tmp0_;
		BalaList* _tmp1_;
		gint _element_size = 0;
		BalaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _element_index = 0;
		_tmp0_ = self->priv->_rows;
		_tmp1_ = _bala_iterable_ref0 (_tmp0_);
		_element_list = _tmp1_;
		_tmp2_ = _element_list;
		_tmp3_ = bala_collection_get_size ((BalaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_element_size = _tmp4_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			BaladocContentTableRow* element = NULL;
			BalaList* _tmp7_;
			gpointer _tmp8_;
			BaladocContentTableRow* _tmp9_;
			_element_index = _element_index + 1;
			_tmp5_ = _element_index;
			_tmp6_ = _element_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _element_list;
			_tmp8_ = bala_list_get (_tmp7_, _element_index);
			element = (BaladocContentTableRow*) _tmp8_;
			_tmp9_ = element;
			baladoc_content_content_element_accept ((BaladocContentContentElement*) _tmp9_, visitor);
			_g_object_unref0 (element);
		}
		_bala_iterable_unref0 (_element_list);
	}
}

static gboolean
baladoc_content_table_real_is_empty (BaladocContentContentElement* base)
{
	BaladocContentTable * self;
	gboolean result = FALSE;
	self = (BaladocContentTable*) base;
	result = FALSE;
	return result;
}

static BaladocContentContentElement*
baladoc_content_table_real_copy (BaladocContentContentElement* base,
                                 BaladocContentContentElement* new_parent)
{
	BaladocContentTable * self;
	BaladocContentTable* table = NULL;
	BaladocContentTable* _tmp0_;
	BaladocContentTable* _tmp1_;
	BaladocContentContentElement* result = NULL;
	self = (BaladocContentTable*) base;
	_tmp0_ = baladoc_content_table_new ();
	table = _tmp0_;
	_tmp1_ = table;
	baladoc_content_content_element_set_parent ((BaladocContentContentElement*) _tmp1_, new_parent);
	{
		BalaList* _row_list = NULL;
		BalaList* _tmp2_;
		BalaList* _tmp3_;
		gint _row_size = 0;
		BalaList* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gint _row_index = 0;
		_tmp2_ = self->priv->_rows;
		_tmp3_ = _bala_iterable_ref0 (_tmp2_);
		_row_list = _tmp3_;
		_tmp4_ = _row_list;
		_tmp5_ = bala_collection_get_size ((BalaCollection*) _tmp4_);
		_tmp6_ = _tmp5_;
		_row_size = _tmp6_;
		_row_index = -1;
		while (TRUE) {
			gint _tmp7_;
			gint _tmp8_;
			BaladocContentTableRow* row = NULL;
			BalaList* _tmp9_;
			gpointer _tmp10_;
			BaladocContentTableRow* copy = NULL;
			BaladocContentTableRow* _tmp11_;
			BaladocContentTable* _tmp12_;
			BaladocContentContentElement* _tmp13_;
			BaladocContentTableRow* _tmp14_;
			BaladocContentTable* _tmp15_;
			BalaList* _tmp16_;
			BalaList* _tmp17_;
			BaladocContentTableRow* _tmp18_;
			_row_index = _row_index + 1;
			_tmp7_ = _row_index;
			_tmp8_ = _row_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _row_list;
			_tmp10_ = bala_list_get (_tmp9_, _row_index);
			row = (BaladocContentTableRow*) _tmp10_;
			_tmp11_ = row;
			_tmp12_ = table;
			_tmp13_ = baladoc_content_content_element_copy ((BaladocContentContentElement*) _tmp11_, (BaladocContentContentElement*) _tmp12_);
			_tmp14_ = BALADOC_CONTENT_IS_TABLE_ROW (_tmp13_) ? ((BaladocContentTableRow*) _tmp13_) : NULL;
			if (_tmp14_ == NULL) {
				_g_object_unref0 (_tmp13_);
			}
			copy = _tmp14_;
			_tmp15_ = table;
			_tmp16_ = baladoc_content_table_get_rows (_tmp15_);
			_tmp17_ = _tmp16_;
			_tmp18_ = copy;
			bala_collection_add ((BalaCollection*) _tmp17_, _tmp18_);
			_g_object_unref0 (copy);
			_g_object_unref0 (row);
		}
		_bala_iterable_unref0 (_row_list);
	}
	result = (BaladocContentContentElement*) table;
	return result;
}

static void
baladoc_content_table_class_init (BaladocContentTableClass * klass,
                                  gpointer klass_data)
{
	baladoc_content_table_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &BaladocContentTable_private_offset);
	((BaladocContentContentElementClass *) klass)->check = (void (*) (BaladocContentContentElement*, BaladocApiTree*, BaladocApiNode*, const gchar*, BaladocErrorReporter*, BaladocSettings*)) baladoc_content_table_real_check;
	((BaladocContentContentElementClass *) klass)->accept = (void (*) (BaladocContentContentElement*, BaladocContentContentVisitor*)) baladoc_content_table_real_accept;
	((BaladocContentContentElementClass *) klass)->accept_children = (void (*) (BaladocContentContentElement*, BaladocContentContentVisitor*)) baladoc_content_table_real_accept_children;
	((BaladocContentContentElementClass *) klass)->is_empty = (gboolean (*) (BaladocContentContentElement*)) baladoc_content_table_real_is_empty;
	((BaladocContentContentElementClass *) klass)->copy = (BaladocContentContentElement* (*) (BaladocContentContentElement*, BaladocContentContentElement*)) baladoc_content_table_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _bala_baladoc_content_table_get_property;
	G_OBJECT_CLASS (klass)->finalize = baladoc_content_table_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), BALADOC_CONTENT_TABLE_ROWS_PROPERTY, baladoc_content_table_properties[BALADOC_CONTENT_TABLE_ROWS_PROPERTY] = bala_param_spec_iterable ("rows", "rows", "rows", BALA_TYPE_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
baladoc_content_table_baladoc_content_block_interface_init (BaladocContentBlockIface * iface,
                                                            gpointer iface_data)
{
	baladoc_content_table_baladoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
baladoc_content_table_instance_init (BaladocContentTable * self,
                                     gpointer klass)
{
	self->priv = baladoc_content_table_get_instance_private (self);
}

static void
baladoc_content_table_finalize (GObject * obj)
{
	BaladocContentTable * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_CONTENT_TYPE_TABLE, BaladocContentTable);
	_bala_iterable_unref0 (self->priv->_rows);
	G_OBJECT_CLASS (baladoc_content_table_parent_class)->finalize (obj);
}

static GType
baladoc_content_table_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocContentTableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_content_table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocContentTable), 0, (GInstanceInitFunc) baladoc_content_table_instance_init, NULL };
	static const GInterfaceInfo baladoc_content_block_info = { (GInterfaceInitFunc) baladoc_content_table_baladoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType baladoc_content_table_type_id;
	baladoc_content_table_type_id = g_type_register_static (BALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "BaladocContentTable", &g_define_type_info, 0);
	g_type_add_interface_static (baladoc_content_table_type_id, BALADOC_CONTENT_TYPE_BLOCK, &baladoc_content_block_info);
	BaladocContentTable_private_offset = g_type_add_instance_private (baladoc_content_table_type_id, sizeof (BaladocContentTablePrivate));
	return baladoc_content_table_type_id;
}

GType
baladoc_content_table_get_type (void)
{
	static volatile gsize baladoc_content_table_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_content_table_type_id__volatile)) {
		GType baladoc_content_table_type_id;
		baladoc_content_table_type_id = baladoc_content_table_get_type_once ();
		g_once_init_leave (&baladoc_content_table_type_id__volatile, baladoc_content_table_type_id);
	}
	return baladoc_content_table_type_id__volatile;
}

static void
_bala_baladoc_content_table_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec)
{
	BaladocContentTable * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, BALADOC_CONTENT_TYPE_TABLE, BaladocContentTable);
	switch (property_id) {
		case BALADOC_CONTENT_TABLE_ROWS_PROPERTY:
		bala_value_set_iterable (value, baladoc_content_table_get_rows (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

