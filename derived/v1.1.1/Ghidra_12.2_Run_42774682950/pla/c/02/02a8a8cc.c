/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8a8cc; name: FUN_02a8a8cc
 */


void FUN_02a8a8cc(string *param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  char *local_48;
  
  plVar4 = DAT_043f1798;
  uVar8 = (long)param_4 - (long)param_3;
  local_58 = 0;
  local_50 = 0;
  local_48 = (char *)0x0;
  if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar8 < 0x17) {
    uVar2 = (int)uVar8 << 1;
    uVar5 = (ulong)uVar2;
    local_58 = (ulong)(byte)uVar2;
    pcVar1 = (char *)((ulong)&local_58 | 1);
  }
  else {
    uVar5 = uVar8 + 0x10 & 0xfffffffffffffff0;
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = DAT_043f1798;
      plVar6 = plVar4;
    }
    local_48 = (char *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar5,8);
    uVar5 = uVar5 | 1;
    pcVar1 = local_48;
    local_50 = uVar8;
    local_58 = uVar5;
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    *pcVar1 = *param_3;
    pcVar1 = pcVar1 + 1;
  }
  *pcVar1 = '\0';
  uVar8 = (ulong)((uint)uVar5 >> 1 & 0x7f);
  if ((uVar5 & 1) != 0) {
    uVar8 = local_50;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar4 = DAT_043f1798;
  pcVar1 = local_48;
  if (uVar8 == 0) goto joined_r0x02a8ab5c;
  pcVar1 = (char *)((ulong)&local_58 | 1);
  if ((uVar5 & 1) != 0) {
    pcVar1 = local_48;
  }
  std::__get_collation_name(pcVar1);
  uVar5 = local_70;
  *(undefined8 *)(param_1 + 0x10) = local_60;
  *(ulong *)param_1 = local_70;
  *(ulong *)(param_1 + 8) = local_68;
  uVar8 = (local_70 & 0xff) >> 1;
  if ((local_70 & 1) != 0) {
    uVar8 = local_68;
  }
  plVar4 = DAT_043f1798;
  pcVar1 = local_48;
  if (uVar8 != 0) goto joined_r0x02a8ab5c;
  uVar8 = local_58 >> 1 & 0x7f;
  if ((local_58 & 1) != 0) {
    uVar8 = local_50;
  }
  if (2 < uVar8) goto joined_r0x02a8ab5c;
  pcVar1 = (char *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    pcVar1 = local_48;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (&local_70,*(long **)(param_2 + 0x10),pcVar1,pcVar1 + uVar8);
  if ((uVar5 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    plVar4 = DAT_043f1798;
    if (((byte)*param_1 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        lVar3 = tpidr_el0;
        plVar6 = *(long **)(lVar3 + 0x20);
        if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
          *(long **)(lVar3 + 0x20) = DAT_043f1798;
          plVar6 = plVar4;
        }
        uVar8 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar3 + 0x38d480)) {
            FUN_02bcc824(plVar6,lVar7,0,8);
            goto LAB_02a8ab1c;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0,8);
      }
LAB_02a8ab1c:
      *(undefined8 *)param_1 = 0;
    }
  }
  *(ulong *)(param_1 + 8) = local_68;
  *(undefined8 *)(param_1 + 0x10) = local_60;
  uVar8 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar8 = local_68;
  }
  *(ulong *)param_1 = local_70;
  if ((uVar8 == 0xc) || (uVar8 == 1)) {
    std::string::operator=(param_1,(string *)&local_58);
    plVar4 = DAT_043f1798;
    pcVar1 = local_48;
  }
  else {
    pcVar1 = local_48;
    if ((local_70 & 1) == 0) {
      *(undefined2 *)param_1 = 0;
      plVar4 = DAT_043f1798;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      plVar4 = DAT_043f1798;
    }
  }
joined_r0x02a8ab5c:
  DAT_043f1798 = plVar4;
  if (((local_58 & 1) != 0) && (pcVar1 != (char *)0x0)) {
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x20);
    if (*(long **)(lVar7 + 0x20) == (long *)0x0) {
      *(long **)(lVar7 + 0x20) = plVar4;
      plVar6 = plVar4;
    }
    local_48 = pcVar1;
    uVar8 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar6,pcVar1,0,8);
        return;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pcVar1,0,8);
  }
  return;
}


