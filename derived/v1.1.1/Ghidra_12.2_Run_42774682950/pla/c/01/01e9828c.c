/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9828c; name: FUN_01e9828c
 */


undefined8 FUN_01e9828c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *local_38;
  
  FUN_01ea188c(&local_38);
  plVar7 = local_38;
  if (local_38 == (long *)0x0) {
    return 0;
  }
  uVar5 = FUN_008a81d4(local_38 + 10);
  if (((uVar5 & 1) == 0) || (*(char *)((long)plVar7 + 0x81d) == '\0')) {
    lVar9 = *(long *)(param_1 + 0x520);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0xc) == 0) goto LAB_01e983d8;
      piVar1 = (int *)(lVar9 + 0xc);
      iVar11 = *(int *)(lVar9 + 0xc);
      do {
        uVar5 = FUN_01ead270(*(undefined8 *)(lVar9 + 0x10));
        if ((uVar5 & 1) == 0) goto LAB_01e983d8;
        iVar2 = *piVar1;
        if (iVar2 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01e98344;
          lVar9 = *(long *)(lVar9 + 0x18);
          plVar7 = (long *)(lVar9 + -0x50);
          if (lVar9 != 0) {
            plVar6 = (long *)FUN_00b5293c(plVar7);
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
            lVar10 = *plVar6;
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar7 + 0x20))(plVar7);
            }
            if (lVar10 == 0x79479c9171128967) {
              uVar8 = 1;
              goto joined_r0x01e983d0;
            }
          }
          goto LAB_01e983d8;
        }
        ClearExclusiveLocal();
LAB_01e98344:
        iVar11 = iVar2;
      } while (iVar2 != 0);
    }
    uVar8 = 0;
  }
  else {
LAB_01e983d8:
    uVar8 = 0;
  }
joined_r0x01e983d0:
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return uVar8;
}


