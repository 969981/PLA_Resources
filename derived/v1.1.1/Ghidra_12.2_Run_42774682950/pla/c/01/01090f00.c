/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01090f00; name: FUN_01090f00
 */


void FUN_01090f00(ulong param_1,ulong param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  if (((*param_4 != 0) && (lVar6 = *(long *)(*param_4 + 0x1f0), lVar6 != 0)) &&
     (*(int *)(lVar6 + 0xc) != 0)) {
    piVar1 = (int *)(lVar6 + 0xc);
    iVar7 = *(int *)(lVar6 + 0xc);
    do {
      plVar8 = *(long **)(lVar6 + 0x10);
      lVar5 = FUN_01091efc(param_1,param_2,param_3);
      while( true ) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        if (plVar8 == (long *)lVar5) break;
        plVar8 = (long *)*plVar8;
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
          lVar6 = *(long *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            return;
          }
          plVar8 = (long *)(lVar6 + -0x50);
          FUN_01090e30(param_1 & 0xffffffff,param_2 & 0xffffffff,param_3 & 0xffffffff,plVar8);
          lVar6 = *(long *)(lVar6 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x01091010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x20))(plVar8);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_1 = param_1 & 0xffffffff;
      param_2 = param_2 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


