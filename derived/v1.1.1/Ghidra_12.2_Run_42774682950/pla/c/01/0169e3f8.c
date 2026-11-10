/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0169e3f8; name: FUN_0169e3f8
 */


void FUN_0169e3f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042244a8;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_042244e0;
  param_1[0xb] = 0;
  puVar5 = PTR_DAT_0437a0d0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar5 = PTR_DAT_0437a0d8;
  param_1[0x10] = *(long *)PTR_DAT_0437a0d8;
  param_1[0x11] = *(long *)(puVar5 + 8);
  plVar1 = *(long **)(puVar5 + 0x18);
  param_1[0x12] = *(long *)(puVar5 + 0x10);
  param_1[0x13] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  if (((*puVar3 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  lVar7 = DAT_043f1798;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar2 = tpidr_el0;
    lVar8 = *(long *)(lVar2 + 0x20);
    if (*(long *)(lVar2 + 0x20) == 0) {
      *(long *)(lVar2 + 0x20) = DAT_043f1798;
      lVar8 = lVar7;
    }
  }
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = lVar8;
  param_1[0x1a] = 0x1745d1745d1745d;
  param_1[0x1d] = 0;
  return;
}


