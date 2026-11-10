/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0323cc90; name: FUN_0323cc90
 */


void FUN_0323cc90(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = (long)&PTR_LAB_0430b170;
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[4] != 0) {
    plVar9 = (long *)param_1[3];
    plVar10 = plVar9 + (long)(int)param_1[4] * 3;
    do {
      plVar11 = plVar10 + -3;
      iVar6 = (int)plVar10[-2];
      if (0 < iVar6) {
        lVar8 = 0;
        do {
          if ((0.0 <= *(float *)(*plVar11 + lVar8 * 0x18 + 8)) &&
             (plVar5 = *(long **)(*plVar11 + lVar8 * 0x18), plVar5 != (long *)0x0)) {
            if (plVar5[1] != 0) {
              plVar1 = plVar5 + 2;
              do {
                lVar7 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 + -1 == 0) {
                (**(code **)(*plVar5 + 0x18))();
              }
            }
            iVar6 = (int)plVar10[-2];
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar6);
      }
      *(undefined4 *)(plVar10 + -2) = 0;
      if ((-1 < (int)*(uint *)((long)plVar10 + -0xc)) && (*plVar11 != 0)) {
        (**(code **)(*(long *)puVar4 + 0x18))
                  (puVar4,*plVar11,((ulong)*(uint *)((long)plVar10 + -0xc) & 0x3fffffff) * 0x18);
      }
      plVar10[-3] = 0;
      *(undefined4 *)((long)plVar10 + -0xc) = 0x80000000;
      plVar10 = plVar11;
    } while (plVar11 != plVar9);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 0x18);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


