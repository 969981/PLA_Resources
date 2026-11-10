/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4bf80; name: FUN_00d4bf80
 */


void FUN_00d4bf80(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  
  lVar11 = (long)*(int *)(param_1 + 0x6d8);
  if (*(char *)(param_1 + lVar11 * 0x60 + 0x665) == '\0') {
    return;
  }
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar11 = (long)*(int *)(param_1 + 0x6d8);
  }
  plVar8 = (long *)FUN_00d2f008(param_1 + 0x180,&DAT_043ab7f8 + lVar11 * 0x28);
  if (plVar8 == (long *)0x0) goto LAB_00d4c458;
  uVar18 = (**(code **)(*plVar8 + 0x48))();
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar8[0x29];
  lVar11 = plVar8[0x2a];
  if ((lVar11 != 0) && (*plVar10 != -0x324b28000e9a68ea)) {
    plVar14 = plVar10 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar10 = plVar14;
        break;
      }
      plVar2 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar2;
    } while (*plVar1 != -0x324b28000e9a68ea);
  }
  fVar20 = *(float *)(plVar10[4] + 0x30);
  fVar19 = *(float *)(plVar10[4] + 0x34);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  fVar20 = (float)uVar18 - fVar20;
  fVar19 = (float)((ulong)uVar18 >> 0x20) - fVar19;
  plVar8 = (long *)plVar15[0x29];
  lVar11 = plVar15[0x2a];
  if ((lVar11 != 0) && (*plVar8 != 0x2dc110817bf2fd6c)) {
    plVar10 = plVar8 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar8 = plVar10;
        break;
      }
      plVar1 = plVar8 + 6;
      plVar14 = plVar8 + 6;
      plVar8 = plVar1;
    } while (*plVar14 != 0x2dc110817bf2fd6c);
  }
  lVar11 = plVar8[4];
  *(float *)(lVar11 + 0x30) = fVar20;
  *(float *)(lVar11 + 0x34) = fVar19;
  *(undefined4 *)(lVar11 + 0x38) = 0;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  plVar8 = (long *)plVar15[0x29];
  lVar11 = plVar15[0x2a];
  if ((lVar11 != 0) && (*plVar8 != -0x6efbae08df541883)) {
    plVar10 = plVar8 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar8 = plVar10;
        break;
      }
      plVar1 = plVar8 + 6;
      plVar14 = plVar8 + 6;
      plVar8 = plVar1;
    } while (*plVar14 != -0x6efbae08df541883);
  }
  fVar16 = *(float *)(plVar8[4] + 0x50);
  uVar9 = FUN_00d59564(param_1,*(undefined1 *)(param_1 + 0x6f8));
  plVar8 = (long *)plVar15[0x29];
  lVar11 = plVar15[0x2a];
  plVar10 = plVar8 + lVar11 * 6;
  if ((uVar9 & 1) == 0) {
    if (lVar11 == 0) {
      uVar12 = *(undefined4 *)(plVar8[4] + 0x34);
    }
    else {
      if (*plVar8 == -0x739c8e9fd045dca5) {
        uVar12 = *(undefined4 *)(plVar8[4] + 0x34);
      }
      else {
        lVar13 = 0;
        do {
          if (lVar11 * 0x30 + -0x30 == lVar13) {
            plVar14 = plVar10;
            goto LAB_00d4c2d4;
          }
          lVar3 = lVar13 + 0x30;
          lVar7 = lVar13 + 0x30;
          lVar13 = lVar3;
        } while (*(long *)((long)plVar8 + lVar7) != -0x739c8e9fd045dca5);
        plVar14 = (long *)((long)plVar8 + lVar3);
LAB_00d4c2d4:
        uVar12 = *(undefined4 *)(plVar14[4] + 0x34);
        if (lVar11 == 0) goto LAB_00d4c324;
      }
      if (*plVar8 != -0x739c8e9fd045dca5) {
        lVar11 = lVar11 * 0x30;
        do {
          lVar11 = lVar11 + -0x30;
          if (lVar11 == 0) {
            plVar8 = plVar10;
            break;
          }
          plVar1 = plVar8 + 6;
          plVar14 = plVar8 + 6;
          plVar8 = plVar1;
        } while (*plVar14 != -0x739c8e9fd045dca5);
      }
    }
LAB_00d4c324:
    lVar11 = plVar8[4];
    local_60 = 0xec8c1cb8efe1bc63;
    *(float *)(lVar11 + 0x30) = fVar16 * 0.5;
    local_58 = "pane_L_inventory_parts_00_N_pos_pop_01";
  }
  else {
    if (lVar11 == 0) {
      uVar12 = *(undefined4 *)(plVar8[4] + 0x34);
    }
    else {
      if (*plVar8 == -0x739c8f9fd045de58) {
        uVar12 = *(undefined4 *)(plVar8[4] + 0x34);
      }
      else {
        lVar13 = 0;
        do {
          if (lVar11 * 0x30 + -0x30 == lVar13) {
            plVar14 = plVar10;
            goto LAB_00d4c210;
          }
          lVar3 = lVar13 + 0x30;
          lVar7 = lVar13 + 0x30;
          lVar13 = lVar3;
        } while (*(long *)((long)plVar8 + lVar7) != -0x739c8f9fd045de58);
        plVar14 = (long *)((long)plVar8 + lVar3);
LAB_00d4c210:
        uVar12 = *(undefined4 *)(plVar14[4] + 0x34);
        if (lVar11 == 0) goto LAB_00d4c260;
      }
      if (*plVar8 != -0x739c8f9fd045de58) {
        lVar11 = lVar11 * 0x30;
        do {
          lVar11 = lVar11 + -0x30;
          if (lVar11 == 0) {
            plVar8 = plVar10;
            break;
          }
          plVar1 = plVar8 + 6;
          plVar14 = plVar8 + 6;
          plVar8 = plVar1;
        } while (*plVar14 != -0x739c8f9fd045de58);
      }
    }
LAB_00d4c260:
    lVar11 = plVar8[4];
    local_60 = 0xec8c1bb8efe1bab0;
    *(float *)(lVar11 + 0x30) = fVar16 * -0.5;
    local_58 = "pane_L_inventory_parts_00_N_pos_pop_00";
  }
  *(undefined4 *)(lVar11 + 0x34) = uVar12;
  *(undefined4 *)(lVar11 + 0x38) = 0;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  local_50 = 0x26;
  local_48 = (long *)0x0;
  fVar16 = (float)FUN_0283ad10(plVar15,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_58 = "pane_L_inventory_parts_00_N_popup_name_00";
  local_60 = 0x2dc110817bf2fd6c;
  local_50 = 0x29;
  local_48 = (long *)0x0;
  fVar17 = (float)FUN_0283ad10(plVar15,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar8 = (long *)plVar15[0x29];
  lVar11 = plVar15[0x2a];
  if ((lVar11 != 0) && (*plVar8 != 0x2dc110817bf2fd6c)) {
    plVar10 = plVar8 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar8 = plVar10;
        break;
      }
      plVar1 = plVar8 + 6;
      plVar14 = plVar8 + 6;
      plVar8 = plVar1;
    } while (*plVar14 != 0x2dc110817bf2fd6c);
  }
  lVar11 = plVar8[4];
  *(float *)(lVar11 + 0x30) = fVar20 + (fVar17 - fVar16);
  *(float *)(lVar11 + 0x34) = fVar19;
  *(undefined4 *)(lVar11 + 0x38) = 0;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
LAB_00d4c458:
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  return;
}


