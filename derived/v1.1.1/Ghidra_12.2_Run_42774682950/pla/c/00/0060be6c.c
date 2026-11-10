/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060be6c; name: FUN_0060be6c
 */


void FUN_0060be6c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    uVar4 = *param_2;
    *param_2 = 0;
    *puVar12 = uVar4;
    param_1[1] = param_1[1] + 8;
    return;
  }
  lVar11 = (long)puVar12 - *param_1 >> 3;
  uVar9 = lVar11 + 1;
  if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
      goto LAB_0060befc;
    }
  }
  else {
    uVar9 = 0x1fffffffffffffff;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,uVar9 << 3);
LAB_0060befc:
  uVar4 = *param_2;
  puVar12 = (undefined8 *)(lVar5 + lVar11 * 8);
  *param_2 = 0;
  lVar5 = lVar5 + uVar9 * 8;
  puVar7 = puVar12 + 1;
  *puVar12 = uVar4;
  puVar10 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  if ((long)puVar8 - (long)puVar10 == 0) {
    *param_1 = (long)puVar12;
    param_1[1] = (long)puVar7;
    param_1[2] = lVar5;
  }
  else {
    uVar9 = ((long)puVar8 - (long)puVar10) - 8;
    uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar11 = -((ulong)uVar1 & 3);
      do {
        puVar8 = puVar8 + -1;
        uVar4 = *puVar8;
        *puVar8 = 0;
        puVar12 = puVar12 + -1;
        *puVar12 = uVar4;
        bVar3 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar9) {
      do {
        uVar4 = puVar8[-1];
        puVar8[-1] = 0;
        puVar12[-1] = uVar4;
        uVar4 = puVar8[-2];
        puVar8[-2] = 0;
        puVar12[-2] = uVar4;
        uVar4 = puVar8[-3];
        puVar8[-3] = 0;
        puVar12[-3] = uVar4;
        puVar8 = puVar8 + -4;
        uVar4 = *puVar8;
        *puVar8 = 0;
        puVar12 = puVar12 + -4;
        *puVar12 = uVar4;
      } while (puVar10 != puVar8);
    }
    puVar10 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar12;
    param_1[1] = (long)puVar7;
    param_1[2] = lVar5;
    puVar2 = PTR_LAB_04373088;
    if (puVar8 != puVar10) {
      puVar8 = puVar8 + -1;
      puVar12 = (undefined8 *)*puVar8;
      *puVar8 = 0;
      if (puVar12 != (undefined8 *)0x0) goto LAB_0060bfe0;
      while (puVar10 != puVar8) {
        while( true ) {
          puVar8 = puVar8 + -1;
          puVar12 = (undefined8 *)*puVar8;
          *puVar8 = 0;
          if (puVar12 == (undefined8 *)0x0) break;
LAB_0060bfe0:
          (**(code **)*puVar12)(puVar12);
          FUN_002e2ea0(puVar2,puVar12);
          if (puVar10 == puVar8) goto LAB_0060c004;
        }
      }
    }
  }
LAB_0060c004:
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar10);
  return;
}


