/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9faf0; name: FUN_02b9faf0
 */


void FUN_02b9faf0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long local_98;
  long *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  int local_44;
  
  uVar6 = *(uint *)(param_1 + 0x144);
  uVar1 = uVar6 + 1;
  *(uint *)(param_1 + 0x144) = uVar1;
  if ((ulong)uVar1 <= (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 5)) {
                    /* WARNING: Could not recover jumptable at 0x02b9fbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_043f0b68)(param_1,*(undefined8 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar6 * 0x20),
                    *(undefined8 *)(param_1 + 0x120));
    return;
  }
  (*DAT_043f0068)(*(undefined8 *)(param_1 + 0x138),0x14,&local_44);
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  plVar5 = *(long **)(param_1 + 0x128);
  local_98 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,(long)local_44);
  local_90 = plVar5;
  local_88 = uVar4;
  local_80 = (long)local_44;
  (*DAT_043f0b68)(param_1,local_98,*(undefined8 *)(param_1 + 0x120));
  uVar7 = *(ulong *)(param_1 + 0xe8);
  puVar2 = (undefined8 *)(param_1 + 0xf8);
  if (uVar7 < *(ulong *)(param_1 + 0xf0)) {
    FUN_02ba04a8(puVar2,uVar7,&local_98);
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 0x20;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x100);
    lVar13 = (long)(uVar7 - *(long *)(param_1 + 0xe0)) >> 5;
    uVar7 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(ulong *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe0);
    if ((ulong)(lVar8 >> 5) < uVar11 >> 1) {
      uVar9 = lVar8 >> 4;
      uVar11 = uVar7;
      if (uVar7 <= uVar9) {
        uVar11 = uVar9;
      }
    }
    local_60 = 0;
    puStack_58 = puVar2;
    if (uVar11 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar11 << 5,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar8 = local_78 + lVar13 * 0x20;
    lVar3 = local_78 + uVar11 * 0x20;
    local_70 = lVar8;
    local_60 = lVar3;
    FUN_02ba04a8(puVar2,lVar8,&local_98);
    lVar13 = lVar8 + 0x20;
    lVar10 = *(long *)(param_1 + 0xe0);
    lVar12 = *(long *)(param_1 + 0xe8);
    local_68 = lVar13;
    if (lVar12 == lVar10) {
      local_68 = lVar10;
    }
    else {
      do {
        lVar8 = lVar8 + -0x20;
        lVar12 = lVar12 + -0x20;
        FUN_02ba04a8(puVar2,lVar8,lVar12);
      } while (lVar10 != lVar12);
      lVar10 = *(long *)(param_1 + 0xe0);
      local_68 = *(long *)(param_1 + 0xe8);
    }
    *(long *)(param_1 + 0xe0) = lVar8;
    *(long *)(param_1 + 0xe8) = lVar13;
    local_60 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = lVar3;
    local_78 = lVar10;
    local_70 = lVar10;
    FUN_02ba058c(&local_78);
  }
  lVar8 = local_80;
  uVar4 = local_88;
  plVar5 = local_90;
  lVar13 = local_98;
  local_98 = 0;
  if (lVar13 != 0) {
    uVar7 = (**(code **)(*local_90 + 0xc0))(local_90);
    if ((uVar7 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar13,uVar4,lVar8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar13,uVar4,lVar8);
  }
  return;
}


