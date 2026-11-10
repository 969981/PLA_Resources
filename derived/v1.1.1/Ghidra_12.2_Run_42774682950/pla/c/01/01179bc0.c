/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01179bc0; name: FUN_01179bc0
 */


void FUN_01179bc0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  long local_c8;
  char *pcStack_c0;
  long local_b8;
  long *local_b0;
  char local_a8 [64];
  long *local_68;
  
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)plVar14[0x37];
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = plVar14 + 10;
  do {
    iVar7 = (int)*plVar12 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *(int *)plVar12 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    iVar7 = *(int *)(param_1 + 0x618);
    pbVar4 = PTR_DAT_04379cd0;
    puVar5 = (undefined8 *)PTR_DAT_04379cd8;
    puVar6 = (undefined8 *)PTR_DAT_04379ce0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x618);
    pbVar4 = PTR_DAT_04379cd0;
    puVar5 = (undefined8 *)PTR_DAT_04379cd8;
    puVar6 = (undefined8 *)PTR_DAT_04379ce0;
  }
  PTR_DAT_04379cd0 = pbVar4;
  PTR_DAT_04379cd8 = (undefined *)puVar5;
  PTR_DAT_04379ce0 = (undefined *)puVar6;
  if (iVar7 != 0) {
    puVar17 = (undefined4 *)(param_1 + 0x5c8);
    uVar15 = 0;
    do {
      snprintf(local_a8,0x40,"pane_L_list_bonus_00_T_h_bonus_%02d",(int)uVar15);
      FUN_02c395d0(plVar13,0,*puVar17,3,0,1);
      iVar7 = puVar17[-1];
      if (local_a8[0] == '\0') {
        plVar14 = (long *)FUN_00938550();
        if (plVar14 == (long *)0x0) goto LAB_01179cf4;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        if (plVar14 == (long *)0x0) goto LAB_0117a048;
LAB_01179cf8:
        plVar12 = plVar14 + 0xb;
      }
      else {
        if (((*pbVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar4), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar4);
        }
        uVar10 = *puVar5;
        *puVar6 = uVar10;
        FUN_02a47cd8(&local_68,uVar10,local_a8);
        plVar14 = local_68;
LAB_01179cf4:
        if (plVar14 != (long *)0x0) goto LAB_01179cf8;
LAB_0117a048:
        plVar12 = (long *)PTR_DAT_04379c88;
      }
      local_c8 = *plVar12;
      uVar10 = *(undefined8 *)(&DAT_03a792c8 + (long)iVar7 * 8);
      if (plVar14 == (long *)0x0) {
        pcStack_c0 = *(char **)PTR_PTR_04379d00;
LAB_0117a194:
        local_b8 = 0;
        local_b0 = (long *)0x0;
        plVar12 = local_b0;
      }
      else {
        pcStack_c0 = (char *)plVar14[0xc];
        if (plVar14 == (long *)0x0) goto LAB_0117a194;
        local_b8 = plVar14[0xd];
        local_b0 = (long *)0x0;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        plVar12 = plVar14;
        if (local_b0 != (long *)0x0) {
          lVar16 = *local_b0;
          local_b0 = plVar14;
          (**(code **)(lVar16 + 0x20))();
          plVar12 = local_b0;
        }
      }
      local_b0 = plVar12;
      FUN_011797ec(param_1,0,uVar10,&local_c8);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      iVar7 = snprintf(local_a8,0x40,"pane_L_list_bonus_00_T_p_bonus_%02d",(int)uVar15);
      if ((uint)puVar17[-1] < 3) {
        if (local_a8[0] == '\0') {
          plVar14 = (long *)FUN_00938550(iVar7);
          if (plVar14 == (long *)0x0) goto LAB_01179ec8;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          if (plVar14 == (long *)0x0) goto LAB_0117a0c4;
LAB_01179ecc:
          local_c8 = plVar14[0xb];
          if (plVar14 != (long *)0x0) goto LAB_01179ed8;
LAB_0117a0d4:
          pcStack_c0 = *(char **)PTR_PTR_04379d00;
          if (plVar14 == (long *)0x0) goto LAB_0117a0e4;
LAB_01179ee4:
          local_b8 = plVar14[0xd];
          local_b0 = (long *)0x0;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          plVar12 = plVar14;
          if (local_b0 != (long *)0x0) {
            lVar16 = *local_b0;
            local_b0 = plVar14;
            (**(code **)(lVar16 + 0x20))();
            plVar12 = local_b0;
          }
        }
        else {
          if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar4);
          }
          uVar10 = *puVar5;
          *puVar6 = uVar10;
          FUN_02a47cd8(&local_68,uVar10,local_a8);
          plVar14 = local_68;
LAB_01179ec8:
          if (plVar14 != (long *)0x0) goto LAB_01179ecc;
LAB_0117a0c4:
          local_c8 = *(long *)PTR_DAT_04379c88;
          if (plVar14 == (long *)0x0) goto LAB_0117a0d4;
LAB_01179ed8:
          pcStack_c0 = (char *)plVar14[0xc];
          if (plVar14 != (long *)0x0) goto LAB_01179ee4;
LAB_0117a0e4:
          local_b8 = 0;
          local_b0 = (long *)0x0;
          plVar12 = local_b0;
        }
        local_b0 = plVar12;
        uVar11 = 0xd858d84cca5d;
      }
      else {
        FUN_02c395d0(plVar13,0,*puVar17,3,0,1);
        if (local_a8[0] == '\0') {
          plVar14 = (long *)FUN_00938550();
          if (plVar14 == (long *)0x0) goto LAB_01179df0;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          if (plVar14 == (long *)0x0) goto LAB_0117a074;
LAB_01179df4:
          local_c8 = plVar14[0xb];
          if (plVar14 != (long *)0x0) goto LAB_01179e00;
LAB_0117a084:
          pcStack_c0 = *(char **)PTR_PTR_04379d00;
          if (plVar14 == (long *)0x0) goto LAB_0117a094;
LAB_01179e0c:
          local_b8 = plVar14[0xd];
          local_b0 = (long *)0x0;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          plVar12 = plVar14;
          if (local_b0 != (long *)0x0) {
            lVar16 = *local_b0;
            local_b0 = plVar14;
            (**(code **)(lVar16 + 0x20))();
            plVar12 = local_b0;
          }
        }
        else {
          if (((*pbVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar4), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar4);
          }
          uVar10 = *puVar5;
          *puVar6 = uVar10;
          FUN_02a47cd8(&local_68,uVar10,local_a8);
          plVar14 = local_68;
LAB_01179df0:
          if (plVar14 != (long *)0x0) goto LAB_01179df4;
LAB_0117a074:
          local_c8 = *(long *)PTR_DAT_04379c88;
          if (plVar14 == (long *)0x0) goto LAB_0117a084;
LAB_01179e00:
          pcStack_c0 = (char *)plVar14[0xc];
          if (plVar14 != (long *)0x0) goto LAB_01179e0c;
LAB_0117a094:
          local_b8 = 0;
          local_b0 = (long *)0x0;
          plVar12 = local_b0;
        }
        local_b0 = plVar12;
        uVar11 = 0xd558d84cc544;
      }
      FUN_011797ec(param_1,0,uVar11 | 0x94ee000000000000,&local_c8);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 3;
    } while (uVar15 < *(uint *)(param_1 + 0x618));
  }
  uVar8 = FUN_0117a1bc(param_1);
  FUN_02c395d0(plVar13,0,uVar8,7,0,1);
  local_c8 = 0x5fb4d5af04c77880;
  pcStack_c0 = "pane_L_list_bonus_00_T_p_total_bonus_00";
  local_b8 = 0x27;
  local_b0 = (long *)0x0;
  FUN_011797ec(param_1,0,0xe6192ccd98877228,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  FUN_0117a33c(param_1);
  if (plVar13 != (long *)0x0) {
    lVar16 = plVar13[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


