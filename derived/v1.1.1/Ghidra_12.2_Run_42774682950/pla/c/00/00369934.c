/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00369934; name: FUN_00369934
 */


void FUN_00369934(long *param_1,ulong param_2)

{
  void *__src;
  size_t __n;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar7 >> 4)) {
    if (param_2 < 4) {
      uVar4 = param_2 - 1;
      uVar8 = param_2 & 3;
      puVar3 = puVar7;
      uVar2 = param_2;
    }
    else {
      uVar4 = param_2 & 0xfffffffffffffffc;
      puVar3 = puVar7 + uVar4 * 2;
      uVar2 = param_2 - uVar4;
      puVar7 = puVar7 + 4;
      uVar8 = uVar4;
      do {
        puVar7[-4] = 0;
        uVar8 = uVar8 - 4;
        puVar7[-2] = 0;
        *puVar7 = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + -3) = 0;
        *(undefined4 *)(puVar7 + -1) = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar7 = puVar7 + 8;
      } while (uVar8 != 0);
      if (uVar4 == param_2) goto LAB_00369b48;
      uVar4 = uVar2 - 1;
      uVar8 = uVar2 & 3;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = 0;
      uVar2 = uVar2 - 1;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = puVar3 + 2;
    }
    if (2 < uVar4) {
      do {
        *puVar3 = 0;
        uVar2 = uVar2 - 4;
        *(undefined4 *)(puVar3 + 1) = 0;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 0;
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[6] = 0;
        *(undefined4 *)(puVar3 + 7) = 0;
        puVar3 = puVar3 + 8;
      } while (uVar2 != 0);
    }
LAB_00369b48:
    param_1[1] = (long)puVar3;
    return;
  }
  lVar9 = (long)puVar7 - *param_1 >> 4;
  uVar8 = lVar9 + param_2;
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1;
  if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
    uVar2 = lVar1 >> 3;
    if (uVar8 <= uVar2) {
      uVar8 = uVar2;
    }
    if (uVar8 != 0) goto LAB_00369b60;
    lVar1 = 0;
    puVar7 = (undefined8 *)(lVar9 << 4);
  }
  else {
    uVar8 = 0xfffffffffffffff;
LAB_00369b60:
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 4);
    puVar7 = (undefined8 *)(lVar1 + lVar9 * 0x10);
  }
  if (param_2 < 4) {
    uVar5 = param_2 - 1;
    uVar2 = param_2 & 3;
    puVar3 = puVar7;
    uVar4 = param_2;
  }
  else {
    uVar5 = param_2 & 0xfffffffffffffffc;
    puVar3 = puVar7 + uVar5 * 2;
    uVar4 = param_2 - uVar5;
    puVar6 = puVar7 + 4;
    uVar2 = uVar5;
    do {
      puVar6[-4] = 0;
      uVar2 = uVar2 - 4;
      puVar6[-2] = 0;
      *puVar6 = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + -3) = 0;
      *(undefined4 *)(puVar6 + -1) = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      puVar6 = puVar6 + 8;
    } while (uVar2 != 0);
    if (uVar5 == param_2) goto LAB_00369a40;
    uVar5 = uVar4 - 1;
    uVar2 = uVar4 & 3;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    uVar4 = uVar4 - 1;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3 = puVar3 + 2;
  }
  if (2 < uVar5) {
    do {
      *puVar3 = 0;
      uVar4 = uVar4 - 4;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3 = puVar3 + 8;
    } while (uVar4 != 0);
  }
LAB_00369a40:
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar7 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar7 - __n);
  param_1[1] = (long)puVar3;
  param_1[2] = lVar1 + uVar8 * 0x10;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


