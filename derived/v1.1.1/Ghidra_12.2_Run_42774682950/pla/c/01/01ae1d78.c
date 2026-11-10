/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ae1d78; name: FUN_01ae1d78
 */


void FUN_01ae1d78(undefined1 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  
  puVar5 = PTR_DAT_04379e60;
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar7 = *(int *)(lVar8 + 0xc);
    do {
      plVar9 = *(long **)(lVar8 + 0x10);
      FUN_01ae2810();
      while( true ) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        if (plVar9 == (long *)puVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 == 0) {
            return;
          }
          *param_1 = *(undefined1 *)(lVar8 + 0xaf7);
          lVar6 = *(long *)(lVar8 + 8);
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ae1e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))();
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


