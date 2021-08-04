/* baladestructor.c generated by balac, the Bala compiler
 * generated from baladestructor.bala, do not modify */

/* baladestructor.bala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include <glib.h>

#define _bala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (bala_code_node_unref (var), NULL)))

struct _BalaDestructorPrivate {
	BalaParameter* _this_parameter;
	BalaMemberBinding _binding;
};

static gint BalaDestructor_private_offset;
static gpointer bala_destructor_parent_class = NULL;

static void bala_destructor_real_accept (BalaCodeNode* base,
                                  BalaCodeVisitor* visitor);
static void bala_destructor_real_accept_children (BalaCodeNode* base,
                                           BalaCodeVisitor* visitor);
static gboolean bala_destructor_real_check (BalaCodeNode* base,
                                     BalaCodeContext* context);
static void bala_destructor_finalize (BalaCodeNode * obj);
static GType bala_destructor_get_type_once (void);

static inline gpointer
bala_destructor_get_instance_private (BalaDestructor* self)
{
	return G_STRUCT_MEMBER_P (self, BalaDestructor_private_offset);
}

BalaParameter*
bala_destructor_get_this_parameter (BalaDestructor* self)
{
	BalaParameter* result;
	BalaParameter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_this_parameter;
	result = _tmp0_;
	return result;
}

static gpointer
_bala_code_node_ref0 (gpointer self)
{
	return self ? bala_code_node_ref (self) : NULL;
}

void
bala_destructor_set_this_parameter (BalaDestructor* self,
                                    BalaParameter* value)
{
	BalaParameter* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _bala_code_node_ref0 (value);
	_bala_code_node_unref0 (self->priv->_this_parameter);
	self->priv->_this_parameter = _tmp0_;
}

BalaMemberBinding
bala_destructor_get_binding (BalaDestructor* self)
{
	BalaMemberBinding result;
	BalaMemberBinding _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_binding;
	result = _tmp0_;
	return result;
}

void
bala_destructor_set_binding (BalaDestructor* self,
                             BalaMemberBinding value)
{
	g_return_if_fail (self != NULL);
	self->priv->_binding = value;
}

static gboolean
bala_destructor_real_get_has_result (BalaSubroutine* base)
{
	gboolean result;
	BalaDestructor* self;
	self = (BalaDestructor*) base;
	result = FALSE;
	return result;
}

/**
 * Creates a new destructor.
 *
 * @param source_reference reference to source code
 * @return                 newly created destructor
 */
BalaDestructor*
bala_destructor_construct (GType object_type,
                           BalaSourceReference* source_reference)
{
	BalaDestructor* self = NULL;
	self = (BalaDestructor*) bala_subroutine_construct (object_type, NULL, source_reference, NULL);
	return self;
}

BalaDestructor*
bala_destructor_new (BalaSourceReference* source_reference)
{
	return bala_destructor_construct (BALA_TYPE_DESTRUCTOR, source_reference);
}

static void
bala_destructor_real_accept (BalaCodeNode* base,
                             BalaCodeVisitor* visitor)
{
	BalaDestructor * self;
	self = (BalaDestructor*) base;
	g_return_if_fail (visitor != NULL);
	bala_code_visitor_visit_destructor (visitor, self);
}

static void
bala_destructor_real_accept_children (BalaCodeNode* base,
                                      BalaCodeVisitor* visitor)
{
	BalaDestructor * self;
	BalaBlock* _tmp0_;
	BalaBlock* _tmp1_;
	self = (BalaDestructor*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = bala_subroutine_get_body ((BalaSubroutine*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		BalaBlock* _tmp2_;
		BalaBlock* _tmp3_;
		_tmp2_ = bala_subroutine_get_body ((BalaSubroutine*) self);
		_tmp3_ = _tmp2_;
		bala_code_node_accept ((BalaCodeNode*) _tmp3_, visitor);
	}
}

static gboolean
bala_destructor_real_check (BalaCodeNode* base,
                            BalaCodeContext* context)
{
	BalaDestructor * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	BalaParameter* _tmp4_;
	BalaSemanticAnalyzer* _tmp6_;
	BalaSemanticAnalyzer* _tmp7_;
	BalaBlock* _tmp8_;
	BalaBlock* _tmp9_;
	BalaSemanticAnalyzer* _tmp12_;
	BalaSemanticAnalyzer* _tmp13_;
	BalaSymbol* _tmp14_;
	BalaSymbol* _tmp15_;
	gboolean _tmp16_;
	gboolean _tmp17_;
	gboolean result = FALSE;
	self = (BalaDestructor*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = bala_code_node_get_checked ((BalaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = bala_code_node_get_error ((BalaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	bala_code_node_set_checked ((BalaCodeNode*) self, TRUE);
	_tmp4_ = self->priv->_this_parameter;
	if (_tmp4_ != NULL) {
		BalaParameter* _tmp5_;
		_tmp5_ = self->priv->_this_parameter;
		bala_code_node_check ((BalaCodeNode*) _tmp5_, context);
	}
	_tmp6_ = bala_code_context_get_analyzer (context);
	_tmp7_ = _tmp6_;
	bala_semantic_analyzer_set_current_symbol (_tmp7_, (BalaSymbol*) self);
	_tmp8_ = bala_subroutine_get_body ((BalaSubroutine*) self);
	_tmp9_ = _tmp8_;
	if (_tmp9_ != NULL) {
		BalaBlock* _tmp10_;
		BalaBlock* _tmp11_;
		_tmp10_ = bala_subroutine_get_body ((BalaSubroutine*) self);
		_tmp11_ = _tmp10_;
		bala_code_node_check ((BalaCodeNode*) _tmp11_, context);
	}
	_tmp12_ = bala_code_context_get_analyzer (context);
	_tmp13_ = _tmp12_;
	_tmp14_ = bala_symbol_get_parent_symbol ((BalaSymbol*) self);
	_tmp15_ = _tmp14_;
	bala_semantic_analyzer_set_current_symbol (_tmp13_, _tmp15_);
	_tmp16_ = bala_code_node_get_error ((BalaCodeNode*) self);
	_tmp17_ = _tmp16_;
	result = !_tmp17_;
	return result;
}

static void
bala_destructor_class_init (BalaDestructorClass * klass,
                            gpointer klass_data)
{
	bala_destructor_parent_class = g_type_class_peek_parent (klass);
	((BalaCodeNodeClass *) klass)->finalize = bala_destructor_finalize;
	g_type_class_adjust_private_offset (klass, &BalaDestructor_private_offset);
	((BalaCodeNodeClass *) klass)->accept = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_destructor_real_accept;
	((BalaCodeNodeClass *) klass)->accept_children = (void (*) (BalaCodeNode*, BalaCodeVisitor*)) bala_destructor_real_accept_children;
	((BalaCodeNodeClass *) klass)->check = (gboolean (*) (BalaCodeNode*, BalaCodeContext*)) bala_destructor_real_check;
	BALA_SUBROUTINE_CLASS (klass)->get_has_result = bala_destructor_real_get_has_result;
}

static void
bala_destructor_instance_init (BalaDestructor * self,
                               gpointer klass)
{
	self->priv = bala_destructor_get_instance_private (self);
	self->priv->_binding = BALA_MEMBER_BINDING_INSTANCE;
}

static void
bala_destructor_finalize (BalaCodeNode * obj)
{
	BalaDestructor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALA_TYPE_DESTRUCTOR, BalaDestructor);
	_bala_code_node_unref0 (self->priv->_this_parameter);
	BALA_CODE_NODE_CLASS (bala_destructor_parent_class)->finalize (obj);
}

/**
 * Represents a class or instance destructor.
 */
static GType
bala_destructor_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BalaDestructorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_destructor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BalaDestructor), 0, (GInstanceInitFunc) bala_destructor_instance_init, NULL };
	GType bala_destructor_type_id;
	bala_destructor_type_id = g_type_register_static (BALA_TYPE_SUBROUTINE, "BalaDestructor", &g_define_type_info, 0);
	BalaDestructor_private_offset = g_type_add_instance_private (bala_destructor_type_id, sizeof (BalaDestructorPrivate));
	return bala_destructor_type_id;
}

GType
bala_destructor_get_type (void)
{
	static volatile gsize bala_destructor_type_id__volatile = 0;
	if (g_once_init_enter (&bala_destructor_type_id__volatile)) {
		GType bala_destructor_type_id;
		bala_destructor_type_id = bala_destructor_get_type_once ();
		g_once_init_leave (&bala_destructor_type_id__volatile, bala_destructor_type_id);
	}
	return bala_destructor_type_id__volatile;
}

