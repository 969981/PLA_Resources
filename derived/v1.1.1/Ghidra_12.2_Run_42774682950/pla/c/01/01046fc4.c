/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01046fc4; name: FUN_01046fc4
 */


void FUN_01046fc4(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  plVar2 = *(long **)(param_2 + 0x58);
  plVar3 = *(long **)(param_2 + 0x60);
  while( true ) {
    if (plVar2 == plVar3) {
      *param_1 = 0;
      return;
    }
    lVar6 = FUN_01046170(*plVar2 + 0x68);
    lVar9 = *(long *)(lVar6 + 8);
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 == (long *)0x0) {
      lVar6 = *param_3;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar6 = *param_3;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (lVar9 == lVar6) break;
    plVar2 = plVar2 + 1;
  }
  lVar6 = *plVar2;
  *param_1 = lVar6;
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x58);
  if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    *(undefined8 *)(lVar6 + 0x10) = uVar7;
  }
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


