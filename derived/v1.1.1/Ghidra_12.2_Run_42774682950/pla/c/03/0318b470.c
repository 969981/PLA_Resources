/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318b470; name: FUN_0318b470
 */


void FUN_0318b470(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    plVar9 = *(long **)(param_1 + 0x38);
    lVar8 = plVar9[(long)iVar2 * 3 + -2];
    plVar10 = plVar9 + (long)iVar2 * 3 + -3;
    lVar5 = tpidr_el0;
    if (lVar8 != 0) {
      nn::os::FinalizeMutex((MutexType *)(lVar8 + 8));
      lVar7 = *(long *)(lVar5 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar7;
      }
      plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0x38);
    }
    plVar6 = (long *)*plVar10;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) goto LAB_0318b568;
    }
LAB_0318b4f0:
    if (plVar10 != plVar9) {
      while( true ) {
        lVar8 = plVar10[-2];
        plVar10 = plVar10 + -3;
        if (lVar8 != 0) {
          nn::os::FinalizeMutex((MutexType *)(lVar8 + 8));
          lVar7 = *(long *)(lVar5 + 0x38d490);
          if (lVar7 == 0) {
            lVar7 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar7;
          }
          plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0x38);
        }
        plVar6 = (long *)*plVar10;
        if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) break;
        plVar1 = plVar6 + 2;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 + -1 != 0) break;
LAB_0318b568:
        (**(code **)(*plVar6 + 0x18))();
        if (plVar10 == plVar9) goto LAB_0318b57c;
      }
      goto LAB_0318b4f0;
    }
  }
LAB_0318b57c:
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


