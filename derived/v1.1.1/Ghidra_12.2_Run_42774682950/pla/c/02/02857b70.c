/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02857b70; name: FUN_02857b70
 */


void FUN_02857b70(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar6 = param_1 + 0x458;
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),lVar6);
  if ((param_2 & 1) == 0) {
    FUN_0283b748(0,*(undefined8 *)(param_1 + 8),lVar6);
    return;
  }
  FUN_0283b748(0x3f800000,*(undefined8 *)(param_1 + 8),lVar6);
  lVar6 = *(long *)(param_1 + 0x20);
  if ((param_3 & 1) == 0) {
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar10 == (long *)0x0) {
      lVar9 = *(long *)(lVar6 + 0xb0);
      if (lVar9 != 0) {
        plVar10 = *(long **)(lVar9 + 0x270);
        if (plVar10 != *(long **)(lVar9 + 0x278)) {
          iVar7 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar2 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar2 == *(long *)(param_1 + 0x108)) goto LAB_02857e40;
            plVar10 = plVar10 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar10);
        }
      }
      goto LAB_02857e3c;
    }
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)(lVar6 + 0xb0);
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar9 + 0x270);
      if (plVar8 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar1 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar1 == *(long *)(param_1 + 0x108)) goto LAB_02857ce4;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_02857ce4:
    FUN_02c2e33c(lVar6,iVar7,plVar10);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar10 == (long *)0x0) {
      lVar9 = *(long *)(lVar6 + 0xb0);
      if (lVar9 != 0) {
        plVar10 = *(long **)(lVar9 + 0x270);
        if (plVar10 != *(long **)(lVar9 + 0x278)) {
          iVar7 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar2 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar2 == *(long *)(param_1 + 0x100)) goto LAB_02857e40;
            plVar10 = plVar10 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar9 + 0x278) != plVar10);
        }
      }
LAB_02857e3c:
      iVar7 = 0;
LAB_02857e40:
      FUN_02c2e33c(lVar6,iVar7,0);
      goto LAB_02857d00;
    }
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)(lVar6 + 0xb0);
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar9 + 0x270);
      if (plVar8 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar1 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar1 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar1 == *(long *)(param_1 + 0x100)) goto LAB_02857c50;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_02857c50:
    FUN_02c2e33c(lVar6,iVar7,plVar10);
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_02857d00:
  lVar9 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(lVar9 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar9 + 0x1c0);
  lVar6 = *(long *)(lVar9 + 0x1c8);
  *(undefined4 *)(lVar11 + 0x124) = 0;
  *(undefined2 *)(lVar11 + 0x128) = 0;
  *(undefined4 *)(lVar11 + 300) = 0;
  *(undefined4 *)(lVar11 + 0x134) = 0;
  FUN_02c33414(lVar11,uVar3);
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    **(undefined2 **)(lVar6 + 0x58) = 0;
    *(undefined2 *)(lVar6 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar11,lVar6,uVar3,0,0);
  FUN_0283ce7c(lVar9,param_1 + 0x2d8,*(undefined8 *)(lVar9 + 0x1c8),10);
  return;
}


