/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a0a14; name: FUN_011a0a14
 */


void FUN_011a0a14(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar5 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar5;
  uVar3 = FUN_02911ed0(lVar5);
  plVar4 = *(long **)(*(long *)(lVar5 + 0x158) + 0x60);
  puVar1 = &DAT_03987f09;
  if (param_2 != 0) {
    puVar1 = &DAT_03908bed;
  }
                    /* WARNING: Could not recover jumptable at 0x011a0a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x98))(plVar4,&DAT_03932c38,puVar1,uVar3);
  return;
}


