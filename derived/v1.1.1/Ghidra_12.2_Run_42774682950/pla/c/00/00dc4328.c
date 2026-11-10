/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc4328; name: FUN_00dc4328
 */


void FUN_00dc4328(long *param_1,long param_2)

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
      while( true ) {
        puVar7 = *(undefined8 **)(param_2 + 0x10);
        FUN_00dc43d8();
        while( true ) {
          if (puVar7 == (undefined8 *)0x0) goto LAB_00dc43a8;
          if (puVar7 == &DAT_043ad2c0) break;
          puVar7 = (undefined8 *)*puVar7;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar6) break;
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
        iVar6 = iVar3;
        if (iVar3 == 0) goto LAB_00dc43a8;
      }
      ClearExclusiveLocal();
      iVar6 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00dc43a8:
  *param_1 = 0;
  return;
}


