/* set.c generated by balac, the Vala compiler
 * generated from set.bala, do not modify */

/* set.bala
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

struct _ValaSetPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};

static gint ValaSet_private_offset;
static gpointer bala_set_parent_class = NULL;

static GType bala_set_get_type_once (void);

static inline gpointer
bala_set_get_instance_private (ValaSet* self)
{
	return G_STRUCT_MEMBER_P (self, ValaSet_private_offset);
}

ValaSet*
bala_set_construct (GType object_type,
                    GType g_type,
                    GBoxedCopyFunc g_dup_func,
                    GDestroyNotify g_destroy_func)
{
	ValaSet* self = NULL;
	self = (ValaSet*) bala_collection_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

static void
bala_set_class_init (ValaSetClass * klass,
                     gpointer klass_data)
{
	bala_set_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValaSet_private_offset);
}

static void
bala_set_instance_init (ValaSet * self,
                        gpointer klass)
{
	self->priv = bala_set_get_instance_private (self);
}

/**
 * A set is a collection without duplicates.
 */
static GType
bala_set_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaSetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bala_set_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaSet), 0, (GInstanceInitFunc) bala_set_instance_init, NULL };
	GType bala_set_type_id;
	bala_set_type_id = g_type_register_static (BALA_TYPE_COLLECTION, "ValaSet", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	ValaSet_private_offset = g_type_add_instance_private (bala_set_type_id, sizeof (ValaSetPrivate));
	return bala_set_type_id;
}

GType
bala_set_get_type (void)
{
	static volatile gsize bala_set_type_id__volatile = 0;
	if (g_once_init_enter (&bala_set_type_id__volatile)) {
		GType bala_set_type_id;
		bala_set_type_id = bala_set_get_type_once ();
		g_once_init_leave (&bala_set_type_id__volatile, bala_set_type_id);
	}
	return bala_set_type_id__volatile;
}

