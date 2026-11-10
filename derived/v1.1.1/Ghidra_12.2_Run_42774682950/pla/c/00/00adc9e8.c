/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00adc9e8; name: FUN_00adc9e8
 */


void FUN_00adc9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  local_40 = (long *)0x0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (long *)(PTR_DAT_0437a508 + 0x10);
  uStack_58 = 0;
  FUN_00ae2200(param_1 + 0x2a0,&uStack_58);
  plVar6 = *(long **)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  uVar8 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x2b0) = uVar8;
  plVar6 = *(long **)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  plVar6 = local_40;
  local_40 = (long *)0x0;
  *(long **)(param_1 + 0x2b8) = plVar6;
  plVar6 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  uVar8 = local_38;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x2c0) = uVar8;
  FUN_00936104(&local_60);
  FUN_00adcc04(&local_60,param_2);
  uVar7 = FUN_00938764(param_1 + 0x298,1,&local_60,0,param_3,0);
  if (((uVar7 & 1) != 0) && (plVar6 = *(long **)(param_1 + 0x2c0), plVar6 != (long *)0x0)) {
    lVar9 = plVar6[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar6[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x300) = 0;
  return;
}


