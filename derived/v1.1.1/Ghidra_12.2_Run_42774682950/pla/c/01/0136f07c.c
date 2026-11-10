/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136f07c; name: FUN_0136f07c
 */


bool FUN_0136f07c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  char *local_a0;
  long *local_98;
  char acStack_90 [64];
  
  snprintf(acStack_90,0x40,"anime_L_mngm_score_info_00_%02d_close",*(int *)(param_1 + 0x5b4));
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_a0 = acStack_90;
  FUN_009313e8(&local_98,&local_a0);
  plVar1 = local_98;
  if (local_98 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
LAB_0136f260:
    plVar2 = (long *)plVar10[0x34];
    lVar8 = plVar10[0x35];
    plVar12 = plVar2 + lVar8 * 6;
  }
  else {
    lVar11 = local_98[0xb];
    if (local_98 == (long *)0x0) goto LAB_0136f260;
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar2 = (long *)plVar10[0x34];
    lVar8 = plVar10[0x35];
    plVar12 = plVar2 + lVar8 * 6;
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (lVar8 != 0) {
    lVar8 = *plVar2;
    while ((lVar8 != lVar11 && (plVar9 = plVar2 + 6, plVar2 = plVar12, plVar12 != plVar9))) {
      lVar8 = *plVar9;
      plVar2 = plVar9;
    }
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar2 != (long *)(plVar10[0x34] + plVar10[0x35] * 0x30)) {
    lVar11 = plVar2[4];
    uVar3 = *(uint *)(plVar2 + 4 + 1);
    if ((uVar3 < *(uint *)(lVar11 + 0x278)) &&
       (lVar11 = *(long *)(lVar11 + 600), *(char *)(lVar11 + (ulong)uVar3 * 0x48 + 8) != '\0')) {
      bVar7 = *(char *)(lVar11 + (ulong)uVar3 * 0x48 + 0xb) != '\0';
      goto joined_r0x0136f28c;
    }
  }
  bVar7 = false;
joined_r0x0136f28c:
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return bVar7;
}


