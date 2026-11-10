/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00340230; name: FUN_00340230
 */


undefined8 FUN_00340230(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *local_40;
  undefined8 *puStack_38;
  
  local_40 = (byte *)*param_2;
  puStack_38 = param_2;
  if ((*local_40 & 1) == 0) {
    local_40 = local_40 + 1;
    uVar1 = FUN_0036a8a0(param_1 + 0x158,&local_40);
  }
  else {
    local_40 = *(byte **)(local_40 + 0x10);
    uVar1 = FUN_0036a8a0(param_1 + 0x158,&local_40);
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  pbVar2 = (byte *)*param_2;
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
    plVar5 = *(long **)(param_1 + 0x1d0);
    plVar3 = *(long **)(param_1 + 0x1d8);
    if (plVar5 < plVar3) {
LAB_003402f8:
      *plVar5 = (long)pbVar2;
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + 8;
      return 1;
    }
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
    plVar5 = *(long **)(param_1 + 0x1d0);
    plVar3 = *(long **)(param_1 + 0x1d8);
    if (plVar5 < plVar3) goto LAB_003402f8;
  }
  lVar6 = *(long *)(param_1 + 0x1c8);
  lVar7 = (long)plVar5 - lVar6 >> 3;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)plVar3 - lVar6;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar6 >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
      goto LAB_00340320;
    }
  }
  else {
    uVar1 = 0x1fffffffffffffff;
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar1 << 3);
LAB_00340320:
  plVar5 = (long *)(lVar6 + lVar7 * 8);
  *plVar5 = (long)pbVar2;
  __src = *(void **)(param_1 + 0x1c8);
  __n = *(long *)(param_1 + 0x1d0) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)plVar5 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x1c8);
  }
  *(void **)(param_1 + 0x1c8) = (void *)((long)plVar5 - __n);
  *(long **)(param_1 + 0x1d0) = plVar5 + 1;
  *(ulong *)(param_1 + 0x1d8) = lVar6 + uVar1 * 8;
  if (__src != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return 1;
}


