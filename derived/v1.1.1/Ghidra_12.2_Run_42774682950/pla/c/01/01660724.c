/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01660724; name: FUN_01660724
 */


void FUN_01660724(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_28;
  
  if (param_3 < 10) {
    plVar7 = *(long **)(param_2 + (ulong)param_3 * 8 + 0x68);
  }
  else {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar4 != 0)) {
      local_28 = FUN_00938550();
      puVar3 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
      FUN_00100250(PTR_LAB_0437a8d8,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    plVar7 = *(long **)PTR_DAT_0437a7d0;
  }
  plVar1 = (long *)PTR_DAT_04379c88;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 0xb;
  }
  plVar2 = (long *)PTR_PTR_04379d00;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 0xc;
  }
  lVar5 = *plVar2;
  if (plVar7 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = plVar7[0xd];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  param_1[3] = (long)plVar7;
  return;
}


