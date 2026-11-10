/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140f820; name: FUN_0140f820
 */


void FUN_0140f820(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long lStack_a0;
  code *local_98;
  undefined8 uStack_90;
  long *local_38;
  
  *(undefined8 *)(param_1 + 0x630) = param_2;
  plVar10 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_c0 = (undefined1 *)0x17fc6f23176b0272;
  local_b8 = (code *)0x38cc6fb;
  local_b0 = (code *)0x11;
  local_a8 = (long *)0x0;
  lVar11 = FUN_00d4d2c4(plVar10,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  pcVar9 = *(code **)(lVar11 + 0x188);
  *(undefined8 *)(lVar11 + 0xf8) = 0x400000000;
  local_c0 = &LAB_01410be0;
  local_b8 = FUN_01410bf0;
  local_b0 = FUN_01410bf4;
  local_a8 = (long *)&LAB_01410c00;
  lStack_a0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB_0140f950:
    (*local_b0)(&lStack_a0,lVar11 + 0x1a0);
    *(code **)(lVar11 + 0x188) = local_b8;
    *(long **)(lVar11 + 0x198) = local_a8;
    *(code **)(lVar11 + 400) = local_b0;
    *(undefined8 *)(lVar11 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar11 + 400) = 0;
    *(undefined8 *)(lVar11 + 0x198) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0;
    *(undefined8 *)(lVar11 + 0x188) = 0;
    (*pcVar9)(lVar11 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_0140f950;
  }
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(&lStack_a0);
  }
  local_c0 = &DAT_304928236d5bcabe;
  local_b8 = (code *)0x39750e5;
  local_b0 = (code *)0x12;
  local_a8 = (long *)0x0;
  FUN_00d37bb4(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_c0,10);
  plVar10 = (long *)local_38[0xd];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  local_c0 = (undefined1 *)0xbfad0d66f8872232;
  local_b8 = (code *)0x396bca1;
  local_b0 = (code *)0x16;
  local_a8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_38 = (long *)0xb31312773fca3ea5;
  local_c8 = plVar10;
  FUN_011845f4(param_1 + 0x180,&local_c0,&local_c8,&local_38,10);
  if (local_c8 != (long *)0x0) {
    plVar2 = local_c8 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  uVar6 = FUN_013db45c(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xa0));
  local_c0 = (undefined1 *)0xc8e82e87b533acb8;
  local_b8 = (code *)0x389b8f9;
  local_b0 = (code *)0xc;
  local_a8 = (long *)0x0;
  lVar11 = thunk_FUN_00d2ec48(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (lVar11 == 0) goto LAB_0140fbe8;
  pcVar9 = *(code **)(lVar11 + 0x108);
  local_98 = FUN_0140fc9c;
  uStack_90 = 0;
  local_c0 = &LAB_01410c0c;
  local_b8 = FUN_01410c34;
  local_b0 = FUN_01410c38;
  local_a8 = (long *)&LAB_01410c4c;
  lStack_a0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB_0140fb84:
    (*local_b0)(&lStack_a0,lVar11 + 0x120);
    *(code **)(lVar11 + 0x108) = local_b8;
    *(long **)(lVar11 + 0x118) = local_a8;
    *(code **)(lVar11 + 0x110) = local_b0;
    *(undefined8 *)(lVar11 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    *(undefined8 *)(lVar11 + 0x118) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *(undefined8 *)(lVar11 + 0x108) = 0;
    (*pcVar9)(lVar11 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_0140fb84;
  }
  FUN_01410c60(lVar11,0);
  FUN_0280779c(lVar11,1);
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(&lStack_a0);
  }
LAB_0140fbe8:
  FUN_013db31c(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xa0),uVar6);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}


