/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107fa54; name: FUN_0107fa54
 */


void FUN_0107fa54(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(char *)(*param_2 + 0x109) != '\0') {
    FUN_0107da6c();
    if (*(ulong *)(param_1 + 0x98) < *(ulong *)(param_1 + 0xa0)) {
      FUN_01080308(param_1 + 0xa8,*(ulong *)(param_1 + 0x98),param_2);
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
    }
    else {
      FUN_010805d8(param_1 + 0x90,param_2);
    }
  }
  plVar6 = *(long **)(param_1 + 0x58);
  plVar10 = *(long **)(param_1 + 0x60);
  if ((plVar6 == plVar10) || (*param_2 == *plVar6)) {
    if (plVar6 != plVar10) goto LAB_0107fae4;
LAB_0107faf0:
    lVar7 = (long)plVar10 - (long)plVar6;
  }
  else {
    do {
      plVar6 = plVar6 + 1;
      if (plVar10 == plVar6) {
        return;
      }
    } while (*param_2 != *plVar6);
    if (plVar6 == plVar10) goto LAB_0107faf0;
LAB_0107fae4:
    plVar5 = plVar6 + 1;
    plVar8 = plVar6;
    if (plVar5 == plVar10) goto LAB_0107faf0;
    do {
      plVar6 = plVar8;
      if (*param_2 != *plVar5) {
        plVar6 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar6 != (long *)0x0) {
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
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        lVar7 = *plVar5;
        *plVar5 = 0;
        plVar6 = plVar8 + 1;
        *plVar8 = lVar7;
      }
      plVar5 = plVar5 + 1;
      plVar8 = plVar6;
    } while (plVar5 != plVar10);
    plVar10 = *(long **)(param_1 + 0x60);
    lVar7 = (long)plVar10 - (long)plVar6;
  }
  if (lVar7 == 0) {
    return;
  }
  plVar5 = (long *)((long)plVar6 + lVar7);
  plVar8 = plVar6;
  if ((long *)((long)plVar6 + lVar7) == plVar10) {
    if (plVar10 == plVar6) goto LAB_0107fb7c;
  }
  else {
    do {
      plVar6 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar6 != (long *)0x0) {
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
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      lVar7 = *plVar5;
      plVar9 = plVar5 + 1;
      *plVar5 = 0;
      plVar6 = plVar8 + 1;
      *plVar8 = lVar7;
      plVar5 = plVar9;
      plVar8 = plVar6;
    } while (plVar9 != plVar10);
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 == plVar6) goto LAB_0107fb7c;
  }
  plVar10 = plVar10 + -1;
  plVar5 = (long *)*plVar10;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
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
    if (iVar2 + -1 == 0) goto LAB_0107fb64;
  }
LAB_0107fb38:
  if (plVar10 != plVar6) {
    while( true ) {
      plVar10 = plVar10 + -1;
      plVar5 = (long *)*plVar10;
      if (plVar5 == (long *)0x0) break;
      lVar7 = plVar5[0xb];
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
      if (iVar2 + -1 != 0) break;
LAB_0107fb64:
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
      if (plVar10 == plVar6) goto LAB_0107fb7c;
    }
    goto LAB_0107fb38;
  }
LAB_0107fb7c:
  *(long **)(param_1 + 0x60) = plVar6;
  return;
}


