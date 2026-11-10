/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260ebb4; name: FUN_0260ebb4
 */


void FUN_0260ebb4(long param_1)

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
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  long *local_58;
  
  if ((*(char *)(param_1 + 0x37c) != '\0') &&
     ((((((*(long *)(param_1 + 0x348) == 0 || (*(int *)(*(long *)(param_1 + 0x348) + 0xc) == 0)) ||
         (*(long *)(param_1 + 0x318) == 0)) ||
        ((*(int *)(*(long *)(param_1 + 0x318) + 0xc) == 0 || (*(long *)(param_1 + 0x328) == 0)))) ||
       ((*(int *)(*(long *)(param_1 + 0x328) + 0xc) == 0 ||
        ((*(long *)(param_1 + 0x338) == 0 || (*(int *)(*(long *)(param_1 + 0x338) + 0xc) == 0))))))
      || ((*(long *)(param_1 + 0x358) == 0 ||
          (((*(int *)(*(long *)(param_1 + 0x358) + 0xc) == 0 || (*(long *)(param_1 + 0x368) == 0))
           || (*(int *)(*(long *)(param_1 + 0x368) + 0xc) == 0)))))))) {
    FUN_0260ca3c(param_1);
  }
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar10 = *(long *)(param_1 + 0x318);
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(lVar10 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar10 + 0xc);
  iVar11 = *(int *)(lVar10 + 0xc);
  do {
    plVar12 = *(long **)(lVar10 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar7 = FUN_00ad3750();
      *(undefined8 *)puVar5 = uVar7;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar12 == (long *)0x0) {
        return;
      }
      if (plVar12 == (long *)puVar5) break;
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
        if (lVar10 == 0) {
          return;
        }
        plVar12 = (long *)(lVar10 + -0x50);
        FUN_017d3788(auStack_a0,&DAT_03a7da40);
        lVar9 = *(long *)(param_1 + 0x3d0);
        fVar14 = 1.0;
        if ((lVar9 == 0) || (*(int *)(lVar9 + 0xc) == 0)) goto LAB_0260ed24;
        piVar1 = (int *)(lVar9 + 0xc);
        iVar11 = *(int *)(lVar9 + 0xc);
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
LAB_0260ee08:
  plVar13 = *(long **)(lVar9 + 0x10);
  lVar8 = FUN_00ab5048();
  while( true ) {
    if (plVar13 == (long *)0x0) goto LAB_0260ed24;
    if (plVar13 == (long *)lVar8) break;
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
      if (lVar9 != 0) {
        plVar13 = (long *)(lVar9 + -0x50);
        fVar14 = (float)FUN_00d8326c(plVar13,5);
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
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      goto LAB_0260ed24;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar11 = iVar6;
  if (iVar6 == 0) {
LAB_0260ed24:
    FUN_02c90b20(plVar12,auStack_a0);
    FUN_02c91f74(plVar12,auStack_70);
    FUN_02c90b50(plVar12,0);
    lVar9 = FUN_02c90d14(plVar12);
    if (lVar9 != 0) {
      *(ulong *)(lVar9 + 0x128) = (ulong)(uint)fVar14;
      *(ulong *)(lVar9 + 0x120) = CONCAT44(fVar14,fVar14);
      *(ulong *)(lVar9 + 0x148) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0xf8) >> 0x20) * 0.0,
                    fVar14 * (float)*(undefined8 *)(lVar9 + 0xf8));
      *(ulong *)(lVar9 + 0x140) =
           CONCAT44(fVar14 * (float)((ulong)*(undefined8 *)(lVar9 + 0xf0) >> 0x20),
                    fVar14 * (float)*(undefined8 *)(lVar9 + 0xf0));
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    FUN_00984b00(auStack_a0);
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
    return;
  }
  goto LAB_0260ee08;
}


