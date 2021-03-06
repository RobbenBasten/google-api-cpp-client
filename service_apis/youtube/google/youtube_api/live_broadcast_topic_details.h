// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 20170130
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_DETAILS_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/live_broadcast_topic.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LiveBroadcastTopicDetails : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcastTopicDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastTopicDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastTopicDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcastTopicDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcastTopicDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcastTopicDetails");
  }

  /**
   * Determine if the '<code>topics</code>' attribute was set.
   *
   * @return true if the '<code>topics</code>' attribute was set.
   */
  bool has_topics() const {
    return Storage().isMember("topics");
  }

  /**
   * Clears the '<code>topics</code>' attribute.
   */
  void clear_topics() {
    MutableStorage()->removeMember("topics");
  }


  /**
   * Get a reference to the value of the '<code>topics</code>' attribute.
   */
  const client::JsonCppArray<LiveBroadcastTopic > get_topics() const;

  /**
   * Gets a reference to a mutable value of the '<code>topics</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<LiveBroadcastTopic > mutable_topics();

 private:
  void operator=(const LiveBroadcastTopicDetails&);
};  // LiveBroadcastTopicDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_DETAILS_H_
