/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01197dc0; name: FUN_01197dc0
 */


undefined8 FUN_01197dc0(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  undefined1 auStack_e0 [24];
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long lStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_38;
  
  uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar12 = *(long **)(lVar11 + 0xd0);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar12[0xb];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar10 = (**(code **)(*plVar13 + 0x50))(plVar13,uVar2);
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  plVar13 = plVar12 + 10;
  do {
    iVar9 = (int)*plVar13 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  iVar9 = *(ushort *)(param_1 + 0x27c) + 1;
  iVar6 = FUN_02c5fb2c(uVar10);
  iVar14 = 0;
  local_38 = 0;
  while( true ) {
    while (iVar7 = FUN_02c61edc(uVar10,iVar9,(long)&local_38 + 4,&local_38,0), iVar7 != 3) {
      if ((iVar7 == 1) || (iVar7 == 0)) {
        uVar8 = FUN_02c61828(uVar10,local_38 & 0xffffffff);
        iVar14 = iVar14 + (~uVar8 & 1);
      }
    }
    if (iVar9 == iVar6) break;
    local_38 = local_38 & 0xffffffff;
    iVar9 = iVar9 + 1;
  }
  if (iVar14 == 0) {
    FUN_0119806c(param_1);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x1a8);
    local_98 = FUN_0119806c;
    uStack_90 = 0;
    local_b0 = &LAB_011997fc;
    local_c0 = &LAB_011997dc;
    local_b8 = FUN_011997f8;
    local_a8 = &LAB_01199810;
    lStack_a0 = param_1;
    FUN_00d59260(lVar11,*(undefined4 *)(lVar11 + 0x16ac),*(undefined2 *)(lVar11 + 0x16b2),0);
    uVar10 = 0x7048124c15e2641e;
    if (iVar14 != 1) {
      uVar10 = 0xcf40f3ca234ec95c;
    }
    FUN_0119541c(param_1,uVar10,&local_c0,1,0,1);
    FUN_02a4754c(auStack_e0,&DAT_041f4b30);
    FUN_028354b0(auStack_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    pcVar5 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar5)(&lStack_a0);
    }
  }
  return 0;
}


