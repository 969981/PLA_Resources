/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b76b84; name: FUN_01b76b84
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b76b84(long param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  
  puVar7 = PTR_DAT_04379e80;
  puVar6 = PTR_DAT_04379e78;
  lVar14 = *(long *)(param_1 + 0x350);
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar16 = *(int *)(lVar14 + 0xc);
  do {
    plVar17 = *(long **)(lVar14 + 0x10);
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      uVar11 = FUN_0095a420();
      *(undefined8 *)puVar7 = uVar11;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) {
        return;
      }
      if (plVar17 == (long *)puVar7) break;
      plVar17 = (long *)*plVar17;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar16) {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        plVar17 = (long *)(lVar14 + -0x50);
        if (lVar14 == 0) {
          return;
        }
        lVar15 = *(long *)(param_1 + 0x350);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0xc) == 0)) goto LAB_01b76c5c;
        piVar1 = (int *)(lVar15 + 0xc);
        iVar16 = *(int *)(lVar15 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
LAB_01b76e08:
  puVar18 = *(undefined8 **)(lVar15 + 0x10);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
    uVar11 = FUN_0095a420();
    *(undefined8 *)puVar7 = uVar11;
    __cxa_guard_release(puVar6);
  }
  if (puVar18 == (undefined8 *)0x0) goto LAB_01b76c5c;
  while (puVar18 != (undefined8 *)puVar7) {
    puVar18 = (undefined8 *)*puVar18;
    bVar8 = false;
    if (puVar18 == (undefined8 *)0x0) goto LAB_01b76c60;
  }
  iVar9 = *piVar1;
  if (iVar9 != iVar16) {
    ClearExclusiveLocal();
LAB_01b76dfc:
    bVar8 = false;
    iVar16 = iVar9;
    if (iVar9 == 0) goto LAB_01b76c60;
    goto LAB_01b76e08;
  }
  cVar5 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar8) {
    *piVar1 = iVar16 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 != '\0') goto LAB_01b76dfc;
  lVar15 = *(long *)(lVar15 + 0x18);
  if (lVar15 != 0) {
    bVar8 = *(int *)(lVar15 + 0x1c0) == 0;
    lVar13 = *(long *)(lVar15 + 8);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*(long *)(lVar15 + -0x50) + 0x20))();
    }
    goto LAB_01b76c60;
  }
LAB_01b76c5c:
  bVar8 = false;
LAB_01b76c60:
  uVar3 = *(uint *)(lVar14 + 0x1c4);
  uVar2 = uVar3 & 0xffffdfff;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar3 | 0x2000;
  }
  bVar4 = (uVar3 != 0) != (uVar2 != 0);
  if ((((uVar2 == uVar3) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
      (iVar16 = *(int *)(lVar14 + 0x1cc), iVar16 == 0)) || (*(int *)(lVar14 + 0x1d4) == 0)) {
    if (!bVar4) goto LAB_01b76ca4;
LAB_01b76d40:
    FUN_01bdbf3c(plVar17,uVar2);
    *(uint *)(lVar14 + 0x1c4) = uVar2;
  }
  else {
    if ((param_2 & 1) != 0) {
      if (!bVar4 && (iVar16 == 1 & param_2) == 0) goto LAB_01b76ca4;
      goto LAB_01b76d40;
    }
    if (bVar4 || iVar16 == 2) goto LAB_01b76d40;
LAB_01b76ca4:
    *(uint *)(lVar14 + 0x1c4) = uVar2;
    if ((*(uint *)(lVar14 + 0x1c0) != uVar2) && (*(int *)(lVar14 + 0x1cc) == 0)) {
      *(uint *)(lVar14 + 0x1c0) = uVar2;
    }
  }
  if (((bVar8 ^ param_2) & 1) != 0) {
    plVar10 = *(long **)(param_1 + 0x640);
    if ((param_2 & 1) == 0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,param_1);
      plVar10 = *(long **)(param_1 + 0x660);
      if (plVar10 == (long *)0x0) goto LAB_01b76cb8;
      pcVar12 = *(code **)(*plVar10 + 0x30);
    }
    else {
      (**(code **)(*plVar10 + 0x28))(plVar10,param_1);
      plVar10 = *(long **)(param_1 + 0x660);
      if (plVar10 == (long *)0x0) goto LAB_01b76cb8;
      pcVar12 = *(code **)(*plVar10 + 0x28);
    }
    (*pcVar12)(plVar10,param_1);
  }
LAB_01b76cb8:
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar16 = *piVar1;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar8) {
      *piVar1 = iVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar16 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01b76cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x20))(plVar17);
    return;
  }
  return;
}


