// iota is not part of the C++ standard.  It is an extension.
// This code lifted from SGI's stl_numeric.h

template <class _ForwardIterator, class _Tp>
void 
iota(_ForwardIterator __first, _ForwardIterator __last, _Tp __value)
{
  while (__first != __last)
    *__first++ = __value++;
}
