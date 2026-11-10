/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0153fa18; name: FUN_0153fa18
 */


void FUN_0153fa18(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0xc);
    do {
      puVar7 = *(undefined8 **)(param_2 + 0x10);
      FUN_0153f5d4();
      while( true ) {
        if (puVar7 == (undefined8 *)0x0) goto LAB_0153fa90;
        if (puVar7 == &DAT_043c9140) break;
        puVar7 = (undefined8 *)*puVar7;
      }
      iVar3 = *piVar1;
      if (iVar3 == iVar6) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar2 = 0;
          if (*(long *)(param_2 + 0x18) != 0) {
            lVar2 = *(long *)(param_2 + 0x18) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar3;
    } while (iVar3 != 0);
  }
LAB_0153fa90:
  *param_1 = 0;
  return;
}


