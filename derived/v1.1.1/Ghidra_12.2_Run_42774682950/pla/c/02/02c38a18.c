/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c38a18; name: FUN_02c38a18
 */


void FUN_02c38a18(long *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  
  uVar17 = (ulong)param_2;
  switch(param_4 + param_5 * 2) {
  case 1:
  case 5:
    lVar6 = (**(code **)(*param_1 + 0x68))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x60000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar6 = (uVar17 + (ulong)param_2 * 2) * 8;
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + lVar6 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + lVar6);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) {
LAB_02c3935c:
      iVar8 = 0;
      goto LAB_02c39378;
    }
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
    break;
  case 2:
    lVar6 = (**(code **)(*param_1 + 0x70))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x20000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_02c3935c;
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
    break;
  case 3:
  case 7:
    lVar6 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x60000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_02c3935c;
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
    break;
  case 4:
    lVar6 = (**(code **)(*param_1 + 0x80))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x20000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_02c3935c;
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
    break;
  case 6:
    lVar6 = (**(code **)(*param_1 + 0x88))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x20000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_02c3935c;
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
    break;
  default:
    lVar6 = (**(code **)(*param_1 + 0x60))(param_1);
    if (lVar6 == 0) {
      uVar7 = 0x20000;
    }
    else {
      uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
      uVar7 = uVar7 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0x12) <= param_2) {
      return;
    }
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0x13];
    lVar6 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar6 + 0x7c) == '\0') goto LAB_02c39380;
    uVar10 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) goto LAB_02c3935c;
    puVar13 = *(ushort **)(lVar11 + 0x58);
    iVar8 = 0;
    puVar12 = *(ushort **)(lVar6 + 0x58);
    do {
      while( true ) {
        uVar2 = *puVar13;
        *puVar12 = uVar2;
        if (uVar2 == 0x10) break;
        if (uVar2 == 0) goto LAB_02c39378;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
        iVar8 = iVar8 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02c39364;
      }
      uVar2 = puVar13[1];
      uVar1 = uVar2 + 2;
      bVar4 = uVar10 < uVar1;
      uVar10 = uVar10 - uVar1;
      if (bVar4 || uVar10 == 0) goto LAB_02c39374;
      uVar15 = uVar2 + 1;
      uVar5 = uVar15 & 7;
      puVar16 = puVar12 + 1;
      *puVar16 = uVar2;
      puVar3 = puVar13 + 1;
      puVar14 = puVar13;
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          lVar11 = lVar9;
          uVar15 = uVar15 - 1;
          uVar5 = uVar5 - 1;
          *(undefined2 *)((long)puVar12 + lVar11 + 4) = *(undefined2 *)((long)puVar13 + lVar11 + 4);
          lVar9 = lVar11 + 2;
        } while (uVar5 != 0);
        puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
        puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
        puVar3 = puVar14 + 1;
        puVar12 = puVar16;
      }
      puVar13 = puVar3;
      if (6 < uVar2) {
        puVar12 = puVar16;
        do {
          puVar12[1] = puVar14[2];
          puVar12[2] = puVar13[2];
          puVar12[3] = puVar13[3];
          puVar12[4] = puVar13[4];
          puVar12[5] = puVar13[5];
          puVar12[6] = puVar13[6];
          puVar14 = puVar13 + 7;
          puVar12[7] = *puVar14;
          puVar13 = puVar13 + 8;
          uVar15 = uVar15 - 8;
          puVar12 = puVar12 + 8;
          *puVar12 = *puVar13;
        } while (uVar15 != 0);
      }
      iVar8 = uVar1 + iVar8;
    } while (uVar10 != 0);
  }
LAB_02c39364:
  if (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    puVar12[-1] = 0;
  }
  goto LAB_02c39378;
LAB_02c39374:
  *puVar12 = 0;
LAB_02c39378:
  *(short *)(lVar6 + 0x7a) = (short)iVar8;
  lVar9 = param_1[0x13];
LAB_02c39380:
  *(undefined2 *)(lVar9 + uVar17 * 0x18 + 0x10) = 0;
  lVar6 = param_1[0x13] + uVar17 * 0x18;
  *(ushort *)(lVar6 + 0x12) = *(ushort *)(lVar6 + 0x12) & 0xfffe;
  return;
}


