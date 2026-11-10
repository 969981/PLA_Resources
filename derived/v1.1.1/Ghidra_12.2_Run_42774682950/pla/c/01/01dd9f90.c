/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dd9f90; name: FUN_01dd9f90
 */


long * FUN_01dd9f90(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  long *local_38;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x370,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = (long *)*param_3;
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01dda2bc;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02c907c8(plVar10,&local_38);
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  plVar10[1] = (long)param_2;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0x370;
  plVar10[4] = 0x10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01dda2bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar3 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 9;
  }
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
  local_50 = (long *)0x0;
  uStack_48 = 0;
  FUN_009ad580(&local_50,param_1 + 0x318);
  (**(code **)(*plVar3 + 0xc0))(plVar3,&local_50);
  plVar7 = local_50;
  if (local_50 != (long *)0x0) {
    plVar2 = local_50 + 1;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = (long *)*plVar7;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  (**(code **)(*plVar3 + 200))(plVar3,*(undefined1 *)(param_1 + 0x33b));
  (**(code **)(*plVar3 + 0x90))(plVar3);
  local_58 = plVar10;
  FUN_02a4dad4(param_1 + 0xf0,&local_58);
  if (local_58 != (long *)0x0) {
    lVar9 = local_58[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return plVar10;
}


