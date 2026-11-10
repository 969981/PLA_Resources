/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315acb4; name: FUN_0315acb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0315acb4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = &PTR_LAB_0430b098;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar10 = tpidr_el0;
  lVar9 = *(long *)(lVar10 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar9;
  }
  plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0xd0,0);
  plVar7[1] = 0xffffffff;
  plVar11 = plVar7 + 2;
  *plVar11 = 1;
  *plVar7 = (long)&PTR_LAB_0430b0e0;
  *(undefined8 *)((long)plVar7 + 0x5c) = 0xffffffffffffffff;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0x19] = -0x8000000000000000;
  plVar7[0xf] = -0x8000000000000000;
  plVar7[0x10] = 0;
  plVar7[0x11] = -0x8000000000000000;
  plVar7[0x12] = 0;
  plVar7[0x13] = -0x8000000000000000;
  plVar7[0x14] = 0;
  plVar7[0x15] = -0x8000000000000000;
  plVar7[0x16] = 0;
  plVar7[0x17] = -0x8000000000000000;
  plVar7[0x18] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  plVar8 = (long *)param_1[4];
  if (plVar8 != plVar7) {
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar8 = (long *)param_1[4];
    }
    param_1[4] = plVar7;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar1 = plVar8 + 2;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    do {
      lVar10 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  uVar6 = DAT_0388a148;
  uVar5 = DAT_0388a140;
  uVar4 = _DAT_03889a80;
  param_1[9] = _UNK_03889a88;
  param_1[8] = uVar4;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar4 = _DAT_03888d10;
  param_1[0xd] = _UNK_03888d18;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  return;
}


