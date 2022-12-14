/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: address6.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "address6.pb-c.h"
void   tutorial__person__init
                     (Tutorial__Person         *message)
{
  static const Tutorial__Person init_value = TUTORIAL__PERSON__INIT;
  *message = init_value;
}
size_t tutorial__person__get_packed_size
                     (const Tutorial__Person *message)
{
  assert(message->base.descriptor == &tutorial__person__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tutorial__person__pack
                     (const Tutorial__Person *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tutorial__person__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tutorial__person__pack_to_buffer
                     (const Tutorial__Person *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tutorial__person__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Tutorial__Person *
       tutorial__person__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Tutorial__Person *)
     protobuf_c_message_unpack (&tutorial__person__descriptor,
                                allocator, len, data);
}
void   tutorial__person__free_unpacked
                     (Tutorial__Person *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &tutorial__person__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   tutorial__super_person__init
                     (Tutorial__SuperPerson         *message)
{
  static const Tutorial__SuperPerson init_value = TUTORIAL__SUPER_PERSON__INIT;
  *message = init_value;
}
size_t tutorial__super_person__get_packed_size
                     (const Tutorial__SuperPerson *message)
{
  assert(message->base.descriptor == &tutorial__super_person__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t tutorial__super_person__pack
                     (const Tutorial__SuperPerson *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &tutorial__super_person__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t tutorial__super_person__pack_to_buffer
                     (const Tutorial__SuperPerson *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &tutorial__super_person__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Tutorial__SuperPerson *
       tutorial__super_person__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Tutorial__SuperPerson *)
     protobuf_c_message_unpack (&tutorial__super_person__descriptor,
                                allocator, len, data);
}
void   tutorial__super_person__free_unpacked
                     (Tutorial__SuperPerson *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &tutorial__super_person__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor tutorial__person__field_descriptors[3] =
{
  {
    "rolld",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Tutorial__Person, rolld),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Tutorial__Person, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "arr",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Tutorial__Person, n_arr),
    offsetof(Tutorial__Person, arr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tutorial__person__field_indices_by_name[] = {
  2,   /* field[2] = arr */
  1,   /* field[1] = id */
  0,   /* field[0] = rolld */
};
static const ProtobufCIntRange tutorial__person__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor tutorial__person__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tutorial.Person",
  "Person",
  "Tutorial__Person",
  "tutorial",
  sizeof(Tutorial__Person),
  3,
  tutorial__person__field_descriptors,
  tutorial__person__field_indices_by_name,
  1,  tutorial__person__number_ranges,
  (ProtobufCMessageInit) tutorial__person__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor tutorial__super_person__field_descriptors[2] =
{
  {
    "money",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Tutorial__SuperPerson, money),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "p1",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Tutorial__SuperPerson, p1),
    &tutorial__person__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned tutorial__super_person__field_indices_by_name[] = {
  0,   /* field[0] = money */
  1,   /* field[1] = p1 */
};
static const ProtobufCIntRange tutorial__super_person__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor tutorial__super_person__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "tutorial.Super_person",
  "SuperPerson",
  "Tutorial__SuperPerson",
  "tutorial",
  sizeof(Tutorial__SuperPerson),
  2,
  tutorial__super_person__field_descriptors,
  tutorial__super_person__field_indices_by_name,
  1,  tutorial__super_person__number_ranges,
  (ProtobufCMessageInit) tutorial__super_person__init,
  NULL,NULL,NULL    /* reserved[123] */
};
