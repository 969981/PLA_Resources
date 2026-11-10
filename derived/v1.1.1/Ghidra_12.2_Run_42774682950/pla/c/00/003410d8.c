/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003410d8; name: FUN_003410d8
 */


void FUN_003410d8(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    *puVar12 = *param_2;
    param_1[1] = (long)(puVar12 + 1);
    return;
  }
  puVar9 = (undefined8 *)*param_1;
  lVar11 = (long)puVar12 - (long)puVar9 >> 3;
  uVar13 = lVar11 + 1;
  if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)puVar9;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 == 0) {
      lVar4 = 0;
      goto LAB_00341160;
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar13 << 3);
  puVar9 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
LAB_00341160:
  puVar7 = (undefined8 *)(lVar4 + lVar11 * 8);
  puVar6 = puVar7 + 1;
  *puVar7 = *param_2;
  if ((long)puVar12 - (long)puVar9 != 0) {
    uVar5 = ((long)puVar12 - (long)puVar9) - 8;
    uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar11 = -((ulong)uVar1 & 3);
      do {
        puVar12 = puVar12 + -1;
        uVar8 = *puVar12;
        *puVar12 = 0;
        puVar7 = puVar7 + -1;
        *puVar7 = uVar8;
        bVar3 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar3);
    }
    if (0x17 < uVar5) {
      do {
        uVar8 = puVar12[-1];
        puVar12[-1] = 0;
        puVar7[-1] = uVar8;
        uVar8 = puVar12[-2];
        puVar12[-2] = 0;
        puVar7[-2] = uVar8;
        uVar8 = puVar12[-3];
        puVar12[-3] = 0;
        puVar7[-3] = uVar8;
        puVar12 = puVar12 + -4;
        uVar8 = *puVar12;
        *puVar12 = 0;
        puVar7 = puVar7 + -4;
        *puVar7 = uVar8;
      } while (puVar9 != puVar12);
    }
    puVar9 = (undefined8 *)*param_1;
  }
  puVar12 = (undefined8 *)param_1[1];
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar6;
  param_1[2] = lVar4 + uVar13 * 8;
  puVar2 = PTR_LAB_04373088;
  if (puVar12 != puVar9) {
    puVar12 = puVar12 + -1;
    pbVar10 = (byte *)*puVar12;
    *puVar12 = 0;
    while( true ) {
      if (pbVar10 != (byte *)0x0) {
        if ((*pbVar10 & 1) != 0) {
          FUN_002e2ea0(puVar2,*(undefined8 *)(pbVar10 + 0x10));
        }
        FUN_002e2ea0(puVar2,pbVar10);
      }
      if (puVar9 == puVar12) break;
      puVar12 = puVar12 + -1;
      pbVar10 = (byte *)*puVar12;
      *puVar12 = 0;
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  return;
}


