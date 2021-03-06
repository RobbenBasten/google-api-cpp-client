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
#ifndef  GOOGLE_YOUTUBE_API_COMMENT_THREAD_REPLIES_H_
#define  GOOGLE_YOUTUBE_API_COMMENT_THREAD_REPLIES_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/comment.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Comments written in (direct or indirect) reply to the top level comment.
 *
 * @ingroup DataObject
 */
class CommentThreadReplies : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static CommentThreadReplies* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CommentThreadReplies(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CommentThreadReplies(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~CommentThreadReplies();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::CommentThreadReplies</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::CommentThreadReplies");
  }

  /**
   * Determine if the '<code>comments</code>' attribute was set.
   *
   * @return true if the '<code>comments</code>' attribute was set.
   */
  bool has_comments() const {
    return Storage().isMember("comments");
  }

  /**
   * Clears the '<code>comments</code>' attribute.
   */
  void clear_comments() {
    MutableStorage()->removeMember("comments");
  }


  /**
   * Get a reference to the value of the '<code>comments</code>' attribute.
   */
  const client::JsonCppArray<Comment > get_comments() const;

  /**
   * Gets a reference to a mutable value of the '<code>comments</code>'
   * property.
   *
   * A limited number of replies. Unless the number of replies returned equals
   * total_reply_count in the snippet the returned replies are only a subset of
   * the total number of replies.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<Comment > mutable_comments();

 private:
  void operator=(const CommentThreadReplies&);
};  // CommentThreadReplies
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_COMMENT_THREAD_REPLIES_H_
