/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02610190; name: FUN_02610190
 */


void FUN_02610190(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 0x368);
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(lVar9 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar9 + 0xc);
  iVar11 = *(int *)(lVar9 + 0xc);
  do {
    plVar13 = *(long **)(lVar9 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar7 = FUN_00ad3750();
      *(undefined8 *)puVar5 = uVar7;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar13 == (long *)0x0) {
        return;
      }
      if (plVar13 == (long *)puVar5) break;
      plVar13 = (long *)*plVar13;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 == 0) {
          return;
        }
        plVar13 = (long *)(lVar9 + -0x50);
        lVar10 = *(long *)(param_1 + 0x3d0);
        fVar14 = 1.0;
        if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) goto LAB_02610264;
        piVar1 = (int *)(lVar10 + 0xc);
        iVar11 = *(int *)(lVar10 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar6;
    if (iVar6 == 0) {
      return;
    }
  } while( true );
LAB_02610328:
  plVar12 = *(long **)(lVar10 + 0x10);
  lVar8 = FUN_00ab5048();
  while( true ) {
    if (plVar12 == (long *)0x0) goto LAB_02610264;
    if (plVar12 == (long *)lVar8) break;
    plVar12 = (long *)*plVar12;
  }
  iVar6 = *piVar1;
  if (iVar6 == iVar11) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar10 = *(long *)(lVar10 + 0x18);
      if (lVar10 != 0) {
        plVar12 = (long *)(lVar10 + -0x50);
        fVar14 = (float)FUN_00d8326c(plVar12,0xd);
        lVar10 = *(long *)(lVar10 + 8);
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
      }
      goto LAB_02610264;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar11 = iVar6;
  if (iVar6 == 0) {
LAB_02610264:
    FUN_02c90b50(plVar13,0);
    lVar10 = FUN_02c90d14(plVar13);
    if (lVar10 != 0) {
      *(ulong *)(lVar10 + 0x128) = (ulong)(uint)fVar14;
      *(ulong *)(lVar10 + 0x120) = CONCAT44(fVar14,fVar14);
      *(ulong *)(lVar10 + 0x148) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0xf8) >> 0x20) * 0.0,
                    fVar14 * (float)*(undefined8 *)(lVar10 + 0xf8));
      *(ulong *)(lVar10 + 0x140) =
           CONCAT44(fVar14 * (float)((ulong)*(undefined8 *)(lVar10 + 0xf0) >> 0x20),
                    fVar14 * (float)*(undefined8 *)(lVar10 + 0xf0));
    }
    lVar9 = *(long *)(lVar9 + 8);
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x026102e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x20))(plVar13);
      return;
    }
    return;
  }
  goto LAB_02610328;
}


