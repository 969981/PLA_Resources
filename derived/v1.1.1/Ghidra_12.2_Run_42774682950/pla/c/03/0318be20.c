/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318be20; name: FUN_0318be20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318be20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = &PTR_LAB_042fdfe8;
  param_1[1] = 0xffffffff;
  uVar7 = DAT_0388a148;
  uVar6 = DAT_0388a140;
  uVar5 = _UNK_03889a88;
  uVar4 = _DAT_03889a80;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar4 = _DAT_03888d10;
  param_1[0x11] = _UNK_03888d18;
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  lVar11 = tpidr_el0;
  lVar10 = *(long *)(lVar11 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar10;
  }
  plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0);
  FUN_0318cb88();
  *(undefined1 *)(param_1 + 6) = 1;
  plVar9 = (long *)param_1[4];
  if (plVar9 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar9 = (long *)param_1[4];
    }
    param_1[4] = plVar8;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar1 = plVar9 + 2;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar9 = plVar8 + 2;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0318bf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
  }
  return;
}


