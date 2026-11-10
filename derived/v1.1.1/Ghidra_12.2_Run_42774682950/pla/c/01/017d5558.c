/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d5558; name: FUN_017d5558
 */


void FUN_017d5558(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_017db6d4(&local_98);
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  lVar14 = *(long *)(param_1 + 0x78);
joined_r0x017d5598:
  if (lVar14 != param_1 + 0x70) {
    uVar13 = *(undefined8 *)(lVar14 + 0x10);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_017db6d4(&local_70,&local_98);
    uVar11 = FUN_017d9c14(uVar13,&local_70);
    puVar8 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        uVar11 = uVar11 & 0xffffffff;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar12 = *(long *)puVar5;
        *(long *)puVar6 = lVar12;
        local_88 = (undefined8 *)*puVar8;
        FUN_02a44274(lVar12 + 0xd8,&local_88);
      }
    }
    if ((uVar11 & 1) == 0) goto code_r0x017d56c8;
    FUN_017d5e94(&local_88,*(undefined8 *)(lVar14 + 0x10));
    if (local_88 == (undefined8 *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      FUN_017dce5c(&local_78);
      puVar8 = local_88;
      if (local_88 == (undefined8 *)0x0) goto LAB_017d55a4;
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 != 0) goto LAB_017d55a4;
      local_88[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar5;
      *(long *)puVar6 = lVar14;
      local_70 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar14 + 0xd8,&local_70);
    }
    if (local_98 == (undefined8 *)0x0) goto LAB_017d5604;
    goto LAB_017d55ac;
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = (long *)0x0;
LAB_017d55a4:
  if (local_98 != (undefined8 *)0x0) {
LAB_017d55ac:
    puVar8 = local_98;
    piVar1 = (int *)(local_98 + 1);
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
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70 = (undefined8 *)*puVar8;
      FUN_02a44274(lVar14 + 0xd8,&local_70);
    }
  }
LAB_017d5604:
  plVar9 = local_78;
  if (local_78 != (long *)0x0) {
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    FUN_017db6d4(&local_a8,param_2);
    FUN_017d58e8(plVar9,&local_a8);
    puVar8 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a8 + 1);
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
        local_a8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_70 = (undefined8 *)*puVar8;
        FUN_02a44274(lVar14 + 0xd8,&local_70);
      }
    }
    if (local_78 != (long *)0x0) {
      lVar14 = local_78[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  return;
code_r0x017d56c8:
  lVar14 = *(long *)(lVar14 + 8);
  goto joined_r0x017d5598;
}


