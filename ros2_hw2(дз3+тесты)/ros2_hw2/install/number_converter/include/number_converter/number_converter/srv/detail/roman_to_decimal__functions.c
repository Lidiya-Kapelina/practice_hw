// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice
#include "number_converter/srv/detail/roman_to_decimal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `roman_numeral`
#include "rosidl_runtime_c/string_functions.h"

bool
number_converter__srv__RomanToDecimal_Request__init(number_converter__srv__RomanToDecimal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // roman_numeral
  if (!rosidl_runtime_c__String__init(&msg->roman_numeral)) {
    number_converter__srv__RomanToDecimal_Request__fini(msg);
    return false;
  }
  return true;
}

void
number_converter__srv__RomanToDecimal_Request__fini(number_converter__srv__RomanToDecimal_Request * msg)
{
  if (!msg) {
    return;
  }
  // roman_numeral
  rosidl_runtime_c__String__fini(&msg->roman_numeral);
}

bool
number_converter__srv__RomanToDecimal_Request__are_equal(const number_converter__srv__RomanToDecimal_Request * lhs, const number_converter__srv__RomanToDecimal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roman_numeral
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->roman_numeral), &(rhs->roman_numeral)))
  {
    return false;
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Request__copy(
  const number_converter__srv__RomanToDecimal_Request * input,
  number_converter__srv__RomanToDecimal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // roman_numeral
  if (!rosidl_runtime_c__String__copy(
      &(input->roman_numeral), &(output->roman_numeral)))
  {
    return false;
  }
  return true;
}

number_converter__srv__RomanToDecimal_Request *
number_converter__srv__RomanToDecimal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Request * msg = (number_converter__srv__RomanToDecimal_Request *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(number_converter__srv__RomanToDecimal_Request));
  bool success = number_converter__srv__RomanToDecimal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
number_converter__srv__RomanToDecimal_Request__destroy(number_converter__srv__RomanToDecimal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    number_converter__srv__RomanToDecimal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
number_converter__srv__RomanToDecimal_Request__Sequence__init(number_converter__srv__RomanToDecimal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Request * data = NULL;

  if (size) {
    data = (number_converter__srv__RomanToDecimal_Request *)allocator.zero_allocate(size, sizeof(number_converter__srv__RomanToDecimal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = number_converter__srv__RomanToDecimal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        number_converter__srv__RomanToDecimal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
number_converter__srv__RomanToDecimal_Request__Sequence__fini(number_converter__srv__RomanToDecimal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      number_converter__srv__RomanToDecimal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

number_converter__srv__RomanToDecimal_Request__Sequence *
number_converter__srv__RomanToDecimal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Request__Sequence * array = (number_converter__srv__RomanToDecimal_Request__Sequence *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = number_converter__srv__RomanToDecimal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
number_converter__srv__RomanToDecimal_Request__Sequence__destroy(number_converter__srv__RomanToDecimal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    number_converter__srv__RomanToDecimal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
number_converter__srv__RomanToDecimal_Request__Sequence__are_equal(const number_converter__srv__RomanToDecimal_Request__Sequence * lhs, const number_converter__srv__RomanToDecimal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Request__Sequence__copy(
  const number_converter__srv__RomanToDecimal_Request__Sequence * input,
  number_converter__srv__RomanToDecimal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(number_converter__srv__RomanToDecimal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    number_converter__srv__RomanToDecimal_Request * data =
      (number_converter__srv__RomanToDecimal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!number_converter__srv__RomanToDecimal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          number_converter__srv__RomanToDecimal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
number_converter__srv__RomanToDecimal_Response__init(number_converter__srv__RomanToDecimal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // decimal_value
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    number_converter__srv__RomanToDecimal_Response__fini(msg);
    return false;
  }
  return true;
}

void
number_converter__srv__RomanToDecimal_Response__fini(number_converter__srv__RomanToDecimal_Response * msg)
{
  if (!msg) {
    return;
  }
  // decimal_value
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
number_converter__srv__RomanToDecimal_Response__are_equal(const number_converter__srv__RomanToDecimal_Response * lhs, const number_converter__srv__RomanToDecimal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // decimal_value
  if (lhs->decimal_value != rhs->decimal_value) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Response__copy(
  const number_converter__srv__RomanToDecimal_Response * input,
  number_converter__srv__RomanToDecimal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // decimal_value
  output->decimal_value = input->decimal_value;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

number_converter__srv__RomanToDecimal_Response *
number_converter__srv__RomanToDecimal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Response * msg = (number_converter__srv__RomanToDecimal_Response *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(number_converter__srv__RomanToDecimal_Response));
  bool success = number_converter__srv__RomanToDecimal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
number_converter__srv__RomanToDecimal_Response__destroy(number_converter__srv__RomanToDecimal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    number_converter__srv__RomanToDecimal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
number_converter__srv__RomanToDecimal_Response__Sequence__init(number_converter__srv__RomanToDecimal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Response * data = NULL;

  if (size) {
    data = (number_converter__srv__RomanToDecimal_Response *)allocator.zero_allocate(size, sizeof(number_converter__srv__RomanToDecimal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = number_converter__srv__RomanToDecimal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        number_converter__srv__RomanToDecimal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
number_converter__srv__RomanToDecimal_Response__Sequence__fini(number_converter__srv__RomanToDecimal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      number_converter__srv__RomanToDecimal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

number_converter__srv__RomanToDecimal_Response__Sequence *
number_converter__srv__RomanToDecimal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Response__Sequence * array = (number_converter__srv__RomanToDecimal_Response__Sequence *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = number_converter__srv__RomanToDecimal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
number_converter__srv__RomanToDecimal_Response__Sequence__destroy(number_converter__srv__RomanToDecimal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    number_converter__srv__RomanToDecimal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
number_converter__srv__RomanToDecimal_Response__Sequence__are_equal(const number_converter__srv__RomanToDecimal_Response__Sequence * lhs, const number_converter__srv__RomanToDecimal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Response__Sequence__copy(
  const number_converter__srv__RomanToDecimal_Response__Sequence * input,
  number_converter__srv__RomanToDecimal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(number_converter__srv__RomanToDecimal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    number_converter__srv__RomanToDecimal_Response * data =
      (number_converter__srv__RomanToDecimal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!number_converter__srv__RomanToDecimal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          number_converter__srv__RomanToDecimal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__functions.h"

bool
number_converter__srv__RomanToDecimal_Event__init(number_converter__srv__RomanToDecimal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    number_converter__srv__RomanToDecimal_Event__fini(msg);
    return false;
  }
  // request
  if (!number_converter__srv__RomanToDecimal_Request__Sequence__init(&msg->request, 0)) {
    number_converter__srv__RomanToDecimal_Event__fini(msg);
    return false;
  }
  // response
  if (!number_converter__srv__RomanToDecimal_Response__Sequence__init(&msg->response, 0)) {
    number_converter__srv__RomanToDecimal_Event__fini(msg);
    return false;
  }
  return true;
}

void
number_converter__srv__RomanToDecimal_Event__fini(number_converter__srv__RomanToDecimal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  number_converter__srv__RomanToDecimal_Request__Sequence__fini(&msg->request);
  // response
  number_converter__srv__RomanToDecimal_Response__Sequence__fini(&msg->response);
}

bool
number_converter__srv__RomanToDecimal_Event__are_equal(const number_converter__srv__RomanToDecimal_Event * lhs, const number_converter__srv__RomanToDecimal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!number_converter__srv__RomanToDecimal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!number_converter__srv__RomanToDecimal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Event__copy(
  const number_converter__srv__RomanToDecimal_Event * input,
  number_converter__srv__RomanToDecimal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!number_converter__srv__RomanToDecimal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!number_converter__srv__RomanToDecimal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

number_converter__srv__RomanToDecimal_Event *
number_converter__srv__RomanToDecimal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Event * msg = (number_converter__srv__RomanToDecimal_Event *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(number_converter__srv__RomanToDecimal_Event));
  bool success = number_converter__srv__RomanToDecimal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
number_converter__srv__RomanToDecimal_Event__destroy(number_converter__srv__RomanToDecimal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    number_converter__srv__RomanToDecimal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
number_converter__srv__RomanToDecimal_Event__Sequence__init(number_converter__srv__RomanToDecimal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Event * data = NULL;

  if (size) {
    data = (number_converter__srv__RomanToDecimal_Event *)allocator.zero_allocate(size, sizeof(number_converter__srv__RomanToDecimal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = number_converter__srv__RomanToDecimal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        number_converter__srv__RomanToDecimal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
number_converter__srv__RomanToDecimal_Event__Sequence__fini(number_converter__srv__RomanToDecimal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      number_converter__srv__RomanToDecimal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

number_converter__srv__RomanToDecimal_Event__Sequence *
number_converter__srv__RomanToDecimal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  number_converter__srv__RomanToDecimal_Event__Sequence * array = (number_converter__srv__RomanToDecimal_Event__Sequence *)allocator.allocate(sizeof(number_converter__srv__RomanToDecimal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = number_converter__srv__RomanToDecimal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
number_converter__srv__RomanToDecimal_Event__Sequence__destroy(number_converter__srv__RomanToDecimal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    number_converter__srv__RomanToDecimal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
number_converter__srv__RomanToDecimal_Event__Sequence__are_equal(const number_converter__srv__RomanToDecimal_Event__Sequence * lhs, const number_converter__srv__RomanToDecimal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
number_converter__srv__RomanToDecimal_Event__Sequence__copy(
  const number_converter__srv__RomanToDecimal_Event__Sequence * input,
  number_converter__srv__RomanToDecimal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(number_converter__srv__RomanToDecimal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    number_converter__srv__RomanToDecimal_Event * data =
      (number_converter__srv__RomanToDecimal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!number_converter__srv__RomanToDecimal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          number_converter__srv__RomanToDecimal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!number_converter__srv__RomanToDecimal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
