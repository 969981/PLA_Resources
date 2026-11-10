/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a2d10; name: FUN_010a2d10
 */


void FUN_010a2d10(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_38;
  
  FUN_010a2850(&local_38,param_3);
  uVar6 = FUN_010a2ad0(param_3);
  plVar2 = local_38;
  plVar8 = *(long **)(DAT_043ba448 + 0x68);
  if (plVar8 == (long *)0x0) {
    uVar7 = *param_1;
    if (local_38 != (long *)0x0) goto LAB_010a2e00;
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    uVar7 = *param_1;
    if (plVar2 != plVar8) {
LAB_010a2e00:
      FUN_02c35d04(uVar7,param_2,local_38,uVar6,0);
      goto joined_r0x010a2da0;
    }
  }
  FUN_02c393b4(uVar7,param_2,uVar6);
joined_r0x010a2da0:
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


