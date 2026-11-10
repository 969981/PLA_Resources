/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e30fc8; name: FUN_00e30fc8
 */


void FUN_00e30fc8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_78;
  void *pvStack_70;
  char local_68;
  
  lVar4 = FUN_001511d0(*(undefined8 *)*param_1,0xfff0b9d5);
  if (*(char *)(lVar4 + 0x50) == '\0') {
    return;
  }
  local_90 = 0;
  FUN_008e8bd0(&local_78,*(undefined8 *)*param_1,2,PTR_LAB_04379768,&local_90);
  plVar2 = DAT_043f1798;
  if (local_68 == '\0') {
    return;
  }
  plVar9 = (long *)(lVar4 + 0x38);
  lVar11 = *plVar9;
  lVar12 = *(long *)(lVar4 + 0x40);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  if (0xffffffffffffffef < local_78) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (local_78 < 0x17) {
    local_90 = (ulong)(byte)((int)local_78 << 1);
    pvVar10 = (void *)((ulong)&local_90 | 1);
    if (local_78 == 0) goto LAB_00e31088;
  }
  else {
    uVar6 = local_78 + 0x10 & 0xfffffffffffffff0;
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar7 = plVar2;
    }
    pvVar10 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar6,8);
    local_90 = uVar6 | 1;
    uStack_88 = local_78;
    local_80 = pvVar10;
  }
  memcpy(pvVar10,pvStack_70,local_78);
LAB_00e31088:
  *(undefined1 *)((long)pvVar10 + local_78) = 0;
  lVar5 = FUN_008e8c90(lVar4,&local_90);
  if (lVar5 == 0) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
    FUN_00e31bc8(plVar9,*param_1,&local_a8);
    local_98 = (undefined4)((ulong)(lVar12 - lVar11) >> 4);
    local_a8 = PTR_LAB_04379b00;
    local_a0 = PTR_LAB_04379b08;
    FUN_00e31d94(lVar4,&local_90,&local_90,&local_a8);
    plVar2 = DAT_043f1798;
    pvVar10 = local_80;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x38);
    puVar8 = *(undefined **)*param_1;
    local_a8 = puVar8;
    FUN_00150260(puVar8,3);
    uVar3 = FUN_00155070(puVar8,0xfff0b9d8);
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar3);
    FUN_008ea1e4(*plVar9 + (long)iVar1 * 0x10,&local_a8);
    if ((local_a8 != (undefined *)0x0) && ((int)local_a0 != -2)) {
      FUN_00155150(local_a8,0xfff0b9d8);
    }
    puVar8 = PTR_LAB_04379b08;
    *(undefined **)(lVar5 + 0x28) = PTR_LAB_04379b00;
    *(undefined **)(lVar5 + 0x30) = puVar8;
    *(int *)(lVar5 + 0x38) = iVar1;
    plVar2 = DAT_043f1798;
    pvVar10 = local_80;
  }
  DAT_043f1798 = plVar2;
  if (((local_90 & 1) != 0) && (pvVar10 != (void *)0x0)) {
    lVar4 = tpidr_el0;
    plVar9 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar2;
      plVar9 = plVar2;
    }
    local_80 = pvVar10;
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar9,pvVar10,0,8);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pvVar10,0,8);
  }
  return;
}


