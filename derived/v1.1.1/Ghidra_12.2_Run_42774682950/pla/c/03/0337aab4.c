/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337aab4; name: FUN_0337aab4
 */


void FUN_0337aab4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x18,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar7 != 0) {
      iVar9 = (int)(local_28 / 0x18);
      if (0x3ffffffe < iVar9) {
        iVar9 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar11 = 0;
        lVar12 = 0;
        do {
          puVar2 = (undefined8 *)(*param_2 + lVar11);
          puVar3 = (undefined8 *)(lVar7 + lVar11);
          uVar4 = puVar2[1];
          *puVar3 = *puVar2;
          puVar3[1] = uVar4;
          uVar10 = puVar2[2];
          puVar3[2] = uVar10;
          if ((uVar10 & 1) != 0) {
            FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
          }
          uVar10 = (ulong)(int)param_2[1];
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0x18;
        } while (lVar12 < (long)uVar10);
        if (0 < (int)param_2[1]) {
          lVar12 = 0;
          do {
            uVar13 = *(ulong *)(*param_2 + lVar12 * 0x18 + 0x10);
            if ((uVar13 & 1) != 0) {
              plVar8 = (long *)(uVar13 & 0xfffffffffffffffe);
              plVar1 = plVar8 + 1;
              do {
                lVar11 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar8 != (long *)0x0) && ((int)lVar11 == 1)) {
                (**(code **)(*plVar8 + 8))();
              }
              uVar10 = (ulong)*(uint *)(param_2 + 1);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uVar10);
        }
      }
      *param_2 = lVar7;
      *(int *)((long)param_2 + 0xc) = iVar9;
    }
  }
  return;
}


