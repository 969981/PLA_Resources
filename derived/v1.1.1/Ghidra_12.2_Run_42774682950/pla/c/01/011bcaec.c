/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bcaec; name: FUN_011bcaec
 */


void FUN_011bcaec(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  
  if ((long *)param_1[0x1a] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1[0x1a] + 0x18))();
  (**(code **)(*param_1 + 0x10))(&local_48,param_1);
  local_68 = 0;
  uStack_60 = 0;
  FUN_009636f0(&local_68,&local_48);
  puVar5 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_58 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_58);
    }
  }
  (**(code **)(*(long *)param_1[0x6d] + 0x10))(&local_48);
  local_78 = 0;
  uStack_70 = 0;
  FUN_01160f90(&local_78,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_58 = *local_48;
      FUN_02a44274(lVar8 + 0xd8,&local_58);
    }
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0x98,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_011622a0(&local_48,&local_68);
  local_58 = 0;
  uStack_50 = 0;
  FUN_011625a0(&local_58,&local_78);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar8);
}


