/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e50c2c; name: FUN_01e50c2c
 */


void FUN_01e50c2c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  
  lVar8 = *param_2;
  plVar9 = (long *)(param_1 + 0x68);
  (**(code **)(*plVar9 + 0x20))(&local_60,plVar9);
  local_88 = 0;
  uStack_80 = 0;
  FUN_01800100(&local_88,&local_60);
  puVar5 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_70 = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_70);
    }
  }
  local_78 = plVar9;
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_60);
  local_98 = 0;
  uStack_90 = 0;
  FUN_018fed88(&local_98,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_70 = *local_60;
      FUN_02a44274(lVar7 + 0xd8,&local_70);
    }
  }
  plVar9 = *(long **)(lVar8 + 8);
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
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,0x250,0x10);
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_019d1ef8(&local_60,&local_88);
  local_70 = 0;
  uStack_68 = 0;
  local_50 = local_78;
  FUN_019fa21c(&local_70,&local_98);
                    /* WARNING: Subroutine does not return */
  FUN_02a4c0f4(lVar8,0);
}


