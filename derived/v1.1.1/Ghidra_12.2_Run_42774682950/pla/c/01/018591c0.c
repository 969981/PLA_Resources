/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018591c0; name: FUN_018591c0
 */


undefined * FUN_018591c0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)*param_1;
  if ((undefined *)param_1[1] == (undefined *)*param_1) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a0d0), puVar2 = PTR_DAT_0437a0d8, iVar1 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    else {
      puVar2 = PTR_DAT_0437a0d8;
    }
  }
  return puVar2;
}


