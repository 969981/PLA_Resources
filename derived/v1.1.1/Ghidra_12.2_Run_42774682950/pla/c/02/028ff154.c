/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ff154; name: FUN_028ff154
 */


void FUN_028ff154(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *local_d0;
  long **local_c8;
  undefined8 *puStack_c0;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_48;
  
  lVar11 = *param_3;
  if (lVar11 == 0) {
    return;
  }
  uVar12 = *(undefined8 *)*param_1;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  plVar8 = (long *)param_2[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_f0 = (code *)CONCAT71(local_f0._1_7_,1);
  local_e8 = (code *)uVar2;
  local_e0 = (undefined1 *)uVar4;
  local_d8 = (undefined1 *)uVar3;
  local_d0 = plVar8;
  FUN_02b3365c(&local_68,uVar12,&local_f0);
  if ((char)local_f0 != '\0') {
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    local_f0 = (code *)((ulong)local_f0 & 0xffffffffffffff00);
  }
  if (local_68 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)FUN_028cb574(param_1[1],lVar11);
  puStack_c0 = (undefined8 *)param_1[2];
  local_c8 = &local_68;
  local_f0 = FUN_028ff3f0;
  local_e8 = FUN_028ff458;
  local_e0 = &LAB_028ff45c;
  local_d8 = &LAB_028ff470;
  plVar13 = *(long **)(lVar11 + 0x50);
  pcVar10 = FUN_028ff458;
  local_d0 = plVar8;
  if (plVar13 == (long *)0x0) {
LAB_028ff2a0:
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  else {
    local_60 = plVar13 + 6;
    uVar9 = FUN_028ca890(plVar8 + 5,plVar13 + 2);
    if (((uVar9 & 1) != 0) && (0.0 < *(float *)((long)plVar13 + 0x34))) {
      (*(code *)*puStack_c0)(local_c8,plVar13 + 2,plVar13 + 7);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) {
      do {
        local_60 = plVar13 + 6;
        (*local_f0)(&local_d0,plVar13 + 2,&local_60);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    pcVar10 = local_e8;
    if (local_e8 != (code *)0x0) goto LAB_028ff2a0;
  }
  puStack_c0 = (undefined8 *)param_1[3];
  local_c8 = &local_68;
  local_f0 = FUN_028ff484;
  local_e8 = FUN_028ff4f4;
  local_e0 = &LAB_028ff4f8;
  local_d8 = &LAB_028ff50c;
  plVar13 = *(long **)(lVar11 + 0xb8);
  pcVar10 = FUN_028ff4f4;
  local_d0 = plVar8;
  if (plVar13 != (long *)0x0) {
    local_48 = plVar13 + 6;
    uVar9 = FUN_028ca890(plVar8 + 0x1a,plVar13 + 2);
    if (((uVar9 & 1) != 0) && (0.0 < *(float *)((long)plVar13 + 0x34))) {
      pauVar1 = (undefined1 (*) [16])(plVar13 + 8);
      local_60 = *(long **)*pauVar1;
      auVar14 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uStack_58 = auVar14._0_8_;
      (*(code *)*puStack_c0)(local_c8,plVar13 + 2,&local_60);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) {
      do {
        local_48 = plVar13 + 6;
        (*local_f0)(&local_d0,plVar13 + 2,&local_48);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    pcVar10 = local_e8;
    if (local_e8 == (code *)0x0) goto LAB_028ff38c;
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  (*pcVar10)(&local_d0);
LAB_028ff38c:
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *(int *)plVar8 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  return;
}


