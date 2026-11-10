/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011963e4; name: FUN_011963e4
 */


undefined8 FUN_011963e4(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_e0 [24];
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1a8) + 0x16ac);
  uVar3 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
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
  uVar12 = (**(code **)(*plVar15 + 0x50))(plVar15,uVar3);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  plVar15 = plVar14 + 10;
  do {
    iVar11 = (int)*plVar15 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar6) {
      *(int *)plVar15 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  uVar9 = FUN_02c5fb2c(uVar12);
  if (uVar9 == *(ushort *)(param_1 + 0x27c)) {
    FUN_01196054(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x280) == '\0') {
      bVar8 = FUN_011a9a80(*(undefined8 *)(param_1 + 0x1b0),uVar3,0);
      bVar8 = bVar8 & 1;
    }
    else {
      bVar8 = 0;
    }
    *(byte *)(param_1 + 0x280) = bVar8;
    local_98 = &LAB_01197ca8;
    uStack_90 = 0;
    local_c0 = &LAB_011997dc;
    local_b8 = FUN_011997f8;
    local_b0 = &LAB_011997fc;
    puStack_a8 = &LAB_01199810;
    local_a0 = param_1;
    FUN_00d59260(*(undefined8 *)(param_1 + 0x1a8),uVar2,uVar3,0);
    FUN_0119541c(param_1,0xcf40f9ca234ed38e,&local_c0,1,0,1);
    FUN_02a4754c(auStack_e0,&DAT_041f4b00);
    FUN_028354b0(auStack_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    uVar4 = *(ushort *)(param_1 + 0x27c);
    uVar9 = FUN_02c5fb2c(uVar12);
    if (uVar4 < uVar9) {
      FUN_0109ddb8(uVar12);
      uVar9 = FUN_02c5fb2c(uVar12);
      if ((uVar4 + 1 & 0xffff) < uVar9) {
        FUN_0109ddb8(uVar12);
        for (uVar9 = uVar4 + 2; uVar10 = FUN_02c5fb2c(uVar12), (uVar9 & 0xffff) < uVar10;
            uVar9 = uVar9 + 1) {
          FUN_0109ddb8(uVar12);
        }
      }
    }
    pcVar7 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar7)(&local_a0);
    }
  }
  return 0;
}


