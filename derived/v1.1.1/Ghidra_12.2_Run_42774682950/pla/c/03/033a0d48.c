/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a0d48; name: FUN_033a0d48
 */


void FUN_033a0d48(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong local_28;
  
  FUN_032bcf10(param_2,0x18,&local_28);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_28,&local_28);
    if (lVar6 != 0) {
      iVar8 = (int)(local_28 / 0x18);
      if (0x3ffffffe < iVar8) {
        iVar8 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          puVar2 = (undefined8 *)(*param_2 + lVar10);
          puVar3 = (undefined8 *)(lVar6 + lVar10);
          lVar10 = lVar10 + 0x18;
          *puVar3 = *puVar2;
          puVar3[1] = puVar2[1];
          puVar3[2] = puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          uVar9 = (ulong)(int)param_2[1];
          lVar11 = lVar11 + 1;
        } while (lVar11 < (long)uVar9);
        if (0 < (int)param_2[1]) {
          lVar10 = 0;
          do {
            uVar12 = *(ulong *)(*param_2 + lVar10 * 0x18 + 0x10);
            if ((uVar12 & 1) != 0) {
              plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
              plVar1 = plVar7 + 1;
              do {
                lVar11 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(int *)plVar1 = (int)lVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((plVar7 != (long *)0x0) && ((int)lVar11 == 1)) {
                (**(code **)(*plVar7 + 8))();
              }
              uVar9 = (ulong)*(uint *)(param_2 + 1);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)uVar9);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar8;
    }
  }
  return;
}


