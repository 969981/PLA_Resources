/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fe9c8; name: FUN_028fe9c8
 */


void FUN_028fe9c8(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0 [13];
  long *local_58;
  long local_48;
  
  lVar10 = *param_3;
  if (lVar10 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)*param_1;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  plVar12 = (long *)param_2[3];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
  local_d8 = (code *)uVar1;
  local_d0 = (undefined1 *)uVar3;
  local_c8 = (undefined1 *)uVar2;
  local_c0[0] = plVar12;
  FUN_02b3365c(&local_58,uVar11,&local_e0);
  if ((char)local_e0 != '\0') {
    if (local_c0[0] != (long *)0x0) {
      (**(code **)(*local_c0[0] + 0x20))();
    }
    local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
  }
  if (local_58 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)FUN_028cb574(param_1[1],lVar10);
  pcVar9 = FUN_028fec30;
  local_e0 = FUN_028febf8;
  local_d8 = FUN_028fec30;
  local_d0 = &LAB_028fec34;
  local_c8 = &LAB_028fec40;
  plVar12 = *(long **)(lVar10 + 0x50);
  local_c0[0] = plVar8;
  if (plVar12 == (long *)0x0) {
LAB_028feae8:
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar9)(local_c0);
  }
  else {
    uVar7 = FUN_028ca890(plVar8 + 5,plVar12 + 2);
    *(uint *)(plVar12 + 6) = ~uVar7 & 1;
    *(undefined8 *)((long)plVar12 + 0x34) = 0;
    pcVar9 = local_d8;
    for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      local_48 = (long)(plVar12 + 6);
      local_d8 = pcVar9;
      (*local_e0)(local_c0,plVar12 + 2,&local_48);
      pcVar9 = local_d8;
    }
    if (pcVar9 != (code *)0x0) goto LAB_028feae8;
  }
  pcVar9 = FUN_028fec84;
  local_e0 = FUN_028fec4c;
  local_d8 = FUN_028fec84;
  local_d0 = &LAB_028fec88;
  local_c8 = &LAB_028fec94;
  plVar12 = *(long **)(lVar10 + 0xb8);
  local_c0[0] = plVar8;
  if (plVar12 != (long *)0x0) {
    uVar7 = FUN_028ca890(plVar8 + 0x1a,plVar12 + 2);
    *(uint *)(plVar12 + 6) = ~uVar7 & 1;
    *(undefined4 *)((long)plVar12 + 0x34) = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    pcVar9 = local_d8;
    for (plVar12 = (long *)*plVar12; local_d8 = pcVar9, plVar12 != (long *)0x0;
        plVar12 = (long *)*plVar12) {
      local_48 = (long)(plVar12 + 6);
      (*local_e0)(local_c0,plVar12 + 2,&local_48);
      pcVar9 = local_d8;
    }
    if (pcVar9 == (code *)0x0) goto LAB_028feb94;
  }
  local_d0 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  local_e0 = (code *)0x0;
  local_d8 = (code *)0x0;
  (*pcVar9)(local_c0);
LAB_028feb94:
  if (local_58 != (long *)0x0) {
    plVar12 = local_58 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  return;
}


