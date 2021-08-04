/* stubrule.c generated by valac, the Vala compiler
 * generated from stubrule.vala, do not modify */

/* stubrule.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
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

#include "valadoc.h"
#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

enum  {
	BALADOC_STUB_RULE_0_PROPERTY,
	BALADOC_STUB_RULE_NUM_PROPERTIES
};
static GParamSpec* valadoc_stub_rule_properties[BALADOC_STUB_RULE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocStubRulePrivate {
	ValadocRule* _rule;
};

static gint ValadocStubRule_private_offset;
static gpointer valadoc_stub_rule_parent_class = NULL;

static gboolean valadoc_stub_rule_real_is_optional (ValadocRule* base);
static gboolean valadoc_stub_rule_real_starts_with_token (ValadocRule* base,
                                                   ValadocToken* token);
static gboolean valadoc_stub_rule_real_accept_token (ValadocRule* base,
                                              ValadocToken* token,
                                              ValadocParserCallback* parser,
                                              ValadocRuleForward forward,
                                              GError** error);
static gboolean valadoc_stub_rule_real_would_accept_token (ValadocRule* base,
                                                    ValadocToken* token,
                                                    GObject* state);
static gboolean valadoc_stub_rule_real_would_reduce (ValadocRule* base,
                                              ValadocToken* token,
                                              GObject* state);
static gchar* valadoc_stub_rule_real_to_string (ValadocRule* base,
                                         GObject* state);
static void valadoc_stub_rule_finalize (GObject * obj);
static GType valadoc_stub_rule_get_type_once (void);

static inline gpointer
valadoc_stub_rule_get_instance_private (ValadocStubRule* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocStubRule_private_offset);
}

ValadocStubRule*
valadoc_stub_rule_construct (GType object_type)
{
	ValadocStubRule * self = NULL;
	self = (ValadocStubRule*) valadoc_rule_construct (object_type);
	return self;
}

ValadocStubRule*
valadoc_stub_rule_new (void)
{
	return valadoc_stub_rule_construct (BALADOC_TYPE_STUB_RULE);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

ValadocRule*
valadoc_stub_rule_set_rule (ValadocStubRule* self,
                            ValadocRule* rule)
{
	ValadocRule* _tmp0_;
	ValadocRule* _tmp1_;
	ValadocRule* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (rule != NULL, NULL);
	_tmp0_ = _g_object_ref0 (rule);
	_g_object_unref0 (self->priv->_rule);
	self->priv->_rule = _tmp0_;
	_tmp1_ = _g_object_ref0 ((ValadocRule*) self);
	result = _tmp1_;
	return result;
}

static gboolean
valadoc_stub_rule_real_is_optional (ValadocRule* base)
{
	ValadocStubRule * self;
	ValadocRule* _tmp0_;
	gboolean result = FALSE;
	self = (ValadocStubRule*) base;
	_tmp0_ = self->priv->_rule;
	result = valadoc_rule_is_optional (_tmp0_);
	return result;
}

static gboolean
valadoc_stub_rule_real_starts_with_token (ValadocRule* base,
                                          ValadocToken* token)
{
	ValadocStubRule * self;
	ValadocRule* _tmp0_;
	gboolean result = FALSE;
	self = (ValadocStubRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_rule;
	result = valadoc_rule_starts_with_token (_tmp0_, token);
	return result;
}

static gboolean
valadoc_stub_rule_real_accept_token (ValadocRule* base,
                                     ValadocToken* token,
                                     ValadocParserCallback* parser,
                                     ValadocRuleForward forward,
                                     GError** error)
{
	ValadocStubRule * self;
	gboolean _tmp0_ = FALSE;
	ValadocRule* _tmp1_;
	GError* _inner_error0_ = NULL;
	gboolean result = FALSE;
	self = (ValadocStubRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	g_return_val_if_fail (parser != NULL, FALSE);
	_tmp1_ = self->priv->_rule;
	_tmp0_ = valadoc_rule_accept_token (_tmp1_, token, parser, forward, &_inner_error0_);
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
			gboolean _tmp2_ = FALSE;
			g_propagate_error (error, _inner_error0_);
			return _tmp2_;
		} else {
			gboolean _tmp3_ = FALSE;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return _tmp3_;
		}
	}
	result = _tmp0_;
	return result;
}

static gboolean
valadoc_stub_rule_real_would_accept_token (ValadocRule* base,
                                           ValadocToken* token,
                                           GObject* state)
{
	ValadocStubRule * self;
	ValadocRule* _tmp0_;
	gboolean result = FALSE;
	self = (ValadocStubRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_rule;
	result = valadoc_rule_would_accept_token (_tmp0_, token, state);
	return result;
}

static gboolean
valadoc_stub_rule_real_would_reduce (ValadocRule* base,
                                     ValadocToken* token,
                                     GObject* state)
{
	ValadocStubRule * self;
	ValadocRule* _tmp0_;
	gboolean result = FALSE;
	self = (ValadocStubRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_rule;
	result = valadoc_rule_would_reduce (_tmp0_, token, state);
	return result;
}

static gchar*
valadoc_stub_rule_real_to_string (ValadocRule* base,
                                  GObject* state)
{
	ValadocStubRule * self;
	ValadocRule* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	self = (ValadocStubRule*) base;
	_tmp0_ = self->priv->_rule;
	_tmp1_ = valadoc_rule_to_string (_tmp0_, state);
	result = _tmp1_;
	return result;
}

static void
valadoc_stub_rule_class_init (ValadocStubRuleClass * klass,
                              gpointer klass_data)
{
	valadoc_stub_rule_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocStubRule_private_offset);
	((ValadocRuleClass *) klass)->is_optional = (gboolean (*) (ValadocRule*)) valadoc_stub_rule_real_is_optional;
	((ValadocRuleClass *) klass)->starts_with_token = (gboolean (*) (ValadocRule*, ValadocToken*)) valadoc_stub_rule_real_starts_with_token;
	((ValadocRuleClass *) klass)->accept_token = (gboolean (*) (ValadocRule*, ValadocToken*, ValadocParserCallback*, ValadocRuleForward, GError**)) valadoc_stub_rule_real_accept_token;
	((ValadocRuleClass *) klass)->would_accept_token = (gboolean (*) (ValadocRule*, ValadocToken*, GObject*)) valadoc_stub_rule_real_would_accept_token;
	((ValadocRuleClass *) klass)->would_reduce = (gboolean (*) (ValadocRule*, ValadocToken*, GObject*)) valadoc_stub_rule_real_would_reduce;
	((ValadocRuleClass *) klass)->to_string = (gchar* (*) (ValadocRule*, GObject*)) valadoc_stub_rule_real_to_string;
	G_OBJECT_CLASS (klass)->finalize = valadoc_stub_rule_finalize;
}

static void
valadoc_stub_rule_instance_init (ValadocStubRule * self,
                                 gpointer klass)
{
	self->priv = valadoc_stub_rule_get_instance_private (self);
}

static void
valadoc_stub_rule_finalize (GObject * obj)
{
	ValadocStubRule * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_TYPE_STUB_RULE, ValadocStubRule);
	_g_object_unref0 (self->priv->_rule);
	G_OBJECT_CLASS (valadoc_stub_rule_parent_class)->finalize (obj);
}

static GType
valadoc_stub_rule_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocStubRuleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_stub_rule_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocStubRule), 0, (GInstanceInitFunc) valadoc_stub_rule_instance_init, NULL };
	GType valadoc_stub_rule_type_id;
	valadoc_stub_rule_type_id = g_type_register_static (BALADOC_TYPE_RULE, "ValadocStubRule", &g_define_type_info, 0);
	ValadocStubRule_private_offset = g_type_add_instance_private (valadoc_stub_rule_type_id, sizeof (ValadocStubRulePrivate));
	return valadoc_stub_rule_type_id;
}

GType
valadoc_stub_rule_get_type (void)
{
	static volatile gsize valadoc_stub_rule_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_stub_rule_type_id__volatile)) {
		GType valadoc_stub_rule_type_id;
		valadoc_stub_rule_type_id = valadoc_stub_rule_get_type_once ();
		g_once_init_leave (&valadoc_stub_rule_type_id__volatile, valadoc_stub_rule_type_id);
	}
	return valadoc_stub_rule_type_id__volatile;
}

