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
// Description:
//   Supports core YouTube features, such as uploading videos, creating and managing playlists, searching for content, and much more.
// Classes:
//   LiveChatMessage
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/live_chat_message.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/live_chat_message_author_details.h"
#include "google/youtube_api/live_chat_message_snippet.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
LiveChatMessage* LiveChatMessage::New() {
  return new client::JsonCppCapsule<LiveChatMessage>;
}

// Standard immutable constructor.
LiveChatMessage::LiveChatMessage(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
LiveChatMessage::LiveChatMessage(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
LiveChatMessage::~LiveChatMessage() {
}

// Properties.

const LiveChatMessageAuthorDetails LiveChatMessage::get_author_details() const {
   const Json::Value& storage = Storage("authorDetails");
   return client::JsonValueToCppValueHelper<LiveChatMessageAuthorDetails >(storage);
}

LiveChatMessageAuthorDetails LiveChatMessage::mutable_authorDetails() {
  Json::Value* storage = MutableStorage("authorDetails");
  return client::JsonValueToMutableCppValueHelper<LiveChatMessageAuthorDetails >(storage);
}

const LiveChatMessageSnippet LiveChatMessage::get_snippet() const {
   const Json::Value& storage = Storage("snippet");
   return client::JsonValueToCppValueHelper<LiveChatMessageSnippet >(storage);
}

LiveChatMessageSnippet LiveChatMessage::mutable_snippet() {
  Json::Value* storage = MutableStorage("snippet");
  return client::JsonValueToMutableCppValueHelper<LiveChatMessageSnippet >(storage);
}
}  // namespace google_youtube_api
