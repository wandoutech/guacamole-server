/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef GUAC_WOL_CONSTANTS_H
#define GUAC_WOL_CONSTANTS_H

/**
 * Header file that provides constants and defaults related to libguac
 * Wake-on-LAN support.
 * 
 * @file wol-constants.h
 */

/**
 * The default broadcast address to which Wake-on-LAN packets will be sent
 * if one is not specified, which is the special value for the IPv4 local
 * network broadcast.
 */
#define GUAC_WOL_DEFAULT_BROADCAST "255.255.255.255"

/**
 * The default number of seconds to wait after sending the Wake-on-LAN packet
 * for the destination host to start responding.
 */
#define GUAC_WOL_DEFAULT_WAIT_TIME 60

#endif /* GUAC_WOL_CONSTANTS_H */

