/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d9de4; name: FUN_013d9de4
 */


void FUN_013d9de4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar9 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar9 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar9 == 0x42f9724254135d22) goto LAB_013d9e64;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_013d9e64:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x28));
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar8 = *(long *)(lVar7 + 0x498);
  iVar5 = 1;
  *(undefined4 *)(lVar7 + 0x490) = 1;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar6[0xb],*(undefined2 *)(lVar8 + 0x78));
    *(undefined2 *)(lVar8 + 0x7a) = uVar3;
    iVar5 = *(int *)(lVar7 + 0x490);
    if (0xc < iVar5) goto LAB_013d9f04;
  }
  lVar8 = (long)iVar5;
  *(undefined8 *)(lVar7 + 0x4a0) = (&DAT_043eb278)[lVar8 * 6];
  *(undefined8 *)(lVar7 + 0x4a8) = (&DAT_043eb280)[lVar8 * 6];
  *(undefined8 *)(lVar7 + 0x4b0) = (&DAT_043eb288)[lVar8 * 6];
  plVar9 = (long *)(&DAT_043eb290)[lVar8 * 6];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar4 = *(long **)(lVar7 + 0x4b8);
  *(long **)(lVar7 + 0x4b8) = plVar9;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
LAB_013d9f04:
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013d9f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
  }
  return;
}


