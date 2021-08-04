/* manyrule.c generated by balac, the Bala compiler
 * generated from manyrule.bala, do not modify */

/* manyrule.bala
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

#include "baladoc.h"
#include <glib-object.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>

#define BALADOC_TYPE_MANY_RULE (baladoc_many_rule_get_type ())
#define BALADOC_MANY_RULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BALADOC_TYPE_MANY_RULE, BaladocManyRule))
#define BALADOC_MANY_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BALADOC_TYPE_MANY_RULE, BaladocManyRuleClass))
#define BALADOC_IS_MANY_RULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BALADOC_TYPE_MANY_RULE))
#define BALADOC_IS_MANY_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BALADOC_TYPE_MANY_RULE))
#define BALADOC_MANY_RULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BALADOC_TYPE_MANY_RULE, BaladocManyRuleClass))

typedef struct _BaladocManyRule BaladocManyRule;
typedef struct _BaladocManyRuleClass BaladocManyRuleClass;
typedef struct _BaladocManyRulePrivate BaladocManyRulePrivate;
enum  {
	BALADOC_MANY_RULE_0_PROPERTY,
	BALADOC_MANY_RULE_NUM_PROPERTIES
};
static GParamSpec* baladoc_many_rule_properties[BALADOC_MANY_RULE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define BALADOC_MANY_RULE_TYPE_STATE (baladoc_many_rule_state_get_type ())
#define BALADOC_MANY_RULE_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BALADOC_MANY_RULE_TYPE_STATE, BaladocManyRuleState))
#define BALADOC_MANY_RULE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BALADOC_MANY_RULE_TYPE_STATE, BaladocManyRuleStateClass))
#define BALADOC_MANY_RULE_IS_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BALADOC_MANY_RULE_TYPE_STATE))
#define BALADOC_MANY_RULE_IS_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BALADOC_MANY_RULE_TYPE_STATE))
#define BALADOC_MANY_RULE_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BALADOC_MANY_RULE_TYPE_STATE, BaladocManyRuleStateClass))

typedef struct _BaladocManyRuleState BaladocManyRuleState;
typedef struct _BaladocManyRuleStateClass BaladocManyRuleStateClass;
typedef struct _BaladocManyRuleStatePrivate BaladocManyRuleStatePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	BALADOC_MANY_RULE_STATE_0_PROPERTY,
	BALADOC_MANY_RULE_STATE_NUM_PROPERTIES
};
static GParamSpec* baladoc_many_rule_state_properties[BALADOC_MANY_RULE_STATE_NUM_PROPERTIES];

struct _BaladocManyRule {
	BaladocRule parent_instance;
	BaladocManyRulePrivate * priv;
};

struct _BaladocManyRuleClass {
	BaladocRuleClass parent_class;
};

struct _BaladocManyRulePrivate {
	GObject* _scheme;
};

struct _BaladocManyRuleState {
	GObject parent_instance;
	gboolean started;
	gboolean done_one;
	BaladocManyRuleStatePrivate * priv;
};

struct _BaladocManyRuleStateClass {
	GObjectClass parent_class;
};

static gint BaladocManyRule_private_offset;
static gpointer baladoc_many_rule_parent_class = NULL;
static gpointer baladoc_many_rule_state_parent_class = NULL;

G_GNUC_INTERNAL GType baladoc_many_rule_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
G_GNUC_INTERNAL BaladocManyRule* baladoc_many_rule_new (GObject* scheme);
G_GNUC_INTERNAL BaladocManyRule* baladoc_many_rule_construct (GType object_type,
                                              GObject* scheme);
static gboolean baladoc_many_rule_real_is_optional (BaladocRule* base);
static gboolean baladoc_many_rule_real_starts_with_token (BaladocRule* base,
                                                   BaladocToken* token);
static gboolean baladoc_many_rule_real_accept_token (BaladocRule* base,
                                              BaladocToken* token,
                                              BaladocParserCallback* parser,
                                              BaladocRuleForward forward,
                                              GError** error);
static GType baladoc_many_rule_state_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static BaladocManyRuleState* baladoc_many_rule_state_new (void);
static BaladocManyRuleState* baladoc_many_rule_state_construct (GType object_type);
static gboolean baladoc_many_rule_real_would_accept_token (BaladocRule* base,
                                                    BaladocToken* token,
                                                    GObject* state);
static gboolean baladoc_many_rule_real_would_reduce (BaladocRule* base,
                                              BaladocToken* token,
                                              GObject* rule_state);
static gchar* baladoc_many_rule_real_to_string (BaladocRule* base,
                                         GObject* rule_state);
static void baladoc_many_rule_state_finalize (GObject * obj);
static GType baladoc_many_rule_state_get_type_once (void);
static void baladoc_many_rule_finalize (GObject * obj);
static GType baladoc_many_rule_get_type_once (void);

static inline gpointer
baladoc_many_rule_get_instance_private (BaladocManyRule* self)
{
	return G_STRUCT_MEMBER_P (self, BaladocManyRule_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

G_GNUC_INTERNAL BaladocManyRule*
baladoc_many_rule_construct (GType object_type,
                             GObject* scheme)
{
	BaladocManyRule * self = NULL;
	GObject* _tmp0_;
	g_return_val_if_fail (scheme != NULL, NULL);
	self = (BaladocManyRule*) baladoc_rule_construct (object_type);
	_tmp0_ = _g_object_ref0 (scheme);
	_g_object_unref0 (self->priv->_scheme);
	self->priv->_scheme = _tmp0_;
	return self;
}

G_GNUC_INTERNAL BaladocManyRule*
baladoc_many_rule_new (GObject* scheme)
{
	return baladoc_many_rule_construct (BALADOC_TYPE_MANY_RULE, scheme);
}

static gboolean
baladoc_many_rule_real_is_optional (BaladocRule* base)
{
	BaladocManyRule * self;
	GObject* _tmp0_;
	gboolean result = FALSE;
	self = (BaladocManyRule*) base;
	_tmp0_ = self->priv->_scheme;
	result = baladoc_rule_is_optional_rule ((BaladocRule*) self, _tmp0_);
	return result;
}

static gboolean
baladoc_many_rule_real_starts_with_token (BaladocRule* base,
                                          BaladocToken* token)
{
	BaladocManyRule * self;
	GObject* _tmp0_;
	gboolean result = FALSE;
	self = (BaladocManyRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_scheme;
	if (baladoc_rule_has_start_token ((BaladocRule*) self, _tmp0_, token)) {
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}

static gboolean
baladoc_many_rule_real_accept_token (BaladocRule* base,
                                     BaladocToken* token,
                                     BaladocParserCallback* parser,
                                     BaladocRuleForward forward,
                                     GError** error)
{
	BaladocManyRule * self;
	BaladocManyRuleState* state = NULL;
	GObject* _tmp0_;
	BaladocManyRuleState* _tmp1_;
	BaladocManyRuleState* _tmp2_;
	BaladocManyRuleState* _tmp5_;
	gboolean _tmp9_ = FALSE;
	BaladocManyRuleState* _tmp10_;
	gboolean handled = FALSE;
	gboolean _tmp15_ = FALSE;
	GObject* _tmp16_;
	gboolean _tmp17_ = FALSE;
	gboolean _tmp18_;
	GObject* _tmp24_;
	GError* _inner_error0_ = NULL;
	gboolean result = FALSE;
	self = (BaladocManyRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	g_return_val_if_fail (parser != NULL, FALSE);
	_tmp0_ = baladoc_parser_callback_get_rule_state (parser);
	_tmp1_ = BALADOC_MANY_RULE_IS_STATE (_tmp0_) ? ((BaladocManyRuleState*) _tmp0_) : NULL;
	if (_tmp1_ == NULL) {
		_g_object_unref0 (_tmp0_);
	}
	state = _tmp1_;
	_tmp2_ = state;
	if (_tmp2_ == NULL) {
		BaladocManyRuleState* _tmp3_;
		BaladocManyRuleState* _tmp4_;
		_tmp3_ = baladoc_many_rule_state_new ();
		_g_object_unref0 (state);
		state = _tmp3_;
		_tmp4_ = state;
		baladoc_parser_callback_set_rule_state (parser, (GObject*) _tmp4_);
	}
	_tmp5_ = state;
	if (!_tmp5_->started) {
		BaladocManyRuleState* _tmp8_;
		baladoc_rule_do_start ((BaladocRule*) self, parser, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp6_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp6_;
			} else {
				gboolean _tmp7_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp7_;
			}
		}
		_tmp8_ = state;
		_tmp8_->started = TRUE;
	}
	_tmp10_ = state;
	if (_tmp10_->done_one) {
		_tmp9_ = baladoc_parser_callback_would_parent_accept_token (parser, token);
	} else {
		_tmp9_ = FALSE;
	}
	if (_tmp9_) {
		baladoc_rule_do_reduce ((BaladocRule*) self, parser, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp11_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp11_;
			} else {
				gboolean _tmp12_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp12_;
			}
		}
		result = FALSE;
		_g_object_unref0 (state);
		return result;
	}
	if (baladoc_parser_callback_would_parent_reduce_to_rule (parser, token, (BaladocRule*) self)) {
		baladoc_rule_do_reduce ((BaladocRule*) self, parser, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp13_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp13_;
			} else {
				gboolean _tmp14_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp14_;
			}
		}
		result = FALSE;
		_g_object_unref0 (state);
		return result;
	}
	_tmp16_ = self->priv->_scheme;
	_tmp18_ = baladoc_rule_try_to_apply ((BaladocRule*) self, _tmp16_, token, parser, &_tmp17_, &_inner_error0_);
	handled = _tmp17_;
	_tmp15_ = _tmp18_;
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
			gboolean _tmp19_ = FALSE;
			g_propagate_error (error, _inner_error0_);
			_g_object_unref0 (state);
			return _tmp19_;
		} else {
			gboolean _tmp20_ = FALSE;
			_g_object_unref0 (state);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return _tmp20_;
		}
	}
	if (_tmp15_) {
		BaladocManyRuleState* _tmp21_;
		_tmp21_ = state;
		_tmp21_->done_one = TRUE;
		result = handled;
		_g_object_unref0 (state);
		return result;
	}
	if (baladoc_parser_callback_would_parent_accept_token (parser, token)) {
		baladoc_rule_do_reduce ((BaladocRule*) self, parser, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp22_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp22_;
			} else {
				gboolean _tmp23_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp23_;
			}
		}
		result = FALSE;
		_g_object_unref0 (state);
		return result;
	}
	_tmp24_ = self->priv->_scheme;
	if (BALADOC_IS_TOKEN_TYPE (_tmp24_)) {
		GObject* _tmp25_;
		const gchar* _tmp26_;
		gchar* _tmp27_;
		gchar* _tmp28_;
		_tmp25_ = self->priv->_scheme;
		_tmp26_ = baladoc_token_type_to_pretty_string (G_TYPE_CHECK_INSTANCE_CAST (_tmp25_, BALADOC_TYPE_TOKEN_TYPE, BaladocTokenType));
		_tmp27_ = g_strdup_printf ("expected %s", _tmp26_);
		_tmp28_ = _tmp27_;
		baladoc_parser_callback_error (parser, NULL, _tmp28_, &_inner_error0_);
		_g_free0 (_tmp28_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp29_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp29_;
			} else {
				gboolean _tmp30_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp30_;
			}
		}
	} else {
		baladoc_parser_callback_error (parser, token, "unexpected token", &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			if (_inner_error0_->domain == BALADOC_PARSER_ERROR) {
				gboolean _tmp31_ = FALSE;
				g_propagate_error (error, _inner_error0_);
				_g_object_unref0 (state);
				return _tmp31_;
			} else {
				gboolean _tmp32_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
				g_clear_error (&_inner_error0_);
				return _tmp32_;
			}
		}
	}
	g_assert_not_reached ();
	_g_object_unref0 (state);
}

static gboolean
baladoc_many_rule_real_would_accept_token (BaladocRule* base,
                                           BaladocToken* token,
                                           GObject* state)
{
	BaladocManyRule * self;
	GObject* _tmp0_;
	gboolean result = FALSE;
	self = (BaladocManyRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_scheme;
	if (baladoc_rule_has_start_token ((BaladocRule*) self, _tmp0_, token)) {
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}

static gboolean
baladoc_many_rule_real_would_reduce (BaladocRule* base,
                                     BaladocToken* token,
                                     GObject* rule_state)
{
	BaladocManyRule * self;
	BaladocManyRuleState* state = NULL;
	BaladocManyRuleState* _tmp0_;
	gboolean _tmp1_ = FALSE;
	BaladocManyRuleState* _tmp2_;
	gboolean result = FALSE;
	self = (BaladocManyRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = _g_object_ref0 (BALADOC_MANY_RULE_IS_STATE (rule_state) ? ((BaladocManyRuleState*) rule_state) : NULL);
	state = _tmp0_;
	_tmp2_ = state;
	if (_tmp2_->done_one) {
		_tmp1_ = TRUE;
	} else {
		GObject* _tmp3_;
		_tmp3_ = self->priv->_scheme;
		_tmp1_ = baladoc_rule_is_optional_rule ((BaladocRule*) self, _tmp3_);
	}
	result = _tmp1_;
	_g_object_unref0 (state);
	return result;
}

static gchar*
bool_to_string (gboolean self)
{
	gchar* result = NULL;
	if (self) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup ("true");
		result = _tmp0_;
		return result;
	} else {
		gchar* _tmp1_;
		_tmp1_ = g_strdup ("false");
		result = _tmp1_;
		return result;
	}
}

static gchar*
baladoc_many_rule_real_to_string (BaladocRule* base,
                                  GObject* rule_state)
{
	BaladocManyRule * self;
	BaladocManyRuleState* state = NULL;
	BaladocManyRuleState* _tmp0_;
	BaladocManyRuleState* _tmp1_;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	BaladocManyRuleState* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	BaladocManyRuleState* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* result = NULL;
	self = (BaladocManyRule*) base;
	_tmp0_ = _g_object_ref0 (BALADOC_MANY_RULE_IS_STATE (rule_state) ? ((BaladocManyRuleState*) rule_state) : NULL);
	state = _tmp0_;
	_tmp1_ = state;
	if (_tmp1_ == NULL) {
		BaladocManyRuleState* _tmp2_;
		_tmp2_ = baladoc_many_rule_state_new ();
		_g_object_unref0 (state);
		state = _tmp2_;
	}
	_tmp4_ = baladoc_rule_get_name ((BaladocRule*) self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		const gchar* _tmp6_;
		const gchar* _tmp7_;
		_tmp6_ = baladoc_rule_get_name ((BaladocRule*) self);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_;
	} else {
		_tmp3_ = " ";
	}
	_tmp8_ = state;
	_tmp9_ = bool_to_string (_tmp8_->started);
	_tmp10_ = _tmp9_;
	_tmp11_ = state;
	_tmp12_ = bool_to_string (_tmp11_->done_one);
	_tmp13_ = _tmp12_;
	_tmp14_ = g_strdup_printf ("%-15s%-15s(started=%s;done_one=%s)", _tmp3_, "[many]", _tmp10_, _tmp13_);
	_tmp15_ = _tmp14_;
	_g_free0 (_tmp13_);
	_g_free0 (_tmp10_);
	result = _tmp15_;
	_g_object_unref0 (state);
	return result;
}

static BaladocManyRuleState*
baladoc_many_rule_state_construct (GType object_type)
{
	BaladocManyRuleState * self = NULL;
	self = (BaladocManyRuleState*) g_object_new (object_type, NULL);
	return self;
}

static BaladocManyRuleState*
baladoc_many_rule_state_new (void)
{
	return baladoc_many_rule_state_construct (BALADOC_MANY_RULE_TYPE_STATE);
}

static void
baladoc_many_rule_state_class_init (BaladocManyRuleStateClass * klass,
                                    gpointer klass_data)
{
	baladoc_many_rule_state_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = baladoc_many_rule_state_finalize;
}

static void
baladoc_many_rule_state_instance_init (BaladocManyRuleState * self,
                                       gpointer klass)
{
	self->started = FALSE;
	self->done_one = FALSE;
}

static void
baladoc_many_rule_state_finalize (GObject * obj)
{
	BaladocManyRuleState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_MANY_RULE_TYPE_STATE, BaladocManyRuleState);
	G_OBJECT_CLASS (baladoc_many_rule_state_parent_class)->finalize (obj);
}

static GType
baladoc_many_rule_state_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocManyRuleStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_many_rule_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocManyRuleState), 0, (GInstanceInitFunc) baladoc_many_rule_state_instance_init, NULL };
	GType baladoc_many_rule_state_type_id;
	baladoc_many_rule_state_type_id = g_type_register_static (G_TYPE_OBJECT, "BaladocManyRuleState", &g_define_type_info, 0);
	return baladoc_many_rule_state_type_id;
}

static GType
baladoc_many_rule_state_get_type (void)
{
	static volatile gsize baladoc_many_rule_state_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_many_rule_state_type_id__volatile)) {
		GType baladoc_many_rule_state_type_id;
		baladoc_many_rule_state_type_id = baladoc_many_rule_state_get_type_once ();
		g_once_init_leave (&baladoc_many_rule_state_type_id__volatile, baladoc_many_rule_state_type_id);
	}
	return baladoc_many_rule_state_type_id__volatile;
}

static void
baladoc_many_rule_class_init (BaladocManyRuleClass * klass,
                              gpointer klass_data)
{
	baladoc_many_rule_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &BaladocManyRule_private_offset);
	((BaladocRuleClass *) klass)->is_optional = (gboolean (*) (BaladocRule*)) baladoc_many_rule_real_is_optional;
	((BaladocRuleClass *) klass)->starts_with_token = (gboolean (*) (BaladocRule*, BaladocToken*)) baladoc_many_rule_real_starts_with_token;
	((BaladocRuleClass *) klass)->accept_token = (gboolean (*) (BaladocRule*, BaladocToken*, BaladocParserCallback*, BaladocRuleForward, GError**)) baladoc_many_rule_real_accept_token;
	((BaladocRuleClass *) klass)->would_accept_token = (gboolean (*) (BaladocRule*, BaladocToken*, GObject*)) baladoc_many_rule_real_would_accept_token;
	((BaladocRuleClass *) klass)->would_reduce = (gboolean (*) (BaladocRule*, BaladocToken*, GObject*)) baladoc_many_rule_real_would_reduce;
	((BaladocRuleClass *) klass)->to_string = (gchar* (*) (BaladocRule*, GObject*)) baladoc_many_rule_real_to_string;
	G_OBJECT_CLASS (klass)->finalize = baladoc_many_rule_finalize;
}

static void
baladoc_many_rule_instance_init (BaladocManyRule * self,
                                 gpointer klass)
{
	self->priv = baladoc_many_rule_get_instance_private (self);
}

static void
baladoc_many_rule_finalize (GObject * obj)
{
	BaladocManyRule * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BALADOC_TYPE_MANY_RULE, BaladocManyRule);
	_g_object_unref0 (self->priv->_scheme);
	G_OBJECT_CLASS (baladoc_many_rule_parent_class)->finalize (obj);
}

static GType
baladoc_many_rule_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BaladocManyRuleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) baladoc_many_rule_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BaladocManyRule), 0, (GInstanceInitFunc) baladoc_many_rule_instance_init, NULL };
	GType baladoc_many_rule_type_id;
	baladoc_many_rule_type_id = g_type_register_static (BALADOC_TYPE_RULE, "BaladocManyRule", &g_define_type_info, 0);
	BaladocManyRule_private_offset = g_type_add_instance_private (baladoc_many_rule_type_id, sizeof (BaladocManyRulePrivate));
	return baladoc_many_rule_type_id;
}

G_GNUC_INTERNAL GType
baladoc_many_rule_get_type (void)
{
	static volatile gsize baladoc_many_rule_type_id__volatile = 0;
	if (g_once_init_enter (&baladoc_many_rule_type_id__volatile)) {
		GType baladoc_many_rule_type_id;
		baladoc_many_rule_type_id = baladoc_many_rule_get_type_once ();
		g_once_init_leave (&baladoc_many_rule_type_id__volatile, baladoc_many_rule_type_id);
	}
	return baladoc_many_rule_type_id__volatile;
}

