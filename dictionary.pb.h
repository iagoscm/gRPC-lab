// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dictionary.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dictionary_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dictionary_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dictionary_2eproto;
namespace dictionary {
class WordEntry;
struct WordEntryDefaultTypeInternal;
extern WordEntryDefaultTypeInternal _WordEntry_default_instance_;
class WordRequest;
struct WordRequestDefaultTypeInternal;
extern WordRequestDefaultTypeInternal _WordRequest_default_instance_;
class WordResponse;
struct WordResponseDefaultTypeInternal;
extern WordResponseDefaultTypeInternal _WordResponse_default_instance_;
}  // namespace dictionary
PROTOBUF_NAMESPACE_OPEN
template<> ::dictionary::WordEntry* Arena::CreateMaybeMessage<::dictionary::WordEntry>(Arena*);
template<> ::dictionary::WordRequest* Arena::CreateMaybeMessage<::dictionary::WordRequest>(Arena*);
template<> ::dictionary::WordResponse* Arena::CreateMaybeMessage<::dictionary::WordResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace dictionary {

// ===================================================================

class WordRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dictionary.WordRequest) */ {
 public:
  inline WordRequest() : WordRequest(nullptr) {}
  ~WordRequest() override;
  explicit PROTOBUF_CONSTEXPR WordRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WordRequest(const WordRequest& from);
  WordRequest(WordRequest&& from) noexcept
    : WordRequest() {
    *this = ::std::move(from);
  }

  inline WordRequest& operator=(const WordRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordRequest& operator=(WordRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WordRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const WordRequest* internal_default_instance() {
    return reinterpret_cast<const WordRequest*>(
               &_WordRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WordRequest& a, WordRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(WordRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WordRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WordRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WordRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WordRequest& from) {
    WordRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dictionary.WordRequest";
  }
  protected:
  explicit WordRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordFieldNumber = 1,
  };
  // string word = 1;
  void clear_word();
  const std::string& word() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_word(ArgT0&& arg0, ArgT... args);
  std::string* mutable_word();
  PROTOBUF_NODISCARD std::string* release_word();
  void set_allocated_word(std::string* word);
  private:
  const std::string& _internal_word() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_word(const std::string& value);
  std::string* _internal_mutable_word();
  public:

  // @@protoc_insertion_point(class_scope:dictionary.WordRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr word_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dictionary_2eproto;
};
// -------------------------------------------------------------------

class WordResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dictionary.WordResponse) */ {
 public:
  inline WordResponse() : WordResponse(nullptr) {}
  ~WordResponse() override;
  explicit PROTOBUF_CONSTEXPR WordResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WordResponse(const WordResponse& from);
  WordResponse(WordResponse&& from) noexcept
    : WordResponse() {
    *this = ::std::move(from);
  }

  inline WordResponse& operator=(const WordResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordResponse& operator=(WordResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WordResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const WordResponse* internal_default_instance() {
    return reinterpret_cast<const WordResponse*>(
               &_WordResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WordResponse& a, WordResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(WordResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WordResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WordResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WordResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WordResponse& from) {
    WordResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dictionary.WordResponse";
  }
  protected:
  explicit WordResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordsFieldNumber = 1,
  };
  // repeated .dictionary.WordEntry words = 1;
  int words_size() const;
  private:
  int _internal_words_size() const;
  public:
  void clear_words();
  ::dictionary::WordEntry* mutable_words(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dictionary::WordEntry >*
      mutable_words();
  private:
  const ::dictionary::WordEntry& _internal_words(int index) const;
  ::dictionary::WordEntry* _internal_add_words();
  public:
  const ::dictionary::WordEntry& words(int index) const;
  ::dictionary::WordEntry* add_words();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dictionary::WordEntry >&
      words() const;

  // @@protoc_insertion_point(class_scope:dictionary.WordResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dictionary::WordEntry > words_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dictionary_2eproto;
};
// -------------------------------------------------------------------

class WordEntry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dictionary.WordEntry) */ {
 public:
  inline WordEntry() : WordEntry(nullptr) {}
  ~WordEntry() override;
  explicit PROTOBUF_CONSTEXPR WordEntry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WordEntry(const WordEntry& from);
  WordEntry(WordEntry&& from) noexcept
    : WordEntry() {
    *this = ::std::move(from);
  }

  inline WordEntry& operator=(const WordEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline WordEntry& operator=(WordEntry&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WordEntry& default_instance() {
    return *internal_default_instance();
  }
  static inline const WordEntry* internal_default_instance() {
    return reinterpret_cast<const WordEntry*>(
               &_WordEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(WordEntry& a, WordEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(WordEntry* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WordEntry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WordEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WordEntry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WordEntry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WordEntry& from) {
    WordEntry::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WordEntry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "dictionary.WordEntry";
  }
  protected:
  explicit WordEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordFieldNumber = 1,
    kCountFieldNumber = 2,
  };
  // string word = 1;
  void clear_word();
  const std::string& word() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_word(ArgT0&& arg0, ArgT... args);
  std::string* mutable_word();
  PROTOBUF_NODISCARD std::string* release_word();
  void set_allocated_word(std::string* word);
  private:
  const std::string& _internal_word() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_word(const std::string& value);
  std::string* _internal_mutable_word();
  public:

  // int32 count = 2;
  void clear_count();
  int32_t count() const;
  void set_count(int32_t value);
  private:
  int32_t _internal_count() const;
  void _internal_set_count(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:dictionary.WordEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr word_;
    int32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dictionary_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WordRequest

// string word = 1;
inline void WordRequest::clear_word() {
  _impl_.word_.ClearToEmpty();
}
inline const std::string& WordRequest::word() const {
  // @@protoc_insertion_point(field_get:dictionary.WordRequest.word)
  return _internal_word();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void WordRequest::set_word(ArgT0&& arg0, ArgT... args) {
 
 _impl_.word_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dictionary.WordRequest.word)
}
inline std::string* WordRequest::mutable_word() {
  std::string* _s = _internal_mutable_word();
  // @@protoc_insertion_point(field_mutable:dictionary.WordRequest.word)
  return _s;
}
inline const std::string& WordRequest::_internal_word() const {
  return _impl_.word_.Get();
}
inline void WordRequest::_internal_set_word(const std::string& value) {
  
  _impl_.word_.Set(value, GetArenaForAllocation());
}
inline std::string* WordRequest::_internal_mutable_word() {
  
  return _impl_.word_.Mutable(GetArenaForAllocation());
}
inline std::string* WordRequest::release_word() {
  // @@protoc_insertion_point(field_release:dictionary.WordRequest.word)
  return _impl_.word_.Release();
}
inline void WordRequest::set_allocated_word(std::string* word) {
  if (word != nullptr) {
    
  } else {
    
  }
  _impl_.word_.SetAllocated(word, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.word_.IsDefault()) {
    _impl_.word_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dictionary.WordRequest.word)
}

// -------------------------------------------------------------------

// WordResponse

// repeated .dictionary.WordEntry words = 1;
inline int WordResponse::_internal_words_size() const {
  return _impl_.words_.size();
}
inline int WordResponse::words_size() const {
  return _internal_words_size();
}
inline void WordResponse::clear_words() {
  _impl_.words_.Clear();
}
inline ::dictionary::WordEntry* WordResponse::mutable_words(int index) {
  // @@protoc_insertion_point(field_mutable:dictionary.WordResponse.words)
  return _impl_.words_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dictionary::WordEntry >*
WordResponse::mutable_words() {
  // @@protoc_insertion_point(field_mutable_list:dictionary.WordResponse.words)
  return &_impl_.words_;
}
inline const ::dictionary::WordEntry& WordResponse::_internal_words(int index) const {
  return _impl_.words_.Get(index);
}
inline const ::dictionary::WordEntry& WordResponse::words(int index) const {
  // @@protoc_insertion_point(field_get:dictionary.WordResponse.words)
  return _internal_words(index);
}
inline ::dictionary::WordEntry* WordResponse::_internal_add_words() {
  return _impl_.words_.Add();
}
inline ::dictionary::WordEntry* WordResponse::add_words() {
  ::dictionary::WordEntry* _add = _internal_add_words();
  // @@protoc_insertion_point(field_add:dictionary.WordResponse.words)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dictionary::WordEntry >&
WordResponse::words() const {
  // @@protoc_insertion_point(field_list:dictionary.WordResponse.words)
  return _impl_.words_;
}

// -------------------------------------------------------------------

// WordEntry

// string word = 1;
inline void WordEntry::clear_word() {
  _impl_.word_.ClearToEmpty();
}
inline const std::string& WordEntry::word() const {
  // @@protoc_insertion_point(field_get:dictionary.WordEntry.word)
  return _internal_word();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void WordEntry::set_word(ArgT0&& arg0, ArgT... args) {
 
 _impl_.word_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dictionary.WordEntry.word)
}
inline std::string* WordEntry::mutable_word() {
  std::string* _s = _internal_mutable_word();
  // @@protoc_insertion_point(field_mutable:dictionary.WordEntry.word)
  return _s;
}
inline const std::string& WordEntry::_internal_word() const {
  return _impl_.word_.Get();
}
inline void WordEntry::_internal_set_word(const std::string& value) {
  
  _impl_.word_.Set(value, GetArenaForAllocation());
}
inline std::string* WordEntry::_internal_mutable_word() {
  
  return _impl_.word_.Mutable(GetArenaForAllocation());
}
inline std::string* WordEntry::release_word() {
  // @@protoc_insertion_point(field_release:dictionary.WordEntry.word)
  return _impl_.word_.Release();
}
inline void WordEntry::set_allocated_word(std::string* word) {
  if (word != nullptr) {
    
  } else {
    
  }
  _impl_.word_.SetAllocated(word, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.word_.IsDefault()) {
    _impl_.word_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dictionary.WordEntry.word)
}

// int32 count = 2;
inline void WordEntry::clear_count() {
  _impl_.count_ = 0;
}
inline int32_t WordEntry::_internal_count() const {
  return _impl_.count_;
}
inline int32_t WordEntry::count() const {
  // @@protoc_insertion_point(field_get:dictionary.WordEntry.count)
  return _internal_count();
}
inline void WordEntry::_internal_set_count(int32_t value) {
  
  _impl_.count_ = value;
}
inline void WordEntry::set_count(int32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:dictionary.WordEntry.count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace dictionary

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dictionary_2eproto