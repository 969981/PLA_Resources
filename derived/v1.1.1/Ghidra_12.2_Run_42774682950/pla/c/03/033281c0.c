/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033281c0; name: FUN_033281c0
 */


void FUN_033281c0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_38;
  
  FUN_032bd388(param_2,4);
  if ((param_3 == 0) || (3 < (int)param_2[1])) {
    local_38 = 0x40;
    iVar5 = *(int *)((long)param_2 + 0xc);
    lVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x40,&local_38);
    if (0 < iVar5) {
      if (3 < iVar5) {
        iVar5 = 4;
      }
      lVar6 = 0;
      do {
        lVar10 = *param_2;
        lVar9 = lVar6 * 0x10;
        lVar11 = *(long *)(lVar10 + lVar9);
        *(long *)(lVar8 + lVar9) = lVar11;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
          plVar4 = (long *)(lVar11 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar6 = lVar6 + 1;
        *(undefined1 *)(lVar8 + lVar9 + 8) = *(undefined1 *)(lVar10 + lVar9 + 8);
      } while (lVar6 < iVar5);
      lVar6 = 0;
      do {
        plVar4 = *(long **)(*param_2 + lVar6 * 0x10);
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar1 = plVar4 + 2;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,(long)*(int *)((long)param_2 + 0xc) << 4);
    *param_2 = lVar8;
    iVar5 = (int)(local_38 >> 4);
    if (0x3ffffffe < iVar5) {
      iVar5 = 0x3fffffff;
    }
  }
  else {
    if (0 < (int)param_2[1]) {
      lVar8 = 0;
      do {
        lVar9 = *param_2;
        lVar6 = lVar8 * 0x10;
        lVar10 = *(long *)(lVar9 + lVar6);
        *(long *)(param_3 + lVar6) = lVar10;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
          plVar4 = (long *)(lVar10 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined1 *)(param_3 + lVar6 + 8) = *(undefined1 *)(lVar9 + lVar6 + 8);
        uVar7 = (ulong)(int)param_2[1];
        lVar8 = lVar8 + 1;
      } while (lVar8 < (long)uVar7);
      if (0 < (int)param_2[1]) {
        lVar8 = 0;
        do {
          plVar4 = *(long **)(*param_2 + lVar8 * 0x10);
          if (plVar4 != (long *)0x0) {
            if (plVar4[1] != 0) {
              plVar1 = plVar4 + 2;
              do {
                lVar6 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 + -1 == 0) {
                (**(code **)(*plVar4 + 0x18))();
              }
            }
            uVar7 = (ulong)*(uint *)(param_2 + 1);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uVar7);
      }
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x3fffffff) << 4);
    *param_2 = param_3;
    iVar5 = -0x7ffffffc;
  }
  *(int *)((long)param_2 + 0xc) = iVar5;
  return;
}


