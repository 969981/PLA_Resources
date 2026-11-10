/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec885c; name: FUN_01ec885c
 */


void FUN_01ec885c(long param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  
  plVar10 = *(long **)(param_1 + 0x250);
  if (plVar10 != *(long **)(param_1 + 600)) {
    do {
      lVar9 = *plVar10;
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
        piVar2 = (int *)(lVar9 + 0xc);
        iVar11 = *(int *)(lVar9 + 0xc);
        do {
          uVar8 = FUN_01ecab44(*(undefined8 *)(lVar9 + 0x10));
          if ((uVar8 & 1) == 0) break;
          iVar3 = *piVar2;
          if (iVar3 == iVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar9 = *(long *)(lVar9 + 0x18);
              plVar7 = (long *)(lVar9 + -0x50);
              if (lVar9 != 0) {
                if (*(char *)(lVar9 + 0x5e0) == '\0') {
                  *(undefined1 *)(lVar9 + 0x48a) = 1;
                }
                else {
                  FUN_01e9ba4c(plVar7);
                }
                lVar9 = *(long *)(lVar9 + 8);
                piVar2 = (int *)(lVar9 + 0xc);
                do {
                  iVar11 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  (**(code **)(*plVar7 + 0x20))(plVar7);
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar3;
        } while (iVar3 != 0);
      }
      *(undefined4 *)(plVar10 + 5) = 3;
      plVar10 = plVar10 + 6;
    } while (plVar10 != *(long **)(param_1 + 600));
  }
  plVar10 = *(long **)(param_1 + 0x288);
  plVar7 = *(long **)(param_1 + 0x290);
  if (plVar10 != plVar7) {
    uVar8 = (long)plVar7 + (-8 - (long)plVar10);
    uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      plVar6 = plVar10;
      do {
        plVar10 = plVar6 + 1;
        bVar5 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        *(undefined1 *)(*plVar6 + 0xac) = 1;
        plVar6 = plVar10;
      } while (bVar5);
    }
    if (0x17 < uVar8) {
      do {
        *(undefined1 *)(*plVar10 + 0xac) = 1;
        *(undefined1 *)(plVar10[1] + 0xac) = 1;
        *(undefined1 *)(plVar10[2] + 0xac) = 1;
        plVar6 = plVar10 + 3;
        plVar10 = plVar10 + 4;
        *(undefined1 *)(*plVar6 + 0xac) = 1;
      } while (plVar10 != plVar7);
    }
  }
  FUN_01ec89f0(param_1);
  *(undefined1 *)(param_1 + 0x3f0) = 1;
  return;
}


