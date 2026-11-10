/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002849b0; name: FUN_002849b0
 */


void FUN_002849b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 local_70;
  undefined8 uStack_68;
  
LAB_002849e0:
  puVar20 = param_2 + -2;
  puVar13 = param_1;
LAB_002849e8:
  param_1 = puVar13;
  lVar15 = (long)param_2 - (long)param_1;
  lVar8 = lVar15 >> 4;
  switch(lVar8) {
  case 0:
  case 1:
    goto switchD_00284eb4_caseD_0;
  case 2:
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + -1)) {
      uVar21 = *param_1;
      uVar2 = param_1[1];
      uVar19 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar19;
      param_2[-2] = uVar21;
      param_2[-1] = uVar2;
      return;
    }
    return;
  case 3:
    uVar14 = *(uint *)(param_1 + 3);
    puVar13 = param_1 + 2;
    if (uVar14 <= *(uint *)(param_1 + 1)) {
      if (*(uint *)(param_2 + -1) <= uVar14) {
        return;
      }
      uVar21 = *puVar13;
      uVar2 = param_1[3];
      uVar19 = param_2[-1];
      *puVar13 = *puVar20;
      param_1[3] = uVar19;
      *puVar20 = uVar21;
      param_2[-1] = uVar2;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar21 = *param_1;
        uVar2 = param_1[1];
        *param_1 = *puVar13;
        param_1[1] = param_1[3];
        *puVar13 = uVar21;
        param_1[3] = uVar2;
        return;
      }
      return;
    }
    if (*(uint *)(param_2 + -1) <= uVar14) {
      uVar21 = *param_1;
      uVar2 = param_1[1];
      *param_1 = *puVar13;
      param_1[1] = param_1[3];
      *puVar13 = uVar21;
      param_1[3] = uVar2;
      if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 3)) {
        return;
      }
      local_70 = *puVar13;
      uStack_68 = param_1[3];
      uVar21 = param_2[-1];
      *puVar13 = *puVar20;
      param_1[3] = uVar21;
      goto LAB_00285144;
    }
    break;
  case 4:
    FUN_002851f0(param_1,param_1 + 2,param_1 + 4,puVar20,param_3);
    return;
  case 5:
    puVar20 = param_1 + 2;
    puVar13 = param_1 + 4;
    puVar12 = param_1 + 6;
    FUN_002851f0(param_1,puVar20,puVar13,puVar12,param_3);
    if (*(uint *)(param_2 + -1) <= *(uint *)(param_1 + 7)) {
      return;
    }
    uVar21 = *puVar12;
    uVar2 = param_1[7];
    uVar19 = param_2[-1];
    *puVar12 = param_2[-2];
    param_1[7] = uVar19;
    param_2[-2] = uVar21;
    param_2[-1] = uVar2;
    if (*(uint *)(param_1 + 7) <= *(uint *)(param_1 + 5)) {
      return;
    }
    uVar21 = *puVar13;
    uVar2 = param_1[5];
    *puVar13 = *puVar12;
    param_1[5] = param_1[7];
    *puVar12 = uVar21;
    param_1[7] = uVar2;
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 3)) {
      return;
    }
    uVar21 = *puVar20;
    uVar2 = param_1[3];
    *puVar20 = *puVar13;
    param_1[3] = param_1[5];
    *puVar13 = uVar21;
    param_1[5] = uVar2;
    if (*(uint *)(param_1 + 3) <= *(uint *)(param_1 + 1)) {
      return;
    }
    break;
  default:
    if (lVar15 < 0x1f0) {
      uVar14 = *(uint *)(param_1 + 3);
      puVar13 = param_1 + 4;
      puVar20 = param_1 + 2;
      uVar18 = *(uint *)(param_1 + 5);
      if (*(uint *)(param_1 + 1) < uVar14) {
        if (uVar14 < uVar18) {
          local_70 = *param_1;
          uStack_68 = param_1[1];
          *param_1 = *puVar13;
          param_1[1] = param_1[5];
        }
        else {
          uVar21 = *param_1;
          uVar2 = param_1[1];
          *param_1 = *puVar20;
          param_1[1] = param_1[3];
          *puVar20 = uVar21;
          param_1[3] = uVar2;
          if (uVar18 <= *(uint *)(param_1 + 3)) goto joined_r0x00284f68;
          local_70 = *puVar20;
          uStack_68 = param_1[3];
          *puVar20 = *puVar13;
          param_1[3] = param_1[5];
        }
        *puVar13 = local_70;
        param_1[5] = uStack_68;
      }
      else if (uVar14 < uVar18) {
        uVar21 = *puVar20;
        uVar2 = param_1[3];
        *puVar20 = *puVar13;
        param_1[3] = param_1[5];
        *puVar13 = uVar21;
        param_1[5] = uVar2;
        if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
          uVar21 = *param_1;
          uVar2 = param_1[1];
          *param_1 = *puVar20;
          param_1[1] = param_1[3];
          *puVar20 = uVar21;
          param_1[3] = uVar2;
        }
      }
joined_r0x00284f68:
      if (param_1 + 6 == param_2) {
        return;
      }
      lVar8 = 0;
      puVar20 = param_1 + 6;
      goto LAB_00284fdc;
    }
    lVar22 = lVar8;
    if (lVar8 < 0) {
      lVar22 = lVar8 + 1;
    }
    puVar13 = param_1 + (lVar22 >> 1) * 2;
    if (lVar15 < 0x3e71) {
      puVar9 = (uint *)(puVar13 + 1);
      uVar14 = *puVar9;
      if (*(uint *)(param_1 + 1) < uVar14) {
        if (uVar14 < *(uint *)(param_2 + -1)) {
          uVar21 = *param_1;
          uVar2 = param_1[1];
          iVar5 = 1;
          iVar4 = 1;
          uVar19 = param_2[-1];
          *param_1 = *puVar20;
          param_1[1] = uVar19;
          *puVar20 = uVar21;
          param_2[-1] = uVar2;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar13 + 1);
          if (uVar14 <= uVar18) goto LAB_00284ba4;
        }
        else {
          uVar21 = *param_1;
          uVar2 = param_1[1];
          uVar19 = puVar13[1];
          *param_1 = *puVar13;
          param_1[1] = uVar19;
          *puVar13 = uVar21;
          puVar13[1] = uVar2;
          if (*puVar9 < *(uint *)(param_2 + -1)) {
            uVar21 = *puVar13;
            uVar2 = puVar13[1];
            uVar19 = param_2[-1];
            *puVar13 = *puVar20;
            puVar13[1] = uVar19;
            *puVar20 = uVar21;
            param_2[-1] = uVar2;
            goto LAB_00284d90;
          }
LAB_00284dc0:
          iVar5 = 1;
          iVar4 = 1;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar13 + 1);
          if (uVar14 <= uVar18) goto LAB_00284ba4;
        }
      }
      else if (uVar14 < *(uint *)(param_2 + -1)) {
        uVar21 = *puVar13;
        uVar2 = puVar13[1];
        uVar19 = param_2[-1];
        *puVar13 = *puVar20;
        puVar13[1] = uVar19;
        *puVar20 = uVar21;
        param_2[-1] = uVar2;
        if (*puVar9 <= *(uint *)(param_1 + 1)) goto LAB_00284dc0;
        uVar21 = *param_1;
        uVar2 = param_1[1];
        uVar19 = puVar13[1];
        *param_1 = *puVar13;
        param_1[1] = uVar19;
        *puVar13 = uVar21;
        puVar13[1] = uVar2;
LAB_00284d90:
        iVar5 = 2;
        iVar4 = 2;
        uVar14 = *(uint *)(param_1 + 1);
        uVar18 = *(uint *)(puVar13 + 1);
        if (uVar14 <= uVar18) goto LAB_00284ba4;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
        uVar14 = *(uint *)(param_1 + 1);
        uVar18 = *(uint *)(puVar13 + 1);
        if (uVar14 <= uVar18) goto LAB_00284ba4;
      }
LAB_00284b0c:
      puVar12 = param_1 + 2;
      puVar10 = puVar20;
      if (puVar12 < puVar20) goto LAB_00284c18;
      goto LAB_00284b1c;
    }
    lVar15 = lVar8 + 3;
    if (-1 < lVar8) {
      lVar15 = lVar8;
    }
    lVar15 = lVar15 >> 2;
    puVar12 = param_1 + lVar15 * 2;
    puVar16 = puVar13 + lVar15 * 2;
    iVar4 = FUN_002851f0(param_1,puVar12,puVar13,puVar16,param_3);
    if (*(uint *)(puVar16 + 1) < *(uint *)(param_2 + -1)) {
      uVar21 = *puVar16;
      uVar2 = puVar16[1];
      uVar19 = param_2[-1];
      *puVar16 = *puVar20;
      puVar16[1] = uVar19;
      *puVar20 = uVar21;
      param_2[-1] = uVar2;
      if (*(uint *)(puVar13 + 1) < *(uint *)(puVar16 + 1)) {
        uVar21 = *puVar13;
        uVar2 = puVar13[1];
        uVar19 = puVar16[1];
        *puVar13 = *puVar16;
        puVar13[1] = uVar19;
        *puVar16 = uVar21;
        puVar16[1] = uVar2;
        if (*(uint *)(param_1 + lVar15 * 2 + 1) < *(uint *)(puVar13 + 1)) {
          uVar21 = *puVar12;
          uVar2 = puVar12[1];
          uVar19 = puVar13[1];
          *puVar12 = *puVar13;
          puVar12[1] = uVar19;
          *puVar13 = uVar21;
          puVar13[1] = uVar2;
          if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + lVar15 * 2 + 1)) {
            uVar21 = *param_1;
            uVar2 = param_1[1];
            iVar4 = iVar4 + 4;
            uVar19 = puVar12[1];
            *param_1 = *puVar12;
            param_1[1] = uVar19;
            *puVar12 = uVar21;
            puVar12[1] = uVar2;
            goto LAB_00284afc;
          }
          iVar4 = iVar4 + 3;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar13 + 1);
          iVar5 = iVar4;
          if (uVar14 <= uVar18) goto LAB_00284ba4;
        }
        else {
          iVar4 = iVar4 + 2;
          uVar14 = *(uint *)(param_1 + 1);
          uVar18 = *(uint *)(puVar13 + 1);
          iVar5 = iVar4;
          if (uVar14 <= uVar18) goto LAB_00284ba4;
        }
      }
      else {
        iVar4 = iVar4 + 1;
        uVar14 = *(uint *)(param_1 + 1);
        uVar18 = *(uint *)(puVar13 + 1);
        iVar5 = iVar4;
        if (uVar14 <= uVar18) goto LAB_00284ba4;
      }
      goto LAB_00284b0c;
    }
LAB_00284afc:
    uVar14 = *(uint *)(param_1 + 1);
    uVar18 = *(uint *)(puVar13 + 1);
    iVar5 = iVar4;
    if (uVar18 < uVar14) goto LAB_00284b0c;
LAB_00284ba4:
    puVar12 = param_2;
    while (puVar16 = puVar12, param_1 + 4 != puVar16) {
      puVar12 = puVar16 + -2;
      if (uVar18 < *(uint *)(puVar16 + -3)) goto code_r0x00284bc4;
    }
    puVar12 = param_1 + 2;
    if (uVar14 <= *(uint *)(param_2 + -1)) {
      if (puVar12 == puVar20) {
        return;
      }
      puVar12 = param_1 + 4;
      while (uVar14 <= *(uint *)(puVar12 + -1)) {
        puVar12 = puVar12 + 2;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar21 = puVar12[-2];
      uVar2 = puVar12[-1];
      uVar19 = param_2[-1];
      puVar12[-2] = *puVar20;
      puVar12[-1] = uVar19;
      *puVar20 = uVar21;
      param_2[-1] = uVar2;
    }
    if (puVar12 == puVar20) {
      return;
    }
    puVar16 = puVar20;
    while( true ) {
      puVar13 = puVar12 + -2;
      do {
        puVar10 = puVar13;
        puVar13 = puVar10 + 2;
      } while (*(uint *)(param_1 + 1) <= *(uint *)(puVar10 + 3));
      puVar12 = puVar10 + 4;
      do {
        puVar17 = puVar16;
        puVar16 = puVar17 + -2;
      } while (*(uint *)(puVar17 + -1) < *(uint *)(param_1 + 1));
      if (puVar16 <= puVar13) break;
      uVar21 = *puVar13;
      uVar2 = puVar10[3];
      uVar19 = puVar17[-1];
      *puVar13 = *puVar16;
      puVar10[3] = uVar19;
      *puVar16 = uVar21;
      puVar17[-1] = uVar2;
    }
    goto LAB_002849e8;
  }
  local_70 = *param_1;
  uStack_68 = param_1[1];
  uVar21 = puVar20[1];
  *param_1 = *puVar20;
  param_1[1] = uVar21;
LAB_00285144:
  *puVar20 = local_70;
  puVar20[1] = uStack_68;
  return;
LAB_00284fdc:
  uVar14 = *(uint *)(puVar20 + 1);
  if (*(uint *)(puVar13 + 1) < uVar14) {
    uVar21 = *puVar20;
    uVar3 = *(undefined4 *)((long)puVar20 + 0xc);
    lVar15 = lVar8;
    do {
      lVar22 = lVar15;
      *(undefined8 *)((long)param_1 + lVar22 + 0x30) =
           *(undefined8 *)((long)param_1 + lVar22 + 0x20);
      *(undefined8 *)((long)param_1 + lVar22 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar22 + 0x28);
      if (lVar22 == -0x20) {
        puVar13 = param_1;
        goto LAB_00284fc4;
      }
      lVar15 = lVar22 + -0x10;
    } while (*(uint *)((long)param_1 + lVar22 + 0x18) < uVar14);
    puVar13 = (undefined8 *)((long)param_1 + lVar22 + 0x20);
LAB_00284fc4:
    *puVar13 = uVar21;
    *(uint *)(puVar13 + 1) = uVar14;
    *(undefined4 *)((long)puVar13 + 0xc) = uVar3;
  }
  puVar12 = puVar20 + 2;
  lVar8 = lVar8 + 0x10;
  puVar13 = puVar20;
  puVar20 = puVar12;
  if (puVar12 == param_2) {
switchD_00284eb4_caseD_0:
    return;
  }
  goto LAB_00284fdc;
code_r0x00284bc4:
  uVar21 = *param_1;
  uVar2 = param_1[1];
  iVar5 = iVar4 + 1;
  puVar10 = puVar16 + -4;
  uVar19 = puVar16[-3];
  *param_1 = *puVar10;
  param_1[1] = uVar19;
  *puVar10 = uVar21;
  puVar16[-3] = uVar2;
  puVar12 = param_1 + 2;
  if (puVar12 < puVar10) {
LAB_00284c18:
    while( true ) {
      puVar16 = puVar12 + -2;
      do {
        puVar17 = puVar16;
        puVar16 = puVar17 + 2;
      } while (*(uint *)(puVar13 + 1) < *(uint *)(puVar17 + 3));
      puVar12 = puVar17 + 4;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + -2;
      } while (*(uint *)(puVar11 + -1) <= *(uint *)(puVar13 + 1));
      if (puVar10 < puVar16) break;
      uVar21 = *puVar16;
      uVar2 = puVar17[3];
      iVar5 = iVar5 + 1;
      uVar19 = puVar11[-1];
      puVar1 = puVar10;
      if (puVar13 != puVar16) {
        puVar1 = puVar13;
      }
      *puVar16 = *puVar10;
      puVar17[3] = uVar19;
      *puVar10 = uVar21;
      puVar11[-1] = uVar2;
      puVar13 = puVar1;
    }
    if (puVar16 != puVar13) goto LAB_00284b24;
LAB_00284c58:
    if (iVar5 != 0) goto LAB_00284c8c;
  }
  else {
LAB_00284b1c:
    puVar16 = param_1 + 2;
    if (puVar16 == puVar13) goto LAB_00284c58;
LAB_00284b24:
    if (*(uint *)(puVar13 + 1) <= *(uint *)(puVar16 + 1)) goto LAB_00284c58;
    uVar21 = *puVar16;
    uVar2 = puVar16[1];
    uVar19 = puVar13[1];
    *puVar16 = *puVar13;
    puVar16[1] = uVar19;
    *puVar13 = uVar21;
    puVar13[1] = uVar2;
    if (iVar5 != -1) goto LAB_00284c8c;
  }
  uVar6 = FUN_002853a0(param_1,puVar16,param_3);
  uVar7 = FUN_002853a0(puVar16 + 2,param_2,param_3);
  if ((uVar7 & 1) != 0) goto LAB_00284e94;
  puVar13 = puVar16 + 2;
  if ((uVar6 & 1) != 0) goto LAB_002849e8;
LAB_00284c8c:
  if ((long)param_2 - (long)puVar16 <= (long)puVar16 - (long)param_1) {
    FUN_002849b0(puVar16 + 2,param_2,param_3);
    param_2 = puVar16;
    goto LAB_002849e0;
  }
  FUN_002849b0(param_1,puVar16,param_3);
  puVar13 = puVar16 + 2;
  goto LAB_002849e8;
LAB_00284e94:
  param_2 = puVar16;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_002849e0;
}


