/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec9c98; name: FUN_01ec9c98
 */


bool FUN_01ec9c98(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  plVar6 = *(long **)(param_1 + 0x288);
  plVar8 = *(long **)(param_1 + 0x290);
  if (plVar6 == plVar8) {
    bVar4 = false;
  }
  else {
    iVar9 = 0;
    do {
      if (((*(char *)(*plVar6 + 0x68) != '\0') && (lVar10 = *(long *)(*plVar6 + 0x70), lVar10 != 0))
         && (*(int *)(lVar10 + 0xc) != 0)) {
        piVar1 = (int *)(lVar10 + 0xc);
        iVar11 = *(int *)(lVar10 + 0xc);
        do {
          uVar5 = FUN_01ecab44(*(undefined8 *)(lVar10 + 0x10));
          if ((uVar5 & 1) == 0) break;
          iVar2 = *piVar1;
          if (iVar2 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x18);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x5a8) == 8) {
                  iVar9 = iVar9 + 1;
                }
                lVar7 = *(long *)(lVar10 + 8);
                piVar1 = (int *)(lVar7 + 0xc);
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
                  *(undefined8 *)(lVar7 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))();
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar8);
    bVar4 = (long)iVar9 == *(long *)(param_1 + 0x290) - *(long *)(param_1 + 0x288) >> 3;
  }
  return bVar4;
}


