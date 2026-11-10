/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3154; name: FUN_002e3154
 */


void FUN_002e3154(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  void *__src;
  size_t __n;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  
  plVar1 = param_1 + 3;
  FUN_002e3cd0(plVar1);
  lVar2 = param_1[3];
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    lVar2 = lVar2 + 0x11;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_002e3cd0(plVar1,param_3);
  lVar3 = *plVar1;
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    lVar3 = lVar3 + 0x11;
    puVar7 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)param_1[2];
    if (puVar7 != puVar4) {
LAB_002e31bc:
      *puVar7 = 0;
      *(long *)(puVar7 + 2) = lVar2;
      *(long *)(puVar7 + 4) = lVar3;
      param_1[1] = param_1[1] + 0x20;
      return;
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x20);
    puVar7 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)param_1[2];
    if (puVar7 != puVar4) goto LAB_002e31bc;
  }
  lVar8 = (long)puVar7 - *param_1 >> 5;
  uVar9 = lVar8 + 1;
  if (uVar9 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = (long)puVar4 - *param_1;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
      goto LAB_002e3244;
    }
  }
  else {
    uVar9 = 0x7ffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar9 << 5);
LAB_002e3244:
  puVar7 = (undefined4 *)(lVar5 + lVar8 * 0x20);
  *puVar7 = 0;
  *(long *)(puVar7 + 2) = lVar2;
  *(long *)(puVar7 + 4) = lVar3;
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar7 - __n);
  param_1[1] = (long)(puVar7 + 8);
  param_1[2] = lVar5 + uVar9 * 0x20;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


