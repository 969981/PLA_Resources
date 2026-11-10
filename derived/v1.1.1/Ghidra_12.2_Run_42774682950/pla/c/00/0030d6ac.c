/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030d6ac; name: FUN_0030d6ac
 */


void FUN_0030d6ac(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *__src;
  size_t __n;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = param_2;
    puVar1[1] = 1;
    puVar1[2] = param_3;
    param_1[1] = param_1[1] + 0x10;
    return;
  }
  lVar4 = (long)puVar1 - *param_1 >> 4;
  uVar5 = lVar4 + 1;
  if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1;
  if ((ulong)(lVar2 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar2 >> 3;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      lVar2 = 0;
      goto LAB_0030d74c;
    }
  }
  else {
    uVar5 = 0xfffffffffffffff;
  }
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,uVar5 << 4);
LAB_0030d74c:
  puVar1 = (undefined4 *)(lVar2 + lVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = 1;
  puVar1[2] = param_3;
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 4);
  param_1[2] = lVar2 + uVar5 * 0x10;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


