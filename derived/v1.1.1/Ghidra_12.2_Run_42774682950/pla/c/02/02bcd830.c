/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcd830; name: FUN_02bcd830
 */


bool FUN_02bcd830(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  long local_a0;
  ulong *puStack_98;
  ulong *local_90;
  ulong *puStack_88;
  ulong *local_80;
  ulong *puStack_78;
  ulong *local_70;
  ulong *puStack_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong uStack_48;
  
  lVar13 = *param_2;
  puVar12 = (ulong *)*param_1;
  switch(lVar13 - (long)puVar12 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    *param_2 = lVar13 + -0x20;
    puVar9 = (ulong *)*param_1;
    if (*(ulong *)(lVar13 + -0x20) <= *puVar9) {
      return true;
    }
LAB_02bcdbcc:
    local_60 = *puVar9;
    local_58 = puVar9[1];
    local_50 = puVar9[2];
    uStack_48 = puVar9[3];
    uVar8 = *(ulong *)(lVar13 + -0x20);
    uVar1 = *(ulong *)(lVar13 + -0x18);
    uVar3 = *(ulong *)(lVar13 + -8);
    puVar9[2] = *(ulong *)(lVar13 + -0x10);
    puVar9[3] = uVar3;
    *puVar9 = uVar8;
    puVar9[1] = uVar1;
    goto LAB_02bcdbec;
  case 3:
    puVar4 = (ulong *)(lVar13 + -0x20);
    *param_2 = (long)puVar4;
    puVar9 = puVar12 + 4;
    uVar8 = *puVar9;
    if (uVar8 <= *puVar12) {
      if (*(ulong *)(lVar13 + -0x20) <= uVar8) {
        return true;
      }
      uVar8 = *puVar9;
      uVar10 = puVar12[5];
      uVar1 = puVar12[6];
      uVar2 = puVar12[7];
      uVar3 = *puVar4;
      uVar6 = *(ulong *)(lVar13 + -0x18);
      uVar11 = *(ulong *)(lVar13 + -8);
      puVar12[6] = *(ulong *)(lVar13 + -0x10);
      puVar12[7] = uVar11;
      *puVar9 = uVar3;
      puVar12[5] = uVar6;
      *(ulong *)(lVar13 + -0x10) = uVar1;
      *(ulong *)(lVar13 + -8) = uVar2;
      *puVar4 = uVar8;
      *(ulong *)(lVar13 + -0x18) = uVar10;
      if (*puVar12 < puVar12[4]) {
        uVar8 = *puVar12;
        uVar3 = puVar12[1];
        uVar1 = puVar12[2];
        uVar10 = puVar12[3];
        puVar12[2] = puVar12[6];
        puVar12[3] = puVar12[7];
        *puVar12 = *puVar9;
        puVar12[1] = puVar12[5];
        puVar12[6] = uVar1;
        puVar12[7] = uVar10;
        *puVar9 = uVar8;
        puVar12[5] = uVar3;
        return true;
      }
      return true;
    }
    if (*(ulong *)(lVar13 + -0x20) <= uVar8) {
      uVar8 = *puVar12;
      uVar3 = puVar12[1];
      uVar1 = puVar12[2];
      uVar10 = puVar12[3];
      puVar12[2] = puVar12[6];
      puVar12[3] = puVar12[7];
      *puVar12 = *puVar9;
      puVar12[1] = puVar12[5];
      puVar12[6] = uVar1;
      puVar12[7] = uVar10;
      *puVar9 = uVar8;
      puVar12[5] = uVar3;
      if (*puVar4 <= puVar12[4]) {
        return true;
      }
      goto LAB_02bcdbcc;
    }
    local_60 = *puVar12;
    local_58 = puVar12[1];
    local_50 = puVar12[2];
    uStack_48 = puVar12[3];
    uVar8 = *puVar4;
    uVar1 = *(ulong *)(lVar13 + -0x18);
    uVar3 = *(ulong *)(lVar13 + -8);
    puVar12[2] = *(ulong *)(lVar13 + -0x10);
    puVar12[3] = uVar3;
    *puVar12 = uVar8;
    puVar12[1] = uVar1;
LAB_02bcdbec:
    *(ulong *)(lVar13 + -0x10) = local_50;
    *(ulong *)(lVar13 + -8) = uStack_48;
    *(ulong *)(lVar13 + -0x20) = local_60;
    *(ulong *)(lVar13 + -0x18) = local_58;
    break;
  case 4:
    local_90 = puVar12 + 4;
    local_a0 = lVar13 + -0x20;
    puStack_98 = puVar12 + 8;
    *param_2 = local_a0;
    puStack_88 = puVar12;
    FUN_02bcd5d0(&puStack_88,&local_90,&puStack_98,&local_a0);
    break;
  case 5:
    puVar14 = (ulong *)(lVar13 + -0x20);
    *param_2 = (long)puVar14;
    puVar4 = puVar12 + 4;
    puVar9 = puVar12 + 8;
    puVar5 = puVar12 + 0xc;
    local_80 = puVar5;
    puStack_78 = puVar9;
    local_70 = puVar4;
    puStack_68 = puVar12;
    FUN_02bcd5d0(&puStack_68,&local_70,&puStack_78,&local_80);
    if (puVar12[0xc] < *(ulong *)(lVar13 + -0x20)) {
      uVar8 = *puVar5;
      uVar10 = puVar12[0xd];
      uVar1 = puVar12[0xe];
      uVar2 = puVar12[0xf];
      uVar3 = *puVar14;
      uVar6 = *(ulong *)(lVar13 + -0x18);
      uVar11 = *(ulong *)(lVar13 + -8);
      puVar12[0xe] = *(ulong *)(lVar13 + -0x10);
      puVar12[0xf] = uVar11;
      *puVar5 = uVar3;
      puVar12[0xd] = uVar6;
      *(ulong *)(lVar13 + -0x10) = uVar1;
      *(ulong *)(lVar13 + -8) = uVar2;
      *puVar14 = uVar8;
      *(ulong *)(lVar13 + -0x18) = uVar10;
      if (*puVar9 < *puVar5) {
        uVar8 = *puVar9;
        uVar3 = puVar12[9];
        uVar1 = puVar12[10];
        uVar10 = puVar12[0xb];
        puVar12[10] = puVar12[0xe];
        puVar12[0xb] = puVar12[0xf];
        *puVar9 = *puVar5;
        puVar12[9] = puVar12[0xd];
        puVar12[0xe] = uVar1;
        puVar12[0xf] = uVar10;
        *puVar5 = uVar8;
        puVar12[0xd] = uVar3;
        if (*puVar4 < *puVar9) {
          uVar8 = *puVar4;
          uVar3 = puVar12[5];
          uVar1 = puVar12[6];
          uVar10 = puVar12[7];
          puVar12[6] = puVar12[10];
          puVar12[7] = puVar12[0xb];
          *puVar4 = *puVar9;
          puVar12[5] = puVar12[9];
          puVar12[10] = uVar1;
          puVar12[0xb] = uVar10;
          *puVar9 = uVar8;
          puVar12[9] = uVar3;
          if (*puVar12 < puVar12[4]) {
            uVar8 = *puVar12;
            uVar3 = puVar12[1];
            uVar1 = puVar12[2];
            uVar10 = puVar12[3];
            puVar12[2] = puVar12[6];
            puVar12[3] = puVar12[7];
            *puVar12 = *puVar4;
            puVar12[1] = puVar12[5];
            puVar12[6] = uVar1;
            puVar12[7] = uVar10;
            *puVar4 = uVar8;
            puVar12[5] = uVar3;
          }
        }
      }
    }
    break;
  default:
    puVar4 = puVar12 + 8;
    puVar9 = puVar12 + 4;
    uVar8 = *puVar9;
    if (*puVar12 < uVar8) {
      if (uVar8 < *puVar4) {
        local_60 = *puVar12;
        local_58 = puVar12[1];
        local_50 = puVar12[2];
        uStack_48 = puVar12[3];
        puVar12[2] = puVar12[10];
        puVar12[3] = puVar12[0xb];
        *puVar12 = *puVar4;
        puVar12[1] = puVar12[9];
      }
      else {
        uVar8 = *puVar12;
        uVar3 = puVar12[1];
        uVar1 = puVar12[2];
        uVar10 = puVar12[3];
        puVar12[2] = puVar12[6];
        puVar12[3] = puVar12[7];
        *puVar12 = *puVar9;
        puVar12[1] = puVar12[5];
        puVar12[6] = uVar1;
        puVar12[7] = uVar10;
        *puVar9 = uVar8;
        puVar12[5] = uVar3;
        if (puVar12[8] <= puVar12[4]) goto LAB_02bcdc70;
        local_60 = *puVar9;
        local_58 = puVar12[5];
        local_50 = puVar12[6];
        uStack_48 = puVar12[7];
        puVar12[6] = puVar12[10];
        puVar12[7] = puVar12[0xb];
        *puVar9 = *puVar4;
        puVar12[5] = puVar12[9];
      }
      puVar12[10] = local_50;
      puVar12[0xb] = uStack_48;
      *puVar4 = local_60;
      puVar12[9] = local_58;
    }
    else if (uVar8 < *puVar4) {
      uVar8 = *puVar9;
      uVar3 = puVar12[5];
      uVar1 = puVar12[6];
      uVar10 = puVar12[7];
      puVar12[6] = puVar12[10];
      puVar12[7] = puVar12[0xb];
      *puVar9 = *puVar4;
      puVar12[5] = puVar12[9];
      puVar12[10] = uVar1;
      puVar12[0xb] = uVar10;
      *puVar4 = uVar8;
      puVar12[9] = uVar3;
      if (*puVar12 < puVar12[4]) {
        uVar8 = *puVar12;
        uVar3 = puVar12[1];
        uVar1 = puVar12[2];
        uVar10 = puVar12[3];
        puVar12[2] = puVar12[6];
        puVar12[3] = puVar12[7];
        *puVar12 = *puVar9;
        puVar12[1] = puVar12[5];
        puVar12[6] = uVar1;
        puVar12[7] = uVar10;
        *puVar9 = uVar8;
        puVar12[5] = uVar3;
      }
    }
LAB_02bcdc70:
    puVar9 = (ulong *)*param_2;
    if (puVar12 + 0xc != puVar9) {
      iVar7 = 0;
      puVar12 = puVar12 + 0xc;
      do {
        uVar8 = *puVar12;
        if (*puVar4 < uVar8) {
          uVar1 = puVar12[1];
          uVar3 = puVar12[2];
          uVar10 = puVar12[3];
          puVar9 = puVar12;
          do {
            puVar5 = puVar4;
            uVar6 = *puVar5;
            uVar11 = puVar5[3];
            uVar2 = puVar5[1];
            puVar9[2] = puVar5[2];
            puVar9[3] = uVar11;
            *puVar9 = uVar6;
            puVar9[1] = uVar2;
            if ((ulong *)*param_1 == puVar5) break;
            puVar4 = puVar5 + -4;
            puVar9 = puVar5;
          } while (puVar5[-4] < uVar8);
          *puVar5 = uVar8;
          iVar7 = iVar7 + 1;
          puVar5[2] = uVar3;
          puVar5[3] = uVar10;
          puVar5[1] = uVar1;
          if (iVar7 == 8) {
            return puVar12 + 4 == (ulong *)*param_2;
          }
          puVar9 = (ulong *)*param_2;
        }
        puVar5 = puVar12 + 4;
        puVar4 = puVar12;
        puVar12 = puVar5;
      } while (puVar5 != puVar9);
    }
  }
  return true;
}


