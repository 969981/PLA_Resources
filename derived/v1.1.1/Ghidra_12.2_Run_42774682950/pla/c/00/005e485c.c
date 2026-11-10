/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e485c; name: FUN_005e485c
 */


undefined8 * FUN_005e485c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar10) {
      *(undefined8 *)((long)param_2 + 0x44) = 0;
      *(undefined8 *)((long)param_2 + 0x3c) = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_1[1] = param_1[1] + 0x4c;
      return param_2;
    }
    sVar2 = (long)puVar10 + (-0x4c - (long)param_2);
    puVar5 = (undefined8 *)((long)puVar10 + -0x4c);
    if (puVar5 < puVar10) {
      puVar8 = puVar10;
      do {
        uVar14 = *puVar5;
        puVar8[1] = puVar5[1];
        *puVar8 = uVar14;
        uVar15 = puVar5[3];
        uVar14 = puVar5[2];
        uVar17 = puVar5[5];
        uVar16 = puVar5[4];
        uVar19 = puVar5[7];
        uVar18 = puVar5[6];
        puVar1 = (undefined8 *)((long)puVar5 + 0x44);
        uVar20 = *(undefined8 *)((long)puVar5 + 0x3c);
        puVar5 = (undefined8 *)((long)puVar5 + 0x4c);
        *(undefined8 *)((long)puVar8 + 0x44) = *puVar1;
        *(undefined8 *)((long)puVar8 + 0x3c) = uVar20;
        puVar8[5] = uVar17;
        puVar8[4] = uVar16;
        puVar8[7] = uVar19;
        puVar8[6] = uVar18;
        puVar8[3] = uVar15;
        puVar8[2] = uVar14;
        puVar8 = (undefined8 *)(param_1[1] + 0x4c);
        param_1[1] = (long)puVar8;
      } while (puVar5 < puVar10);
    }
    if (sVar2 != 0) {
      memmove((void *)((long)puVar10 - sVar2),param_2,sVar2);
    }
    param_2[1] = 0;
    *param_2 = 0;
    *(undefined8 *)((long)param_2 + 0x44) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return param_2;
  }
  lVar9 = *param_1;
  uVar3 = ((long)puVar10 - lVar9 >> 2) * -0x79435e50d79435e5 + 1;
  uVar12 = 0x35e50d79435e50d;
  if (0x35e50d79435e50d < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - lVar9 >> 2;
  lVar13 = (long)param_2 - lVar9 >> 2;
  if ((ulong)(lVar6 * -0x79435e50d79435e5) < 0x1af286bca1af286) {
    uVar7 = lVar6 * 0xd79435e50d79436;
    uVar12 = uVar3;
    if (uVar3 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      lVar6 = 0;
      goto LAB_005e49c8;
    }
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x4c);
LAB_005e49c8:
  puVar10 = (undefined8 *)(lVar6 + lVar13 * 4);
  lVar11 = lVar6 + uVar12 * 0x4c;
  if (lVar13 * -0x79435e50d79435e5 == uVar12) {
    lVar4 = lVar13 * -0x79435e50d79435e5;
    if (lVar13 * -0x79435e50d79435e5 < 1) {
      uVar12 = lVar13 * 0xd79435e50d79436;
      if ((long)param_2 - lVar9 == 0) {
        uVar12 = 1;
      }
      lVar11 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x4c);
      puVar10 = (undefined8 *)(lVar11 + (uVar12 >> 2) * 0x4c);
      lVar11 = lVar11 + uVar12 * 0x4c;
      if (lVar6 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,lVar6);
      }
    }
    else {
      lVar9 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar9 = lVar4 + 1;
      }
      puVar10 = (undefined8 *)((long)puVar10 + (lVar9 >> 1) * -0x4c);
    }
  }
  *(undefined8 *)((long)puVar10 + 0x44) = 0;
  *(undefined8 *)((long)puVar10 + 0x3c) = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  puVar10[7] = 0;
  puVar10[6] = 0;
  __dest = (void *)((long)puVar10 + 0x4c);
  puVar10[1] = 0;
  *puVar10 = 0;
  puVar10[3] = 0;
  puVar10[2] = 0;
  sVar2 = (long)param_2 - *param_1;
  if (0 < (long)sVar2) {
    memcpy((void *)((long)puVar10 - sVar2),(void *)*param_1,sVar2);
  }
  __n = param_1[1] - (long)param_2;
  if (0 < (long)__n) {
    memcpy(__dest,param_2,__n);
    __dest = (void *)((long)__dest + (__n / 0x4c) * 0x4c);
  }
  lVar9 = *param_1;
  *param_1 = (long)((long)puVar10 - sVar2);
  param_1[1] = (long)__dest;
  param_1[2] = lVar11;
  if (lVar9 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return puVar10;
}


