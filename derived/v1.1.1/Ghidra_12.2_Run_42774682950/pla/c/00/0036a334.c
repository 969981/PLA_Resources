/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036a334; name: FUN_0036a334
 */


void FUN_0036a334(long *param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  void *__s;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)puVar4 >> 3) * -0x5555555555555555)) {
    uVar11 = param_2;
    if ((param_2 & 1) != 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar11 = param_2 - 1;
      puVar4[2] = 0;
      puVar4 = (undefined8 *)(param_1[1] + 0x18);
      param_1[1] = (long)puVar4;
    }
    if (param_2 == 1) {
      return;
    }
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar11 = uVar11 - 2;
      puVar4[2] = 0;
      lVar3 = param_1[1];
      param_1[1] = lVar3 + 0x18;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      puVar4 = (undefined8 *)(param_1[1] + 0x18);
      param_1[1] = (long)puVar4;
    } while (uVar11 != 0);
    return;
  }
  lVar3 = (long)puVar4 - *param_1 >> 3;
  uVar14 = 0xaaaaaaaaaaaaaaa;
  uVar11 = lVar3 * -0x5555555555555555 + param_2;
  if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar14 = uVar11;
    if (uVar11 <= uVar7) {
      uVar14 = uVar7;
    }
    if (uVar14 != 0) goto LAB_0036a3c0;
    lVar6 = 0;
  }
  else {
LAB_0036a3c0:
    lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar14 * 0x18);
  }
  __s = (void *)(lVar6 + lVar3 * 8);
  memset(__s,0,param_2 * 0x18);
  if (param_2 < 4) {
    uVar8 = param_2 - 1;
    uVar7 = param_2 & 7;
    pvVar5 = __s;
    uVar11 = param_2;
  }
  else {
    uVar7 = param_2 & 0xfffffffffffffffc;
    uVar11 = (uVar7 - 4 >> 2) + 1;
    uVar8 = uVar11 & 7;
    if (0x1b < uVar7 - 4) {
      lVar3 = uVar11 - uVar8;
      do {
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    pvVar5 = (void *)((long)__s + uVar7 * 0x18);
    uVar11 = param_2 - uVar7;
    if (uVar8 != 0) {
      lVar3 = -uVar8;
      do {
        bVar2 = lVar3 != -1;
        lVar3 = lVar3 + 1;
      } while (bVar2);
    }
    if (uVar7 == param_2) goto LAB_0036a4ec;
    uVar8 = uVar11 - 1;
    uVar7 = uVar11 & 7;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    pvVar5 = (void *)((long)pvVar5 + 0x18);
    uVar11 = uVar11 - 1;
  }
  if (6 < uVar8) {
    do {
      pvVar5 = (void *)((long)pvVar5 + 0xc0);
      uVar11 = uVar11 - 8;
    } while (uVar11 != 0);
  }
LAB_0036a4ec:
  lVar6 = lVar6 + uVar14 * 0x18;
  plVar12 = (long *)*param_1;
  plVar9 = (long *)param_1[1];
  if (plVar9 == plVar12) {
    *param_1 = (long)__s;
    param_1[1] = (long)pvVar5;
    param_1[2] = lVar6;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)__s + lVar3 + -8) = 0;
      *(undefined8 *)((long)__s + lVar3 + -0x18) = 0;
      *(undefined8 *)((long)__s + lVar3 + -0x10) = 0;
      uVar15 = *(undefined8 *)((long)plVar9 + lVar3 + -0x18);
      lVar10 = lVar3 + -0x18;
      *(undefined8 *)((long)__s + lVar3 + -0x10) = *(undefined8 *)((long)plVar9 + lVar3 + -0x10);
      *(undefined8 *)((long)__s + lVar3 + -0x18) = uVar15;
      *(undefined8 *)((long)__s + lVar3 + -8) = *(undefined8 *)((long)plVar9 + lVar3 + -8);
      *(undefined8 *)((long)plVar9 + lVar3 + -0x18) = 0;
      *(undefined8 *)((long)plVar9 + lVar3 + -0x10) = 0;
      *(undefined8 *)((long)plVar9 + lVar3 + -8) = 0;
      lVar3 = lVar10;
    } while ((long)plVar12 - (long)plVar9 != lVar10);
    plVar12 = (long *)*param_1;
    plVar9 = (long *)param_1[1];
    *param_1 = (long)__s + lVar10;
    param_1[1] = (long)pvVar5;
    param_1[2] = lVar6;
    puVar1 = PTR_LAB_04373088;
    if (plVar9 != plVar12) {
      plVar13 = plVar9 + -3;
      lVar3 = *plVar13;
      if (lVar3 != 0) goto LAB_0036a590;
      while (plVar9 = plVar13, plVar12 != plVar13) {
        while( true ) {
          plVar13 = plVar9 + -3;
          lVar3 = *plVar13;
          if (lVar3 == 0) break;
LAB_0036a590:
          plVar9[-2] = lVar3;
          FUN_002e2ea0(puVar1);
          plVar9 = plVar13;
          if (plVar12 == plVar13) goto LAB_0036a5a8;
        }
      }
    }
  }
LAB_0036a5a8:
  if (plVar12 == (long *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar12);
  return;
}


