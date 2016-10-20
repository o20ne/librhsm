/*
 * Copyright (C) 2016  Michael Mraka <michael.mraka@redhat.com>
 * Copyright (C) 2016  Igor Gnatenko <ignatenko@redhat.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

#if !defined (RHSM_INSIDE) && !defined (RHSM_COMPILATION)
#error "Only <rhsm.h> can be included directly."
#endif

#include <glib.h>

#include "rhsm-entitlement-certificate.h"
#include "rhsm-product-certificate.h"

G_BEGIN_DECLS

GKeyFile *rhsm_repo_from_certificates (RHSMEntitlementCertificate  *entitlement,
                                       GPtrArray                   *products,
                                       GError                     **error);

G_END_DECLS
