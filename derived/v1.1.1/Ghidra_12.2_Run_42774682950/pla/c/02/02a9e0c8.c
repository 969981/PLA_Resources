/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9e0c8; name: FUN_02a9e0c8
 */


void FUN_02a9e0c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x288) + 0xe0);
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x248);
  if (plVar8 != (long *)0x0) {
    do {
      plVar7 = *(long **)(plVar8[6] + 0x88);
      if ((((plVar7 == (long *)0x0) || (lVar5 = plVar7[0x17], lVar5 == 0)) ||
          (*(char *)(lVar5 + 0x1e1) == '\0')) ||
         ((int)((ulong)(*(long *)(lVar5 + 0x278) - *(long *)(lVar5 + 0x270)) >> 5) == 0)) {
LAB_02a9e10c:
        plVar7 = plVar6;
      }
      else if (plVar6 == (long *)0x0) {
        plVar6 = plVar7 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = (int)*plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        if ((int)plVar7[0x2d] <= (int)plVar6[0x2d]) goto LAB_02a9e10c;
        plVar1 = plVar7 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar1 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      plVar6 = plVar7;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  lVar5 = *(long *)(param_1 + 0x288);
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = *(long **)(lVar5 + 0xe0);
  *(long **)(lVar5 + 0xe0) = plVar6;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 10;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02a9e284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
  }
  return;
}


