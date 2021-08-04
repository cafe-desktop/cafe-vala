/* valaccodefragment.c generated by valac, the Vala compiler
 * generated from valaccodefragment.vala, do not modify */

/* valaccodefragment.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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

#include "valaccode.h"
#include <valagee.h>
#include <glib-object.h>
#include <glib.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeFragmentPrivate {
	ValaList* children;
};

static gint ValaCCodeFragment_private_offset;
static gpointer vala_ccode_fragment_parent_class = NULL;

static void vala_ccode_fragment_real_write (ValaCCodeNode* base,
                                     ValaCCodeWriter* writer);
static void vala_ccode_fragment_real_write_declaration (ValaCCodeNode* base,
                                                 ValaCCodeWriter* writer);
static void vala_ccode_fragment_real_write_combined (ValaCCodeNode* base,
                                              ValaCCodeWriter* writer);
static void vala_ccode_fragment_finalize (ValaCCodeNode * obj);
static GType vala_ccode_fragment_get_type_once (void);

static inline gpointer
vala_ccode_fragment_get_instance_private (ValaCCodeFragment* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeFragment_private_offset);
}

/**
 * Appends the specified code node to this code fragment.
 *
 * @param node a C code node
 */
void
vala_ccode_fragment_append (ValaCCodeFragment* self,
                            ValaCCodeNode* node)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	_tmp0_ = self->priv->children;
	vala_collection_add ((ValaCollection*) _tmp0_, node);
}

/**
 * Returns a copy of the list of children.
 *
 * @return children list
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

ValaList*
vala_ccode_fragment_get_children (ValaCCodeFragment* self)
{
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaList* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->children;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}

static void
vala_ccode_fragment_real_write (ValaCCodeNode* base,
                                ValaCCodeWriter* writer)
{
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaList* _node_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _node_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _node_index = 0;
		_tmp0_ = self->priv->children;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_node_list = _tmp1_;
		_tmp2_ = _node_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_node_size = _tmp4_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValaCCodeNode* node = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValaCCodeNode* _tmp9_;
			_node_index = _node_index + 1;
			_tmp5_ = _node_index;
			_tmp6_ = _node_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _node_list;
			_tmp8_ = vala_list_get (_tmp7_, _node_index);
			node = (ValaCCodeNode*) _tmp8_;
			_tmp9_ = node;
			vala_ccode_node_write (_tmp9_, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_iterable_unref0 (_node_list);
	}
}

static void
vala_ccode_fragment_real_write_declaration (ValaCCodeNode* base,
                                            ValaCCodeWriter* writer)
{
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaList* _node_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _node_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _node_index = 0;
		_tmp0_ = self->priv->children;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_node_list = _tmp1_;
		_tmp2_ = _node_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_node_size = _tmp4_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValaCCodeNode* node = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValaCCodeNode* _tmp9_;
			_node_index = _node_index + 1;
			_tmp5_ = _node_index;
			_tmp6_ = _node_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _node_list;
			_tmp8_ = vala_list_get (_tmp7_, _node_index);
			node = (ValaCCodeNode*) _tmp8_;
			_tmp9_ = node;
			vala_ccode_node_write_declaration (_tmp9_, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_iterable_unref0 (_node_list);
	}
}

static void
vala_ccode_fragment_real_write_combined (ValaCCodeNode* base,
                                         ValaCCodeWriter* writer)
{
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaList* _node_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _node_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _node_index = 0;
		_tmp0_ = self->priv->children;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_node_list = _tmp1_;
		_tmp2_ = _node_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_node_size = _tmp4_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValaCCodeNode* node = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValaCCodeNode* _tmp9_;
			_node_index = _node_index + 1;
			_tmp5_ = _node_index;
			_tmp6_ = _node_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _node_list;
			_tmp8_ = vala_list_get (_tmp7_, _node_index);
			node = (ValaCCodeNode*) _tmp8_;
			_tmp9_ = node;
			vala_ccode_node_write_combined (_tmp9_, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_iterable_unref0 (_node_list);
	}
}

ValaCCodeFragment*
vala_ccode_fragment_construct (GType object_type)
{
	ValaCCodeFragment* self = NULL;
	self = (ValaCCodeFragment*) vala_ccode_node_construct (object_type);
	return self;
}

ValaCCodeFragment*
vala_ccode_fragment_new (void)
{
	return vala_ccode_fragment_construct (BALA_TYPE_CCODE_FRAGMENT);
}

static void
vala_ccode_fragment_class_init (ValaCCodeFragmentClass * klass,
                                gpointer klass_data)
{
	vala_ccode_fragment_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_fragment_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeFragment_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_fragment_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_fragment_real_write_declaration;
	((ValaCCodeNodeClass *) klass)->write_combined = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_fragment_real_write_combined;
}

static void
vala_ccode_fragment_instance_init (ValaCCodeFragment * self,
                                   gpointer klass)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = vala_ccode_fragment_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (BALA_TYPE_CCODE_NODE, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->children = (ValaList*) _tmp1_;
}

static void
vala_ccode_fragment_finalize (ValaCCodeNode * obj)
{
	ValaCCodeFragment * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_CCODE_FRAGMENT, ValaCCodeFragment);
	_vala_iterable_unref0 (self->priv->children);
	BALA_CCODE_NODE_CLASS (vala_ccode_fragment_parent_class)->finalize (obj);
}

/**
 * Represents a container for C code nodes.
 */
static GType
vala_ccode_fragment_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFragmentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_fragment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFragment), 0, (GInstanceInitFunc) vala_ccode_fragment_instance_init, NULL };
	GType vala_ccode_fragment_type_id;
	vala_ccode_fragment_type_id = g_type_register_static (BALA_TYPE_CCODE_NODE, "ValaCCodeFragment", &g_define_type_info, 0);
	ValaCCodeFragment_private_offset = g_type_add_instance_private (vala_ccode_fragment_type_id, sizeof (ValaCCodeFragmentPrivate));
	return vala_ccode_fragment_type_id;
}

GType
vala_ccode_fragment_get_type (void)
{
	static volatile gsize vala_ccode_fragment_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_fragment_type_id__volatile)) {
		GType vala_ccode_fragment_type_id;
		vala_ccode_fragment_type_id = vala_ccode_fragment_get_type_once ();
		g_once_init_leave (&vala_ccode_fragment_type_id__volatile, vala_ccode_fragment_type_id);
	}
	return vala_ccode_fragment_type_id__volatile;
}

