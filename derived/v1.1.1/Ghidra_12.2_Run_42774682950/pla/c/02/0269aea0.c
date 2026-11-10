/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269aea0; name: FUN_0269aea0
 */


bool FUN_0269aea0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  bool bVar14;
  undefined2 local_180;
  undefined2 local_17e;
  undefined8 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  int local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [108];
  int local_c4;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *plStack_98;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  
  local_b0 = *param_2;
  local_a8 = param_2[1];
  local_a0 = param_2[2];
  plVar3 = (long *)param_2[3];
  plStack_98 = plVar3;
  if (plVar3 == (long *)0x0) {
    uVar11 = FUN_0269b934(&local_b0,param_3,&local_90);
    pbVar5 = PTR_DAT_04379690;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar11 = FUN_0269b934(&local_b0,param_3,&local_90);
    (**(code **)(*plVar3 + 0x20))(plVar3);
    pbVar5 = PTR_DAT_04379690;
  }
  if ((uVar11 & 1) == 0) {
    PTR_DAT_04379690 = pbVar5;
    return false;
  }
  PTR_DAT_04379690 = pbVar5;
  if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  puVar7 = PTR_DAT_043796a0;
  puVar6 = PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  FUN_0286b878(&local_b8);
  bVar14 = false;
  iVar10 = local_88;
  if (local_90 == 0) {
    bVar8 = false;
joined_r0x0269afcc:
    bVar14 = false;
    if (iVar10 != 0) goto LAB_0269af50;
LAB_0269af58:
    iVar10 = local_80;
    if (local_80 == 0) goto LAB_0269af68;
LAB_0269af60:
    if (local_7c == 0) goto LAB_0269af68;
    local_180 = (undefined2)iVar10;
    local_17e = (undefined2)local_7c;
    uVar9 = FUN_01468b54(local_b8,&local_180);
    bVar8 = (bool)(bVar8 | uVar9 != 0);
    if (local_7c < uVar9 || local_7c - uVar9 == 0) goto LAB_0269af68;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    local_158 = iVar10;
    local_c4 = local_7c - uVar9;
    FUN_01f0d5ac(&local_c0,&local_158,&local_c4,*(undefined8 *)(param_1 + 8),&local_150);
    pcVar13 = local_148;
    if (local_c0 != (long *)0x0) {
      lVar12 = local_c0[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_c0 + 0x20))();
        pcVar13 = local_148;
      }
    }
    local_148 = pcVar13;
    if (pcVar13 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar13)(auStack_130);
    }
    bVar14 = true;
    iVar10 = local_78;
    if (local_78 != 0) goto LAB_0269af70;
LAB_0269af78:
    iVar10 = local_70;
    if (local_70 == 0) goto LAB_0269af88;
LAB_0269af80:
    if (local_6c == 0) goto LAB_0269af88;
    local_180 = (undefined2)iVar10;
    local_17e = (undefined2)local_6c;
    uVar9 = FUN_01468b54(local_b8,&local_180);
    bVar8 = (bool)(bVar8 | uVar9 != 0);
    if (local_6c < uVar9 || local_6c - uVar9 == 0) goto LAB_0269af88;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    local_158 = iVar10;
    local_c4 = local_6c - uVar9;
    FUN_01f0d5ac(&local_c0,&local_158,&local_c4,*(undefined8 *)(param_1 + 8),&local_150);
    if (local_c0 != (long *)0x0) {
      lVar12 = local_c0[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 != 0) goto LAB_0269b220;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
      pcVar13 = local_148;
      if (local_148 != (code *)0x0) goto LAB_0269b400;
      goto LAB_0269b228;
    }
LAB_0269b220:
    pcVar13 = local_148;
    if (local_148 == (code *)0x0) goto LAB_0269b228;
LAB_0269b400:
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar13)(auStack_130);
    bVar2 = *pbVar5;
  }
  else {
    bVar8 = false;
    if (local_8c != 0) {
      local_180 = (undefined2)local_90;
      local_17e = (undefined2)local_8c;
      uVar9 = FUN_01468b54(local_b8,&local_180);
      bVar8 = uVar9 != 0;
      iVar10 = local_88;
      if (local_8c < uVar9 || local_8c - uVar9 == 0) goto joined_r0x0269afcc;
      local_158 = local_90;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      local_c4 = local_8c - uVar9;
      FUN_01f0d5ac(&local_c0,&local_158,&local_c4,*(undefined8 *)(param_1 + 8),&local_150);
      pcVar13 = local_148;
      if (local_c0 != (long *)0x0) {
        lVar12 = local_c0[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_c0 + 0x20))();
          pcVar13 = local_148;
        }
      }
      local_148 = pcVar13;
      if (pcVar13 != (code *)0x0) {
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        local_148 = (code *)0x0;
        (*pcVar13)(auStack_130);
      }
      bVar14 = true;
      iVar10 = local_88;
    }
    if (iVar10 == 0) goto LAB_0269af58;
LAB_0269af50:
    if (local_84 == 0) goto LAB_0269af58;
    local_180 = (undefined2)iVar10;
    local_17e = (undefined2)local_84;
    uVar9 = FUN_01468b54(local_b8,&local_180);
    bVar8 = (bool)(bVar8 | uVar9 != 0);
    if (local_84 < uVar9 || local_84 - uVar9 == 0) goto LAB_0269af58;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    local_158 = iVar10;
    local_c4 = local_84 - uVar9;
    FUN_01f0d5ac(&local_c0,&local_158,&local_c4,*(undefined8 *)(param_1 + 8),&local_150);
    pcVar13 = local_148;
    if (local_c0 != (long *)0x0) {
      lVar12 = local_c0[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_c0 + 0x20))();
        pcVar13 = local_148;
      }
    }
    local_148 = pcVar13;
    if (pcVar13 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar13)(auStack_130);
    }
    bVar14 = true;
    iVar10 = local_80;
    if (local_80 != 0) goto LAB_0269af60;
LAB_0269af68:
    iVar10 = local_78;
    if (local_78 == 0) goto LAB_0269af78;
LAB_0269af70:
    if (local_74 == 0) goto LAB_0269af78;
    local_180 = (undefined2)iVar10;
    local_17e = (undefined2)local_74;
    uVar9 = FUN_01468b54(local_b8,&local_180);
    bVar8 = (bool)(bVar8 | uVar9 != 0);
    if (local_74 < uVar9 || local_74 - uVar9 == 0) goto LAB_0269af78;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    local_158 = iVar10;
    local_c4 = local_74 - uVar9;
    FUN_01f0d5ac(&local_c0,&local_158,&local_c4,*(undefined8 *)(param_1 + 8),&local_150);
    pcVar13 = local_148;
    if (local_c0 != (long *)0x0) {
      lVar12 = local_c0[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_c0 + 0x20))();
        pcVar13 = local_148;
      }
    }
    local_148 = pcVar13;
    if (pcVar13 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar13)(auStack_130);
    }
    bVar14 = true;
    iVar10 = local_70;
    if (local_70 != 0) goto LAB_0269af80;
LAB_0269af88:
    if (!bVar14) goto joined_r0x0269b298;
LAB_0269b228:
    bVar2 = *pbVar5;
  }
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379690), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  FUN_0286b878(&local_158);
  local_17c = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_180 = CONCAT11(local_180._1_1_,0xb);
  FUN_01468dd0(CONCAT44(uStack_154,local_158),&local_180);
  plVar3 = (long *)CONCAT44(uStack_154,local_158);
  if (plVar3 != (long *)0x0) {
    lVar12 = plVar3[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar14) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar3 + 0x20))();
    }
  }
joined_r0x0269b298:
  if (local_b8 != (long *)0x0) {
    lVar12 = local_b8[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar14) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  return bVar8;
}


