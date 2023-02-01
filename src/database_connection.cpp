// Copyright 2023 Graph Power Solutions LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <warehouse_ros_graph/database_connection.h>
#include <rclcpp/rclcpp.hpp>

namespace
{
    const rclcpp::Logger LOGGER = rclcpp::get_logger("warehouse_ros_graph.database_connection");
}

namespace warehouse_ros_graph
{
    bool warehouse_ros_graph::DatabaseConnection::connect()
    {
        printf("hello world test package\n");
        RCLCPP_DEBUG_STREAM(LOGGER, "Test");
        return false;
    }

    bool warehouse_ros_graph::DatabaseConnection::isConnected()
    {
        return false;
    }
}
