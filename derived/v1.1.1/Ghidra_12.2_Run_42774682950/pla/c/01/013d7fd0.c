/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d7fd0; name: FUN_013d7fd0
 */


void FUN_013d7fd0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  uVar10 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  puVar6 = (undefined8 *)FUN_02ad8108();
  plVar9 = (long *)*puVar6;
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02b21ce4(local_60,plVar9);
  plVar7 = *(long **)(param_1 + 0x5f0);
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long **)(param_1 + 0x5f0) = local_60[0];
  if (local_60[0] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_28 = "bin/appli/misc/util/poke_model_util/env/light/gamestart/gamestart.trlgt";
  FUN_009f1b84(local_60,&local_28);
  FUN_013d8154(&local_68,param_1 + 0x5c0,local_60,uVar10);
  if (local_68 != (long *)0x0) {
    lVar8 = local_68[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    plVar7 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


