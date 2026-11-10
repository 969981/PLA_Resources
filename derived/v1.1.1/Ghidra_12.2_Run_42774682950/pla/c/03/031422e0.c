/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031422e0; name: FUN_031422e0
 */


undefined8 FUN_031422e0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong local_38;
  
  FUN_032bcf10(param_2,8,&local_38);
  if ((int)param_2[1] == 0) {
    uVar6 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
    if (lVar4 == 0) {
      uVar6 = 0x80040200;
    }
    else {
      iVar7 = (int)(local_38 >> 3);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar10 = 0;
        do {
          lVar11 = *param_2;
          lVar8 = lVar10 * 8;
          lVar10 = lVar10 + 1;
          *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar11 + lVar8);
          *(undefined8 *)(lVar11 + lVar8) = 0;
          uVar9 = (ulong)(int)param_2[1];
        } while (lVar10 < (long)uVar9);
        if (0 < (int)param_2[1]) {
          lVar10 = 0;
          do {
            plVar5 = *(long **)(*param_2 + lVar10 * 8);
            if (plVar5 != (long *)0x0) {
              if (plVar5[1] != 0) {
                plVar1 = plVar5 + 2;
                do {
                  lVar8 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar8 + -1 == 0) {
                  (**(code **)(*plVar5 + 0x18))();
                }
              }
              uVar9 = (ulong)*(uint *)(param_2 + 1);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)uVar9);
        }
      }
      uVar6 = 0;
      *param_2 = lVar4;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return uVar6;
}


