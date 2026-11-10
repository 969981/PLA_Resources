/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00369750; name: FUN_00369750
 */


void FUN_00369750(long *param_1,ulong param_2)

{
  void *__s;
  bool bVar1;
  void *__src;
  size_t __n;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar2 >> 3)) {
    uVar8 = param_2;
    if ((param_2 & 1) != 0) {
      *puVar2 = 0;
      puVar2 = (undefined8 *)(param_1[1] + 8);
      uVar8 = param_2 - 1;
      param_1[1] = (long)puVar2;
    }
    if (param_2 == 1) {
      return;
    }
    do {
      *puVar2 = 0;
      lVar7 = param_1[1];
      param_1[1] = lVar7 + 8;
      *(undefined8 *)(lVar7 + 8) = 0;
      puVar2 = (undefined8 *)(param_1[1] + 8);
      uVar8 = uVar8 - 2;
      param_1[1] = (long)puVar2;
    } while (uVar8 != 0);
    return;
  }
  lVar7 = (long)puVar2 - *param_1 >> 3;
  uVar8 = lVar7 + param_2;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) goto LAB_0036980c;
    lVar5 = 0;
  }
  else {
    uVar8 = 0x1fffffffffffffff;
LAB_0036980c:
    lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar8 << 3);
  }
  __s = (void *)(lVar5 + lVar7 * 8);
  memset(__s,0,param_2 << 3);
  if (param_2 < 4) {
    uVar3 = param_2 - 1;
    uVar4 = param_2 & 7;
    pvVar9 = __s;
    uVar6 = param_2;
  }
  else {
    uVar4 = param_2 & 0xfffffffffffffffc;
    uVar6 = (uVar4 - 4 >> 2) + 1;
    uVar3 = uVar6 & 7;
    if (0x1b < uVar4 - 4) {
      lVar7 = uVar6 - uVar3;
      do {
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    pvVar9 = (void *)((long)__s + uVar4 * 8);
    uVar6 = param_2 - uVar4;
    if (uVar3 != 0) {
      lVar7 = -uVar3;
      do {
        bVar1 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar1);
    }
    if (uVar4 == param_2) goto LAB_003698cc;
    uVar3 = uVar6 - 1;
    uVar4 = uVar6 & 7;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    pvVar9 = (void *)((long)pvVar9 + 8);
    uVar6 = uVar6 - 1;
  }
  if (6 < uVar3) {
    do {
      pvVar9 = (void *)((long)pvVar9 + 0x40);
      uVar6 = uVar6 - 8;
    } while (uVar6 != 0);
  }
LAB_003698cc:
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)__s - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)__s - __n);
  param_1[1] = (long)pvVar9;
  param_1[2] = lVar5 + uVar8 * 8;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


