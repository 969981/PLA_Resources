/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8b2cc; name: FUN_02a8b2cc
 */


void FUN_02a8b2cc(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong local_58;
  ulong local_50;
  undefined1 *local_48;
  
  plVar4 = DAT_043f1798;
  uVar7 = (long)param_4 - (long)param_3;
  local_58 = 0;
  local_50 = 0;
  local_48 = (undefined1 *)0x0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    uVar1 = (int)uVar7 << 1;
    uVar5 = (ulong)uVar1;
    local_58 = (ulong)(byte)uVar1;
    puVar3 = (undefined1 *)((ulong)&local_58 | 1);
  }
  else {
    uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar4;
    }
    local_48 = (undefined1 *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar5,8);
    uVar5 = uVar5 | 1;
    puVar3 = local_48;
    local_50 = uVar7;
    local_58 = uVar5;
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    *puVar3 = *param_3;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = 0;
  uVar7 = (ulong)((uint)uVar5 >> 1 & 0x7f);
  puVar3 = (undefined1 *)((ulong)&local_58 | 1);
  if ((uVar5 & 1) != 0) {
    uVar7 = local_50;
    puVar3 = local_48;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),puVar3,puVar3 + uVar7);
  puVar3 = local_48;
  plVar4 = DAT_043f1798;
  if (((local_58 & 1) != 0) && (local_48 != (undefined1 *)0x0)) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x20);
    if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
      *(long **)(lVar2 + 0x20) = DAT_043f1798;
      plVar6 = plVar4;
    }
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar6,puVar3,0,8);
        return;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar3,0,8);
  }
  return;
}


