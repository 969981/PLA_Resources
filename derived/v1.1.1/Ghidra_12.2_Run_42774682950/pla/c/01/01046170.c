/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01046170; name: FUN_01046170
 */


undefined * FUN_01046170(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (((*PTR_DAT_0437a798 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a798), iVar1 != 0)) {
      if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar1 != 0)) {
        local_18 = FUN_00938550();
        puVar2 = PTR_DAT_0437a7d0;
        FUN_00b0fde8(PTR_DAT_0437a7d0,&local_18);
        FUN_00100250(PTR_LAB_0437a8d8,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a7c0);
      }
      puVar2 = PTR_DAT_0437a7c8;
      FUN_00b0fd18(PTR_DAT_0437a7c8,PTR_DAT_0437a7d0,0);
      FUN_00100250(DAT_0437ae18,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a798);
    }
    else {
      puVar2 = PTR_DAT_0437a7c8;
    }
  }
  else {
    puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x68);
  }
  return puVar2;
}


