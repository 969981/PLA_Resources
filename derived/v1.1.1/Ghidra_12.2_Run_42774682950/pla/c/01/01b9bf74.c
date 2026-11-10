/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9bf74; name: FUN_01b9bf74
 */


void FUN_01b9bf74(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)*param_2;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_40 = (long *)*param_4;
  if (local_40 != (long *)0x0) {
    plVar2 = local_40 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_01b389d8(param_1,&local_38,param_3,&local_40);
  if (local_40 != (long *)0x0) {
    plVar2 = local_40 + 10;
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
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  param_1[0xc6] = &PTR_LAB_04243280;
  param_1[199] = &PTR_LAB_042432e0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)((long)param_1 + 0x644) = 0;
  FUN_0177e8a8(param_1 + 0xc9);
  *param_1 = &PTR_LAB_04242f38;
  param_1[9] = &PTR_LAB_04243080;
  param_1[10] = &PTR_LAB_04243160;
  param_1[0xc6] = &PTR_LAB_04243188;
  param_1[199] = &PTR_LAB_042431e8;
  param_1[0xc9] = &PTR_LAB_04243230;
  return;
}


