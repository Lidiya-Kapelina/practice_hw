// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from find_substring_positions_interfaces:action/FindSubstringPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "find_substring_positions_interfaces/action/find_substring_positions.h"


#ifndef FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__STRUCT_H_
#define FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
// Member 'substring'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Goal
{
  rosidl_runtime_c__String text;
  rosidl_runtime_c__String substring;
} find_substring_positions_interfaces__action__FindSubstringPositions_Goal;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_Goal.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Goal__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Result
{
  rosidl_runtime_c__int32__Sequence positions;
} find_substring_positions_interfaces__action__FindSubstringPositions_Result;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_Result.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Result__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Feedback
{
  int32_t position;
} find_substring_positions_interfaces__action__FindSubstringPositions_Feedback;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_Feedback.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_Feedback__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "find_substring_positions_interfaces/action/detail/find_substring_positions__struct.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  find_substring_positions_interfaces__action__FindSubstringPositions_Goal goal;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Request__Sequence request;
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Response__Sequence response;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "find_substring_positions_interfaces/action/detail/find_substring_positions__struct.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response
{
  int8_t status;
  find_substring_positions_interfaces__action__FindSubstringPositions_Result result;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Request__Sequence request;
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Response__Sequence response;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "find_substring_positions_interfaces/action/detail/find_substring_positions__struct.h"

/// Struct defined in action/FindSubstringPositions in the package find_substring_positions_interfaces.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  find_substring_positions_interfaces__action__FindSubstringPositions_Feedback feedback;
} find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage;

// Struct for a sequence of find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage.
typedef struct find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage__Sequence
{
  find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} find_substring_positions_interfaces__action__FindSubstringPositions_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__STRUCT_H_
