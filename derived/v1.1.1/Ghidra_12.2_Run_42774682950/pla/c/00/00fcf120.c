/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fcf120; name: FUN_00fcf120
 */


void FUN_00fcf120(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined *local_148;
  undefined *apuStack_140 [8];
  byte local_100;
  long local_f0;
  undefined *local_d8 [19];
  
  FUN_00fa5b14(&local_148);
  local_160 = 0;
  plVar3 = (long *)FUN_00fcee04(param_1,1,&local_160);
  if (*plVar3 == 0) {
    puVar5 = (ulong *)PTR_DAT_04379c88;
  }
  else {
    puVar5 = (ulong *)(*plVar3 + 0x58);
  }
  std::ostream::operator<<((ostream *)&local_148,*puVar5);
  std::stringbuf::str();
  uVar4 = local_160 >> 1 & 0x7f;
  uVar2 = (ulong)&local_160 | 1;
  if ((local_160 & 1) != 0) {
    uVar4 = local_158;
    uVar2 = local_150;
  }
  FUN_001514f0(param_1,uVar2,uVar4);
  plVar3 = DAT_043f1798;
  if (((local_160 & 1) != 0) && (local_150 != 0)) {
    lVar1 = tpidr_el0;
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,local_150,0,8);
        goto LAB_00fcf264;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_150,0,8);
  }
LAB_00fcf264:
  plVar3 = DAT_043f1798;
  local_148 = PTR_DAT_0437d9a8 + 0x18;
  local_d8[0] = PTR_DAT_0437d9a8 + 0x40;
  apuStack_140[0] = PTR_vtable_0437c0b0 + 0x10;
  if (((local_100 & 1) != 0) && (local_f0 != 0)) {
    lVar1 = tpidr_el0;
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar3;
    }
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,local_f0,0,8);
        goto LAB_00fcf348;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_f0,0,8);
  }
LAB_00fcf348:
  std::streambuf::~streambuf((streambuf *)apuStack_140);
  std::ostream::~ostream((ostream *)&local_148);
  std::ios::~ios((ios *)local_d8);
  return;
}


