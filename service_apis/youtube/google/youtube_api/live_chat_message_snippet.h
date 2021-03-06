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
#ifndef  GOOGLE_YOUTUBE_API_LIVE_CHAT_MESSAGE_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_LIVE_CHAT_MESSAGE_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/live_chat_fan_funding_event_details.h"
#include "google/youtube_api/live_chat_message_deleted_details.h"
#include "google/youtube_api/live_chat_message_retracted_details.h"
#include "google/youtube_api/live_chat_poll_closed_details.h"
#include "google/youtube_api/live_chat_poll_edited_details.h"
#include "google/youtube_api/live_chat_poll_opened_details.h"
#include "google/youtube_api/live_chat_poll_voted_details.h"
#include "google/youtube_api/live_chat_super_chat_details.h"
#include "google/youtube_api/live_chat_text_message_details.h"
#include "google/youtube_api/live_chat_user_banned_message_details.h"

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
class LiveChatMessageSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveChatMessageSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveChatMessageSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveChatMessageSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveChatMessageSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveChatMessageSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveChatMessageSnippet");
  }

  /**
   * Determine if the '<code>authorChannelId</code>' attribute was set.
   *
   * @return true if the '<code>authorChannelId</code>' attribute was set.
   */
  bool has_author_channel_id() const {
    return Storage().isMember("authorChannelId");
  }

  /**
   * Clears the '<code>authorChannelId</code>' attribute.
   */
  void clear_author_channel_id() {
    MutableStorage()->removeMember("authorChannelId");
  }


  /**
   * Get the value of the '<code>authorChannelId</code>' attribute.
   */
  const StringPiece get_author_channel_id() const {
    const Json::Value& v = Storage("authorChannelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>authorChannelId</code>' attribute.
   *
   * The ID of the user that authored this message, this field is not always
   * filled. textMessageEvent - the user that wrote the message fanFundingEvent
   * - the user that funded the broadcast newSponsorEvent - the user that just
   * became a sponsor messageDeletedEvent - the moderator that took the action
   * messageRetractedEvent - the author that retracted their message
   * userBannedEvent - the moderator that took the action superChatEvent - the
   * user that made the purchase.
   *
   * @param[in] value The new value.
   */
  void set_author_channel_id(const StringPiece& value) {
    *MutableStorage("authorChannelId") = value.data();
  }

  /**
   * Determine if the '<code>displayMessage</code>' attribute was set.
   *
   * @return true if the '<code>displayMessage</code>' attribute was set.
   */
  bool has_display_message() const {
    return Storage().isMember("displayMessage");
  }

  /**
   * Clears the '<code>displayMessage</code>' attribute.
   */
  void clear_display_message() {
    MutableStorage()->removeMember("displayMessage");
  }


  /**
   * Get the value of the '<code>displayMessage</code>' attribute.
   */
  const StringPiece get_display_message() const {
    const Json::Value& v = Storage("displayMessage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayMessage</code>' attribute.
   *
   * Contains a string that can be displayed to the user. If this field is not
   * present the message is silent, at the moment only messages of type
   * TOMBSTONE and CHAT_ENDED_EVENT are silent.
   *
   * @param[in] value The new value.
   */
  void set_display_message(const StringPiece& value) {
    *MutableStorage("displayMessage") = value.data();
  }

  /**
   * Determine if the '<code>fanFundingEventDetails</code>' attribute was set.
   *
   * @return true if the '<code>fanFundingEventDetails</code>' attribute was
   * set.
   */
  bool has_fan_funding_event_details() const {
    return Storage().isMember("fanFundingEventDetails");
  }

  /**
   * Clears the '<code>fanFundingEventDetails</code>' attribute.
   */
  void clear_fan_funding_event_details() {
    MutableStorage()->removeMember("fanFundingEventDetails");
  }


  /**
   * Get a reference to the value of the '<code>fanFundingEventDetails</code>'
   * attribute.
   */
  const LiveChatFanFundingEventDetails get_fan_funding_event_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>fanFundingEventDetails</code>' property.
   *
   * Details about the funding event, this is only set if the type is
   * 'fanFundingEvent'.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveChatFanFundingEventDetails mutable_fanFundingEventDetails();

  /**
   * Determine if the '<code>hasDisplayContent</code>' attribute was set.
   *
   * @return true if the '<code>hasDisplayContent</code>' attribute was set.
   */
  bool has_has_display_content() const {
    return Storage().isMember("hasDisplayContent");
  }

  /**
   * Clears the '<code>hasDisplayContent</code>' attribute.
   */
  void clear_has_display_content() {
    MutableStorage()->removeMember("hasDisplayContent");
  }


  /**
   * Get the value of the '<code>hasDisplayContent</code>' attribute.
   */
  bool get_has_display_content() const {
    const Json::Value& storage = Storage("hasDisplayContent");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>hasDisplayContent</code>' attribute.
   *
   * Whether the message has display content that should be displayed to users.
   *
   * @param[in] value The new value.
   */
  void set_has_display_content(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("hasDisplayContent"));
  }

  /**
   * Determine if the '<code>liveChatId</code>' attribute was set.
   *
   * @return true if the '<code>liveChatId</code>' attribute was set.
   */
  bool has_live_chat_id() const {
    return Storage().isMember("liveChatId");
  }

  /**
   * Clears the '<code>liveChatId</code>' attribute.
   */
  void clear_live_chat_id() {
    MutableStorage()->removeMember("liveChatId");
  }


  /**
   * Get the value of the '<code>liveChatId</code>' attribute.
   */
  const StringPiece get_live_chat_id() const {
    const Json::Value& v = Storage("liveChatId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>liveChatId</code>' attribute.
   * @param[in] value The new value.
   */
  void set_live_chat_id(const StringPiece& value) {
    *MutableStorage("liveChatId") = value.data();
  }

  /**
   * Determine if the '<code>messageDeletedDetails</code>' attribute was set.
   *
   * @return true if the '<code>messageDeletedDetails</code>' attribute was set.
   */
  bool has_message_deleted_details() const {
    return Storage().isMember("messageDeletedDetails");
  }

  /**
   * Clears the '<code>messageDeletedDetails</code>' attribute.
   */
  void clear_message_deleted_details() {
    MutableStorage()->removeMember("messageDeletedDetails");
  }


  /**
   * Get a reference to the value of the '<code>messageDeletedDetails</code>'
   * attribute.
   */
  const LiveChatMessageDeletedDetails get_message_deleted_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>messageDeletedDetails</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatMessageDeletedDetails mutable_messageDeletedDetails();

  /**
   * Determine if the '<code>messageRetractedDetails</code>' attribute was set.
   *
   * @return true if the '<code>messageRetractedDetails</code>' attribute was
   * set.
   */
  bool has_message_retracted_details() const {
    return Storage().isMember("messageRetractedDetails");
  }

  /**
   * Clears the '<code>messageRetractedDetails</code>' attribute.
   */
  void clear_message_retracted_details() {
    MutableStorage()->removeMember("messageRetractedDetails");
  }


  /**
   * Get a reference to the value of the '<code>messageRetractedDetails</code>'
   * attribute.
   */
  const LiveChatMessageRetractedDetails get_message_retracted_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>messageRetractedDetails</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatMessageRetractedDetails mutable_messageRetractedDetails();

  /**
   * Determine if the '<code>pollClosedDetails</code>' attribute was set.
   *
   * @return true if the '<code>pollClosedDetails</code>' attribute was set.
   */
  bool has_poll_closed_details() const {
    return Storage().isMember("pollClosedDetails");
  }

  /**
   * Clears the '<code>pollClosedDetails</code>' attribute.
   */
  void clear_poll_closed_details() {
    MutableStorage()->removeMember("pollClosedDetails");
  }


  /**
   * Get a reference to the value of the '<code>pollClosedDetails</code>'
   * attribute.
   */
  const LiveChatPollClosedDetails get_poll_closed_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>pollClosedDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatPollClosedDetails mutable_pollClosedDetails();

  /**
   * Determine if the '<code>pollEditedDetails</code>' attribute was set.
   *
   * @return true if the '<code>pollEditedDetails</code>' attribute was set.
   */
  bool has_poll_edited_details() const {
    return Storage().isMember("pollEditedDetails");
  }

  /**
   * Clears the '<code>pollEditedDetails</code>' attribute.
   */
  void clear_poll_edited_details() {
    MutableStorage()->removeMember("pollEditedDetails");
  }


  /**
   * Get a reference to the value of the '<code>pollEditedDetails</code>'
   * attribute.
   */
  const LiveChatPollEditedDetails get_poll_edited_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>pollEditedDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatPollEditedDetails mutable_pollEditedDetails();

  /**
   * Determine if the '<code>pollOpenedDetails</code>' attribute was set.
   *
   * @return true if the '<code>pollOpenedDetails</code>' attribute was set.
   */
  bool has_poll_opened_details() const {
    return Storage().isMember("pollOpenedDetails");
  }

  /**
   * Clears the '<code>pollOpenedDetails</code>' attribute.
   */
  void clear_poll_opened_details() {
    MutableStorage()->removeMember("pollOpenedDetails");
  }


  /**
   * Get a reference to the value of the '<code>pollOpenedDetails</code>'
   * attribute.
   */
  const LiveChatPollOpenedDetails get_poll_opened_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>pollOpenedDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatPollOpenedDetails mutable_pollOpenedDetails();

  /**
   * Determine if the '<code>pollVotedDetails</code>' attribute was set.
   *
   * @return true if the '<code>pollVotedDetails</code>' attribute was set.
   */
  bool has_poll_voted_details() const {
    return Storage().isMember("pollVotedDetails");
  }

  /**
   * Clears the '<code>pollVotedDetails</code>' attribute.
   */
  void clear_poll_voted_details() {
    MutableStorage()->removeMember("pollVotedDetails");
  }


  /**
   * Get a reference to the value of the '<code>pollVotedDetails</code>'
   * attribute.
   */
  const LiveChatPollVotedDetails get_poll_voted_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>pollVotedDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatPollVotedDetails mutable_pollVotedDetails();

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time when the message was orignally published. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>superChatDetails</code>' attribute was set.
   *
   * @return true if the '<code>superChatDetails</code>' attribute was set.
   */
  bool has_super_chat_details() const {
    return Storage().isMember("superChatDetails");
  }

  /**
   * Clears the '<code>superChatDetails</code>' attribute.
   */
  void clear_super_chat_details() {
    MutableStorage()->removeMember("superChatDetails");
  }


  /**
   * Get a reference to the value of the '<code>superChatDetails</code>'
   * attribute.
   */
  const LiveChatSuperChatDetails get_super_chat_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>superChatDetails</code>'
   * property.
   *
   * Details about the Super Chat event, this is only set if the type is
   * 'superChatEvent'.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveChatSuperChatDetails mutable_superChatDetails();

  /**
   * Determine if the '<code>textMessageDetails</code>' attribute was set.
   *
   * @return true if the '<code>textMessageDetails</code>' attribute was set.
   */
  bool has_text_message_details() const {
    return Storage().isMember("textMessageDetails");
  }

  /**
   * Clears the '<code>textMessageDetails</code>' attribute.
   */
  void clear_text_message_details() {
    MutableStorage()->removeMember("textMessageDetails");
  }


  /**
   * Get a reference to the value of the '<code>textMessageDetails</code>'
   * attribute.
   */
  const LiveChatTextMessageDetails get_text_message_details() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>textMessageDetails</code>' property.
   *
   * Details about the text message, this is only set if the type is
   * 'textMessageEvent'.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveChatTextMessageDetails mutable_textMessageDetails();

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The type of message, this will always be present, it determines the
   * contents of the message as well as which fields will be present.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

  /**
   * Determine if the '<code>userBannedDetails</code>' attribute was set.
   *
   * @return true if the '<code>userBannedDetails</code>' attribute was set.
   */
  bool has_user_banned_details() const {
    return Storage().isMember("userBannedDetails");
  }

  /**
   * Clears the '<code>userBannedDetails</code>' attribute.
   */
  void clear_user_banned_details() {
    MutableStorage()->removeMember("userBannedDetails");
  }


  /**
   * Get a reference to the value of the '<code>userBannedDetails</code>'
   * attribute.
   */
  const LiveChatUserBannedMessageDetails get_user_banned_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>userBannedDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveChatUserBannedMessageDetails mutable_userBannedDetails();

 private:
  void operator=(const LiveChatMessageSnippet&);
};  // LiveChatMessageSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_CHAT_MESSAGE_SNIPPET_H_
