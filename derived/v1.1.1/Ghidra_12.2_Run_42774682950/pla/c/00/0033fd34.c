/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033fd34; name: FUN_0033fd34
 */


undefined8 FUN_0033fd34(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
  }
  uStack_40 = param_3;
  local_38 = param_4;
  uVar3 = FUN_0036a5f0(param_1 + 0x130,&local_48);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  pbVar1 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x10);
  }
  plVar2 = *(long **)(param_1 + 0x1b8);
  if (plVar2 < *(long **)(param_1 + 0x1c0)) {
    *plVar2 = (long)pbVar1;
    *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + 8;
    return 1;
  }
  lVar5 = *(long *)(param_1 + 0x1b0);
  lVar6 = (long)plVar2 - lVar5 >> 3;
  uVar3 = lVar6 + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)*(long **)(param_1 + 0x1c0) - lVar5;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar5 >> 2;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar3 == 0) {
      lVar5 = 0;
      goto LAB_0033fe08;
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar3 << 3);
LAB_0033fe08:
  plVar2 = (long *)(lVar5 + lVar6 * 8);
  *plVar2 = (long)pbVar1;
  __src = *(void **)(param_1 + 0x1b0);
  __n = *(long *)(param_1 + 0x1b8) - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)plVar2 - __n),__src,__n);
    __src = *(void **)(param_1 + 0x1b0);
  }
  *(void **)(param_1 + 0x1b0) = (void *)((long)plVar2 - __n);
  *(long **)(param_1 + 0x1b8) = plVar2 + 1;
  *(ulong *)(param_1 + 0x1c0) = lVar5 + uVar3 * 8;
  if (__src != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return 1;
}


