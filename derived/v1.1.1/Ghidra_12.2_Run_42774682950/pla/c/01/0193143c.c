/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193143c; name: FUN_0193143c
 */


uint FUN_0193143c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *local_38;
  
  uVar5 = FUN_019337cc(param_1,param_3);
  plVar8 = (long *)*param_2;
  local_38 = plVar8;
  if (plVar8 == (long *)0x0) {
    uVar6 = FUN_019338a4(param_1,&local_38,uVar5);
  }
  else {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = FUN_019338a4(param_1,&local_38,uVar5);
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return uVar6 & 1;
}


