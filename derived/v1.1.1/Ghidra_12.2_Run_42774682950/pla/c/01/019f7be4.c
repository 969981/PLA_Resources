/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f7be4; name: FUN_019f7be4
 */


void FUN_019f7be4(long param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  lVar6 = *(long *)(param_1 + 0x250);
  lVar7 = *(long *)(param_1 + 600);
  if (lVar6 != lVar7) {
    do {
      lVar8 = *(long *)(lVar6 + 8);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
        piVar1 = (int *)(lVar8 + 0xc);
        iVar9 = *(int *)(lVar8 + 0xc);
        do {
          plVar10 = *(long **)(lVar8 + 0x10);
          lVar5 = FUN_019fa6c0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_019f7c20;
            if (plVar10 == (long *)lVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar8 = *(long *)(lVar8 + 0x18);
              if (lVar8 != 0) {
                FUN_01c14c18((long *)(lVar8 + -0x50),param_2 & 1,param_3);
                lVar5 = *(long *)(lVar8 + 8);
                piVar1 = (int *)(lVar5 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar5 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar8 + -0x50) + 0x20))();
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar2;
        } while (iVar2 != 0);
      }
LAB_019f7c20:
      lVar6 = lVar6 + 0x60;
    } while (lVar6 != lVar7);
  }
  return;
}


