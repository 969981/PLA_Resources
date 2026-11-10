/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0268992c; name: FUN_0268992c
 */


void FUN_0268992c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *local_38;
  long *plStack_28;
  
  plVar6 = *(long **)(param_1 + 0x5c0);
  *(undefined4 *)(param_1 + 0xd08) = 0;
  plStack_28 = plVar6;
  if (plVar6 == (long *)0x0) {
    FUN_02689a70(param_1,&plStack_28,0);
    lVar7 = *(long *)(param_1 + 0xce0);
  }
  else {
    lVar7 = plVar6[0xb];
    puVar5 = *(undefined8 **)(lVar7 + 0x18);
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      puVar5 = (undefined8 *)(**(code **)*puVar5)();
      *(undefined8 **)(lVar7 + 0x10) = puVar5;
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
    FUN_02689a70(puVar5,&plStack_28,0);
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
      lVar7 = *(long *)(param_1 + 0xce0);
    }
    else {
      lVar7 = *(long *)(param_1 + 0xce0);
    }
  }
  if (((lVar7 != 0) && (FUN_0269251c(&local_38), local_38 != (long *)0x0)) &&
     (FUN_0267d64c(0,local_38,*(undefined4 *)(param_1 + 0xcf4)), local_38 != (long *)0x0)) {
    lVar7 = local_38[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


