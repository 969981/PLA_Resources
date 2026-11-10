/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027627d4; name: FUN_027627d4
 */


void FUN_027627d4(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                 size_t param_6,void *param_7)

{
  size_t __n;
  void *__dest;
  byte *pbVar1;
  ulong uVar2;
  
  if (-param_2 - 0x12 < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((*param_1 & 1) == 0) {
    pbVar1 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar1 = (byte *)param_1[2];
  }
  if (param_2 < 0x7fffffffffffffe7) {
    uVar2 = param_2 << 1;
    if (param_2 << 1 <= param_3 + param_2) {
      uVar2 = param_3 + param_2;
    }
    if (uVar2 < 0x17) {
      uVar2 = 0x17;
    }
    else {
      uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffef;
  }
  __dest = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar2,1);
  if (param_6 != 0) {
    memcpy(__dest,param_7,param_6);
  }
  __n = param_4 - param_5;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_6),pbVar1 + param_5,__n);
  }
  if (param_2 + 1 != 0x17) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar1,param_2 + 1,1);
  }
  *param_1 = uVar2 | 1;
  param_1[1] = __n + param_6;
  param_1[2] = (ulong)__dest;
  *(undefined1 *)((long)__dest + __n + param_6) = 0;
  return;
}


