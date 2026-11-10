/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e3f8c; name: FUN_018e3f8c
 */


void FUN_018e3f8c(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    piVar1 = (int *)(lVar7 + 0xc);
    iVar8 = *(int *)(lVar7 + 0xc);
    do {
      uVar6 = FUN_018e4014(*(undefined8 *)(lVar7 + 0x10));
      if ((uVar6 & 1) == 0) break;
      iVar3 = *piVar1;
      if (iVar3 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar7 + 0x18) != 0) {
            lVar2 = *(long *)(lVar7 + 0x18) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar3;
    } while (iVar3 != 0);
  }
  *param_1 = 0;
  return;
}


