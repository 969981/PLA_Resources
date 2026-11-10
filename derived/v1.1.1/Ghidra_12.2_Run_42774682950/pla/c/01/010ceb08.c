/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ceb08; name: FUN_010ceb08
 */


void FUN_010ceb08(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  long *local_38;
  
  cVar6 = FUN_01143c84();
  if (cVar6 != '\x01') {
    plVar2 = *(long **)(param_1 + 0xe0);
    for (plVar7 = *(long **)(param_1 + 0xd8); plVar7 != plVar2; plVar7 = plVar7 + 2) {
      if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0xc) != 0)) {
        FUN_010d68e4(&local_38,*plVar7);
        plVar5 = local_38;
        (**(code **)(*local_38 + 0x58))(local_38);
        if (plVar5 != (long *)0x0) {
          lVar8 = plVar5[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar3 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
        }
      }
    }
    DAT_043ba680 = 1;
  }
  lVar8 = *(long *)(param_1 + 200);
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(lVar8 + 0x450));
    iVar3 = *(int *)(lVar8 + 0x448);
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x450));
    if (iVar3 == 2) {
      FUN_010cec54(param_1);
    }
    plVar7 = *(long **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x010cec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x20))();
        return;
      }
    }
  }
  return;
}


