/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8c3e8; name: FUN_02b8c3e8
 */


void FUN_02b8c3e8(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long local_60;
  undefined4 local_58;
  
  puVar6 = PTR_DAT_04388100;
  lVar13 = *(long *)PTR_DAT_04388100;
  plVar11 = *(long **)(lVar13 + 8);
  lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x28,8);
  if (lVar8 == 0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar12 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_02b61e88(lVar8);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    uVar12 = 8;
    uVar14 = 0x28;
  }
  lVar9 = *(long *)(lVar13 + 0x10);
  *(long *)(lVar13 + 0x10) = lVar8;
  if (lVar9 != 0) {
    FUN_02b8cb8c(lVar13 + 0x18);
    lVar8 = *(long *)(lVar13 + 0x10);
  }
  *(long **)(lVar13 + 0x18) = plVar11;
  *(undefined8 *)(lVar13 + 0x20) = uVar14;
  *(undefined8 *)(lVar13 + 0x28) = uVar12;
  *(long *)(param_1 + 0x6098) = lVar8;
  if (*param_2 != 0) {
    local_60 = param_1 + 0x10;
    local_58 = 0x22;
    plVar11 = *(long **)(*(long *)puVar6 + 0x10);
    lVar8 = FUN_02b8cf9c(*(undefined8 *)(*(long *)puVar6 + 8),param_1 + 8,param_2,&local_60);
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *plVar11 = lVar8;
  }
  if (param_2[1] != 0) {
    local_60 = param_1 + 0x10;
    local_58 = 0xa1;
    lVar8 = *(long *)(*(long *)puVar6 + 0x10);
    lVar13 = FUN_02b8cf9c(*(undefined8 *)(*(long *)puVar6 + 8),param_1 + 8,param_2 + 1,&local_60);
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar11 = *(long **)(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 0x10) = 0;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *(long *)(lVar8 + 0x10) = lVar13;
  }
  if (param_2[2] != 0) {
    local_60 = param_1 + 0x10;
    local_58 = 0x12;
    lVar8 = *(long *)(*(long *)puVar6 + 0x10);
    lVar13 = FUN_02b8cf9c(*(undefined8 *)(*(long *)puVar6 + 8),param_1 + 8,param_2 + 2,&local_60);
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar11 = *(long **)(lVar8 + 8);
    *(undefined8 *)(lVar8 + 8) = 0;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    *(long *)(lVar8 + 8) = lVar13;
  }
  return;
}


