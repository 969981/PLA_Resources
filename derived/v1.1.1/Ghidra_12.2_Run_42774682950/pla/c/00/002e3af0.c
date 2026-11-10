/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3af0; name: FUN_002e3af0
 */


void FUN_002e3af0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  void *__src;
  size_t __n;
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_3c;
  undefined4 local_34;
  
  FUN_002e3cd0(param_1 + 3);
  lVar1 = param_1[3];
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    lVar1 = lVar1 + 0x11;
    puVar2 = (undefined4 *)param_1[1];
    puVar3 = (undefined4 *)param_1[2];
    if (puVar2 != puVar3) {
LAB_002e3b30:
      *puVar2 = 1;
      *(long *)(puVar2 + 2) = lVar1;
      puVar2[4] = param_3;
      puVar2[7] = local_34;
      *(undefined8 *)(puVar2 + 5) = local_3c;
      param_1[1] = param_1[1] + 0x20;
      return;
    }
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x20);
    puVar2 = (undefined4 *)param_1[1];
    puVar3 = (undefined4 *)param_1[2];
    if (puVar2 != puVar3) goto LAB_002e3b30;
  }
  lVar6 = (long)puVar2 - *param_1 >> 5;
  uVar7 = lVar6 + 1;
  if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)puVar3 - *param_1;
  if ((ulong)(lVar4 >> 5) < 0x3ffffffffffffff) {
    uVar5 = lVar4 >> 4;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
      goto LAB_002e3bc4;
    }
  }
  else {
    uVar7 = 0x7ffffffffffffff;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar7 << 5);
LAB_002e3bc4:
  puVar2 = (undefined4 *)(lVar4 + lVar6 * 0x20);
  *puVar2 = 1;
  *(long *)(puVar2 + 2) = lVar1;
  puVar2[4] = param_3;
  puVar2[7] = local_34;
  *(undefined8 *)(puVar2 + 5) = local_3c;
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar2 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar2 - __n);
  param_1[1] = (long)(puVar2 + 8);
  param_1[2] = lVar4 + uVar7 * 0x20;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


