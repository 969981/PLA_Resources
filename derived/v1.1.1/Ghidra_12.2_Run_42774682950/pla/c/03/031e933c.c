/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e933c; name: FUN_031e933c
 */


void FUN_031e933c(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long local_28;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    plVar4 = *(long **)(param_1 + 0xa0);
    lVar7 = 0;
    do {
      if (*plVar4 == param_2) {
        uVar8 = -lVar7 & 0xffffffff;
        local_28 = param_1;
        FUN_031e94b4(param_1 + 0x20,-lVar7,&local_28);
        plVar4 = *(long **)(*(long *)(param_1 + 0xa0) + uVar8 * 0x60);
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar6 = plVar4 + 2;
          do {
            lVar5 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        iVar1 = *(int *)(param_1 + 0xa8);
        lVar5 = (long)iVar1 + -1;
        *(int *)(param_1 + 0xa8) = (int)lVar5;
        if (iVar1 + (int)lVar7 != 1) {
          plVar4 = (long *)(*(long *)(param_1 + 0xa0) + lVar5 * 0x60);
          plVar6 = (long *)(*(long *)(param_1 + 0xa0) + uVar8 * 0x60);
          *plVar6 = *plVar4;
          lVar7 = plVar4[5];
          *plVar4 = 0;
          plVar6[3] = plVar4[3];
          plVar6[5] = lVar7;
          lVar7 = plVar4[2];
          plVar6[4] = plVar4[4];
          plVar6[2] = lVar7;
          plVar6[7] = plVar4[7];
          plVar6[6] = plVar4[6];
          plVar6[9] = plVar4[9];
          plVar6[8] = plVar4[8];
          lVar7 = plVar4[10];
          *(undefined1 *)((long)plVar6 + 0x52) = *(undefined1 *)((long)plVar4 + 0x52);
          *(short *)(plVar6 + 10) = (short)lVar7;
          plVar4 = (long *)*plVar4;
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar6 = plVar4 + 2;
            do {
              lVar7 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + -1;
      plVar4 = plVar4 + 0xc;
    } while (-lVar7 != (long)*(int *)(param_1 + 0xa8));
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


