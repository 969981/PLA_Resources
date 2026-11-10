/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02559664; name: FUN_02559664
 */


undefined8 FUN_02559664(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 0xc) != 0)) {
    FUN_016c24d0(&local_28,param_1 + 0x58);
    if (local_28 == (long *)0x0) {
      return 0;
    }
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    lVar8 = local_28[0x40];
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
    if ((char)lVar8 == '\0') {
      lVar8 = *(long *)(param_1 + 0x68);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
        piVar1 = (int *)(lVar8 + 0xc);
        iVar10 = *(int *)(lVar8 + 0xc);
        do {
          uVar6 = FUN_01a49bec(*(undefined8 *)(lVar8 + 0x10));
          if ((uVar6 & 1) == 0) {
            return 1;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar8 = *(long *)(lVar8 + 0x18);
              if (lVar8 == 0) {
                return 1;
              }
              plVar9 = (long *)(lVar8 + -0x50);
              uVar6 = FUN_01ba01a8(plVar9);
              if (((uVar6 & 1) == 0) && (uVar6 = FUN_01ba0290(plVar9), (uVar6 & 1) == 0)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              lVar8 = *(long *)(lVar8 + 8);
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))(plVar9);
                if (bVar4) {
                  return 1;
                }
                return 0;
              }
              if (bVar4) {
                return 1;
              }
              return 0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
      return 1;
    }
  }
  return 0;
}


