/* Copyright (c) 2010 - 2019, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef MESH_OPT_FRIEND_H__
#define MESH_OPT_FRIEND_H__

/**
 * @defgroup MESH_OPT_FRIEND Friend runtime configuration options
 * @ingroup MESH_OPT
 * Runtime configuration for Mesh Friend feature functionality.
 *
 * @{
 */

#include "mesh_opt.h"

/** Friend entry ID */
#define MESH_OPT_FRIEND_EID     MESH_OPT_CORE_ID(MESH_OPT_FRND_ID_START + 0)

/**
 * Sets the Friend state.
 *
 * @param[in] enabled               Set to @c true to enable the Friend state.
 *                                  To disable the Friend state, set to @c false.
 *
 * @retval NRF_SUCCESS              Friend state successfully changed.
 * @retval NRF_ERROR_NOT_FOUND      Friend state is not available.
 */
uint32_t mesh_opt_friend_set(bool enabled);

/**
 * Gets the Friend state.
 *
 * @param[out] p_enabled Pointer to write the current Friend state.
 *
 * @retval NRF_SUCCESS              Successfully provided the current Friend state.
 * @retval NRF_ERROR_NULL           NULL pointer supplied to function.
 */
uint32_t mesh_opt_friend_get(bool * p_enabled);

/** @} */

#endif /* MESH_OPT_FRIEND_H__ */
