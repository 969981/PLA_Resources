/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa7820; name: FUN_00fa7820
 */


ulong FUN_00fa7820(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  ulong uVar8;
  void *__dest;
  code *pcVar9;
  char local_6c [4];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  uint local_48;
  undefined4 uStack_44;
  
  lVar2 = FUN_001511d0(param_1,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  pvVar3 = (void *)FUN_00150da0(param_1,0xffffffff,&local_48);
  plVar1 = DAT_043f1798;
  uVar5 = CONCAT44(uStack_44,local_48);
  local_58 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar2 = lVar2 + ((ulong)(uint)-(int)lVar2 & 7);
  if (uVar5 < 0x17) {
    local_68 = (ulong)(byte)(local_48 << 1);
    __dest = (void *)((ulong)&local_68 | 1);
    if (uVar5 != 0) goto LAB_00fa78ac;
  }
  else {
    uVar8 = uVar5 + 0x10 & 0xfffffffffffffff0;
    lVar4 = tpidr_el0;
    plVar6 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar6 = plVar1;
    }
    __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
    local_68 = uVar8 | 1;
    uStack_60 = uVar5;
    local_58 = __dest;
LAB_00fa78ac:
    memcpy(__dest,pvVar3,uVar5);
  }
  *(undefined1 *)((long)__dest + uVar5) = 0;
  lVar4 = FUN_008e8c90(lVar2 + 8,&local_68);
  pvVar3 = local_58;
  plVar1 = DAT_043f1798;
  if (lVar4 == 0) {
    pcVar9 = (code *)0x0;
    uVar7 = 0;
  }
  else {
    pcVar9 = *(code **)(lVar4 + 0x28);
    uVar7 = *(undefined4 *)(lVar4 + 0x38);
  }
  if (((local_68 & 1) != 0) && (local_58 != (void *)0x0)) {
    lVar4 = tpidr_el0;
    plVar6 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar6,pvVar3,0,8);
        goto joined_r0x00fa7a40;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pvVar3,0,8);
  }
joined_r0x00fa7a40:
  if (pcVar9 == (code *)0x0) {
    uStack_60 = FUN_00150da0(param_1,0xffffffff,&local_68);
    local_48 = 0;
    local_6c[0] = '\0';
    (**(code **)(lVar2 + 0x170))(param_1,local_6c,&local_48,&local_68);
    if (local_6c[0] == '\0') {
      local_48 = 0xffffffff;
    }
    uVar5 = (ulong)local_48;
  }
  else {
    uVar5 = (*pcVar9)(param_1,lVar2,uVar7);
  }
  return uVar5;
}


