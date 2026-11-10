/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c4c550; name: FUN_00c4c550
 */


void FUN_00c4c550(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_04379678 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379678);
    if (iVar1 != 0) {
      FUN_00100250(param_1,PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
  }
  lVar2 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar2;
  FUN_00db854c(param_1,*(undefined8 *)(lVar2 + 0xd8));
  return;
}


