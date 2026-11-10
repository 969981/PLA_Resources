/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02caf9bc; name: FUN_02caf9bc
 */


undefined8 FUN_02caf9bc(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 == 0) {
    return 0xffffffffffffffff;
  }
  if (9 < *(ulong *)(*(long *)(lVar13 + 0x20) + 0x28)) {
    return 0xffffffffffffffff;
  }
  plVar12 = *(long **)(param_1 + 8);
  puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x288,8);
  if (puVar9 == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
    local_78 = 0;
    local_70 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    DAT_04407c6c = DAT_04407c6c + 1;
    uVar11 = (ulong)DAT_04407c6c;
    *puVar9 = &PTR_FUN_04295b80;
    puVar9[1] = uVar11;
    nn::bcat::DeliveryCacheProgress::DeliveryCacheProgress((DeliveryCacheProgress *)(puVar9 + 2));
    *(undefined4 *)(puVar9 + 0x4d) = 1;
    puVar9[0x4e] = 0;
    local_78 = 0x288;
    puVar9[0x4f] = 0;
    puVar9[0x50] = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_70 = 8;
  }
  local_88 = puVar9;
  local_80 = plVar12;
  FUN_02cb1430(*(undefined8 *)(lVar13 + 0x20),&local_88);
  puVar5 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) goto joined_r0x02cafc84;
  FUN_02bcbe58(auStack_68,0);
  (**(code **)*puVar5)(puVar5);
  uVar7 = local_70;
  uVar6 = local_78;
  plVar12 = local_80;
  uVar11 = (**(code **)(*local_80 + 0xc0))(local_80);
  lVar13 = tpidr_el0;
  if ((uVar11 & 1) == 0) {
LAB_02cafb50:
    (**(code **)(*plVar12 + 0x18))(plVar12,puVar5,uVar6,uVar7);
  }
  else {
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02cafb50;
    FUN_02bcc824(plVar12,puVar5,uVar6,uVar7);
  }
  if (*(char *)(lVar13 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar13 + 0x38d488) = 1;
    *(undefined8 *)(lVar13 + 0x38d478) = 0;
    *(undefined8 *)(lVar13 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar8 = *(int *)(lVar13 + 0x38d480) + -1;
  *(int *)(lVar13 + 0x38d480) = iVar8;
  if (iVar8 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar13 + 0x38d484) = 0;
  }
joined_r0x02cafc84:
  if (puVar9 == (undefined8 *)0x0) {
    return 0xffffffffffffffff;
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_008802f0(&local_a0,param_2);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  FUN_008802f0(puVar9 + 0x4e,&local_a0);
  puVar5 = local_a0;
  puVar9[0x50] = local_90;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_88 = (undefined8 *)*puVar5;
      FUN_02a44274(lVar13 + 0xd8,&local_88);
    }
  }
  return puVar9[1];
}


