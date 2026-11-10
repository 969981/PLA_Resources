/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010831d0; name: FUN_010831d0
 */


void FUN_010831d0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte local_160 [8];
  ulong local_158;
  ulong local_150;
  undefined *local_148;
  undefined *apuStack_140 [8];
  byte local_100;
  long local_f0;
  undefined *local_d8 [19];
  
  FUN_010834f4(&local_148);
  FUN_001511d0(param_1,1);
  std::ostream::operator<<((ostream *)&local_148,true);
  std::stringbuf::str();
  uVar4 = (ulong)(local_160[0] >> 1);
  uVar2 = (ulong)local_160 | 1;
  if ((local_160[0] & 1) != 0) {
    uVar4 = local_158;
    uVar2 = local_150;
  }
  FUN_001514f0(param_1,uVar2,uVar4);
  plVar3 = DAT_043f1798;
  if (((local_160[0] & 1) != 0) && (local_150 != 0)) {
    lVar1 = tpidr_el0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar3;
    }
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,local_150,0,8);
        goto LAB_01083300;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,local_150,0,8);
  }
LAB_01083300:
  plVar3 = DAT_043f1798;
  local_148 = PTR_DAT_0437d9a8 + 0x18;
  local_d8[0] = PTR_DAT_0437d9a8 + 0x40;
  apuStack_140[0] = PTR_vtable_0437c0b0 + 0x10;
  if (((local_100 & 1) != 0) && (local_f0 != 0)) {
    lVar1 = tpidr_el0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar3;
    }
    uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,local_f0,0,8);
        goto LAB_010833e0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,local_f0,0,8);
  }
LAB_010833e0:
  std::streambuf::~streambuf((streambuf *)apuStack_140);
  std::ostream::~ostream((ostream *)&local_148);
  std::ios::~ios((ios *)local_d8);
  return;
}


