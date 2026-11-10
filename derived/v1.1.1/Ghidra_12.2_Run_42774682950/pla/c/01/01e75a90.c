/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e75a90; name: FUN_01e75a90
 */


void FUN_01e75a90(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  void *__s;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  long *plStack_250;
  undefined1 *local_248;
  undefined8 uStack_240;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  undefined8 uStack_1c0;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  
  puVar4 = PTR_DAT_0437a780;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar6 = PTR_DAT_0437a790;
  puVar5 = PTR_DAT_0437a788;
  lVar10 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar10;
  plVar11 = *(long **)(lVar10 + 0x78);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_1f0 = (undefined1 *)0xea1cb362d2b22366;
  local_1e8 = (code *)0x3890822;
  local_1e0 = (undefined1 *)0x23;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,plVar11 + 0x2b,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_1f0 = (undefined1 *)0xde84b68592edde2c;
  local_1e8 = (code *)0x39bf940;
  local_1e0 = (undefined1 *)0x2c;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,plVar11 + 0x31,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_1f0 = (undefined1 *)0x53f617c21eb17991;
  local_1e8 = (code *)0x399c131;
  local_1e0 = (undefined1 *)0x27;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,plVar11 + 0x91,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_1f0 = (undefined1 *)0x1b684bfac0d5d7ee;
  local_1e8 = (code *)0x38cd84f;
  local_1e0 = (undefined1 *)0x22;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,plVar11 + 0x97,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_1f0 = (undefined1 *)0x9dd0ac2a2af8d00a;
  local_1e8 = (code *)0x3946123;
  local_1e0 = (undefined1 *)0x24;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,plVar11 + 0x9d,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  lVar10 = plVar11[0xe];
  puVar12 = *(uint **)(*(long *)(lVar10 + 0x50) + 0x250);
  piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  if (*(int *)((long)puVar12 + (ulong)*puVar12) != 0) {
    plVar11 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x268);
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
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    __s = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x638,8);
    if (__s == (void *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
      memset((void *)0x0,0,0x638);
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(0);
    }
    memset(__s,0,0x638);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(__s);
  }
  local_1f0 = (undefined1 *)0xffd9498dd73cfd55;
  local_1e8 = (code *)0x38a6868;
  local_1e0 = (undefined1 *)0x2c;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,lVar10 + 0x78,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  lVar10 = plVar11[0xe];
  local_1f0 = (undefined1 *)0x185d747f010d6007;
  local_1e8 = (code *)0x38d61c6;
  local_1e0 = (undefined1 *)0x36;
  FUN_00da317c(&local_f0,&local_1f0);
  FUN_01e77d3c(param_1,lVar10 + 0xa8,&local_f0,1);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  local_140 = 0;
  local_148 = &LAB_01e7839c;
  local_160 = &LAB_01e78ee0;
  local_c8 = &LAB_01e7839c;
  uStack_c0 = 0;
  local_f0 = (long *)&LAB_01e78eb0;
  local_e8 = FUN_01e78edc;
  local_158 = &LAB_01e78ef4;
  local_e0 = &LAB_01e78ee0;
  puStack_d8 = &LAB_01e78ef4;
  local_170 = &LAB_01e78eb0;
  local_168 = FUN_01e78edc;
  local_150 = param_1;
  local_d0 = param_1;
  FUN_01e62cc4(plVar11,&local_170);
  pcVar7 = local_168;
  if (local_168 != (code *)0x0) {
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    (*pcVar7)(&local_150);
  }
  local_270 = &LAB_01e78f08;
  local_1c8 = &LAB_01e783a4;
  uStack_1c0 = 0;
  local_1f0 = &LAB_01e78f08;
  local_1e8 = FUN_01e78f34;
  local_1e0 = &LAB_01e78f38;
  puStack_1d8 = &LAB_01e78f4c;
  local_248 = &LAB_01e783a4;
  uStack_240 = 0;
  local_268 = FUN_01e78f34;
  local_260 = &LAB_01e78f38;
  local_258 = &LAB_01e78f4c;
  plStack_250 = param_1;
  local_1d0 = param_1;
  FUN_01e6335c(plVar11,&local_270);
  pcVar7 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar7)(&plStack_250);
  }
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x268);
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  FUN_00b5421c(*(undefined8 *)(lVar10 + 0xa0),uVar9,param_1 + 0x1c);
  pcVar7 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar7)(&local_1d0);
  }
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar7)(&local_d0);
  }
  lVar10 = plVar11[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
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
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))();
  }
  return;
}


