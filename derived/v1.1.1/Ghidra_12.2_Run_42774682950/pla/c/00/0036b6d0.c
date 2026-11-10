/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036b6d0; name: FUN_0036b6d0
 */


void FUN_0036b6d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar14 = param_2[1];
    uVar13 = *param_2;
    puVar9[2] = param_2[2];
    puVar9[1] = uVar14;
    *puVar9 = uVar13;
    uVar14 = param_2[4];
    uVar13 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar9[5] = param_2[5];
    puVar9[4] = uVar14;
    puVar9[3] = uVar13;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar9[8] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    uVar13 = param_2[6];
    puVar9[7] = param_2[7];
    puVar9[6] = uVar13;
    puVar9[8] = param_2[8];
    uVar13 = param_2[9];
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    puVar9[10] = param_2[10];
    puVar9[9] = uVar13;
    param_1[1] = param_1[1] + 0x58;
    return;
  }
  lVar6 = (long)puVar9 - *param_1 >> 3;
  uVar12 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar6 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar8 = lVar7 * 0x5d1745d1745d1746;
    uVar12 = uVar1;
    if (uVar1 <= uVar8) {
      uVar12 = uVar8;
    }
    if (uVar12 == 0) {
      lVar7 = 0;
      goto LAB_0036b7dc;
    }
  }
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar12 * 0x58);
LAB_0036b7dc:
  puVar9 = (undefined8 *)(lVar7 + lVar6 * 8);
  uVar14 = param_2[1];
  uVar13 = *param_2;
  puVar9[2] = param_2[2];
  lVar7 = lVar7 + uVar12 * 0x58;
  puVar9[1] = uVar14;
  *puVar9 = uVar13;
  uVar14 = param_2[4];
  uVar13 = param_2[3];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar9[5] = param_2[5];
  puVar9[4] = uVar14;
  puVar9[3] = uVar13;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar9[8] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  uVar13 = param_2[6];
  puVar9[7] = param_2[7];
  puVar9[6] = uVar13;
  puVar9[8] = param_2[8];
  uVar13 = param_2[9];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  puVar9[10] = param_2[10];
  puVar9[9] = uVar13;
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    *param_1 = (long)puVar9;
    param_1[1] = (long)(puVar9 + 0xb);
    param_1[2] = lVar7;
  }
  else {
    lVar10 = 0;
    do {
      lVar2 = lVar3 + lVar10;
      uVar14 = *(undefined8 *)(lVar2 + -0x50);
      uVar13 = *(undefined8 *)(lVar2 + -0x58);
      lVar11 = lVar10 + -0x58;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x48) = *(undefined8 *)(lVar2 + -0x48);
      *(undefined8 *)((long)puVar9 + lVar10 + -0x50) = uVar14;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x58) = uVar13;
      uVar14 = *(undefined8 *)(lVar2 + -0x38);
      uVar13 = *(undefined8 *)(lVar2 + -0x40);
      *(undefined8 *)(lVar2 + -0x58) = 0;
      *(undefined8 *)(lVar2 + -0x50) = 0;
      *(undefined8 *)(lVar2 + -0x48) = 0;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
      *(undefined8 *)((long)puVar9 + lVar10 + -0x38) = uVar14;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x40) = uVar13;
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x18) = 0;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x28) = 0;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x20) = 0;
      uVar13 = *(undefined8 *)(lVar2 + -0x28);
      *(undefined8 *)((long)puVar9 + lVar10 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
      *(undefined8 *)((long)puVar9 + lVar10 + -0x28) = uVar13;
      *(undefined8 *)((long)puVar9 + lVar10 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      uVar13 = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)((long)puVar9 + lVar10 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)((long)puVar9 + lVar10 + -0x10) = uVar13;
      lVar10 = lVar11;
    } while (lVar6 - lVar3 != lVar11);
    lVar6 = *param_1;
    lVar3 = param_1[1];
    *param_1 = (long)puVar9 + lVar11;
    param_1[1] = (long)(puVar9 + 0xb);
    param_1[2] = lVar7;
    puVar5 = PTR_LAB_04373088;
    if (lVar3 != lVar6) {
      lVar7 = *(long *)(lVar3 + -0x28);
      while( true ) {
        if (lVar7 != 0) {
          *(long *)(lVar3 + -0x20) = lVar7;
          FUN_002e2ea0(puVar5);
        }
        if ((*(byte *)(lVar3 + -0x40) & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + -0x58);
        }
        else {
          FUN_002e2ea0(puVar5,*(undefined8 *)(lVar3 + -0x30));
          bVar4 = *(byte *)(lVar3 + -0x58);
        }
        if ((bVar4 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(lVar3 + -0x48));
        }
        if (lVar6 == lVar3 + -0x58) break;
        lVar7 = *(long *)(lVar3 + -0x80);
        lVar3 = lVar3 + -0x58;
      }
    }
  }
  if (lVar6 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar6);
  return;
}


