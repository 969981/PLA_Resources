/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c9b6c; name: FUN_031c9b6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c9b6c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_0430ae40;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  FUN_03269eb8(param_1 + 10);
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0x38d1b717;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x3a83126f;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x3f000000;
  param_1[0x18] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  FUN_03269f80(param_1 + 10);
  uVar5 = _UNK_03888d18;
  uVar4 = _DAT_03888d10;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  lVar9 = tpidr_el0;
  lVar8 = *(long *)(lVar9 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar8;
  }
  plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x38,0);
  *puVar7 = &PTR_LAB_0430ae88;
  puVar7[1] = 0xffffffff;
  puVar7[5] = &DAT_03aad864;
  puVar7[6] = 0;
  puVar7[4] = 0x8000000000000000;
  puVar7[2] = 1;
  puVar7[3] = 0;
  plVar6 = (long *)param_1[0x1e];
  param_1[0x1e] = puVar7;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031c9cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  return;
}


