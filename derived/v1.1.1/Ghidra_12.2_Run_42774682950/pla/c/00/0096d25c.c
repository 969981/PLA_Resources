/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096d25c; name: FUN_0096d25c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096d25c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *local_38;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_00931034(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  plVar6 = *(long **)(lVar9 + 0xb0);
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(_DAT_000000e0 + 0x30);
  }
  else {
    plVar10 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar6[0x1c];
    do {
      iVar5 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = *(long **)(lVar9 + 0x30);
    }
    else {
      plVar6 = *(long **)(lVar9 + 0x30);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)plVar6[0x28];
  if (plVar10 == (long *)0x0) {
    if (((_DAT_00000448 == 0) || (lVar9 = *(long *)(_DAT_00000448 + 0x18), lVar9 == 0)) ||
       (uVar7 = FUN_009717a0(lVar9), (uVar7 & 1) == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar9 + -0x50;
    }
    goto LAB_0096d368;
  }
  plVar1 = plVar10 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (plVar10[0x89] == 0) {
LAB_0096d4a0:
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(plVar10[0x89] + 0x18);
    if (lVar9 != 0) {
      uVar7 = FUN_009717a0(lVar9);
      if ((uVar7 & 1) == 0) goto LAB_0096d4a0;
      lVar9 = lVar9 + -0x50;
    }
  }
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_0096d368:
  plVar10 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar10 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (lVar9 != 0) {
    if (((((*(int *)(lVar9 + 0x1e8) - 3U < 6) ||
          ((*(long *)(lVar9 + 0x68) != 0 && (*(long *)(lVar9 + 0x78) != *(long *)(lVar9 + 0x70)))))
         || ((*(long *)(lVar9 + 0xa8) != 0 && (*(long *)(lVar9 + 0xb8) != *(long *)(lVar9 + 0xb0))))
         ) || ((((*(long *)(lVar9 + 0xe8) != 0 &&
                 (*(long *)(lVar9 + 0xf8) != *(long *)(lVar9 + 0xf0))) ||
                ((*(long *)(lVar9 + 0x128) != 0 &&
                 (*(long *)(lVar9 + 0x138) != *(long *)(lVar9 + 0x130))))) ||
               ((*(long *)(lVar9 + 0x168) != 0 &&
                (*(long *)(lVar9 + 0x178) != *(long *)(lVar9 + 0x170))))))) ||
       ((*(long *)(lVar9 + 0x1a8) != 0 && (*(long *)(lVar9 + 0x1b8) != *(long *)(lVar9 + 0x1b0)))))
    {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_011dd6e0(local_38[0xd1],uVar8);
  }
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


