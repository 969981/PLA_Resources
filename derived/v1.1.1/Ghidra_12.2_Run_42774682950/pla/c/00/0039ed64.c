/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039ed64; name: FUN_0039ed64
 */


void FUN_0039ed64(undefined8 *param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  void *__src;
  size_t __n;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  
  if (*(char *)(param_3 + 9) == '\0') {
    if ((*(byte *)(param_3 + 10) & 1) != 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_0032e0bc(param_3);
    if (iVar2 < 1) {
      return;
    }
  }
  lVar3 = *(long *)(param_3 + 0x10);
  plVar6 = *(long **)param_1[2];
  if (lVar3 == 0) {
    lVar3 = FUN_003425d4(param_1[1],*param_1,param_2);
    plVar1 = (long *)plVar6[1];
    if (plVar1 < (long *)plVar6[2]) {
      *plVar1 = lVar3;
      goto LAB_0039ede4;
    }
    lVar7 = (long)plVar1 - *plVar6 >> 3;
    uVar8 = lVar7 + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_0039ef2c;
    lVar4 = plVar6[2] - *plVar6;
    if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
      uVar5 = lVar4 >> 2;
      if (uVar8 <= uVar5) {
        uVar8 = uVar5;
      }
      if (uVar8 != 0) goto LAB_0039eef4;
      lVar4 = 0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_0039eef4:
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
    }
    plVar1 = (long *)(lVar4 + lVar7 * 8);
    lVar4 = lVar4 + uVar8 * 8;
    *plVar1 = lVar3;
    __src = (void *)*plVar6;
    __n = plVar6[1] - (long)__src;
    __dest = (void *)((long)plVar1 - __n);
    goto joined_r0x0039ef24;
  }
  plVar1 = (long *)plVar6[1];
  if (plVar1 != (long *)plVar6[2]) {
    *plVar1 = lVar3;
LAB_0039ede4:
    plVar6[1] = plVar6[1] + 8;
    return;
  }
  lVar7 = (long)plVar1 - *plVar6 >> 3;
  uVar8 = lVar7 + 1;
  if (uVar8 >> 0x3d != 0) {
LAB_0039ef2c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = plVar6[2] - *plVar6;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) goto LAB_0039ee78;
    lVar4 = 0;
  }
  else {
    uVar8 = 0x1fffffffffffffff;
LAB_0039ee78:
    lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
    lVar3 = *(long *)(param_3 + 0x10);
  }
  plVar1 = (long *)(lVar4 + lVar7 * 8);
  lVar4 = lVar4 + uVar8 * 8;
  *plVar1 = lVar3;
  __src = (void *)*plVar6;
  __n = plVar6[1] - (long)__src;
  __dest = (void *)((long)plVar1 - __n);
joined_r0x0039ef24:
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = (void *)*plVar6;
  }
  *plVar6 = (long)__dest;
  plVar6[1] = (long)(plVar1 + 1);
  plVar6[2] = lVar4;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


