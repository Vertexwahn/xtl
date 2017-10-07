/***************************************************************************
* Copyright (c) 2016, Sylvain Corlay and Johan Mabille                     *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XTL_XVARIANT_HPP
#define XTL_XVARIANT_HPP

#include "xvariant_impl.hpp"

namespace xtl
{
    using mpark::variant;
    using mpark::monostate;
    using mpark::bad_variant_access;
    using mpark::variant_size;
    using mpark::variant_size_v;
    using mpark::variant_alternative;
    using mpark::variant_alternative_t;
    using mpark::variant_npos;

    using mpark::visit;
    using mpark::holds_alternative;
    using mpark::get;
    using mpark::get_if;
}

#endif
