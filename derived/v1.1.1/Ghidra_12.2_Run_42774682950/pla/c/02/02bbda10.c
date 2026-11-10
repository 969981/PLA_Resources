/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbda10; name: FUN_02bbda10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bbda10(long param_1,long param_2,uint param_3,char *param_4)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  char *pcVar14;
  ulong *puVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  long local_628;
  long local_620;
  long local_618;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  ulong local_78;
  ulong uStack_70;
  
  lVar25 = *(long *)(*(long *)(param_1 + 0x58) + 0x58);
  uVar21 = *(ulong *)(*(long *)(param_1 + 0x58) + 0x138);
  lVar23 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
  uVar18 = (uint)uVar21;
  if (lVar23 == 0x30) {
    uVar18 = uVar18 & 1;
  }
  else {
    uVar24 = (lVar23 >> 3) * -0x5555555555555555;
    iVar7 = 0;
    if (uVar24 != 0) {
      iVar7 = (int)(uVar21 / uVar24);
    }
    uVar18 = uVar18 - iVar7 * (int)uVar24;
  }
  *(uint *)(param_1 + 400) = uVar18;
  if (*(char *)(*(long *)(param_1 + 0x158) + (ulong)uVar18 * 0x18) == '\0') {
    local_628 = *(long *)(lVar25 + 8);
    local_620 = *(long *)(lVar25 + 0x6098);
    local_618 = lVar25 + 0x10;
    auVar27 = FUN_02b9e938(*(undefined8 *)(lVar25 + 0x6100),&local_628);
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 400) * 0x18) =
         auVar27;
    *(long *)(param_1 + 0x150) = lVar25;
  }
  FUN_02b9cc04(&local_628,lVar25);
  cVar8 = *param_4;
  if (*(char *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 400) * 0x18) != '\0') {
    lVar23 = *(long *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 400) * 0x18 + 8);
    *(undefined8 *)(lVar23 + 0x140) = 0;
    FUN_02b9f690(lVar23);
    FUN_02b9faf0(lVar23);
    local_620 = lVar23;
    if ((lVar23 != 0) && (local_618 = lVar23, (*DAT_043f0ba0)(lVar23), cVar8 != '\0')) {
      (*DAT_043f0ec8)(local_618,*(long *)(local_628 + 0x6140) + 0xb0);
      (*DAT_043f0ed0)(local_618,*(long *)(local_628 + 0x6160) + 0xb0);
    }
    cVar8 = *param_4;
  }
  if (cVar8 != '\0') {
    lVar23 = *(long *)(*(long *)(param_1 + 0x58) + 0xb8);
    if ((*(uint *)(lVar23 + 8) | 0x10) != 0x10) {
      (*DAT_043f0e58)(local_618);
    }
    lVar25 = *(long *)(lVar23 + 0x10);
    uVar18 = *(uint *)(lVar25 + 0xa0);
    uVar21 = *(ulong *)(*(long *)(lVar25 + 0x98) + 0x138);
    uVar19 = (uint)uVar21;
    if (uVar18 < 3) {
      uVar19 = uVar19 & uVar18 - 1;
    }
    else {
      iVar7 = 0;
      if ((ulong)uVar18 != 0) {
        iVar7 = (int)(uVar21 / uVar18);
      }
      uVar19 = uVar19 - iVar7 * uVar18;
    }
    pcVar11 = (char *)FUN_02bc0470((long)(int)uVar19,lVar25 + 0x58);
    if ((*pcVar11 != '\0') && (*(long *)(pcVar11 + 8) != 0)) {
      (*DAT_043f0e50)(local_618,*(undefined4 *)(lVar23 + 8),
                      *(undefined8 *)(*(long *)(pcVar11 + 8) + 0x40));
    }
    lVar23 = *(long *)(param_1 + 0x58);
    if (*(long *)(lVar23 + 0x148) != 0) {
      FUN_02bc05e4(*(long *)(lVar23 + 0x148),0);
      lVar25 = *(long *)(lVar23 + 0x148);
      uVar18 = *(uint *)(lVar25 + 0xa0);
      uVar5 = *(undefined4 *)(lVar23 + 0x140);
      uVar6 = *(undefined4 *)(lVar23 + 0x144);
      uVar21 = *(ulong *)(*(long *)(lVar25 + 0x98) + 0x138);
      uVar19 = (uint)uVar21;
      if (uVar18 < 3) {
        uVar19 = uVar19 & uVar18 - 1;
      }
      else {
        iVar7 = 0;
        if ((ulong)uVar18 != 0) {
          iVar7 = (int)(uVar21 / uVar18);
        }
        uVar19 = uVar19 - iVar7 * uVar18;
      }
      uVar12 = FUN_02bc0470((long)(int)uVar19,lVar25 + 0x58);
      FUN_02b9cd4c(&local_628,uVar5,uVar6,uVar12);
    }
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    (*DAT_043f0eb0)(local_618,*(undefined4 *)(param_1 + 0x1fc));
  }
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x58);
  local_1c0 = local_1c0 & 0xffffffffffffff00;
  local_1b0 = local_1b0 & 0xffffffffffffff00;
  local_1a0 = local_1a0 & 0xffffffffffffff00;
  local_190 = local_190 & 0xffffffffffffff00;
  local_180 = local_180 & 0xffffffffffffff00;
  local_170 = local_170 & 0xffffffffffffff00;
  local_160 = local_160 & 0xffffffffffffff00;
  local_150 = local_150 & 0xffffffffffffff00;
  local_140 = local_140 & 0xffffffffffffff00;
  local_130 = local_130 & 0xffffffffffffff00;
  local_120 = local_120 & 0xffffffffffffff00;
  local_110 = local_110 & 0xffffffffffffff00;
  local_100 = 0;
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_78 = local_78 & 0xffffffffffffff00;
  lVar23 = param_1;
LAB_02bbdd74:
  do {
    puVar15 = *(ulong **)(*(long *)(lVar23 + 0x80) + 400);
    if (puVar15 != (ulong *)0x0) {
      if ((char)local_1c0 == '\0') {
        local_1c0 = *puVar15;
        local_1b8 = puVar15[1];
      }
      if ((char)local_1b0 == '\0') {
        local_1b0 = puVar15[8];
        uStack_1a8 = puVar15[9];
      }
      if ((char)local_1a0 == '\0') {
        local_1a0 = puVar15[0x13];
        uStack_198 = puVar15[0x14];
      }
      if ((char)local_190 == '\0') {
        local_190 = puVar15[0x1a];
        uStack_188 = puVar15[0x1b];
      }
      if ((char)local_180 == '\0') {
        local_180 = puVar15[0x21];
        uStack_178 = puVar15[0x22];
      }
      if ((char)local_170 == '\0') {
        local_170 = puVar15[0x23];
        uStack_168 = puVar15[0x24];
      }
      if ((char)local_160 == '\0') {
        local_160 = puVar15[0x25];
        uStack_158 = puVar15[0x26];
      }
      if ((char)local_150 == '\0') {
        local_150 = puVar15[0x27];
        uStack_148 = puVar15[0x28];
      }
      if ((char)local_140 == '\0') {
        local_140 = puVar15[0x29];
        uStack_138 = puVar15[0x2a];
      }
      if ((char)local_130 == '\0') {
        local_130 = puVar15[0x2b];
        uStack_128 = puVar15[0x2c];
      }
      if ((char)local_120 == '\0') {
        local_120 = puVar15[0x2d];
        uStack_118 = puVar15[0x2e];
      }
      if ((char)local_110 == '\0') {
        local_110 = puVar15[0x2f];
        uStack_108 = puVar15[0x30];
      }
      if ((char)local_78 == '\0') {
        local_78 = puVar15[0x3a];
        uStack_70 = puVar15[0x3b];
        lVar23 = *(long *)(lVar23 + 0x148);
        if (lVar23 == 0) break;
        goto LAB_02bbdd74;
      }
    }
    lVar23 = *(long *)(lVar23 + 0x148);
  } while (lVar23 != 0);
  lVar23 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x290);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x284));
        while (*plVar13 == 0) {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar10) {
            *plVar13 = lVar23;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_02bbdef8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar8 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar10) {
      *plVar13 = lVar23;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_02bbdef8:
  piVar16 = *(int **)(param_1 + 0x250);
  piVar22 = *(int **)(param_1 + 0x248);
  local_100 = piVar16 != piVar22;
  bVar10 = (bool)local_100;
  while (bVar10) {
    *(int *)((long)&local_fc + (ulong)(uint)(*piVar22 << 2) * 4) = piVar22[1];
    *(int *)((long)&local_fc + (ulong)(*piVar22 << 2 | 1) * 4) = piVar22[2];
    *(int *)((long)&local_fc + (ulong)(*piVar22 << 2 | 2) * 4) = piVar22[3];
    iVar7 = *piVar22;
    piVar17 = piVar22 + 4;
    piVar22 = piVar22 + 5;
    bVar10 = piVar16 != piVar22;
    *(int *)((long)&local_fc + (ulong)(iVar7 << 2 | 3) * 4) = *piVar17;
  }
  *(undefined8 *)(param_1 + 0x290) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x284));
  lVar23 = *(long *)(param_1 + 0x1d8);
  if ((lVar23 != 0) && (iVar7 = *(int *)(lVar23 + 0x504), iVar7 != 0)) {
    iVar20 = 0;
    do {
      *(undefined1 *)(lVar23 + (ulong)(uint)(iVar20 + *(int *)(lVar23 + 0x500)) * 0x10) = 0;
      uVar18 = iVar20 + *(int *)(lVar23 + 0x500);
      iVar20 = iVar20 + 1;
      *(undefined1 *)(lVar23 + (ulong)uVar18 * 0x10 + 0x280) = 0;
    } while (iVar7 != iVar20);
  }
  FUN_02bac990(*(undefined8 *)(param_1 + 0x80),uVar12,&local_628,&local_1c0,lVar23);
  puVar3 = *(uint **)(param_1 + 0xe0);
  for (puVar2 = *(uint **)(param_1 + 0xd8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    if (*(char *)(*(long *)(param_1 + 0x88) + (ulong)*puVar2 * 0x30 + 0x28) != '\0') {
      FUN_02bac990(*(undefined8 *)(*(long *)(param_1 + 0x88) + (ulong)*puVar2 * 0x30),uVar12,
                   &local_628,&local_1c0,lVar23);
    }
  }
  if (*(char *)(param_1 + 0x242) != '\0') {
    lVar25 = *(long *)(param_1 + 0x58);
    lVar23 = *(long *)(lVar25 + 0x148);
    if (lVar23 != 0) {
      uVar5 = *(undefined4 *)(lVar25 + 0x140);
      uVar6 = *(undefined4 *)(lVar25 + 0x144);
      uVar18 = *(uint *)(lVar23 + 0xa0);
      uVar21 = *(ulong *)(*(long *)(lVar23 + 0x98) + 0x138);
      uVar19 = (uint)uVar21;
      if (uVar18 < 3) {
        uVar19 = uVar19 & uVar18 - 1;
      }
      else {
        iVar7 = 0;
        if ((ulong)uVar18 != 0) {
          iVar7 = (int)(uVar21 / uVar18);
        }
        uVar19 = uVar19 - iVar7 * uVar18;
      }
      uVar12 = FUN_02bc0470((long)(int)uVar19,lVar23 + 0x58);
      FUN_02b9cd4c(&local_628,uVar5,uVar6,uVar12);
    }
  }
  if (*(char *)(param_1 + 0x200) != '\0') {
    (*DAT_043f0eb0)(local_618,*(undefined4 *)(param_1 + 0x204));
  }
  piVar22 = *(int **)(param_1 + 0x208);
  piVar16 = *(int **)(param_1 + 0x210);
  if (piVar22 == piVar16) {
LAB_02bbe3d0:
    if (param_4[1] != '\0') {
      lVar23 = *(long *)(*(long *)(param_1 + 0x58) + 0xb8);
      iVar20 = *(int *)(lVar23 + 8);
      lVar23 = *(long *)(lVar23 + 0x10);
      iVar7 = 0;
      if (iVar20 != 0x10) {
        iVar7 = iVar20;
      }
      uVar18 = *(uint *)(lVar23 + 0xa0);
      uVar21 = *(ulong *)(*(long *)(lVar23 + 0x98) + 0x138);
      iVar20 = 0;
      if ((ulong)uVar18 != 0) {
        iVar20 = (int)(uVar21 / uVar18);
      }
      uVar9 = (uint)uVar21;
      uVar19 = uVar9 - iVar20 * uVar18;
      if (uVar18 < 3) {
        uVar19 = uVar9 & uVar18 - 1;
      }
      pcVar11 = (char *)FUN_02bc0470((long)(int)uVar19,lVar23 + 0x58);
      if (*pcVar11 != '\0' && *(long *)(pcVar11 + 8) != 0) {
        (*DAT_043f0e50)(local_618,iVar7,*(long *)(*(long *)(pcVar11 + 8) + 0x40) + 0x10);
      }
    }
    uVar12 = (*DAT_043f0ba8)(local_618);
    *(undefined8 *)(local_620 + 0xa0) = uVar12;
    *(undefined8 *)(*(long *)(param_2 + 8) + (ulong)param_3 * 8) = uVar12;
    return;
  }
  lVar23 = *(long *)(piVar22 + 2);
  do {
    if (lVar23 != 0) {
      iVar7 = *piVar22;
      lVar23 = param_1;
      if (iVar7 < 0) {
        plVar13 = *(long **)(param_1 + 0x80);
joined_r0x02bbe0f4:
        plVar26 = _DAT_00000058;
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 10;
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          plVar26 = (long *)plVar13[0xb];
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar7;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        if ((plVar26 != (long *)0x0) && (plVar13 = (long *)plVar26[7], plVar13 != (long *)0x0)) {
          plVar26 = plVar13 + 10;
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *(int *)plVar26 = (int)*plVar26 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          uVar18 = *(uint *)(plVar13 + 0x14);
          uVar19 = (uint)*(ulong *)(plVar13[0x13] + 0x138);
          if (uVar18 < 3) {
            uVar19 = uVar19 & uVar18 - 1;
          }
          else {
            iVar7 = 0;
            if ((ulong)uVar18 != 0) {
              iVar7 = (int)(*(ulong *)(plVar13[0x13] + 0x138) / (ulong)uVar18);
            }
            uVar19 = uVar19 - iVar7 * uVar18;
          }
          pcVar11 = (char *)FUN_02bc0470((long)(int)uVar19,plVar13 + 0xb);
          lVar23 = *(long *)(piVar22 + 2);
          uVar18 = *(uint *)(lVar23 + 0xa0);
          uVar21 = *(ulong *)(*(long *)(lVar23 + 0x98) + 0x138);
          uVar19 = (uint)uVar21;
          if (uVar18 < 3) {
            uVar19 = uVar19 & uVar18 - 1;
          }
          else {
            iVar7 = 0;
            if ((ulong)uVar18 != 0) {
              iVar7 = (int)(uVar21 / uVar18);
            }
            uVar19 = uVar19 - iVar7 * uVar18;
          }
          pcVar14 = (char *)FUN_02bc0470((long)(int)uVar19,lVar23 + 0x58);
          lVar23 = 0;
          if (*pcVar11 != '\0') {
            lVar23 = *(long *)(pcVar11 + 8);
          }
          lVar25 = 0;
          if (*pcVar14 != '\0') {
            lVar25 = *(long *)(pcVar14 + 8);
          }
          if ((((lVar23 != 0) && (lVar25 != 0)) && (*(long *)(lVar23 + 0x48) != 0)) &&
             (*(long *)(lVar25 + 0x48) != 0)) {
            (*DAT_043f0e90)(local_618);
          }
          do {
            iVar7 = (int)*plVar26 + -1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *(int *)plVar26 = iVar7;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          goto LAB_02bbe0c8;
        }
        lVar23 = *(long *)(lVar23 + 0x148);
        if (lVar23 != 0) break;
        goto LAB_02bbe0cc;
      }
      do {
        plVar26 = *(long **)(lVar23 + 0x80);
        plVar13 = _DAT_00000058;
        if (plVar26 == (long *)0x0) {
joined_r0x02bbe190:
          if (plVar13 == (long *)0x0) goto LAB_02bbe0fc;
LAB_02bbe148:
          piVar17 = (int *)*plVar13;
          piVar4 = (int *)plVar13[1];
          if (piVar17 != piVar4) {
            do {
              if (*piVar17 == iVar7) goto LAB_02bbe170;
              piVar17 = piVar17 + 10;
            } while (piVar4 != piVar17);
            goto LAB_02bbe0fc;
          }
LAB_02bbe170:
          if ((piVar17 == piVar4) || (plVar13 = *(long **)(piVar17 + 2), plVar13 == (long *)0x0))
          goto LAB_02bbe0fc;
          plVar26 = plVar13 + 10;
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *(int *)plVar26 = (int)*plVar26 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          uVar18 = *(uint *)(plVar13 + 0x14);
          uVar19 = (uint)*(ulong *)(plVar13[0x13] + 0x138);
          if (uVar18 < 3) {
            uVar19 = uVar19 & uVar18 - 1;
          }
          else {
            iVar7 = 0;
            if ((ulong)uVar18 != 0) {
              iVar7 = (int)(*(ulong *)(plVar13[0x13] + 0x138) / (ulong)uVar18);
            }
            uVar19 = uVar19 - iVar7 * uVar18;
          }
          pcVar11 = (char *)FUN_02bc0470((long)(int)uVar19,plVar13 + 0xb);
          lVar23 = *(long *)(piVar22 + 2);
          uVar18 = *(uint *)(lVar23 + 0xa0);
          uVar21 = *(ulong *)(*(long *)(lVar23 + 0x98) + 0x138);
          uVar19 = (uint)uVar21;
          if (uVar18 < 3) {
            uVar19 = uVar19 & uVar18 - 1;
          }
          else {
            iVar7 = 0;
            if ((ulong)uVar18 != 0) {
              iVar7 = (int)(uVar21 / uVar18);
            }
            uVar19 = uVar19 - iVar7 * uVar18;
          }
          pcVar14 = (char *)FUN_02bc0470((long)(int)uVar19,lVar23 + 0x58);
          lVar23 = 0;
          if (*pcVar11 != '\0') {
            lVar23 = *(long *)(pcVar11 + 8);
          }
          lVar25 = 0;
          if (*pcVar14 != '\0') {
            lVar25 = *(long *)(pcVar14 + 8);
          }
          if (((lVar23 != 0) && (lVar25 != 0)) &&
             ((*(long *)(lVar23 + 0x48) != 0 && (*(long *)(lVar25 + 0x48) != 0)))) {
            (*DAT_043f0e90)(local_618);
          }
          do {
            iVar7 = (int)*plVar26 + -1;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar10) {
              *(int *)plVar26 = iVar7;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_02bbe0c8:
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          break;
        }
        plVar1 = plVar26 + 10;
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        plVar13 = (long *)plVar26[0xb];
        do {
          iVar20 = (int)*plVar1 + -1;
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar20;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar20 == 0) {
          (**(code **)(*plVar26 + 0x10))();
          goto joined_r0x02bbe190;
        }
        if (plVar13 != (long *)0x0) goto LAB_02bbe148;
LAB_02bbe0fc:
        lVar23 = *(long *)(lVar23 + 0x148);
      } while (lVar23 != 0);
    }
LAB_02bbe0cc:
    if (piVar22 + 4 == piVar16) goto LAB_02bbe3d0;
    lVar23 = *(long *)(piVar22 + 6);
    piVar22 = piVar22 + 4;
  } while( true );
  plVar13 = *(long **)(lVar23 + 0x80);
  goto joined_r0x02bbe0f4;
}


