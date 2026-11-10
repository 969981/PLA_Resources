/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00adcd20; name: FUN_00adcd20
 */


bool FUN_00adcd20(long *param_1,int *param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  char cVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  code *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  byte *local_1d0 [12];
  undefined1 auStack_170 [8];
  long local_168;
  int local_78;
  byte local_6c [12];
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar12 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar12;
  lVar20 = *(long *)(lVar12 + 200);
  lVar12 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 0x62) * 6];
  if (lVar12 == 0) {
    plVar13 = &DAT_0428af30;
  }
  else {
    plVar13 = &DAT_0428af30;
    if (*(char *)(lVar12 + 0x1e1) != '\0') {
      plVar13 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 0x62) * 6;
    }
  }
  piVar11 = (int *)((long)*(uint **)(*plVar13 + 0x250) + (ulong)**(uint **)(*plVar13 + 0x250));
  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x2f) ||
     (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x17], uVar14 == 0)) {
    uVar17 = 0;
    plVar13 = *(long **)(lVar20 + 0x98);
    if (plVar13 == (long *)0x0) goto LAB_00adce14;
LAB_00adcddc:
    uVar9 = (uint)((int)plVar13[4] != 0);
    for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (*(int *)(plVar13 + 4) != 0) {
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
    uVar17 = *(undefined1 *)((long)piVar11 + uVar14);
    plVar13 = *(long **)(lVar20 + 0x98);
    if (plVar13 != (long *)0x0) goto LAB_00adcddc;
LAB_00adce14:
    uVar9 = 0;
  }
  uVar15 = *(ulong *)(lVar20 + 0x70);
  local_6c[0] = *(byte *)(param_1 + 0x5b);
  uVar14 = (ulong)local_6c[0];
  if (uVar15 != 0) {
    uVar19 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar16 = (int)uVar15 - 1 & uVar14;
    }
    else {
      uVar16 = uVar14;
      if (uVar15 <= uVar14) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar14 / uVar15;
        }
        uVar16 = uVar14 - uVar16 * uVar15;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar20 + 0x68) + uVar16 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar19 < 2) {
        iVar7 = 0x15;
        do {
          if (plVar13[1] == uVar14) {
            if (*(byte *)(plVar13 + 2) == local_6c[0]) goto LAB_00adcf18;
          }
          else if ((plVar13[1] & uVar15 - 1) != uVar16) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        iVar7 = 0x15;
        do {
          uVar19 = plVar13[1];
          if (uVar19 == uVar14) {
            if (*(byte *)(plVar13 + 2) == local_6c[0]) goto LAB_00adcf18;
          }
          else {
            if (uVar15 <= uVar19) {
              uVar2 = 0;
              if (uVar15 != 0) {
                uVar2 = uVar19 / uVar15;
              }
              uVar19 = uVar19 - uVar2 * uVar15;
            }
            if (uVar19 != uVar16) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      goto LAB_00adcf1c;
    }
  }
  iVar7 = 0x15;
LAB_00adcf1c:
  bVar5 = false;
  switch(uVar17) {
  case 4:
  case 8:
    bVar5 = 1 < (int)uVar9;
    break;
  case 5:
    bVar5 = iVar7 == 0;
    goto LAB_00addfc8;
  case 6:
    bVar5 = iVar7 != 0;
LAB_00addfc8:
    bVar5 = (bool)(1 < (int)uVar9 & bVar5);
  }
  if (*param_2 == 2) {
LAB_00adcf5c:
    if (uVar15 == 0) goto LAB_00add240;
LAB_00adcf60:
    uVar19 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar16 = (int)uVar15 - 1 & uVar14;
    }
    else {
      uVar16 = uVar14;
      if (uVar15 <= uVar14) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar14 / uVar15;
        }
        uVar16 = uVar14 - uVar16 * uVar15;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar20 + 0x68) + uVar16 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_00add240;
    if (uVar19 < 2) {
      iVar7 = 0x15;
      do {
        if (plVar13[1] == uVar14) {
          if (*(byte *)(plVar13 + 2) == local_6c[0]) goto LAB_00add050;
        }
        else if ((plVar13[1] & uVar15 - 1) != uVar16) break;
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    else {
      iVar7 = 0x15;
      do {
        uVar19 = plVar13[1];
        if (uVar19 == uVar14) {
          if (*(byte *)(plVar13 + 2) == local_6c[0]) goto LAB_00add050;
        }
        else {
          if (uVar15 <= uVar19) {
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar19 / uVar15;
            }
            uVar19 = uVar19 - uVar2 * uVar15;
          }
          if (uVar19 != uVar16) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  else {
    if (*param_2 != 1) {
      bVar5 = true;
      goto LAB_00adcf5c;
    }
    bVar5 = (bool)(bVar5 ^ 1);
    if (uVar15 != 0) goto LAB_00adcf60;
LAB_00add240:
    iVar7 = 0x15;
  }
LAB_00add054:
  if (param_2[1] == 2) {
    bVar4 = iVar7 != 0;
LAB_00add1c8:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[1] == 1) {
    bVar4 = iVar7 == 0;
    goto LAB_00add1c8;
  }
  if (param_2[2] == 1) {
    bVar6 = *(byte *)(param_1 + 99);
LAB_00add210:
    bVar5 = (bVar5 & bVar6) != 0;
  }
  else if (param_2[2] == 2) {
    bVar6 = *(byte *)(param_1 + 99) ^ 0xff;
    goto LAB_00add210;
  }
  if (param_2[3] == 1) {
    bVar4 = *(char *)(lVar20 + 0x564) != '\0';
LAB_00add1e8:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[3] == 2) {
    bVar4 = *(char *)(lVar20 + 0x564) == '\0';
    goto LAB_00add1e8;
  }
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[4] == 2) {
    bVar6 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    bVar5 = (bool)(bVar5 & (bVar6 ^ 1));
  }
  else if (param_2[4] == 1) {
    bVar6 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    bVar5 = (bool)(bVar5 & bVar6);
  }
  local_6c[0] = *(byte *)((long)param_1 + 0x2d9);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[5] == 2) {
    bVar6 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    bVar6 = bVar6 ^ 1;
    plVar13 = *(long **)(lVar20 + 0x98);
joined_r0x00adde70:
    bVar5 = (bool)(bVar5 & bVar6);
    if (plVar13 != (long *)0x0) goto LAB_00add194;
LAB_00add27c:
    uVar9 = 0;
  }
  else {
    if (param_2[5] == 1) {
      bVar6 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
      plVar13 = *(long **)(lVar20 + 0x98);
      goto joined_r0x00adde70;
    }
    plVar13 = *(long **)(lVar20 + 0x98);
    if (plVar13 == (long *)0x0) goto LAB_00add27c;
LAB_00add194:
    uVar9 = (uint)((int)plVar13[4] != 0);
    for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (*(int *)(plVar13 + 4) != 0) {
        uVar9 = uVar9 + 1;
      }
    }
  }
  if (param_2[6] == 2) {
    bVar4 = (int)uVar9 < 2;
LAB_00adde80:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[6] == 1) {
    bVar4 = 1 < (int)uVar9;
    goto LAB_00adde80;
  }
  if (param_2[7] - 1U < 4) {
    bVar5 = (bool)(bVar5 & *(int *)((long)param_1 + 0x31c) == param_2[7]);
  }
  if (param_2[8] - 1U < 4) {
    bVar5 = (bool)(bVar5 & (int)param_1[100] == param_2[8]);
  }
  if (param_2[9] == 1) {
    if (*(char *)((long)param_1 + 0x326) == '\0') {
      *(undefined1 *)((long)param_1 + 0x326) = 1;
      bVar6 = FUN_00adfaf8(param_1);
      *(byte *)((long)param_1 + 0x327) = bVar6 & 1;
    }
    else {
      bVar6 = *(char *)((long)param_1 + 0x327) != '\0';
    }
    bVar5 = (bool)(bVar5 & bVar6);
  }
  else if (param_2[9] == 2) {
    if (*(char *)((long)param_1 + 0x326) == '\0') {
      *(undefined1 *)((long)param_1 + 0x326) = 1;
      bVar6 = FUN_00adfaf8(param_1);
      *(byte *)((long)param_1 + 0x327) = bVar6 & 1;
    }
    else {
      bVar6 = *(char *)((long)param_1 + 0x327) != '\0';
    }
    bVar5 = (bool)(bVar5 & (bVar6 ^ 1));
  }
  local_6c[0] = *(byte *)(param_1 + 0x5b);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[10] == 1) {
    uVar14 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    if ((uVar14 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x2c9;
    }
LAB_00addb94:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[10] == 2) {
    uVar14 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    if ((uVar14 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x2c9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    goto LAB_00addb94;
  }
  local_6c[0] = *(byte *)((long)param_1 + 0x2d9);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0xb] == 2) {
    uVar14 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    if ((uVar14 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x2c9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
LAB_00ade014:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0xb] == 1) {
    uVar14 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98));
    if ((uVar14 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x2c9;
    }
    goto LAB_00ade014;
  }
  if (param_2[0xc] == 1) {
    bVar6 = FUN_0099d704(lVar20);
    bVar5 = (bool)(bVar5 & bVar6);
  }
  else if (param_2[0xc] == 2) {
    bVar6 = FUN_0099d704(lVar20);
    bVar5 = (bool)(bVar5 & (bVar6 ^ 1));
  }
  if (param_2[0xd] == 1) {
    bVar6 = FUN_00ab0c78();
    bVar5 = (bool)(bVar5 & bVar6);
  }
  else if (param_2[0xd] == 2) {
    bVar6 = FUN_00ab0c78();
    bVar5 = (bool)(bVar5 & (bVar6 ^ 1));
  }
  local_6c[0] = *(byte *)(param_1 + 0x5b);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0xe] == 1) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x70) + 0x60);
    uVar9 = FUN_02c68b0c(*(undefined8 *)(lVar12 + 0x98));
    uVar10 = FUN_02c70958(*(undefined8 *)(lVar12 + 0x98));
    bVar4 = (uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0) < 0x10;
LAB_00add5d0:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0xe] == 2) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x70) + 0x60);
    uVar9 = FUN_02c68b0c(*(undefined8 *)(lVar12 + 0x98));
    uVar10 = FUN_02c70958(*(undefined8 *)(lVar12 + 0x98));
    bVar4 = 0xf < (uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0);
    goto LAB_00add5d0;
  }
  local_6c[0] = *(byte *)((long)param_1 + 0x2d9);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0xf] == 1) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x70) + 0x60);
    uVar9 = FUN_02c68b0c(*(undefined8 *)(lVar12 + 0x98));
    uVar10 = FUN_02c70958(*(undefined8 *)(lVar12 + 0x98));
    bVar4 = (uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0) < 0x10;
LAB_00addbf8:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0xf] == 2) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x70) + 0x60);
    uVar9 = FUN_02c68b0c(*(undefined8 *)(lVar12 + 0x98));
    uVar10 = FUN_02c70958(*(undefined8 *)(lVar12 + 0x98));
    bVar4 = 0xf < (uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0);
    goto LAB_00addbf8;
  }
  uVar14 = *(ulong *)(lVar20 + 0x70);
  if (uVar14 == 0) {
LAB_00addbb0:
    cVar18 = '\x01';
  }
  else {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    bVar6 = *(byte *)(param_1 + 0x5b);
    uVar19 = (ulong)bVar6;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (int)uVar14 - 1 & uVar19;
    }
    else {
      uVar16 = uVar19;
      if (uVar14 <= uVar19) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar19 / uVar14;
        }
        uVar16 = uVar19 - uVar16 * uVar14;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar20 + 0x68) + uVar16 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_00addbb0;
    if (uVar15 < 2) {
      do {
        if (plVar13[1] == uVar19) {
          if (*(byte *)(plVar13 + 2) == bVar6) goto LAB_00add630;
        }
        else if ((plVar13[1] & uVar14 - 1) != uVar16) goto LAB_00addbb0;
        plVar13 = (long *)*plVar13;
        cVar18 = '\x01';
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar13[1];
        if (uVar15 == uVar19) {
          if (*(byte *)(plVar13 + 2) == bVar6) goto LAB_00add630;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar2 = 0;
            if (uVar14 != 0) {
              uVar2 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar2 * uVar14;
          }
          if (uVar15 != uVar16) goto LAB_00addbb0;
        }
        plVar13 = (long *)*plVar13;
        cVar18 = '\x01';
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_00add634:
  switch(param_2[0x10]) {
  case 1:
    bVar4 = cVar18 == '\0';
    break;
  case 2:
    bVar4 = cVar18 == '\x01';
    break;
  case 3:
    bVar4 = cVar18 == '\x02';
    break;
  case 4:
    bVar4 = cVar18 == '\x03';
    break;
  default:
    goto joined_r0x00add644;
  }
  bVar5 = (bool)(bVar5 & bVar4);
joined_r0x00add644:
  if (uVar14 == 0) {
LAB_00addbb8:
    cVar18 = '\x01';
  }
  else {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    bVar6 = *(byte *)((long)param_1 + 0x2d9);
    uVar19 = (ulong)bVar6;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (int)uVar14 - 1 & uVar19;
    }
    else {
      uVar16 = uVar19;
      if (uVar14 <= uVar19) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar19 / uVar14;
        }
        uVar16 = uVar19 - uVar16 * uVar14;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar20 + 0x68) + uVar16 * 8);
    if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
    goto LAB_00addbb8;
    if (uVar15 < 2) {
      do {
        if (plVar13[1] == uVar19) {
          if (*(byte *)(plVar13 + 2) == bVar6) goto LAB_00add778;
        }
        else if ((plVar13[1] & uVar14 - 1) != uVar16) goto LAB_00addbb8;
        plVar13 = (long *)*plVar13;
        cVar18 = '\x01';
      } while (plVar13 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar13[1];
        if (uVar15 == uVar19) {
          if (*(byte *)(plVar13 + 2) == bVar6) goto LAB_00add778;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar2 = 0;
            if (uVar14 != 0) {
              uVar2 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar2 * uVar14;
          }
          if (uVar15 != uVar16) goto LAB_00addbb8;
        }
        plVar13 = (long *)*plVar13;
        cVar18 = '\x01';
      } while (plVar13 != (long *)0x0);
    }
  }
LAB_00add77c:
  switch(param_2[0x11]) {
  case 1:
    bVar4 = cVar18 == '\0';
    break;
  case 2:
    bVar4 = cVar18 == '\x01';
    break;
  case 3:
    bVar4 = cVar18 == '\x02';
    break;
  case 4:
    bVar4 = cVar18 == '\x03';
    break;
  default:
    goto switchD_00adda28_default;
  }
  bVar5 = (bool)(bVar5 & bVar4);
switchD_00adda28_default:
  iVar7 = (**(code **)(*param_1 + 0xe8))(param_1,0);
  if (param_2[0x12] == 2) {
    bVar4 = iVar7 - 0x22U < 4;
LAB_00adda68:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x12] == 1) {
    bVar4 = 3 < iVar7 - 0x22U;
    goto LAB_00adda68;
  }
  iVar7 = (**(code **)(*param_1 + 0xe8))(param_1,1);
  if (param_2[0x13] == 2) {
    bVar4 = iVar7 - 0x22U < 4;
LAB_00addeb8:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x13] == 1) {
    bVar4 = 3 < iVar7 - 0x22U;
    goto LAB_00addeb8;
  }
  if (param_2[0x14] == 1) {
    bVar4 = *(char *)(lVar20 + 0x569) != '\0';
LAB_00addba8:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x14] == 2) {
    bVar4 = *(char *)(lVar20 + 0x569) == '\0';
    goto LAB_00addba8;
  }
  if (param_2[0x15] == 1) {
    bVar4 = *(char *)(lVar20 + 0x568) != '\0';
LAB_00add9fc:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x15] == 2) {
    bVar4 = *(char *)(lVar20 + 0x568) == '\0';
    goto LAB_00add9fc;
  }
  local_6c[0] = *(byte *)(param_1 + 0x5b);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0x16] == 2) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
      FUN_00100250(&LAB_00ae2bdc,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar21 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar21;
    lVar12 = *(long *)(lVar12 + 0x70);
    uVar1 = *(undefined2 *)(lVar12 + 0x70);
    uVar17 = *(undefined1 *)(lVar12 + 0x369);
    uVar8 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x98));
    piVar11 = (int *)FUN_010aa4a0(uVar21,uVar1,uVar17,uVar8);
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x29) ||
       (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x14], uVar14 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)((long)piVar11 + uVar14) == '\0';
    }
LAB_00addb74:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x16] == 1) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
      FUN_00100250(&LAB_00ae2bdc,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar21 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar21;
    lVar12 = *(long *)(lVar12 + 0x70);
    uVar1 = *(undefined2 *)(lVar12 + 0x70);
    uVar17 = *(undefined1 *)(lVar12 + 0x369);
    uVar8 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x98));
    piVar11 = (int *)FUN_010aa4a0(uVar21,uVar1,uVar17,uVar8);
    if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0x29) {
      bVar4 = false;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x14];
      bVar4 = false;
      if (uVar14 != 0) {
        bVar4 = *(char *)((long)piVar11 + uVar14) != '\0';
      }
    }
    goto LAB_00addb74;
  }
  local_6c[0] = *(byte *)((long)param_1 + 0x2d9);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0x17] == 2) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
      FUN_00100250(&LAB_00ae2bdc,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar21 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar21;
    lVar12 = *(long *)(lVar12 + 0x70);
    uVar1 = *(undefined2 *)(lVar12 + 0x70);
    uVar17 = *(undefined1 *)(lVar12 + 0x369);
    uVar8 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x98));
    piVar11 = (int *)FUN_010aa4a0(uVar21,uVar1,uVar17,uVar8);
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x29) ||
       (uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x14], uVar14 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)((long)piVar11 + uVar14) == '\0';
    }
LAB_00addf40:
    bVar5 = (bool)(bVar5 & bVar4);
  }
  else if (param_2[0x17] == 1) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
      FUN_00100250(&LAB_00ae2bdc,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar21 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar21;
    lVar12 = *(long *)(lVar12 + 0x70);
    uVar1 = *(undefined2 *)(lVar12 + 0x70);
    uVar17 = *(undefined1 *)(lVar12 + 0x369);
    uVar8 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(lVar12 + 0x60) + 0x98));
    piVar11 = (int *)FUN_010aa4a0(uVar21,uVar1,uVar17,uVar8);
    if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0x29) {
      bVar4 = false;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x14];
      bVar4 = false;
      if (uVar14 != 0) {
        bVar4 = *(char *)((long)piVar11 + uVar14) != '\0';
      }
    }
    goto LAB_00addf40;
  }
  local_6c[0] = *(byte *)(param_1 + 0x5b);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0x18] == 2) {
    if (*(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x1e7) {
      bVar4 = *(char *)(*(long *)(lVar12 + 0x70) + 0x369) != '\x01';
    }
    else {
      bVar4 = true;
    }
  }
  else {
    if (param_2[0x18] != 1) goto LAB_00add95c;
    if (*(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x1e7) {
      bVar4 = *(char *)(*(long *)(lVar12 + 0x70) + 0x369) == '\x01';
    }
    else {
      bVar4 = false;
    }
  }
  bVar5 = (bVar4 & bVar5) != 0;
LAB_00add95c:
  local_6c[0] = *(byte *)((long)param_1 + 0x2d9);
  local_1d0[0] = local_6c;
  local_1f0 = FUN_00935a9c;
  local_1e8 = FUN_00935abc;
  local_1e0 = &LAB_00935ac0;
  puStack_1d8 = &LAB_00935acc;
  FUN_009325b0(auStack_170,*(long *)(*(long *)(lVar20 + 0x330) + 0xd0) + 0xa8,&local_1f0);
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  lVar12 = 0;
  if (local_78 != 0) {
    lVar12 = local_168;
  }
  if (param_2[0x19] == 1) {
    if (*(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x1e7) {
      bVar4 = *(char *)(*(long *)(lVar12 + 0x70) + 0x369) == '\x01';
    }
    else {
      bVar4 = false;
    }
  }
  else {
    if (param_2[0x19] != 2) {
      return bVar5;
    }
    if (*(short *)(*(long *)(lVar12 + 0x70) + 0x70) == 0x1e7) {
      bVar4 = *(char *)(*(long *)(lVar12 + 0x70) + 0x369) != '\x01';
    }
    else {
      bVar4 = true;
    }
  }
  return (bVar4 & bVar5) != 0;
LAB_00adcf18:
  iVar7 = (int)plVar13[4];
  goto LAB_00adcf1c;
LAB_00add050:
  iVar7 = (int)plVar13[4];
  goto LAB_00add054;
LAB_00add630:
  cVar18 = *(char *)((long)plVar13 + 0x24);
  goto LAB_00add634;
LAB_00add778:
  cVar18 = *(char *)((long)plVar13 + 0x24);
  goto LAB_00add77c;
}


