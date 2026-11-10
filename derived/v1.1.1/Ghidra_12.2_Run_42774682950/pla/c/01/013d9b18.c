/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d9b18; name: FUN_013d9b18
 */


void FUN_013d9b18(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar8 != 0) {
    plVar7 = *(long **)(lVar8 + 0x270);
    if (plVar7 != *(long **)(lVar8 + 0x278)) {
      iVar5 = 0;
      do {
        plVar10 = (long *)PTR_DAT_04379c88;
        if (*plVar7 != 0) {
          plVar10 = (long *)(*plVar7 + 0x58);
        }
        if (*plVar10 == 0x42f5e94254103e80) goto LAB_013d9b9c;
        plVar7 = plVar7 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar7);
    }
  }
  iVar5 = 0;
LAB_013d9b9c:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x28));
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar8 != 0) {
    plVar7 = *(long **)(lVar8 + 0x270);
    if (plVar7 != *(long **)(lVar8 + 0x278)) {
      iVar5 = 0;
      do {
        plVar10 = (long *)PTR_DAT_04379c88;
        if (*plVar7 != 0) {
          plVar10 = (long *)(*plVar7 + 0x58);
        }
        if (*plVar10 == 0x42f5ef42541048b2) goto LAB_013d9c0c;
        plVar7 = plVar7 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar7);
    }
  }
  iVar5 = 0;
LAB_013d9c0c:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x30));
  lVar8 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = *(long *)(lVar8 + 0x498);
  iVar5 = 1;
  *(undefined4 *)(lVar8 + 0x490) = 1;
  if (*(char *)(lVar9 + 0x7c) == '\0') {
LAB_013d9c6c:
    lVar9 = (long)iVar5;
    *(undefined8 *)(lVar8 + 0x4a0) = (&DAT_043eb278)[lVar9 * 6];
    *(undefined8 *)(lVar8 + 0x4a8) = (&DAT_043eb280)[lVar9 * 6];
    *(undefined8 *)(lVar8 + 0x4b0) = (&DAT_043eb288)[lVar9 * 6];
    plVar10 = (long *)(&DAT_043eb290)[lVar9 * 6];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    plVar4 = *(long **)(lVar8 + 0x4b8);
    *(long **)(lVar8 + 0x4b8) = plVar10;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  else {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar9 + 0x58),plVar7[0xb],*(undefined2 *)(lVar9 + 0x78));
    *(undefined2 *)(lVar9 + 0x7a) = uVar3;
    iVar5 = *(int *)(lVar8 + 0x490);
    if (iVar5 < 0xd) goto LAB_013d9c6c;
  }
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = *(long *)(lVar8 + 0x4c8);
  *(undefined4 *)(lVar8 + 0x4c0) = 0;
  uVar6 = (uint)*(byte *)(lVar9 + 0x7c);
  if (*(byte *)(lVar9 + 0x7c) != 0) {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar9 + 0x58),plVar7[0xb],*(undefined2 *)(lVar9 + 0x78));
    *(undefined2 *)(lVar9 + 0x7a) = uVar3;
    uVar6 = *(uint *)(lVar8 + 0x4c0);
    if (0xc < (int)uVar6) goto LAB_013d9d58;
  }
  lVar9 = (long)(int)uVar6;
  *(undefined8 *)(lVar8 + 0x4d0) = (&DAT_043eb278)[lVar9 * 6];
  *(undefined8 *)(lVar8 + 0x4d8) = (&DAT_043eb280)[lVar9 * 6];
  *(undefined8 *)(lVar8 + 0x4e0) = (&DAT_043eb288)[lVar9 * 6];
  plVar10 = (long *)(&DAT_043eb290)[lVar9 * 6];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar4 = *(long **)(lVar8 + 0x4e8);
  *(long **)(lVar8 + 0x4e8) = plVar10;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
LAB_013d9d58:
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013d9db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}


