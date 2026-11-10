/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad8e6c; name: FUN_02ad8e6c
 */


void FUN_02ad8e6c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long *local_40;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  FUN_02a6f65c(param_1,DAT_043eef30);
  *(undefined4 *)(param_1 + 0x73) = 1;
  *param_1 = (long)&DAT_04282cd8;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  param_1[9] = (long)&PTR_LAB_04282d60;
  param_1[10] = (long)&PTR_LAB_04282da8;
  local_38 = 0;
  plVar5 = (long *)FUN_00957dc4(auStack_28,param_1[1],&local_38);
  plVar5[0x3c] = plVar5[0x3c] | 8;
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcVar7 = (code *)plVar5[0x75];
  if (pcVar7 != (code *)0x0) {
    plVar5[0x76] = 0;
    plVar5[0x77] = 0;
    plVar5[0x74] = 0;
    plVar5[0x75] = 0;
    (*pcVar7)(plVar5 + 0x78);
  }
  plVar5[0x74] = (long)&LAB_02ad9620;
  plVar5[0x75] = (long)&LAB_02ad9624;
  plVar5[0x76] = (long)&LAB_02ad9628;
  plVar5[0x77] = (long)&LAB_02ad962c;
  local_40 = plVar5;
  FUN_02a6ff4c(param_1,&local_40);
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1,0);
  return;
}


