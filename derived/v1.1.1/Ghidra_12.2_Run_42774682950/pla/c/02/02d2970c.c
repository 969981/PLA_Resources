/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d2970c; name: FUN_02d2970c
 */


void FUN_02d2970c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  size_t __n;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 *local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined1 auStack_2fc [276];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined3 local_1e0;
  undefined5 uStack_1dd;
  undefined3 uStack_1d8;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_1d0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  FUN_008802f0(&local_1d0,*(long *)(param_1 + 0x70) + 0x58);
  local_320 = 0;
  uStack_318 = 0;
  FUN_02cd5d0c(&local_320,&local_1d0);
  puVar8 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_310 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_310);
    }
  }
  plVar13 = *(long **)(param_1 + 8);
  plVar11 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x1b0,8);
  puVar6 = PTR_DAT_04379528;
  puVar5 = PTR_DAT_04379520;
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_02d2a04c;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *plVar11 = (long)&PTR_LAB_04298b48;
    plVar11[1] = 0;
    FUN_00811994(plVar11 + 2);
    plVar11[1] = (long)(plVar11 + 2);
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  memset(&local_310,0,0x124);
  FUN_02d23980(&local_98,param_1);
  if ((local_98 == (long *)0x0) || (uVar9 = (**(code **)(*local_98 + 0x50))(local_98), uVar9 < 0x14)
     ) {
LAB_02d298d0:
    local_1c0 = 0;
    local_1d0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    pcVar4 = local_90;
  }
  else {
    memset(&local_1d0,0,0x124);
    (**(code **)(*local_98 + 0x48))(&local_a8,local_98,&local_1d0,uVar9);
    if ((int)local_a8 != 0) goto LAB_02d298d0;
    local_1e8._3_1_ = SUB81(local_1d0,0);
    uStack_1e4 = (undefined4)((ulong)local_1d0 >> 8);
    local_1e0 = (undefined3)((ulong)local_1d0 >> 0x28);
    uStack_1dd = (undefined5)uStack_1c8;
    uStack_1d8 = (undefined3)((ulong)uStack_1c8 >> 0x28);
    pcVar4 = local_90;
  }
  if (pcVar4 != (char *)0x0) {
    piVar1 = (int *)(pcVar4 + 8);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      pcVar4[0x10] = '\0';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_1e8 = (undefined4)*(undefined8 *)pcVar4;
      uStack_1e4 = (undefined4)((ulong)*(undefined8 *)pcVar4 >> 0x20);
      FUN_02a44274(lVar12 + 0xd8,&local_1e8);
    }
  }
  local_310 = local_1d0;
  uStack_308 = uStack_1c8;
  local_300 = local_1c0;
  __n = *(size_t *)(param_1 + 0x210);
  if (__n != 0) {
    memcpy(auStack_2fc,(void *)(param_1 + 0x100),__n);
  }
  (**(code **)(*plVar11 + 0x18))(&local_98,plVar11,&local_310,(int)__n + 0x14);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (long *)0xc0f0e79e6ac2797c;
  local_90 = "UpdateSessionSetting";
  local_88 = 0x14;
  uStack_80 = 0;
  local_1e8 = 1;
  local_1e0 = 0x2000;
  uStack_1dd = 0;
  FUN_02cd6d54(&local_a8,&local_320);
  plVar11 = (long *)FUN_013b2b18();
  lVar12 = *plVar11;
  *(long *)PTR_DAT_0437b480 = lVar12;
  plVar11 = *(long **)(lVar12 + 0x50);
  if (((*puVar5 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (*(ulong *)(lVar12 + 0x80) < 0x10) {
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,0xb0,8);
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_1d0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    FUN_02cd6d54(&local_1d0,&local_a8);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(lVar12);
  }
LAB_02d2a04c:
                    /* WARNING: Subroutine does not return */
  abort();
}


