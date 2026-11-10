/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe48d8; name: FUN_00fe48d8
 */


ulong FUN_00fe48d8(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  void *__dest;
  code *pcVar10;
  char local_6c [4];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  uint local_48;
  undefined4 uStack_44;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  iVar2 = FUN_00150310(param_1,0xfffffffe);
  if (iVar2 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00fe4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar3 + 0x38))(param_1);
    return uVar6;
  }
  pvVar4 = (void *)FUN_00150da0(param_1,0xfffffffe,&local_48);
  plVar1 = DAT_043f1798;
  uVar6 = CONCAT44(uStack_44,local_48);
  local_58 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    local_68 = (ulong)(byte)(local_48 << 1);
    __dest = (void *)((ulong)&local_68 | 1);
    if (uVar6 != 0) goto LAB_00fe4960;
  }
  else {
    uVar9 = uVar6 + 0x10 & 0xfffffffffffffff0;
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar7 = plVar1;
    }
    __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar9,8);
    local_68 = uVar9 | 1;
    uStack_60 = uVar6;
    local_58 = __dest;
LAB_00fe4960:
    memcpy(__dest,pvVar4,uVar6);
  }
  *(undefined1 *)((long)__dest + uVar6) = 0;
  lVar5 = FUN_008e8c90(lVar3 + 8,&local_68);
  pvVar4 = local_58;
  plVar1 = DAT_043f1798;
  if (lVar5 == 0) {
    uVar8 = 0;
    pcVar10 = (code *)0x0;
  }
  else {
    pcVar10 = *(code **)(lVar5 + 0x30);
    uVar8 = *(undefined4 *)(lVar5 + 0x38);
  }
  if (((local_68 & 1) != 0) && (local_58 != (void *)0x0)) {
    lVar5 = tpidr_el0;
    plVar7 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar7 = plVar1;
    }
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar7,pvVar4,0,8);
        goto joined_r0x00fe4b2c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,pvVar4,0,8);
  }
joined_r0x00fe4b2c:
  if (pcVar10 == (code *)0x0) {
    uStack_60 = FUN_00150da0(param_1,0xfffffffe,&local_68);
    local_48 = 0;
    local_6c[0] = '\0';
    (**(code **)(lVar3 + 0xa0))(param_1,local_6c,&local_48,&local_68);
    if (local_6c[0] == '\0') {
      uVar6 = (**(code **)(lVar3 + 0x38))(param_1);
    }
    else {
      uVar6 = (ulong)local_48;
    }
  }
  else {
    uVar6 = (*pcVar10)(param_1,lVar3,uVar8);
  }
  return uVar6;
}


