/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330a294; name: FUN_0330a294
 */


void FUN_0330a294(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_LAB_0434e538;
  if (*(int *)(param_1 + 2) != 0) {
    lVar8 = param_1[1];
    lVar7 = lVar8 + (long)*(int *)(param_1 + 2) * 0x18;
LAB_0330a324:
    do {
      puVar1 = (ulong *)(lVar7 + -8);
      lVar7 = lVar7 + -0x18;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar5 = plVar6 + 1;
        do {
          lVar4 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar6 + 8))();
          if (lVar7 == lVar8) break;
          goto LAB_0330a324;
        }
      }
    } while (lVar7 != lVar8);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[1],
               ((ulong)*(uint *)((long)param_1 + 0x14) & 0x3fffffff) * 0x18);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0330a314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,0x18);
  return;
}


