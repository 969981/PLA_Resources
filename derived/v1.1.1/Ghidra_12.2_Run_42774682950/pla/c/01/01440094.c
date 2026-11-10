/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01440094; name: FUN_01440094
 */


void FUN_01440094(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = *(long **)(param_2 + 0x5b0);
  plVar7 = *(long **)(param_2 + 0x5b8);
  plVar8 = plVar5;
  if (plVar5 != plVar7) {
    cVar2 = *(char *)(*(long *)(*plVar5 + 0x68) + 0x4f8);
    while (cVar2 != '\0') {
      plVar8 = plVar8 + 1;
      if (plVar7 == plVar8) goto LAB_01440160;
      cVar2 = *(char *)(*(long *)(*plVar8 + 0x68) + 0x4f8);
    }
  }
  if (plVar7 == plVar8) {
LAB_01440160:
    *param_1 = 0;
  }
  else {
    *(undefined1 *)(*(long *)(*plVar8 + 0x68) + 0x4f8) = 1;
    lVar6 = *(long *)((long)plVar8 + (*(long *)(param_2 + 0x5b0) - (long)plVar5));
    *param_1 = lVar6;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x58);
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar4;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


