/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e5a60; name: FUN_002e5a60
 */


void FUN_002e5a60(ulong *param_1,ulong param_2)

{
  byte bVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  bVar1 = (byte)*param_1;
  uVar2 = (ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = param_1[1];
  }
  if (param_2 <= uVar3) {
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + param_2 + 1) = 0;
      *(char *)param_1 = (char)((int)param_2 << 1);
      return;
    }
    *(undefined1 *)(param_1[2] + param_2) = 0;
    param_1[1] = param_2;
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 == 0) {
    return;
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    uVar5 = 0x16;
    uVar4 = 0x16 - uVar3;
  }
  else {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar5 = (uVar2 & 0xfffffffffffffffe) - 1;
    uVar4 = uVar5 - uVar3;
  }
  if (param_2 <= uVar4) {
    if ((uVar2 & 1) == 0) {
      *(char *)param_1 = (char)((int)(uVar3 + param_2) << 1);
      *(undefined1 *)((long)param_1 + uVar3 + param_2 + 1) = 0;
      return;
    }
    goto LAB_002e5bd0;
  }
  uVar2 = uVar3 + param_2;
  if (-uVar5 - 0x11 < uVar2 - uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((bVar1 & 1) == 0) {
    __src = (void *)((long)param_1 + 1);
    if (uVar5 < 0x7fffffffffffffe7) goto LAB_002e5b60;
LAB_002e5b44:
    uVar2 = 0xffffffffffffffef;
  }
  else {
    __src = (void *)param_1[2];
    if (0x7fffffffffffffe6 < uVar5) goto LAB_002e5b44;
LAB_002e5b60:
    uVar4 = uVar5 << 1;
    if (uVar5 << 1 <= uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = 0x17;
    if (0x16 < uVar4) {
      uVar2 = uVar4 + 0x10 & 0xfffffffffffffff0;
    }
  }
  __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
  if (uVar3 != 0) {
    memcpy(__dest,__src,uVar3);
  }
  if (uVar5 != 0x16) {
    FUN_002e2ea0(PTR_LAB_04373088,__src);
  }
  param_1[2] = (ulong)__dest;
  *param_1 = uVar2 | 1;
LAB_002e5bd0:
  param_1[1] = uVar3 + param_2;
  *(undefined1 *)(param_1[2] + uVar3 + param_2) = 0;
  return;
}


