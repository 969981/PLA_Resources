/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137d9f0; name: FUN_0137d9f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0137d9f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int local_7c;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
LAB_0137da30:
  puVar15 = param_2 + -1;
  puVar11 = param_2 + -2;
  puVar17 = param_1;
LAB_0137da40:
  param_1 = puVar17;
  lVar14 = (long)param_2 - (long)param_1;
  uVar12 = lVar14 >> 3;
  switch(uVar12) {
  case 0:
  case 1:
    goto switchD_0137dda0_caseD_0;
  case 2:
    puStack_68 = (undefined1 *)param_2[-1];
    local_70 = (undefined1 *)*param_1;
    if (puStack_68 == &DAT_cbf29ce484222645) {
      bVar2 = true;
      uVar6 = 1000000;
      if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e250;
    }
    else {
      uVar6 = FUN_016acf5c(*param_3,&puStack_68);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&puStack_68);
        bVar2 = iVar7 == 0xff;
      }
      else {
        bVar2 = false;
      }
      if (local_70 == &DAT_cbf29ce484222645) {
LAB_0137e250:
        if ((999999 < uVar6) && (bVar2)) {
          return;
        }
        goto LAB_0137de98;
      }
    }
    uVar8 = FUN_016acf5c(*param_3,&local_70);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar7 = FUN_016acbec(*param_3,&local_70);
      uVar4 = iVar7 != 0xff;
    }
    else {
      uVar4 = true;
    }
    uVar1 = uVar4;
    if ((bVar2) || (uVar1 = false, !(bool)uVar4)) {
      if (bVar2) {
        if (uVar8 <= uVar6) {
          return;
        }
        if ((bool)uVar1) {
          return;
        }
      }
    }
    else if (uVar8 <= uVar6) {
      return;
    }
LAB_0137de98:
    uVar13 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar13;
    return;
  case 3:
    FUN_0137e5f0(param_1,param_1 + 1,puVar15,param_3);
    return;
  case 4:
    FUN_0137ea50(param_1,param_1 + 1,param_1 + 2,puVar15,param_3);
    return;
  case 5:
    FUN_0137edb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar15,param_3);
    goto switchD_0137dda0_caseD_0;
  }
  if (lVar14 < 0xf8) {
    FUN_0137f220(param_1,param_2,param_3);
    return;
  }
  uVar10 = uVar12;
  if ((long)uVar12 < 0) {
    uVar10 = uVar12 + 1;
  }
  puVar17 = (undefined8 *)((long)param_1 + (uVar10 & 0x3ffffffffffffffe) * 4);
  if (lVar14 < 0x1f39) {
    local_7c = FUN_0137e5f0(param_1,puVar17,puVar15,param_3);
  }
  else {
    uVar10 = uVar12 + 3;
    if (-1 < (long)uVar12) {
      uVar10 = uVar12;
    }
    lVar14 = (uVar10 & 0x7ffffffffffffffc) * 2;
    local_7c = FUN_0137edb0(param_1,(long)param_1 + lVar14,puVar17,(long)puVar17 + lVar14,puVar15,
                            param_3);
  }
  puStack_68 = (undefined1 *)*param_1;
  local_70 = (undefined1 *)*puVar17;
  puVar16 = puVar11;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar6 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137df64;
LAB_0137e2a0:
    if ((999999 < uVar6) && (bVar2)) {
joined_r0x0137e0cc:
      for (; param_1 != puVar16; puVar16 = puVar16 + -1) {
        puStack_68 = (undefined1 *)*puVar16;
        local_70 = (undefined1 *)*puVar17;
        if (puStack_68 == &DAT_cbf29ce484222645) {
          bVar2 = true;
          uVar6 = 1000000;
          uVar8 = 1000000;
          if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e548;
LAB_0137e5bc:
          bVar3 = bVar2;
          if (999999 < uVar8) {
joined_r0x0137e58c:
            if (bVar3) goto LAB_0137e4f0;
          }
LAB_0137e5d0:
          uVar13 = *param_1;
          *param_1 = *puVar16;
          *puVar16 = uVar13;
          local_7c = local_7c + 1;
          goto LAB_0137dfb0;
        }
        uVar6 = FUN_016acf5c(*param_3,&puStack_68);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar7 = FUN_016acbec(*param_3,&puStack_68);
          bVar2 = iVar7 == 0xff;
        }
        else {
          bVar2 = false;
        }
        uVar8 = uVar6;
        if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e5bc;
LAB_0137e548:
        uVar8 = FUN_016acf5c(*param_3,&local_70);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar7 = FUN_016acbec(*param_3,&local_70);
          bVar5 = iVar7 != 0xff;
        }
        else {
          bVar5 = true;
        }
        bVar3 = bVar5;
        if ((bVar2) || (bVar3 = false, !bVar5)) {
          if (!bVar2) goto LAB_0137e5d0;
          if (uVar6 < uVar8) goto joined_r0x0137e58c;
        }
        else if (uVar6 < uVar8) goto LAB_0137e5d0;
LAB_0137e4f0:
      }
      puVar17 = param_1 + 1;
      puStack_68 = (undefined1 *)*param_1;
      local_70 = (undefined1 *)param_2[-1];
      if (puStack_68 == &DAT_cbf29ce484222645) {
        bVar2 = true;
        uVar6 = 1000000;
        if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e3c4;
      }
      else {
        uVar6 = FUN_016acf5c(*param_3,&puStack_68);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar7 = FUN_016acbec(*param_3,&puStack_68);
          bVar2 = iVar7 == 0xff;
        }
        else {
          bVar2 = false;
        }
        if (local_70 == &DAT_cbf29ce484222645) {
LAB_0137e3c4:
          if ((999999 < uVar6) && (bVar2)) goto LAB_0137e37c;
          goto LAB_0137e4d4;
        }
      }
      uVar8 = FUN_016acf5c(*param_3,&local_70);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&local_70);
        bVar3 = iVar7 != 0xff;
      }
      else {
        bVar3 = true;
      }
      bVar5 = bVar3;
      if ((bVar2) || (bVar5 = false, !bVar3)) {
        if ((bVar2) && ((uVar8 <= uVar6 || (bVar5)))) goto LAB_0137e37c;
      }
      else if (uVar8 <= uVar6) {
LAB_0137e37c:
        if (puVar17 == puVar15) {
          return;
        }
        puVar17 = param_1 + 2;
        do {
          puStack_68 = (undefined1 *)*param_1;
          local_70 = (undefined1 *)puVar17[-1];
          if (puStack_68 == &DAT_cbf29ce484222645) {
            bVar2 = true;
            uVar6 = 1000000;
            uVar8 = 1000000;
            if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e43c;
LAB_0137e4b0:
            bVar3 = bVar2;
            if (uVar8 < 1000000) goto LAB_0137e4c4;
joined_r0x0137e4c0:
            if (!bVar3) goto LAB_0137e4c4;
          }
          else {
            uVar6 = FUN_016acf5c(*param_3,&puStack_68);
            if (*(char *)(param_3 + 1) == '\0') {
              iVar7 = FUN_016acbec(*param_3,&puStack_68);
              bVar2 = iVar7 == 0xff;
            }
            else {
              bVar2 = false;
            }
            uVar8 = uVar6;
            if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e4b0;
LAB_0137e43c:
            uVar8 = FUN_016acf5c(*param_3,&local_70);
            if (*(char *)(param_3 + 1) != '\0') {
              bVar3 = true;
              bVar5 = bVar3;
              if (!bVar2) goto LAB_0137e46c;
LAB_0137e470:
              if (bVar2) {
                if (uVar8 <= uVar6) goto LAB_0137e3e4;
                goto joined_r0x0137e4c0;
              }
              goto LAB_0137e4c4;
            }
            iVar7 = FUN_016acbec(*param_3,&local_70);
            bVar3 = iVar7 != 0xff;
            bVar5 = bVar3;
            if (bVar2) goto LAB_0137e470;
LAB_0137e46c:
            bVar3 = false;
            if (!bVar5) goto LAB_0137e470;
            if (uVar6 < uVar8) goto LAB_0137e4c4;
          }
LAB_0137e3e4:
          puVar17 = puVar17 + 1;
          if (param_2 == puVar17) {
            return;
          }
        } while( true );
      }
      goto LAB_0137e4d4;
    }
  }
  else {
    uVar6 = FUN_016acf5c(*param_3,&puStack_68);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar7 = FUN_016acbec(*param_3,&puStack_68);
      bVar2 = iVar7 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e2a0;
LAB_0137df64:
    uVar8 = FUN_016acf5c(*param_3,&local_70);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar7 = FUN_016acbec(*param_3,&local_70);
      bVar3 = iVar7 != 0xff;
    }
    else {
      bVar3 = true;
    }
    bVar5 = bVar3;
    if ((!bVar2) && (bVar5 = false, bVar3)) {
      if (uVar6 < uVar8) goto LAB_0137dfac;
      goto joined_r0x0137e0cc;
    }
    if ((bVar2) && ((uVar8 <= uVar6 || (bVar5)))) goto joined_r0x0137e0cc;
  }
LAB_0137dfac:
  puVar16 = puVar15;
LAB_0137dfb0:
  puVar18 = param_1 + 1;
  if (puVar18 < puVar16) {
    do {
      while( true ) {
        puStack_68 = (undefined1 *)*puVar18;
        local_70 = (undefined1 *)*puVar17;
        if (puStack_68 == &DAT_cbf29ce484222645) break;
        uVar6 = FUN_016acf5c(*param_3,&puStack_68);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar7 = FUN_016acbec(*param_3,&puStack_68);
          bVar2 = iVar7 == 0xff;
        }
        else {
          bVar2 = false;
        }
        if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e1f0;
LAB_0137daa8:
        uVar8 = FUN_016acf5c(*param_3,&local_70);
        if (*(char *)(param_3 + 1) != '\0') {
          bVar3 = true;
          bVar5 = bVar3;
          if (!bVar2) goto LAB_0137dad8;
LAB_0137dadc:
          if (!bVar2) goto LAB_0137da58;
          if (uVar6 < uVar8) goto joined_r0x0137e200;
          goto LAB_0137dafc;
        }
        iVar7 = FUN_016acbec(*param_3,&local_70);
        bVar3 = iVar7 != 0xff;
        bVar5 = bVar3;
        if (bVar2) goto LAB_0137dadc;
LAB_0137dad8:
        bVar3 = false;
        if (!bVar5) goto LAB_0137dadc;
        if (uVar8 <= uVar6) goto LAB_0137dafc;
LAB_0137da58:
        puVar18 = puVar18 + 1;
      }
      bVar2 = true;
      uVar6 = 1000000;
      if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137daa8;
LAB_0137e1f0:
      bVar3 = bVar2;
      if (uVar6 < 1000000) goto LAB_0137da58;
joined_r0x0137e200:
      if (!bVar3) goto LAB_0137da58;
LAB_0137dafc:
      do {
        while( true ) {
          puVar16 = puVar16 + -1;
          puStack_68 = (undefined1 *)*puVar16;
          local_70 = (undefined1 *)*puVar17;
          if (puStack_68 != &DAT_cbf29ce484222645) break;
          bVar2 = true;
          uVar6 = 1000000;
          if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137db48;
LAB_0137e1c4:
          if (uVar6 < 1000000) goto LAB_0137db9c;
joined_r0x0137db8c:
          if (!bVar2) goto LAB_0137db9c;
        }
        uVar6 = FUN_016acf5c(*param_3,&puStack_68);
        if (*(char *)(param_3 + 1) == '\0') {
          iVar7 = FUN_016acbec(*param_3,&puStack_68);
          bVar2 = iVar7 == 0xff;
        }
        else {
          bVar2 = false;
        }
        if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e1c4;
LAB_0137db48:
        uVar8 = FUN_016acf5c(*param_3,&local_70);
        if (*(char *)(param_3 + 1) != '\0') {
          bVar3 = true;
          bVar5 = bVar3;
          if (!bVar2) goto LAB_0137db78;
LAB_0137db7c:
          if (!bVar2) break;
          bVar2 = bVar3;
          if (uVar6 < uVar8) goto joined_r0x0137db8c;
          goto LAB_0137dafc;
        }
        iVar7 = FUN_016acbec(*param_3,&local_70);
        bVar3 = iVar7 != 0xff;
        bVar5 = bVar3;
        if (bVar2) goto LAB_0137db7c;
LAB_0137db78:
        bVar3 = false;
        if (!bVar5) goto LAB_0137db7c;
      } while (uVar8 <= uVar6);
LAB_0137db9c:
      if (puVar16 < puVar18) break;
      uVar13 = *puVar18;
      *puVar18 = *puVar16;
      *puVar16 = uVar13;
      local_7c = local_7c + 1;
      puVar9 = puVar16;
      if (puVar17 != puVar18) {
        puVar9 = puVar17;
      }
      puVar18 = puVar18 + 1;
      puVar17 = puVar9;
    } while( true );
  }
  if (puVar18 == puVar17) goto LAB_0137e0e4;
  puStack_68 = (undefined1 *)*puVar17;
  local_70 = (undefined1 *)*puVar18;
  if (puStack_68 == &DAT_cbf29ce484222645) {
    bVar2 = true;
    uVar6 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137e01c;
LAB_0137e2cc:
    uVar1 = bVar2;
    if (999999 < uVar6) {
joined_r0x0137e060:
      if ((bool)uVar1) goto LAB_0137e0e4;
    }
LAB_0137e064:
    uVar13 = *puVar18;
    *puVar18 = *puVar17;
    *puVar17 = uVar13;
    if (local_7c == -1) {
LAB_0137e0ec:
      uVar12 = FUN_0137f5a0(param_1,puVar18,param_3);
      uVar10 = FUN_0137f5a0(puVar18 + 1,param_2,param_3);
      if ((uVar10 & 1) != 0) goto LAB_0137e208;
      puVar17 = puVar18 + 1;
      if ((uVar12 & 1) != 0) goto LAB_0137da40;
    }
  }
  else {
    uVar6 = FUN_016acf5c(*param_3,&puStack_68);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar7 = FUN_016acbec(*param_3,&puStack_68);
      bVar2 = iVar7 == 0xff;
    }
    else {
      bVar2 = false;
    }
    if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e2cc;
LAB_0137e01c:
    uVar8 = FUN_016acf5c(*param_3,&local_70);
    if (*(char *)(param_3 + 1) == '\0') {
      iVar7 = FUN_016acbec(*param_3,&local_70);
      uVar4 = iVar7 != 0xff;
    }
    else {
      uVar4 = true;
    }
    uVar1 = uVar4;
    if ((bVar2) || (uVar1 = false, !(bool)uVar4)) {
      if (!bVar2) goto LAB_0137e064;
      if (uVar8 <= uVar6) goto LAB_0137e0e4;
      goto joined_r0x0137e060;
    }
    if (uVar6 < uVar8) goto LAB_0137e064;
LAB_0137e0e4:
    if (local_7c == 0) goto LAB_0137e0ec;
  }
  if ((long)param_2 - (long)puVar18 <= (long)puVar18 - (long)param_1) {
    FUN_0137d9f0(puVar18 + 1,param_2,param_3);
    param_2 = puVar18;
    goto LAB_0137da30;
  }
  FUN_0137d9f0(param_1,puVar18,param_3);
  puVar17 = puVar18 + 1;
  goto LAB_0137da40;
LAB_0137e4c4:
  uVar13 = puVar17[-1];
  puVar17[-1] = *puVar15;
  *puVar15 = uVar13;
LAB_0137e4d4:
  puVar16 = puVar15;
  if (puVar17 == puVar15) {
    return;
  }
  do {
    while( true ) {
      puStack_68 = (undefined1 *)*param_1;
      local_70 = (undefined1 *)*puVar17;
      if (puStack_68 == &DAT_cbf29ce484222645) break;
      uVar6 = FUN_016acf5c(*param_3,&puStack_68);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&puStack_68);
        bVar2 = iVar7 == 0xff;
      }
      else {
        bVar2 = false;
      }
      uVar8 = uVar6;
      if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e274;
LAB_0137dc5c:
      uVar8 = FUN_016acf5c(*param_3,&local_70);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&local_70);
        bVar3 = iVar7 != 0xff;
      }
      else {
        bVar3 = true;
      }
      bVar5 = bVar3;
      if ((bVar2) || (bVar5 = false, !bVar3)) {
        if (!bVar2) goto LAB_0137dcb0;
        if (uVar8 <= uVar6) goto LAB_0137dc0c;
        goto joined_r0x0137e284;
      }
      if (uVar6 < uVar8) goto LAB_0137dcb0;
LAB_0137dc0c:
      puVar17 = puVar17 + 1;
    }
    bVar2 = true;
    uVar6 = 1000000;
    uVar8 = 1000000;
    if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137dc5c;
LAB_0137e274:
    bVar5 = bVar2;
    if (999999 < uVar8) {
joined_r0x0137e284:
      if (bVar5) goto LAB_0137dc0c;
    }
LAB_0137dcb0:
    do {
      while( true ) {
        puStack_68 = (undefined1 *)*param_1;
        puVar16 = puVar16 + -1;
        local_70 = (undefined1 *)*puVar16;
        if (puStack_68 != &DAT_cbf29ce484222645) break;
        bVar2 = true;
        uVar6 = 1000000;
        uVar8 = 1000000;
        if (local_70 != &DAT_cbf29ce484222645) goto LAB_0137dcfc;
LAB_0137e228:
        if ((999999 < uVar8) && (bVar2)) goto LAB_0137dd5c;
      }
      uVar6 = FUN_016acf5c(*param_3,&puStack_68);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&puStack_68);
        bVar2 = iVar7 == 0xff;
      }
      else {
        bVar2 = false;
      }
      uVar8 = uVar6;
      if (local_70 == &DAT_cbf29ce484222645) goto LAB_0137e228;
LAB_0137dcfc:
      uVar8 = FUN_016acf5c(*param_3,&local_70);
      if (*(char *)(param_3 + 1) == '\0') {
        iVar7 = FUN_016acbec(*param_3,&local_70);
        uVar4 = iVar7 != 0xff;
      }
      else {
        uVar4 = true;
      }
      uVar1 = uVar4;
      if ((bVar2) || (uVar1 = false, !(bool)uVar4)) {
        if ((bVar2) && ((uVar8 <= uVar6 || ((bool)uVar1)))) break;
        goto LAB_0137dcb0;
      }
    } while (uVar6 < uVar8);
LAB_0137dd5c:
    if (puVar16 <= puVar17) break;
    uVar13 = *puVar17;
    *puVar17 = *puVar16;
    *puVar16 = uVar13;
    puVar17 = puVar17 + 1;
  } while( true );
  goto LAB_0137da40;
LAB_0137e208:
  param_2 = puVar18;
  if ((uVar12 & 1) != 0) {
switchD_0137dda0_caseD_0:
    return;
  }
  goto LAB_0137da30;
}


