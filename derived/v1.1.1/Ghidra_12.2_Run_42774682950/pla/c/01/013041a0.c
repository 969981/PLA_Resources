/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013041a0; name: FUN_013041a0
 */


void FUN_013041a0(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined8 uVar17;
  ushort *puVar18;
  undefined8 uVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  
LAB_013041d8:
  puVar20 = param_2 + -0x18;
  puVar21 = param_1;
LAB_013041e4:
  param_1 = puVar21;
  uVar13 = (long)param_2 - (long)param_1;
  switch(((long)uVar13 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_01304550_caseD_0;
  case 2:
    if (*puVar20 < *param_1) {
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 4);
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0xc);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      uVar7 = *(undefined8 *)(param_1 + 0x14);
      uVar19 = *(undefined8 *)(param_2 + -0x10);
      uVar8 = *(undefined8 *)(param_2 + -0xc);
      uVar9 = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(undefined8 *)(param_1 + 8) = uVar19;
      *(undefined8 *)(param_1 + 0xc) = uVar8;
      uVar19 = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)param_1 = *(undefined8 *)puVar20;
      *(undefined8 *)(param_1 + 4) = uVar19;
      *(undefined8 *)puVar20 = uVar2;
      *(undefined8 *)(param_2 + -0x14) = uVar4;
      *(undefined8 *)(param_2 + -8) = uVar6;
      *(undefined8 *)(param_2 + -4) = uVar7;
      *(undefined8 *)(param_2 + -0x10) = uVar3;
      *(undefined8 *)(param_2 + -0xc) = uVar5;
      return;
    }
    return;
  case 3:
    FUN_013046b0(param_1,param_1 + 0x18,puVar20);
    return;
  case 4:
    FUN_013048a0(param_1,param_1 + 0x18,param_1 + 0x30,puVar20);
    return;
  case 5:
    FUN_01304a00(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,puVar20);
    return;
  default:
    if ((long)uVar13 < 0x5d0) {
      FUN_01304bd0(param_1,param_2);
      return;
    }
    puVar21 = param_1 + (uVar13 / 0x60) * 0x18;
    if ((long)uVar13 < 0xbb51) {
      iVar11 = FUN_013046b0(param_1,puVar21,puVar20);
    }
    else {
      iVar11 = FUN_01304a00(param_1,param_1 + (uVar13 / 0xc0) * 0x18,puVar21,
                            puVar21 + (uVar13 / 0xc0) * 0x18,puVar20);
    }
    uVar10 = *param_1;
    if (*puVar21 <= uVar10) break;
    puVar14 = puVar20;
    goto LAB_01304264;
  }
  puVar16 = param_2 + -0x30;
  while (puVar14 = puVar16, param_1 != puVar14) {
    puVar16 = puVar14 + -0x18;
    if (*puVar14 < *puVar21) goto code_r0x0130430c;
  }
  puVar16 = param_1 + 0x18;
  if (*puVar20 <= uVar10) {
    if (puVar16 == puVar20) {
      return;
    }
    puVar16 = param_1 + 0x30;
    while (puVar16[-0x18] <= uVar10) {
      puVar16 = puVar16 + 0x18;
      if (param_2 == puVar16) {
        return;
      }
    }
    uVar2 = *(undefined8 *)(puVar16 + -0x18);
    uVar4 = *(undefined8 *)(puVar16 + -0x14);
    uVar3 = *(undefined8 *)(puVar16 + -0x10);
    uVar5 = *(undefined8 *)(puVar16 + -0xc);
    uVar6 = *(undefined8 *)(puVar16 + -8);
    uVar7 = *(undefined8 *)(puVar16 + -4);
    uVar19 = *(undefined8 *)(param_2 + -0x10);
    uVar8 = *(undefined8 *)(param_2 + -0xc);
    uVar9 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(puVar16 + -4) = uVar9;
    *(undefined8 *)(puVar16 + -0x10) = uVar19;
    *(undefined8 *)(puVar16 + -0xc) = uVar8;
    uVar19 = *(undefined8 *)(param_2 + -0x14);
    *(undefined8 *)(puVar16 + -0x18) = *(undefined8 *)puVar20;
    *(undefined8 *)(puVar16 + -0x14) = uVar19;
    *(undefined8 *)puVar20 = uVar2;
    *(undefined8 *)(param_2 + -0x14) = uVar4;
    *(undefined8 *)(param_2 + -8) = uVar6;
    *(undefined8 *)(param_2 + -4) = uVar7;
    *(undefined8 *)(param_2 + -0x10) = uVar3;
    *(undefined8 *)(param_2 + -0xc) = uVar5;
  }
  if (puVar16 == puVar20) {
    return;
  }
  puVar14 = puVar20;
  while( true ) {
    puVar21 = puVar16 + -0x18;
    do {
      puVar22 = puVar21;
      puVar21 = puVar22 + 0x18;
    } while (*puVar21 <= *param_1);
    puVar16 = puVar22 + 0x30;
    do {
      puVar18 = puVar14;
      puVar14 = puVar18 + -0x18;
    } while (*param_1 < *puVar14);
    if (puVar14 <= puVar21) break;
    uVar2 = *(undefined8 *)puVar21;
    uVar4 = *(undefined8 *)(puVar22 + 0x1c);
    uVar3 = *(undefined8 *)(puVar22 + 0x20);
    uVar5 = *(undefined8 *)(puVar22 + 0x24);
    uVar6 = *(undefined8 *)(puVar22 + 0x28);
    uVar7 = *(undefined8 *)(puVar22 + 0x2c);
    uVar19 = *(undefined8 *)(puVar18 + -0x10);
    uVar8 = *(undefined8 *)(puVar18 + -0xc);
    uVar9 = *(undefined8 *)(puVar18 + -4);
    *(undefined8 *)(puVar22 + 0x28) = *(undefined8 *)(puVar18 + -8);
    *(undefined8 *)(puVar22 + 0x2c) = uVar9;
    *(undefined8 *)(puVar22 + 0x20) = uVar19;
    *(undefined8 *)(puVar22 + 0x24) = uVar8;
    uVar19 = *(undefined8 *)(puVar18 + -0x14);
    *(undefined8 *)puVar21 = *(undefined8 *)puVar14;
    *(undefined8 *)(puVar22 + 0x1c) = uVar19;
    *(undefined8 *)puVar14 = uVar2;
    *(undefined8 *)(puVar18 + -0x14) = uVar4;
    *(undefined8 *)(puVar18 + -8) = uVar6;
    *(undefined8 *)(puVar18 + -4) = uVar7;
    *(undefined8 *)(puVar18 + -0x10) = uVar3;
    *(undefined8 *)(puVar18 + -0xc) = uVar5;
  }
  goto LAB_013041e4;
code_r0x0130430c:
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 4);
  iVar11 = iVar11 + 1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x14);
  uVar17 = *(undefined8 *)puVar14;
  uVar19 = *(undefined8 *)(puVar14 + 8);
  uVar8 = *(undefined8 *)(puVar14 + 0xc);
  uVar9 = *(undefined8 *)(puVar14 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar19;
  *(undefined8 *)(param_1 + 0xc) = uVar8;
  uVar19 = *(undefined8 *)(puVar14 + 4);
  *(undefined8 *)param_1 = uVar17;
  *(undefined8 *)(param_1 + 4) = uVar19;
  *(undefined8 *)puVar14 = uVar2;
  *(undefined8 *)(puVar14 + 4) = uVar4;
  *(undefined8 *)(puVar14 + 0x10) = uVar6;
  *(undefined8 *)(puVar14 + 0x14) = uVar7;
  *(undefined8 *)(puVar14 + 8) = uVar3;
  *(undefined8 *)(puVar14 + 0xc) = uVar5;
LAB_01304264:
  puVar16 = param_1 + 0x18;
  puVar22 = puVar16;
  if (puVar16 < puVar14) {
    while( true ) {
      puVar16 = puVar22 + -0x18;
      do {
        puVar18 = puVar16;
        puVar16 = puVar18 + 0x18;
      } while (*puVar16 < *puVar21);
      puVar22 = puVar18 + 0x30;
      do {
        puVar15 = puVar14;
        puVar14 = puVar15 + -0x18;
      } while (*puVar21 <= *puVar14);
      if (puVar14 < puVar16) break;
      uVar2 = *(undefined8 *)puVar16;
      uVar6 = *(undefined8 *)(puVar18 + 0x1c);
      iVar11 = iVar11 + 1;
      uVar3 = *(undefined8 *)(puVar18 + 0x20);
      uVar19 = *(undefined8 *)(puVar18 + 0x24);
      puVar1 = puVar14;
      if (puVar21 != puVar16) {
        puVar1 = puVar21;
      }
      uVar4 = *(undefined8 *)(puVar18 + 0x28);
      uVar7 = *(undefined8 *)(puVar18 + 0x2c);
      uVar5 = *(undefined8 *)(puVar15 + -0x10);
      uVar8 = *(undefined8 *)(puVar15 + -0xc);
      uVar9 = *(undefined8 *)(puVar15 + -4);
      *(undefined8 *)(puVar18 + 0x28) = *(undefined8 *)(puVar15 + -8);
      *(undefined8 *)(puVar18 + 0x2c) = uVar9;
      *(undefined8 *)(puVar18 + 0x20) = uVar5;
      *(undefined8 *)(puVar18 + 0x24) = uVar8;
      uVar5 = *(undefined8 *)(puVar15 + -0x14);
      *(undefined8 *)puVar16 = *(undefined8 *)puVar14;
      *(undefined8 *)(puVar18 + 0x1c) = uVar5;
      *(undefined8 *)puVar14 = uVar2;
      *(undefined8 *)(puVar15 + -0x14) = uVar6;
      *(undefined8 *)(puVar15 + -8) = uVar4;
      *(undefined8 *)(puVar15 + -4) = uVar7;
      *(undefined8 *)(puVar15 + -0x10) = uVar3;
      *(undefined8 *)(puVar15 + -0xc) = uVar19;
      puVar21 = puVar1;
    }
  }
  if ((puVar16 != puVar21) && (*puVar21 < *puVar16)) {
    uVar2 = *(undefined8 *)puVar16;
    uVar4 = *(undefined8 *)(puVar16 + 4);
    iVar11 = iVar11 + 1;
    uVar3 = *(undefined8 *)(puVar16 + 8);
    uVar5 = *(undefined8 *)(puVar16 + 0xc);
    uVar6 = *(undefined8 *)(puVar16 + 0x10);
    uVar7 = *(undefined8 *)(puVar16 + 0x14);
    uVar19 = *(undefined8 *)(puVar21 + 8);
    uVar8 = *(undefined8 *)(puVar21 + 0xc);
    uVar9 = *(undefined8 *)(puVar21 + 0x14);
    *(undefined8 *)(puVar16 + 0x10) = *(undefined8 *)(puVar21 + 0x10);
    *(undefined8 *)(puVar16 + 0x14) = uVar9;
    *(undefined8 *)(puVar16 + 8) = uVar19;
    *(undefined8 *)(puVar16 + 0xc) = uVar8;
    uVar19 = *(undefined8 *)(puVar21 + 4);
    *(undefined8 *)puVar16 = *(undefined8 *)puVar21;
    *(undefined8 *)(puVar16 + 4) = uVar19;
    *(undefined8 *)puVar21 = uVar2;
    *(undefined8 *)(puVar21 + 4) = uVar4;
    *(undefined8 *)(puVar21 + 0x10) = uVar6;
    *(undefined8 *)(puVar21 + 0x14) = uVar7;
    *(undefined8 *)(puVar21 + 8) = uVar3;
    *(undefined8 *)(puVar21 + 0xc) = uVar5;
  }
  if (iVar11 == 0) {
    uVar13 = FUN_01304cf0(param_1,puVar16);
    uVar12 = FUN_01304cf0(puVar16 + 0x18,param_2);
    if ((uVar12 & 1) != 0) goto LAB_013045b0;
    puVar21 = puVar16 + 0x18;
    if ((uVar13 & 1) != 0) goto LAB_013041e4;
  }
  if (((long)param_2 - (long)puVar16 >> 4) * -0x5555555555555555 <=
      ((long)puVar16 - (long)param_1 >> 4) * -0x5555555555555555) {
    FUN_013041a0(puVar16 + 0x18,param_2);
    param_2 = puVar16;
    goto LAB_013041d8;
  }
  FUN_013041a0(param_1,puVar16);
  puVar21 = puVar16 + 0x18;
  goto LAB_013041e4;
LAB_013045b0:
  param_2 = puVar16;
  if ((uVar13 & 1) != 0) {
switchD_01304550_caseD_0:
    return;
  }
  goto LAB_013041d8;
}


