/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011845f4; name: FUN_011845f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011845f4(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x148) + 0x1c0);
  if (plVar8 == (long *)0x0) {
    lVar7 = *(long *)(*param_3 + 0xb0);
    if (lVar7 != 0) {
      plVar8 = *(long **)(lVar7 + 0x270);
      if (plVar8 != *(long **)(lVar7 + 0x278)) {
        iVar5 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == *param_4) goto LAB_01184750;
          plVar8 = plVar8 + 1;
          iVar5 = iVar5 + 1;
        } while (*(long **)(lVar7 + 0x278) != plVar8);
      }
    }
    iVar5 = 0;
LAB_01184750:
    FUN_02c2e33c(*param_3,iVar5,0);
    FUN_0283c964(*(undefined8 *)(param_1 + 0x148),param_2,_DAT_00000058,param_5);
    return;
  }
  plVar2 = plVar8 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar7 = *(long *)(*param_3 + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar1 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar1 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar1 == *param_4) goto LAB_01184690;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_01184690:
  FUN_02c2e33c(*param_3,iVar5,plVar8);
  FUN_0283c964(*(undefined8 *)(param_1 + 0x148),param_2,plVar8[0xb],param_5);
  do {
    iVar5 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011846f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  return;
}


