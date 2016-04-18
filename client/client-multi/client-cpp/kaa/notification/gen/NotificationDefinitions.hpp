/*
 * Copyright 2014-2016 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NOTIFICATIONDEFINITIONS_HPP_
#define NOTIFICATIONDEFINITIONS_HPP_

/**
 * @file NotificationDefinitions.hpp
 * @brief DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 * @author Denis Kimcherenko
 */

#include "kaa/gen/EndpointGen.hpp"
#include "kaa/notification/gen/NotificationGen.hpp"

namespace kaa {

/**
 * @typedef The user-defined notification structure.
 */
typedef kaa_notification::BasicNotification KaaNotification;

typedef std::vector<Topic> Topics;
typedef std::vector<Notification> Notifications;

}

#endif /* NOTIFICATIONDEFINITIONS_HPP_ */
