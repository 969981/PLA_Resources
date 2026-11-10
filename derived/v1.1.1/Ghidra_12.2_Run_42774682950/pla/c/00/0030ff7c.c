/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030ff7c; name: FUN_0030ff7c
 */


void FUN_0030ff7c(ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  void *__dest;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  void *__src;
  ulong uVar9;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  bVar4 = (byte)*param_1;
  uVar7 = (ulong)bVar4;
  if ((bVar4 & 1) == 0) {
    uVar9 = (ulong)(bVar4 >> 1);
    lVar8 = 0x16;
  }
  else {
    uVar7 = *param_1;
    uVar9 = param_1[1];
    lVar8 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  uVar6 = (uint)uVar7;
  uVar2 = uVar9;
  if (uVar9 <= param_2) {
    uVar2 = param_2;
  }
  lVar3 = 0x16;
  if (0x16 < uVar2) {
    lVar3 = (uVar2 + 0x10 & 0xfffffffffffffff0) - 1;
  }
  if (lVar3 == lVar8) {
    return;
  }
  if (lVar3 == 0x16) {
    __src = (void *)param_1[2];
    bVar5 = false;
    __dest = (void *)((long)param_1 + 1);
    bVar1 = true;
    if ((uVar7 & 1) == 0) {
LAB_00310038:
      uVar7 = (ulong)(uVar6 >> 1 & 0x7f);
      goto joined_r0x00310040;
    }
  }
  else {
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,lVar3 + 1);
    bVar4 = (byte)*param_1;
    uVar6 = (uint)bVar4;
    bVar1 = (bVar4 & 1) != 0;
    if (bVar1) {
      __src = (void *)param_1[2];
    }
    else {
      __src = (void *)((long)param_1 + 1);
    }
    bVar5 = true;
    if ((bVar4 & 1) == 0) goto LAB_00310038;
  }
  uVar7 = param_1[1];
joined_r0x00310040:
  if (uVar7 != 0xffffffffffffffff) {
    memcpy(__dest,__src,uVar7 + 1);
  }
  if (bVar1) {
    FUN_002e2ea0(PTR_LAB_04373088,__src);
  }
  if (bVar5) {
    param_1[2] = (ulong)__dest;
    *param_1 = lVar3 + 1U | 1;
    param_1[1] = uVar9;
  }
  else {
    *(char *)param_1 = (char)((int)uVar9 << 1);
  }
  return;
}


