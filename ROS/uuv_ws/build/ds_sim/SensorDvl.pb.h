// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorDvl.proto

#ifndef PROTOBUF_SensorDvl_2eproto__INCLUDED
#define PROTOBUF_SensorDvl_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "time.pb.h"
#include "vector3d.pb.h"
#include "quaternion.pb.h"
// @@protoc_insertion_point(includes)

namespace ds_sim {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_SensorDvl_2eproto();
void protobuf_AssignDesc_SensorDvl_2eproto();
void protobuf_ShutdownFile_SensorDvl_2eproto();

class Dvl;

// ===================================================================

class Dvl : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ds_sim.msgs.Dvl) */ {
 public:
  Dvl();
  virtual ~Dvl();

  Dvl(const Dvl& from);

  inline Dvl& operator=(const Dvl& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Dvl& default_instance();

  void Swap(Dvl* other);

  // implements Message ----------------------------------------------

  inline Dvl* New() const { return New(NULL); }

  Dvl* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Dvl& from);
  void MergeFrom(const Dvl& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Dvl* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gazebo.msgs.Time stamp = 1;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 1;
  const ::gazebo::msgs::Time& stamp() const;
  ::gazebo::msgs::Time* mutable_stamp();
  ::gazebo::msgs::Time* release_stamp();
  void set_allocated_stamp(::gazebo::msgs::Time* stamp);

  // required .gazebo.msgs.Vector3d linear_velocity = 2;
  bool has_linear_velocity() const;
  void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 2;
  const ::gazebo::msgs::Vector3d& linear_velocity() const;
  ::gazebo::msgs::Vector3d* mutable_linear_velocity();
  ::gazebo::msgs::Vector3d* release_linear_velocity();
  void set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity);

  // repeated double ranges = 3;
  int ranges_size() const;
  void clear_ranges();
  static const int kRangesFieldNumber = 3;
  double ranges(int index) const;
  void set_ranges(int index, double value);
  void add_ranges(double value);
  const ::google::protobuf::RepeatedField< double >&
      ranges() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_ranges();

  // repeated double range_velocities = 4;
  int range_velocities_size() const;
  void clear_range_velocities();
  static const int kRangeVelocitiesFieldNumber = 4;
  double range_velocities(int index) const;
  void set_range_velocities(int index, double value);
  void add_range_velocities(double value);
  const ::google::protobuf::RepeatedField< double >&
      range_velocities() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_range_velocities();

  // required int32 num_beams = 5;
  bool has_num_beams() const;
  void clear_num_beams();
  static const int kNumBeamsFieldNumber = 5;
  ::google::protobuf::int32 num_beams() const;
  void set_num_beams(::google::protobuf::int32 value);

  // repeated .gazebo.msgs.Vector3d unit_vectors = 6;
  int unit_vectors_size() const;
  void clear_unit_vectors();
  static const int kUnitVectorsFieldNumber = 6;
  const ::gazebo::msgs::Vector3d& unit_vectors(int index) const;
  ::gazebo::msgs::Vector3d* mutable_unit_vectors(int index);
  ::gazebo::msgs::Vector3d* add_unit_vectors();
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_unit_vectors();
  const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      unit_vectors() const;

  // optional .gazebo.msgs.Quaternion orientation = 7;
  bool has_orientation() const;
  void clear_orientation();
  static const int kOrientationFieldNumber = 7;
  const ::gazebo::msgs::Quaternion& orientation() const;
  ::gazebo::msgs::Quaternion* mutable_orientation();
  ::gazebo::msgs::Quaternion* release_orientation();
  void set_allocated_orientation(::gazebo::msgs::Quaternion* orientation);

  // @@protoc_insertion_point(class_scope:ds_sim.msgs.Dvl)
 private:
  inline void set_has_stamp();
  inline void clear_has_stamp();
  inline void set_has_linear_velocity();
  inline void clear_has_linear_velocity();
  inline void set_has_num_beams();
  inline void clear_has_num_beams();
  inline void set_has_orientation();
  inline void clear_has_orientation();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Time* stamp_;
  ::gazebo::msgs::Vector3d* linear_velocity_;
  ::google::protobuf::RepeatedField< double > ranges_;
  ::google::protobuf::RepeatedField< double > range_velocities_;
  ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d > unit_vectors_;
  ::gazebo::msgs::Quaternion* orientation_;
  ::google::protobuf::int32 num_beams_;
  friend void  protobuf_AddDesc_SensorDvl_2eproto();
  friend void protobuf_AssignDesc_SensorDvl_2eproto();
  friend void protobuf_ShutdownFile_SensorDvl_2eproto();

  void InitAsDefaultInstance();
  static Dvl* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Dvl

// required .gazebo.msgs.Time stamp = 1;
inline bool Dvl::has_stamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Dvl::set_has_stamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Dvl::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Dvl::clear_stamp() {
  if (stamp_ != NULL) stamp_->::gazebo::msgs::Time::Clear();
  clear_has_stamp();
}
inline const ::gazebo::msgs::Time& Dvl::stamp() const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.stamp)
  return stamp_ != NULL ? *stamp_ : *default_instance_->stamp_;
}
inline ::gazebo::msgs::Time* Dvl::mutable_stamp() {
  set_has_stamp();
  if (stamp_ == NULL) {
    stamp_ = new ::gazebo::msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:ds_sim.msgs.Dvl.stamp)
  return stamp_;
}
inline ::gazebo::msgs::Time* Dvl::release_stamp() {
  // @@protoc_insertion_point(field_release:ds_sim.msgs.Dvl.stamp)
  clear_has_stamp();
  ::gazebo::msgs::Time* temp = stamp_;
  stamp_ = NULL;
  return temp;
}
inline void Dvl::set_allocated_stamp(::gazebo::msgs::Time* stamp) {
  delete stamp_;
  stamp_ = stamp;
  if (stamp) {
    set_has_stamp();
  } else {
    clear_has_stamp();
  }
  // @@protoc_insertion_point(field_set_allocated:ds_sim.msgs.Dvl.stamp)
}

// required .gazebo.msgs.Vector3d linear_velocity = 2;
inline bool Dvl::has_linear_velocity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Dvl::set_has_linear_velocity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Dvl::clear_has_linear_velocity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Dvl::clear_linear_velocity() {
  if (linear_velocity_ != NULL) linear_velocity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_linear_velocity();
}
inline const ::gazebo::msgs::Vector3d& Dvl::linear_velocity() const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.linear_velocity)
  return linear_velocity_ != NULL ? *linear_velocity_ : *default_instance_->linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* Dvl::mutable_linear_velocity() {
  set_has_linear_velocity();
  if (linear_velocity_ == NULL) {
    linear_velocity_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:ds_sim.msgs.Dvl.linear_velocity)
  return linear_velocity_;
}
inline ::gazebo::msgs::Vector3d* Dvl::release_linear_velocity() {
  // @@protoc_insertion_point(field_release:ds_sim.msgs.Dvl.linear_velocity)
  clear_has_linear_velocity();
  ::gazebo::msgs::Vector3d* temp = linear_velocity_;
  linear_velocity_ = NULL;
  return temp;
}
inline void Dvl::set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity) {
  delete linear_velocity_;
  linear_velocity_ = linear_velocity;
  if (linear_velocity) {
    set_has_linear_velocity();
  } else {
    clear_has_linear_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:ds_sim.msgs.Dvl.linear_velocity)
}

// repeated double ranges = 3;
inline int Dvl::ranges_size() const {
  return ranges_.size();
}
inline void Dvl::clear_ranges() {
  ranges_.Clear();
}
inline double Dvl::ranges(int index) const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.ranges)
  return ranges_.Get(index);
}
inline void Dvl::set_ranges(int index, double value) {
  ranges_.Set(index, value);
  // @@protoc_insertion_point(field_set:ds_sim.msgs.Dvl.ranges)
}
inline void Dvl::add_ranges(double value) {
  ranges_.Add(value);
  // @@protoc_insertion_point(field_add:ds_sim.msgs.Dvl.ranges)
}
inline const ::google::protobuf::RepeatedField< double >&
Dvl::ranges() const {
  // @@protoc_insertion_point(field_list:ds_sim.msgs.Dvl.ranges)
  return ranges_;
}
inline ::google::protobuf::RepeatedField< double >*
Dvl::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:ds_sim.msgs.Dvl.ranges)
  return &ranges_;
}

// repeated double range_velocities = 4;
inline int Dvl::range_velocities_size() const {
  return range_velocities_.size();
}
inline void Dvl::clear_range_velocities() {
  range_velocities_.Clear();
}
inline double Dvl::range_velocities(int index) const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.range_velocities)
  return range_velocities_.Get(index);
}
inline void Dvl::set_range_velocities(int index, double value) {
  range_velocities_.Set(index, value);
  // @@protoc_insertion_point(field_set:ds_sim.msgs.Dvl.range_velocities)
}
inline void Dvl::add_range_velocities(double value) {
  range_velocities_.Add(value);
  // @@protoc_insertion_point(field_add:ds_sim.msgs.Dvl.range_velocities)
}
inline const ::google::protobuf::RepeatedField< double >&
Dvl::range_velocities() const {
  // @@protoc_insertion_point(field_list:ds_sim.msgs.Dvl.range_velocities)
  return range_velocities_;
}
inline ::google::protobuf::RepeatedField< double >*
Dvl::mutable_range_velocities() {
  // @@protoc_insertion_point(field_mutable_list:ds_sim.msgs.Dvl.range_velocities)
  return &range_velocities_;
}

// required int32 num_beams = 5;
inline bool Dvl::has_num_beams() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Dvl::set_has_num_beams() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Dvl::clear_has_num_beams() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Dvl::clear_num_beams() {
  num_beams_ = 0;
  clear_has_num_beams();
}
inline ::google::protobuf::int32 Dvl::num_beams() const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.num_beams)
  return num_beams_;
}
inline void Dvl::set_num_beams(::google::protobuf::int32 value) {
  set_has_num_beams();
  num_beams_ = value;
  // @@protoc_insertion_point(field_set:ds_sim.msgs.Dvl.num_beams)
}

// repeated .gazebo.msgs.Vector3d unit_vectors = 6;
inline int Dvl::unit_vectors_size() const {
  return unit_vectors_.size();
}
inline void Dvl::clear_unit_vectors() {
  unit_vectors_.Clear();
}
inline const ::gazebo::msgs::Vector3d& Dvl::unit_vectors(int index) const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.unit_vectors)
  return unit_vectors_.Get(index);
}
inline ::gazebo::msgs::Vector3d* Dvl::mutable_unit_vectors(int index) {
  // @@protoc_insertion_point(field_mutable:ds_sim.msgs.Dvl.unit_vectors)
  return unit_vectors_.Mutable(index);
}
inline ::gazebo::msgs::Vector3d* Dvl::add_unit_vectors() {
  // @@protoc_insertion_point(field_add:ds_sim.msgs.Dvl.unit_vectors)
  return unit_vectors_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
Dvl::mutable_unit_vectors() {
  // @@protoc_insertion_point(field_mutable_list:ds_sim.msgs.Dvl.unit_vectors)
  return &unit_vectors_;
}
inline const ::google::protobuf::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
Dvl::unit_vectors() const {
  // @@protoc_insertion_point(field_list:ds_sim.msgs.Dvl.unit_vectors)
  return unit_vectors_;
}

// optional .gazebo.msgs.Quaternion orientation = 7;
inline bool Dvl::has_orientation() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Dvl::set_has_orientation() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Dvl::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Dvl::clear_orientation() {
  if (orientation_ != NULL) orientation_->::gazebo::msgs::Quaternion::Clear();
  clear_has_orientation();
}
inline const ::gazebo::msgs::Quaternion& Dvl::orientation() const {
  // @@protoc_insertion_point(field_get:ds_sim.msgs.Dvl.orientation)
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
inline ::gazebo::msgs::Quaternion* Dvl::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) {
    orientation_ = new ::gazebo::msgs::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:ds_sim.msgs.Dvl.orientation)
  return orientation_;
}
inline ::gazebo::msgs::Quaternion* Dvl::release_orientation() {
  // @@protoc_insertion_point(field_release:ds_sim.msgs.Dvl.orientation)
  clear_has_orientation();
  ::gazebo::msgs::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
inline void Dvl::set_allocated_orientation(::gazebo::msgs::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
  // @@protoc_insertion_point(field_set_allocated:ds_sim.msgs.Dvl.orientation)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ds_sim

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SensorDvl_2eproto__INCLUDED