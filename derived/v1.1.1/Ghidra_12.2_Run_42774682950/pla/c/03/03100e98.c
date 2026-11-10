/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03100e98; name: FUN_03100e98
 */


void FUN_03100e98(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_LAB_042b5740;
  puVar5 = PTR_PTR_0434a080;
  if ((int)param_1[4] != 0) {
    plVar9 = (long *)param_1[3];
    lVar4 = tpidr_el0;
    plVar10 = plVar9 + (long)(int)param_1[4] + -1;
    lVar8 = *plVar10;
    while( true ) {
      if (lVar8 != 0) {
        plVar6 = *(long **)(lVar8 + 0xa0);
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar1 = plVar6 + 2;
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
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        *(undefined4 *)(lVar8 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x5c)) && (*(long *)(lVar8 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x18))
                    (puVar5,*(long *)(lVar8 + 0x50),
                     ((ulong)*(uint *)(lVar8 + 0x5c) & 0x3fffffff) * 0x50);
        }
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined4 *)(lVar8 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar8 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x4c)) && (*(long *)(lVar8 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x18))
                    (puVar5,*(long *)(lVar8 + 0x40),
                     ((ulong)*(uint *)(lVar8 + 0x4c) & 0x3fffffff) * 0x30);
        }
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined4 *)(lVar8 + 0x4c) = 0x80000000;
        lVar7 = *(long *)(lVar4 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar7;
        }
        plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0xb0);
      }
      if (plVar10 == plVar9) break;
      plVar10 = plVar10 + -1;
      lVar8 = *plVar10;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,param_1[3],((ulong)*(uint *)((long)param_1 + 0x24) & 0x3fffffff) << 3);
  }
  param_1[3] = 0;
  puVar5 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


