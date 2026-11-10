/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030d8b4; name: FUN_0030d8b4
 */


undefined8 * FUN_0030d8b4(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *__src;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = param_2;
    puVar1[1] = 3;
    *(undefined8 **)(puVar1 + 2) = puVar2;
    param_1[1] = param_1[1] + 0x10;
    return puVar2;
  }
  lVar5 = (long)puVar1 - *param_1 >> 4;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      goto LAB_0030d964;
    }
  }
  else {
    uVar6 = 0xfffffffffffffff;
  }
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,uVar6 << 4);
LAB_0030d964:
  puVar1 = (undefined4 *)(lVar3 + lVar5 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = 3;
  *(undefined8 **)(puVar1 + 2) = puVar2;
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 4);
  param_1[2] = lVar3 + uVar6 * 0x10;
  if (__src != (void *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return puVar2;
}


