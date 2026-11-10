/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031035b0; name: FUN_031035b0
 */


undefined8 FUN_031035b0(long *param_1,uint *param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)((long)param_1 + 0x1c) & 0xffffff;
  if (uVar8 != 0xffffff) {
    puVar1 = (uint *)((long)param_1 + 0x1c);
    uVar9 = *(uint *)((long)param_1 + 0x1c);
    do {
      uVar4 = *puVar1;
      if (uVar4 == uVar9) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar9 + 0x1000000 & 0xff000000 |
                    *(uint *)(*param_1 + (ulong)uVar8 * 0x10 + 0xc) & 0xffffff;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          plVar2 = param_1 + 4;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          iVar5 = *(int *)((long)param_1 + 0x24);
          uVar9 = iVar5 + 1;
          if (uVar9 <= uVar8) {
            uVar4 = uVar8 + 1;
            if (uVar9 <= uVar4) {
              uVar9 = uVar4;
            }
            piVar3 = (int *)((long)param_1 + 0x24);
            do {
              if (*piVar3 != iVar5) {
                do {
                  ClearExclusiveLocal();
                  iVar5 = *piVar3;
                  uVar9 = uVar4;
                  if (uVar4 < iVar5 + 1U) {
                    uVar9 = iVar5 + 1;
                  }
                  while (*piVar3 == iVar5) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar7) {
                      *piVar3 = uVar9 - 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_03103650;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = uVar9 - 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
LAB_03103650:
          *param_2 = uVar8;
          *(undefined8 *)(*param_1 + (ulong)uVar8 * 0x10) = 0;
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar8 = uVar4 & 0xffffff;
      uVar9 = uVar4;
    } while (uVar8 != 0xffffff);
  }
  *param_2 = 0xffffffff;
  return 0x80040200;
}


