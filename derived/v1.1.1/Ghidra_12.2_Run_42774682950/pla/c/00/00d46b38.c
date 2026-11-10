/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d46b38; name: FUN_00d46b38
 */


void FUN_00d46b38(long param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  plVar3 = *(long **)(param_1 + 0x70);
  plVar4 = *(long **)(param_1 + 0x78);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    if ((*(long *)(*plVar3 + 0x440) != 0) &&
       (plVar8 = *(long **)(*(long *)(*plVar3 + 0x440) + 0x58), plVar8 != (long *)0x0)) {
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
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_00d36154(plVar8,0);
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


