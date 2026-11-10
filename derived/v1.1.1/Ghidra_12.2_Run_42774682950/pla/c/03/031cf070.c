/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cf070; name: FUN_031cf070
 */


undefined8 FUN_031cf070(long *param_1,long *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong local_38;
  
  FUN_032bcf10(param_2,0x10,&local_38);
  if ((int)param_2[1] == 0) {
    uVar8 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
    if (lVar6 == 0) {
      uVar8 = 0x80040200;
    }
    else {
      iVar9 = (int)(local_38 >> 4);
      if (0x3ffffffe < iVar9) {
        iVar9 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar11 = 0;
        lVar12 = 0;
        do {
          puVar2 = (undefined4 *)(*param_2 + lVar11);
          puVar3 = (undefined4 *)(lVar6 + lVar11);
          lVar11 = lVar11 + 0x10;
          *puVar3 = *puVar2;
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar2 + 2) = 0;
          uVar10 = (ulong)(int)param_2[1];
          lVar12 = lVar12 + 1;
        } while (lVar12 < (long)uVar10);
        if (0 < (int)param_2[1]) {
          lVar11 = 0;
          do {
            plVar7 = *(long **)(*param_2 + lVar11 * 0x10 + 8);
            if (plVar7 != (long *)0x0) {
              if (plVar7[1] != 0) {
                plVar1 = plVar7 + 2;
                do {
                  lVar12 = *plVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = lVar12 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar12 + -1 == 0) {
                  (**(code **)(*plVar7 + 0x18))();
                }
              }
              uVar10 = (ulong)*(uint *)(param_2 + 1);
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (int)uVar10);
        }
      }
      uVar8 = 0;
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar9;
    }
  }
  return uVar8;
}


