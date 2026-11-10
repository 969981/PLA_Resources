/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f7cf8; name: FUN_019f7cf8
 */


void FUN_019f7cf8(long param_1,uint param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *local_58;
  
  lVar8 = *(long *)(param_1 + 0x250);
  lVar9 = *(long *)(param_1 + 600);
  if (lVar8 != lVar9) {
    if ((param_3 == 5) && ((char)param_4 != '\0')) {
      do {
        FUN_019fa7a0(&local_58,lVar8 + 8);
        plVar10 = local_58;
        if (local_58 != (long *)0x0) {
          iVar4 = FUN_019e3bb8(local_58);
          iVar5 = FUN_01c14f5c(plVar10);
          if ((iVar4 == (int)((ulong)param_4 >> 0x20)) && (iVar5 == 5)) {
            FUN_01c14c18(plVar10,param_2 & 1,param_5);
          }
          lVar7 = plVar10[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
        }
        lVar8 = lVar8 + 0x60;
      } while (lVar8 != lVar9);
    }
    else {
      do {
        lVar7 = *(long *)(lVar8 + 8);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
          piVar1 = (int *)(lVar7 + 0xc);
          iVar4 = *(int *)(lVar7 + 0xc);
          do {
            plVar10 = *(long **)(lVar7 + 0x10);
            lVar6 = FUN_019fa6c0();
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_019f7df0;
              if (plVar10 == (long *)lVar6) break;
              plVar10 = (long *)*plVar10;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar4) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar7 = *(long *)(lVar7 + 0x18);
                plVar10 = (long *)(lVar7 + -0x50);
                if (lVar7 != 0) {
                  iVar4 = FUN_01c14f5c(plVar10);
                  if (iVar4 == param_3) {
                    FUN_01c14c18(plVar10,param_2 & 1,param_5);
                  }
                  lVar7 = *(long *)(lVar7 + 8);
                  piVar1 = (int *)(lVar7 + 0xc);
                  do {
                    iVar4 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar4 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar4 + -1 == 0) {
                    *(undefined8 *)(lVar7 + 0x18) = 0;
                    (**(code **)(*plVar10 + 0x20))(plVar10);
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar4 = iVar5;
          } while (iVar5 != 0);
        }
LAB_019f7df0:
        lVar8 = lVar8 + 0x60;
      } while (lVar8 != lVar9);
    }
  }
  return;
}


