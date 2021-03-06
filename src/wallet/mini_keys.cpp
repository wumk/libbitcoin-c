/**
 * Copyright (c) 2011-2016 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <bitcoin/bitcoin/c/wallet/mini_keys.h>

#include <bitcoin/bitcoin/wallet/mini_keys.hpp>
#include <bitcoin/bitcoin/c/internal/math/elliptic_curve.hpp>

extern "C" {

bool bc_minikey_to_secret(bc_ec_secret_t* out_secret, const char* key)
{
    return libbitcoin::wallet::minikey_to_secret(*out_secret->obj, key);
}

}

