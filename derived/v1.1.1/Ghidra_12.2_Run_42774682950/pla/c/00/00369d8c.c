/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00369d8c; name: FUN_00369d8c
 */


void FUN_00369d8c(long *param_1,ulong param_2)

{
  uint uVar1;
  void *__s;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  __s = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s >> 3)) {
    memset(__s,0,param_2 * 8);
    param_1[1] = (long)((long)__s + param_2 * 8);
    return;
  }
  lVar10 = (long)__s - *param_1 >> 3;
  uVar7 = lVar10 + param_2;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    uVar13 = uVar7;
    if (uVar7 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 == 0) {
      lVar4 = 0;
      goto LAB_00369e2c;
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 3);
LAB_00369e2c:
  puVar11 = (undefined8 *)(lVar4 + lVar10 * 8);
  lVar10 = lVar4 + uVar13 * 8;
  memset(puVar11,0,param_2 << 3);
  lVar4 = lVar4 + uVar7 * 8;
  puVar12 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)param_1[1];
  if ((long)puVar6 - (long)puVar12 == 0) {
    *param_1 = (long)puVar11;
    param_1[1] = lVar4;
    param_1[2] = lVar10;
  }
  else {
    uVar7 = ((long)puVar6 - (long)puVar12) - 8;
    uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar8 = -((ulong)uVar1 & 3);
      do {
        puVar6 = puVar6 + -1;
        uVar9 = *puVar6;
        *puVar6 = 0;
        puVar11 = puVar11 + -1;
        *puVar11 = uVar9;
        bVar3 = lVar8 != -1;
        lVar8 = lVar8 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar7) {
      do {
        uVar9 = puVar6[-1];
        puVar6[-1] = 0;
        puVar11[-1] = uVar9;
        uVar9 = puVar6[-2];
        puVar6[-2] = 0;
        puVar11[-2] = uVar9;
        uVar9 = puVar6[-3];
        puVar6[-3] = 0;
        puVar11[-3] = uVar9;
        puVar6 = puVar6 + -4;
        uVar9 = *puVar6;
        *puVar6 = 0;
        puVar11 = puVar11 + -4;
        *puVar11 = uVar9;
      } while (puVar12 != puVar6);
    }
    puVar12 = (undefined8 *)*param_1;
    puVar6 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar11;
    param_1[1] = lVar4;
    param_1[2] = lVar10;
    puVar2 = PTR_LAB_04373088;
    if (puVar6 != puVar12) {
      puVar6 = puVar6 + -1;
      puVar11 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar11 != (undefined8 *)0x0) goto LAB_00369f14;
      while (puVar12 != puVar6) {
        while( true ) {
          puVar6 = puVar6 + -1;
          puVar11 = (undefined8 *)*puVar6;
          *puVar6 = 0;
          if (puVar11 == (undefined8 *)0x0) break;
LAB_00369f14:
          (**(code **)*puVar11)(puVar11);
          FUN_002e2ea0(puVar2,puVar11);
          if (puVar12 == puVar6) goto LAB_00369f38;
        }
      }
    }
  }
LAB_00369f38:
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar12);
  return;
}


