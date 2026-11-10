/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283c824; name: FUN_0283c824
 */


void FUN_0283c824(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(param_2 + 0xf0);
  lVar7 = *(long *)(param_2 + 0xf8);
  lVar12 = *param_3;
  plVar10 = (long *)param_3[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar5 = plVar11;
  if ((lVar7 != 0) && (*plVar11 != lVar12)) {
    lVar9 = lVar7 * 0x28;
    plVar8 = plVar11 + lVar7 * 5;
    do {
      lVar9 = lVar9 + -0x28;
      plVar5 = plVar8;
      if (lVar9 == 0) break;
      plVar1 = plVar11 + 5;
      plVar11 = plVar11 + 5;
      plVar5 = plVar11;
    } while (*plVar1 != lVar12);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar5 == (long *)(*(long *)(param_2 + 0xf0) + *(long *)(param_2 + 0xf8) * 0x28)) {
    *param_1 = 0;
  }
  else {
    lVar7 = plVar5[4];
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}


