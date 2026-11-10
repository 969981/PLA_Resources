/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa817c; name: FUN_02aa817c
 */


undefined8 FUN_02aa817c(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  
  uVar7 = 1;
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 1:
    lVar8 = *(long *)(param_1 + 0x88);
    if ((*(long *)(lVar8 + 0xb8) != 0) && (*(char *)(*(long *)(lVar8 + 0xb8) + 0x1e1) != '\0')) {
      plVar13 = *(long **)(*(long *)(param_1 + 0x80) + 0x1f0);
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar8 = *(long *)(param_1 + 0x88);
      }
      *(int *)(param_1 + 0x9c) = (int)plVar13[0x2e];
      iVar2 = *(int *)(lVar8 + 0x168) + -1;
      *(int *)(param_1 + 0xa0) = iVar2;
      FUN_02b3a924(lVar8,1,iVar2,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170),
                   *(undefined1 *)(param_1 + 0x9a));
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 10;
        do {
          iVar2 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      uVar10 = 2;
LAB_02aa8234:
      *(undefined4 *)(param_1 + 0x78) = uVar10;
    }
    break;
  case 2:
    lVar8 = *(long *)(param_1 + 0x88);
    if ((*(long *)(lVar8 + 0xb8) != 0) && (*(char *)(*(long *)(lVar8 + 0xb8) + 0x1e1) != '\0')) {
      piVar11 = *(int **)(lVar8 + 0x130);
      if (piVar11 != *(int **)(lVar8 + 0x138)) {
        bVar5 = true;
        do {
          lVar12 = *(long *)(*(long *)(lVar8 + 0xe8) + (long)*piVar11 * 8);
          if (lVar12 == 0) {
LAB_02aa8268:
            bVar6 = 0;
          }
          else {
            for (lVar3 = *(long *)(lVar12 + 0x58); lVar3 != *(long *)(lVar12 + 0x60);
                lVar3 = lVar3 + 0x30) {
              if (*(char *)(*(long *)(lVar3 + 8) + 0x2d8) == '\0') goto LAB_02aa8268;
            }
            bVar6 = 1;
          }
          piVar11 = piVar11 + 3;
          bVar5 = (bool)(bVar5 & bVar6);
        } while (piVar11 != *(int **)(lVar8 + 0x138));
        if (!bVar5) break;
      }
      lVar12 = *(long *)(lVar8 + 0x120);
      if (lVar12 != 0) {
        for (lVar3 = *(long *)(lVar12 + 0x60); lVar3 != *(long *)(lVar12 + 0x68);
            lVar3 = lVar3 + 0x30) {
          if (*(char *)(*(long *)(lVar3 + 8) + 0x2e0) == '\0') goto switchD_02aa81b4_default;
        }
        if ((*(long *)(lVar8 + 0x128) == 0) ||
           ((lVar12 = *(long *)(*(long *)(lVar8 + 0x128) + 0x60), lVar12 != 0 &&
            (*(char *)(lVar12 + 0x1e1) != '\0')))) {
          iVar2 = *(int *)(param_1 + 0xa0);
          *(ulong *)(param_1 + 0xa8) = 1L << ((long)iVar2 & 0x3fU) | *(ulong *)(param_1 + 0xa8);
          if (iVar2 <= *(int *)(param_1 + 0x9c)) {
            uVar10 = 3;
            goto LAB_02aa8234;
          }
          *(int *)(param_1 + 0xa0) = iVar2 + -1;
          FUN_02b3a924(lVar8,1,iVar2 + -1,*(undefined8 *)(param_1 + 0x168),
                       *(undefined8 *)(param_1 + 0x170),*(undefined1 *)(param_1 + 0x9a));
        }
      }
    }
    break;
  case 3:
    uVar9 = FUN_02aa8380(param_1);
    if ((uVar9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 4;
      return 1;
    }
    break;
  case 4:
    goto switchD_02aa81b4_caseD_4;
  }
switchD_02aa81b4_default:
  uVar7 = 0;
switchD_02aa81b4_caseD_4:
  return uVar7;
}


