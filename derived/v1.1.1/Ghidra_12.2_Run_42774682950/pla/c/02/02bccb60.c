/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bccb60; name: FUN_02bccb60
 */


void FUN_02bccb60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong local_f8;
  ulong *puStack_f0;
  ulong *local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong *puStack_d0;
  ulong *local_c8;
  ulong uStack_c0;
  ulong *local_b8;
  ulong *puStack_b0;
  ulong *local_a8;
  ulong *puStack_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *puStack_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong uStack_68;
  ulong *local_58;
  
LAB_02bccb8c:
  puVar13 = (ulong *)*param_1;
LAB_02bccb90:
  puVar14 = (ulong *)*param_2;
  lVar7 = (long)puVar14 - (long)puVar13;
  uVar3 = lVar7 >> 5;
  switch(uVar3) {
  case 0:
  case 1:
    goto switchD_02bcd130_caseD_0;
  case 2:
    *param_2 = (ulong)(puVar14 + -4);
    param_1 = (ulong *)*param_1;
    if (puVar14[-4] <= *param_1) {
      return;
    }
    break;
  case 3:
    puVar4 = puVar14 + -4;
    *param_2 = (ulong)puVar4;
    param_1 = puVar13 + 4;
    uVar3 = *param_1;
    if (uVar3 <= *puVar13) {
      if (puVar14[-4] <= uVar3) {
        return;
      }
      uVar3 = *param_1;
      uVar11 = puVar13[5];
      uVar5 = puVar13[6];
      uVar1 = puVar13[7];
      uVar9 = *puVar4;
      uVar6 = puVar14[-3];
      uVar12 = puVar14[-1];
      puVar13[6] = puVar14[-2];
      puVar13[7] = uVar12;
      *param_1 = uVar9;
      puVar13[5] = uVar6;
      puVar14[-2] = uVar5;
      puVar14[-1] = uVar1;
      *puVar4 = uVar3;
      puVar14[-3] = uVar11;
      if (*puVar13 < puVar13[4]) {
        uVar3 = *puVar13;
        uVar9 = puVar13[1];
        uVar5 = puVar13[2];
        uVar11 = puVar13[3];
        puVar13[2] = puVar13[6];
        puVar13[3] = puVar13[7];
        *puVar13 = *param_1;
        puVar13[1] = puVar13[5];
        puVar13[6] = uVar5;
        puVar13[7] = uVar11;
        *param_1 = uVar3;
        puVar13[5] = uVar9;
        return;
      }
      return;
    }
    if (uVar3 < puVar14[-4]) {
      local_80 = *puVar13;
      local_78 = puVar13[1];
      local_70 = puVar13[2];
      uStack_68 = puVar13[3];
      uVar3 = *puVar4;
      uVar5 = puVar14[-3];
      uVar9 = puVar14[-1];
      puVar13[2] = puVar14[-2];
      puVar13[3] = uVar9;
      *puVar13 = uVar3;
      puVar13[1] = uVar5;
      goto LAB_02bcd5a0;
    }
    uVar3 = *puVar13;
    uVar9 = puVar13[1];
    uVar5 = puVar13[2];
    uVar11 = puVar13[3];
    puVar13[2] = puVar13[6];
    puVar13[3] = puVar13[7];
    *puVar13 = *param_1;
    puVar13[1] = puVar13[5];
    puVar13[6] = uVar5;
    puVar13[7] = uVar11;
    *param_1 = uVar3;
    puVar13[5] = uVar9;
    if (*puVar4 <= puVar13[4]) {
      return;
    }
    break;
  case 4:
    local_a8 = puVar13 + 4;
    puStack_b0 = puVar13 + 8;
    local_b8 = puVar14 + -4;
    *param_2 = (ulong)local_b8;
    puStack_a0 = puVar13;
    FUN_02bcd5d0(&puStack_a0,&local_a8,&puStack_b0,&local_b8);
    return;
  case 5:
    puVar15 = puVar14 + -4;
    *param_2 = (ulong)puVar15;
    puVar4 = puVar13 + 4;
    puVar8 = puVar13 + 8;
    puVar10 = puVar13 + 0xc;
    local_98 = puVar10;
    local_90 = puVar8;
    puStack_88 = puVar4;
    local_58 = puVar13;
    FUN_02bcd5d0(&local_58,&puStack_88,&local_90,&local_98);
    if (puVar14[-4] <= puVar13[0xc]) {
      return;
    }
    uVar3 = *puVar10;
    uVar11 = puVar13[0xd];
    uVar5 = puVar13[0xe];
    uVar1 = puVar13[0xf];
    uVar9 = *puVar15;
    uVar6 = puVar14[-3];
    uVar12 = puVar14[-1];
    puVar13[0xe] = puVar14[-2];
    puVar13[0xf] = uVar12;
    *puVar10 = uVar9;
    puVar13[0xd] = uVar6;
    puVar14[-2] = uVar5;
    puVar14[-1] = uVar1;
    *puVar15 = uVar3;
    puVar14[-3] = uVar11;
    if (*puVar10 <= *puVar8) {
      return;
    }
    uVar3 = *puVar8;
    uVar9 = puVar13[9];
    uVar5 = puVar13[10];
    uVar11 = puVar13[0xb];
    puVar13[10] = puVar13[0xe];
    puVar13[0xb] = puVar13[0xf];
    *puVar8 = *puVar10;
    puVar13[9] = puVar13[0xd];
    puVar13[0xe] = uVar5;
    puVar13[0xf] = uVar11;
    *puVar10 = uVar3;
    puVar13[0xd] = uVar9;
    if (*puVar8 <= *puVar4) {
      return;
    }
    uVar3 = *puVar4;
    uVar9 = puVar13[5];
    uVar5 = puVar13[6];
    uVar11 = puVar13[7];
    puVar13[6] = puVar13[10];
    puVar13[7] = puVar13[0xb];
    *puVar4 = *puVar8;
    puVar13[5] = puVar13[9];
    puVar13[10] = uVar5;
    puVar13[0xb] = uVar11;
    *puVar8 = uVar3;
    puVar13[9] = uVar9;
    if (*puVar13 < puVar13[4]) {
      uVar3 = *puVar13;
      uVar9 = puVar13[1];
      uVar5 = puVar13[2];
      uVar11 = puVar13[3];
      puVar13[2] = puVar13[6];
      puVar13[3] = puVar13[7];
      *puVar13 = *puVar4;
      puVar13[1] = puVar13[5];
      puVar13[6] = uVar5;
      puVar13[7] = uVar11;
      *puVar4 = uVar3;
      puVar13[5] = uVar9;
      return;
    }
    return;
  default:
    if (lVar7 < 0x3e0) {
      puVar4 = puVar13 + 8;
      uVar3 = *puVar4;
      puVar8 = puVar13 + 4;
      uVar5 = *puVar8;
      if (*puVar13 < uVar5) {
        if (uVar5 < uVar3) {
          local_80 = *puVar13;
          local_78 = puVar13[1];
          local_70 = puVar13[2];
          uStack_68 = puVar13[3];
          puVar13[2] = puVar13[10];
          puVar13[3] = puVar13[0xb];
          *puVar13 = *puVar4;
          puVar13[1] = puVar13[9];
        }
        else {
          uVar5 = *puVar13;
          uVar11 = puVar13[1];
          uVar9 = puVar13[2];
          uVar1 = puVar13[3];
          puVar13[2] = puVar13[6];
          puVar13[3] = puVar13[7];
          *puVar13 = *puVar8;
          puVar13[1] = puVar13[5];
          puVar13[6] = uVar9;
          puVar13[7] = uVar1;
          *puVar8 = uVar5;
          puVar13[5] = uVar11;
          if (uVar3 <= puVar13[4]) goto LAB_02bcd280;
          local_80 = *puVar8;
          local_78 = puVar13[5];
          local_70 = puVar13[6];
          uStack_68 = puVar13[7];
          puVar13[6] = puVar13[10];
          puVar13[7] = puVar13[0xb];
          *puVar8 = *puVar4;
          puVar13[5] = puVar13[9];
        }
        puVar13[10] = local_70;
        puVar13[0xb] = uStack_68;
        *puVar4 = local_80;
        puVar13[9] = local_78;
      }
      else if (uVar5 < uVar3) {
        uVar3 = *puVar8;
        uVar9 = puVar13[5];
        uVar5 = puVar13[6];
        uVar11 = puVar13[7];
        puVar13[6] = puVar13[10];
        puVar13[7] = puVar13[0xb];
        *puVar8 = *puVar4;
        puVar13[5] = puVar13[9];
        puVar13[10] = uVar5;
        puVar13[0xb] = uVar11;
        *puVar4 = uVar3;
        puVar13[9] = uVar9;
        if (*puVar13 < *puVar8) {
          uVar3 = *puVar13;
          uVar9 = puVar13[1];
          uVar5 = puVar13[2];
          uVar11 = puVar13[3];
          puVar13[2] = puVar13[6];
          puVar13[3] = puVar13[7];
          *puVar13 = *puVar8;
          puVar13[1] = puVar13[5];
          puVar13[6] = uVar5;
          puVar13[7] = uVar11;
          *puVar8 = uVar3;
          puVar13[5] = uVar9;
        }
      }
LAB_02bcd280:
      puVar8 = puVar13 + 0xc;
      if (puVar13 + 0xc == puVar14) {
        return;
      }
      goto LAB_02bcd2b4;
    }
    puVar8 = puVar14 + -4;
    puVar4 = puVar13 + (uVar3 & 0xffffffffffffffe) * 2;
    if (lVar7 < 0x7ce1) {
      uVar3 = *puVar4;
      if (*puVar13 < uVar3) {
        if (uVar3 < *puVar8) {
          local_80 = *puVar13;
          local_78 = puVar13[1];
          iVar2 = 1;
          local_70 = puVar13[2];
          uStack_68 = puVar13[3];
          uVar3 = *puVar8;
          uVar5 = puVar14[-3];
          uVar9 = puVar14[-1];
          puVar13[2] = puVar14[-2];
          puVar13[3] = uVar9;
          *puVar13 = uVar3;
          puVar13[1] = uVar5;
          puVar14[-2] = local_70;
          puVar14[-1] = uStack_68;
          *puVar8 = local_80;
          puVar14[-3] = local_78;
        }
        else {
          local_80 = *puVar13;
          local_78 = puVar13[1];
          local_70 = puVar13[2];
          uStack_68 = puVar13[3];
          uVar3 = *puVar4;
          uVar5 = puVar4[1];
          uVar9 = puVar4[3];
          puVar13[2] = puVar4[2];
          puVar13[3] = uVar9;
          *puVar13 = uVar3;
          puVar13[1] = uVar5;
          puVar4[2] = local_70;
          puVar4[3] = uStack_68;
          *puVar4 = local_80;
          puVar4[1] = local_78;
          if (*puVar8 <= local_80) goto LAB_02bcce50;
          local_80 = *puVar4;
          local_78 = puVar4[1];
          local_70 = puVar4[2];
          uStack_68 = puVar4[3];
          uVar3 = *puVar8;
          uVar5 = puVar14[-3];
          uVar9 = puVar14[-1];
          puVar4[2] = puVar14[-2];
          puVar4[3] = uVar9;
          *puVar4 = uVar3;
          puVar4[1] = uVar5;
          puVar14[-2] = local_70;
          puVar14[-1] = uStack_68;
          *puVar8 = local_80;
          puVar14[-3] = local_78;
LAB_02bcce40:
          iVar2 = 2;
        }
      }
      else if (uVar3 < *puVar8) {
        local_80 = *puVar4;
        local_78 = puVar4[1];
        local_70 = puVar4[2];
        uStack_68 = puVar4[3];
        uVar3 = *puVar8;
        uVar5 = puVar14[-3];
        uVar9 = puVar14[-1];
        puVar4[2] = puVar14[-2];
        puVar4[3] = uVar9;
        *puVar4 = uVar3;
        puVar4[1] = uVar5;
        puVar14[-2] = local_70;
        puVar14[-1] = uStack_68;
        *puVar8 = local_80;
        puVar14[-3] = local_78;
        if (*puVar13 < *puVar4) {
          local_80 = *puVar13;
          local_78 = puVar13[1];
          local_70 = puVar13[2];
          uStack_68 = puVar13[3];
          uVar3 = *puVar4;
          uVar5 = puVar4[1];
          uVar9 = puVar4[3];
          puVar13[2] = puVar4[2];
          puVar13[3] = uVar9;
          *puVar13 = uVar3;
          puVar13[1] = uVar5;
          puVar4[2] = local_70;
          puVar4[3] = uStack_68;
          *puVar4 = local_80;
          puVar4[1] = local_78;
          goto LAB_02bcce40;
        }
LAB_02bcce50:
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      puVar10 = puVar13 + (uVar3 & 0x1ffffffffffffffc);
      puVar15 = puVar4 + (uVar3 & 0x1ffffffffffffffc);
      local_98 = puVar15;
      local_90 = puVar4;
      puStack_88 = puVar10;
      local_58 = puVar13;
      iVar2 = FUN_02bcd5d0(&local_58,&puStack_88,&local_90,&local_98);
      if (*puVar15 < *puVar8) {
        local_80 = *puVar15;
        local_78 = puVar15[1];
        local_70 = puVar15[2];
        uStack_68 = puVar15[3];
        uVar3 = *puVar8;
        uVar5 = puVar14[-3];
        uVar9 = puVar14[-1];
        puVar15[2] = puVar14[-2];
        puVar15[3] = uVar9;
        *puVar15 = uVar3;
        puVar15[1] = uVar5;
        puVar14[-2] = local_70;
        puVar14[-1] = uStack_68;
        *puVar8 = local_80;
        puVar14[-3] = local_78;
        if (*puVar4 < *puVar15) {
          local_80 = *puVar4;
          local_78 = puVar4[1];
          local_70 = puVar4[2];
          uStack_68 = puVar4[3];
          uVar3 = *puVar15;
          uVar5 = puVar15[1];
          uVar9 = puVar15[3];
          puVar4[2] = puVar15[2];
          puVar4[3] = uVar9;
          *puVar4 = uVar3;
          puVar4[1] = uVar5;
          puVar15[2] = local_70;
          puVar15[3] = uStack_68;
          *puVar15 = local_80;
          puVar15[1] = local_78;
          if (*puVar10 < *puVar4) {
            local_80 = *puVar10;
            local_78 = puVar10[1];
            local_70 = puVar10[2];
            uStack_68 = puVar10[3];
            uVar3 = *puVar4;
            uVar5 = puVar4[1];
            uVar9 = puVar4[3];
            puVar10[2] = puVar4[2];
            puVar10[3] = uVar9;
            *puVar10 = uVar3;
            puVar10[1] = uVar5;
            puVar4[2] = local_70;
            puVar4[3] = uStack_68;
            *puVar4 = local_80;
            puVar4[1] = local_78;
            if (*puVar13 < *puVar10) {
              local_80 = *puVar13;
              local_78 = puVar13[1];
              iVar2 = iVar2 + 4;
              local_70 = puVar13[2];
              uStack_68 = puVar13[3];
              uVar3 = *puVar10;
              uVar5 = puVar10[1];
              uVar9 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar9;
              *puVar13 = uVar3;
              puVar13[1] = uVar5;
              puVar10[2] = local_70;
              puVar10[3] = uStack_68;
              *puVar10 = local_80;
              puVar10[1] = local_78;
            }
            else {
              iVar2 = iVar2 + 3;
            }
          }
          else {
            iVar2 = iVar2 + 2;
          }
        }
        else {
          iVar2 = iVar2 + 1;
        }
      }
    }
    puVar13 = (ulong *)*param_1;
    uVar3 = *puVar13;
    if (uVar3 <= *puVar4) goto code_r0x02bcce78;
LAB_02bccfb0:
    puVar13 = puVar13 + 4;
    if (puVar13 < puVar8) {
      while( true ) {
        uVar3 = *puVar13;
        while (*puVar4 < uVar3) {
          puVar13 = puVar13 + 4;
          uVar3 = *puVar13;
        }
        do {
          puVar14 = puVar8;
          puVar8 = puVar14 + -4;
        } while (*puVar8 <= *puVar4);
        if (puVar8 < puVar13) break;
        local_80 = *puVar13;
        local_78 = puVar13[1];
        local_70 = puVar13[2];
        uStack_68 = puVar13[3];
        iVar2 = iVar2 + 1;
        puVar10 = puVar8;
        if (puVar13 != puVar4) {
          puVar10 = puVar4;
        }
        uVar3 = *puVar8;
        uVar5 = puVar14[-3];
        uVar9 = puVar14[-1];
        puVar13[2] = puVar14[-2];
        puVar13[3] = uVar9;
        *puVar13 = uVar3;
        puVar13[1] = uVar5;
        puVar13 = puVar13 + 4;
        puVar14[-2] = local_70;
        puVar14[-1] = uStack_68;
        *puVar8 = local_80;
        puVar14[-3] = local_78;
        puVar4 = puVar10;
      }
    }
    if ((puVar4 != puVar13) && (*puVar13 < *puVar4)) {
      local_80 = *puVar13;
      local_78 = puVar13[1];
      iVar2 = iVar2 + 1;
      local_70 = puVar13[2];
      uStack_68 = puVar13[3];
      uVar3 = *puVar4;
      uVar5 = puVar4[1];
      uVar9 = puVar4[3];
      puVar13[2] = puVar4[2];
      puVar13[3] = uVar9;
      *puVar13 = uVar3;
      puVar13[1] = uVar5;
      puVar4[2] = local_70;
      puVar4[3] = uStack_68;
      *puVar4 = local_80;
      puVar4[1] = local_78;
    }
    if (iVar2 == 0) {
      uStack_c0 = *param_1;
      local_c8 = puVar13;
      uVar3 = FUN_02bcd830(&uStack_c0,&local_c8);
      local_d8 = *param_2;
      puStack_d0 = puVar13 + 4;
      uVar5 = FUN_02bcd830(&puStack_d0,&local_d8);
      if ((uVar5 & 1) == 0) {
        if ((uVar3 & 1) == 0) goto LAB_02bcd080;
        *param_1 = (ulong)(puVar13 + 4);
      }
      else {
        if ((uVar3 & 1) != 0) {
          return;
        }
        *param_2 = (ulong)puVar13;
      }
    }
    else {
LAB_02bcd080:
      if ((long)((long)puVar13 - *param_1) < (long)(*param_2 - (long)puVar13)) {
        local_e8 = puVar13;
        uStack_e0 = *param_1;
        FUN_02bccb60(&uStack_e0,&local_e8);
        *param_1 = (ulong)(puVar13 + 4);
      }
      else {
        puStack_f0 = puVar13 + 4;
        local_f8 = *param_2;
        FUN_02bccb60(&puStack_f0,&local_f8);
        *param_2 = (ulong)puVar13;
      }
    }
    goto LAB_02bccb8c;
  }
  local_80 = *param_1;
  local_78 = param_1[1];
  local_70 = param_1[2];
  uStack_68 = param_1[3];
  uVar3 = puVar14[-4];
  uVar5 = puVar14[-3];
  uVar9 = puVar14[-1];
  param_1[2] = puVar14[-2];
  param_1[3] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar5;
LAB_02bcd5a0:
  puVar14[-2] = local_70;
  puVar14[-1] = uStack_68;
  puVar14[-4] = local_80;
  puVar14[-3] = local_78;
  return;
code_r0x02bcce78:
  puVar14 = puVar14 + -8;
  while (puVar8 = puVar14, puVar13 != puVar8) {
    puVar14 = puVar8 + -4;
    if (*puVar4 < *puVar8) {
      local_80 = *puVar13;
      local_78 = puVar13[1];
      iVar2 = iVar2 + 1;
      local_70 = puVar13[2];
      uStack_68 = puVar13[3];
      uVar5 = *puVar8;
      uVar9 = puVar8[3];
      uVar3 = puVar8[1];
      puVar13[2] = puVar8[2];
      puVar13[3] = uVar9;
      *puVar13 = uVar5;
      puVar13[1] = uVar3;
      puVar8[2] = local_70;
      puVar8[3] = uStack_68;
      *puVar8 = local_80;
      puVar8[1] = local_78;
      goto LAB_02bccfb0;
    }
  }
  puVar8 = (ulong *)*param_2;
  puVar14 = puVar13 + 4;
  puVar4 = puVar8 + -4;
  if (uVar3 <= *puVar4) {
    if (puVar14 == puVar4) {
      return;
    }
    puVar14 = puVar13 + 8;
    while (uVar3 <= puVar14[-4]) {
      puVar14 = puVar14 + 4;
      if (puVar8 == puVar14) {
        return;
      }
    }
    local_80 = puVar14[-4];
    local_78 = puVar14[-3];
    local_70 = puVar14[-2];
    uStack_68 = puVar14[-1];
    uVar3 = *puVar4;
    uVar5 = puVar8[-3];
    uVar9 = puVar8[-1];
    puVar14[-2] = puVar8[-2];
    puVar14[-1] = uVar9;
    puVar14[-4] = uVar3;
    puVar14[-3] = uVar5;
    puVar8[-2] = local_70;
    puVar8[-1] = uStack_68;
    *puVar4 = local_80;
    puVar8[-3] = local_78;
  }
  if (puVar14 == puVar4) {
    return;
  }
  while( true ) {
    puVar13 = puVar14 + -4;
    do {
      puVar8 = puVar13;
      puVar13 = puVar8 + 4;
    } while (*(ulong *)*param_1 <= *puVar13);
    puVar14 = puVar8 + 8;
    do {
      puVar10 = puVar4;
      puVar4 = puVar10 + -4;
    } while (*puVar4 < *(ulong *)*param_1);
    if (puVar4 <= puVar13) break;
    local_80 = *puVar13;
    local_78 = puVar8[5];
    local_70 = puVar8[6];
    uStack_68 = puVar8[7];
    uVar3 = *puVar4;
    uVar5 = puVar10[-3];
    uVar9 = puVar10[-1];
    puVar8[6] = puVar10[-2];
    puVar8[7] = uVar9;
    *puVar13 = uVar3;
    puVar8[5] = uVar5;
    puVar10[-2] = local_70;
    puVar10[-1] = uStack_68;
    *puVar4 = local_80;
    puVar10[-3] = local_78;
  }
  *param_1 = (ulong)puVar13;
  goto LAB_02bccb90;
LAB_02bcd2b4:
  uVar3 = *puVar8;
  if (*puVar4 < uVar3) {
    uVar5 = puVar8[1];
    uVar9 = puVar8[2];
    uVar11 = puVar8[3];
    puVar10 = puVar8;
    do {
      puVar15 = puVar4;
      uVar6 = *puVar15;
      uVar1 = puVar15[1];
      uVar12 = puVar15[3];
      puVar10[2] = puVar15[2];
      puVar10[3] = uVar12;
      *puVar10 = uVar6;
      puVar10[1] = uVar1;
      if (puVar13 == puVar15) break;
      puVar4 = puVar15 + -4;
      puVar10 = puVar15;
    } while (puVar15[-4] < uVar3);
    *puVar15 = uVar3;
    puVar15[2] = uVar9;
    puVar15[3] = uVar11;
    puVar15[1] = uVar5;
  }
  puVar10 = puVar8 + 4;
  puVar4 = puVar8;
  puVar8 = puVar10;
  if (puVar10 == puVar14) {
switchD_02bcd130_caseD_0:
    return;
  }
  goto LAB_02bcd2b4;
}


