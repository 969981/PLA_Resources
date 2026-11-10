/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119806c; name: FUN_0119806c
 */


undefined8 FUN_0119806c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined1 auStack_f0 [24];
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long lStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  
  uVar4 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar14 = *(long **)(lVar13 + 0xd0);
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)plVar14[0xb];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar13 = (**(code **)(*plVar15 + 0x50))(plVar15,uVar4);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  plVar15 = plVar14 + 10;
  do {
    iVar8 = (int)*plVar15 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *(int *)plVar15 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),0);
  iVar9 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),1);
  uVar16 = 2;
  if (iVar8 == 0) {
    uVar16 = 1;
  }
  uVar12 = (uint)(iVar8 != 0);
  if (iVar9 != 0) {
    uVar12 = uVar16;
  }
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),2);
  if (iVar8 != 0) {
    uVar12 = uVar12 + 1;
  }
  iVar8 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),3);
  if (uVar12 != -(uint)(iVar8 != 0)) {
    iVar8 = 0;
    uVar16 = 0;
    do {
      if ((1 << (ulong)(uVar16 & 0x1f) & (uint)*(ushort *)(param_1 + 0x27e)) == 0) {
        uVar11 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),uVar16);
        uVar12 = FUN_02c618d4(lVar13,uVar11);
        iVar8 = iVar8 + (uVar12 & 1);
      }
      uVar16 = uVar16 + 1;
      iVar9 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),0);
      iVar10 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),1);
      uVar12 = 2;
      if (iVar9 == 0) {
        uVar12 = 1;
      }
      uVar2 = (uint)(iVar9 != 0);
      if (iVar10 != 0) {
        uVar2 = uVar12;
      }
      iVar9 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),2);
      if (iVar9 != 0) {
        uVar2 = uVar2 + 1;
      }
      iVar9 = FUN_02c6b1c0(*(undefined8 *)(lVar13 + 0x98),3);
      if (iVar9 != 0) {
        uVar2 = uVar2 + 1;
      }
    } while (uVar16 < uVar2);
    if (iVar8 != 0) {
      lVar13 = *(long *)(param_1 + 0x1a8);
      local_a8 = FUN_01196054;
      uStack_a0 = 0;
      local_c0 = &LAB_011997fc;
      local_d0 = &LAB_011997dc;
      local_c8 = FUN_011997f8;
      local_b8 = &LAB_01199810;
      lStack_b0 = param_1;
      FUN_00d59260(lVar13,*(undefined4 *)(lVar13 + 0x16ac),*(undefined2 *)(lVar13 + 0x16b2),0);
      uVar3 = 0x129d6b84e4090162;
      if (iVar8 != 1) {
        uVar3 = 0xcf586cca236275d8;
      }
      FUN_0119541c(param_1,uVar3,&local_d0,1,0,1);
      FUN_02a4754c(auStack_f0,&DAT_041f4b48);
      FUN_028354b0(auStack_f0);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      pcVar7 = local_c8;
      if (local_c8 == (code *)0x0) {
        return 0;
      }
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar7)(&lStack_b0);
      return 0;
    }
  }
  FUN_01196054(param_1);
  return 0;
}


