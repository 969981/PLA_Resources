/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d593f0; name: FUN_00d593f0
 */


void FUN_00d593f0(long *param_1,long param_2,uint param_3,long *param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *local_38;
  
  uVar2 = 0;
  if (param_3 < 7) {
    uVar2 = param_3;
  }
  FUN_00d58a08(&local_38,param_2,param_5);
  param_2 = param_2 + (ulong)uVar2 * 8;
  lVar8 = local_38[0x16];
  if (lVar8 != 0) {
    plVar7 = *(long **)(lVar8 + 0x270);
    if (plVar7 != *(long **)(lVar8 + 0x278)) {
      iVar6 = 0;
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (*plVar7 != 0) {
          plVar3 = (long *)(*plVar7 + 0x58);
        }
        if (*plVar3 == *param_4) goto LAB_00d59488;
        plVar7 = plVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar7);
    }
  }
  iVar6 = 0;
LAB_00d59488:
  FUN_02c2e33c(local_38,iVar6,*(undefined8 *)(param_2 + 0x5b8));
  if (local_38 != (long *)0x0) {
    plVar7 = local_38 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  lVar8 = *(long *)(param_2 + 0x5b8);
  *param_1 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  return;
}


