/* warning.c generated by balac, the Bala compiler
 * generated from warning.bala, do not modify */

/* warning.bala
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
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <balagee.h>
#include <glib-object.h>

enum  {
	BALADOC_CONTENT_WARNING_0_PROPERTY,
	BALADOC_CONTENT_WARNING_NUM_PROPERTIES
};
static GParamSpec* baladoc_content_warning_properties[BALADOC_CONTENT_WARNING_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _bala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (bala_iterable_unref (var), NULL)))

static gpointer baladoc_content_warning_parent_class = NULL;
static BaladocContentBlockIface * baladoc_content_warning_baladoc_content_block_parent_iface = NULL;

G_GNUC_INTERNAL BaladocContentWarning* baladoc_content_warning_new (void);
G_GNUC_INTERNAL BaladocContentWarning* baladoc_content_warning_construct (GType object_type);
G_GNUC_INTERNAL BaladocContentBlockContent* baladoc_content_block_content_construct (GType object_type);
static void baladoc_content_warning_real_check (BaladocContentContentElement* base,
                                         BaladocApiTree* api_root,
                                         BaladocApiNode* container,
                                         const gchar* file_path,
                                         BaladocErrorReporter* reporter,
                                         BaladocSettings* settings);
static void baladoc_content_warning_real_accept (BaladocContentContentElement* base,
                                          BaladocContentContentVisitor* visitor);
static BaladocContentContentElement* baladoc_content_warning_real_copy (BaladocContentContentElement* base,
                                                                 BaladocContentContentElement* new_parent);
G_GNUC_INTERNAL void baladoc_content_content_element_set_parent (BaladocContentContentElement* self,
                                                 BaladocContentContentElement* value);
static GType baladoc_content_warning_get_type_once (void);

G_GNUC_INTERNAL BaladocContentWarning*
baladoc_content_warning_construct (GType object_type)
{
	BaladocContentWarning * self = NULL;
	self = (BaladocContentWarning*) baladoc_content_block_content_construct (object_type);
	return self;
}

G_GNUC_INTERNAL BaladocContentWarning*
baladoc_content_warning_new (void)
{
	return baladoc_content_warning_construct (BALADOC_CONTENT_TYPE_WARNING);
}

static void
baladoc_content_warning_real_check (BaladocContentContentElement* base,
                                    BaladocApiTree* api_root,
                                    BaladocApiNode* container,
                                    const gchar* file_path,
                                    BaladocErrorReporter* reporter,
                                    BaladocSettings* settings)
{
	BaladocContentWarning * self;
	self = (BaladocContentWarning*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	BALADOC_CONTENT_CONTENT_ELEMENT_CLASS (baladoc_content_warning_parent_class)->check ((BaladocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, BALADOC_CONTENT_TYPE_BLOCK_CONTENT, BaladocContentBlockContent), api_root, container, file_path, reporter, settings);
}

static void
baladoc_content_warning_real_accept (BaladocContentContentElement* base,
                                     BaladocContentContentVisitor* visitor)
{
	BaladocContentWarning * self;
	self = (BaladocContentWarning*) base;
	g_return_if_fail (visitor != NULL);
	baladoc_content_content_visitor_visit_warning (visitor, self);
}

static gpointer
_bala_iterable_ref0 (gpointer self)
{
	return self ? bala_iterable_ref (self) : NULL;
}

static BaladocContentContentElement*
baladoc_content_warning_real_copy (BaladocContentContentElement* base,
                                   BaladocContentContentElement* new_parent)
{
	BaladocContentWarning * self;
	BaladocContentWarning* warning = NULL;
	BaladocContentWarning* _tmp0_;
	BaladocContentWarning* _tmp1_;
	BaladocContentContentElement* result = NULL;
	self = (BaladocContentWarning*) base;
	_tmp0_ = baladoc_content_warning_new ();
	warning = _tmp0_;
	_tmp1_ = warning;
	baladoc_content_content_element_set_parent ((BaladocContentContentElement*) _tmp1_, new_parent);
	{
		BalaList* _block_list = NULL;
		BalaList* _tmp2_;
		BalaList* _tmp3_;
		BalaList* _tmp4_;
		gint _block_size = 0;
		BalaList* _tmp5_;
		gint _tmp6_;
		gint _tmp7_;
		gint _block_index = 0;
		_tmp2_ = baladoc_content_block_content_get_content ((BaladocContentBlockContent*) self);
		_tmp3_ = _tmp2_;
		_tmp4_ = _bala_iterable_ref0 (_tmp3_);
		_block_list = _tmp4_;
		_tmp5_ = _block_list;
		_tmp6_ = bala_collection_get_size ((BalaCollection*) _tmp5_);
		_tmp7_ = _tmp6_;
		_block_size = _tmp7_;
		_block_index = -1;
		while (TRUE) {
			gint _tmp8_;
			gint _tmp9_;
			BaladocContentBlock* block = NULL;
			BalaList* _tmp10_;
			gpointer _tmp11_;
			BaladocContentBlock* copy = NULL;
			BaladocContentBlock* _tmp12_;
			BaladocContentWarning* _tmp13_;
			BaladocContentContentElement* _tmp14_;
			BaladocContentBlock* _tmp15_;
			BaladocContentWarning* _tmp16_;
			BalaList* _tmp17_;
			BalaList* _tmp18_;
			BaladocContentBlock* _tmp19_;
			_block_index = _block_index + 1;
			_tmp8_ = _block_index;
			_tmp9_ = _block_size;
			if (!(_tmp8_ < _tmp9_)) {
				break;
			}
			_tmp10_ = _block_list;
			_tmp11_ = bala_list_get (_tmp10_, _block_index);
			block = (BaladocContentBlock*) _tmp11_;
			_tmp12_ = block;
			_tmp13_ = warning;
			_tmp14_ = baladoc_content_content_element_copy ((BaladocContentContentElement*) _tmp12_, (BaladocContentContentElement*) _tmp13_);
			_tmp15_ = BALADOC_CONTENT_IS_BLOCK (_tmp14_) ? ((BaladocContentBlock*) _tmp14_) : NULL;
			if (_tmp15_ == NULL) {
				_g_object_unref0 (_tmp14_);
			}
			copy = _tmp15_;
			_tmp16_ = warning;
			_tmp17_ = baladoc_content_block_content_get_content ((BaladocContentBlockContent*) _tmp16_);
			_tmp18_ = _tmp17_;
			_tmp19_ = copy;
			bala_collection_add ((BalaCollection*) _tmp18_, _tmp19_);
			_g_object_unref0 (copy);
			_g_object_unref0 (block);
		}
		_bala_iterable_unref0 (_block_list);
	}
	result = (BaladocContentContentElement*) warning;
	return result;
}

static void
baladoc_content_warning_class_init (BaladocContentWarningClass * klass,
                                    gpointer klass_data)
{
	baladoc_content_warning_parent_class = g_type_class_peek_parent (klass);
	((BaladocContentContentElementClass *) klass)->check = (void (*) (BaladocContentContentElement*, BaladocApiTree*, BaladocApiNode*, const gchar*, BaladocErrorReporter*, BaladocSettings*)) baladoc_content_warning_real_check;
	((BaladocContentContentElementClass *) klass)->accept = (void (*) (BaladocContentContentElement*, BaladocContentContentVisitor*)) baladoc_content_warning_real_accept;
	((BaladocContentContentElementClass *) klass)->copy = (BaladocContentContentElement* (*) (BaladocContentContentElement*, BaladocContentContentElement*)) baladoc_content_warning_real_copy;
}

static void
baladoc_content_warning_baladoc_content_block_interface_init (BaladocContentBlockIface * iface,
                                                              gpointer iface_data)
{
	baladoc_content_warning_baladoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
baladoc_content_warning_instance_init (BaladocContentWarning * self,
                                       gpointer klass)
{
}

static GType
baladoc_content_warning_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocContentWarningClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_content_warning_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocContentWarning), 0, (GInstanceInitFunc) baladoc_content_warning_instance_init, NULL };
	static const GInterfaceInfo baladoc_content_block_info = { (GInterfaceInitFunc) baladoc_content_warning_baladoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType baladoc_content_warning_type_id;
	baladoc_content_warning_type_id = g_type_register_static (BALADOC_CONTENT_TYPE_BLOCK_CONTENT, "BaladocContentWarning", &g_define_type_info, 0);
	g_type_add_interface_static (baladoc_content_warning_type_id, BALADOC_CONTENT_TYPE_BLOCK, &baladoc_content_block_info);
	return baladoc_content_warning_type_id;
}

GType
baladoc_content_warning_get_type (void)
{
	static volatile gsize baladoc_content_warning_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_content_warning_type_id__volatile)) {
		GType baladoc_content_warning_type_id;
		baladoc_content_warning_type_id = baladoc_content_warning_get_type_once ();
		g_once_init_leave (&baladoc_content_warning_type_id__volatile, baladoc_content_warning_type_id);
	}
	return baladoc_content_warning_type_id__volatile;
}

