/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e6d8; name: FUN_0081e6d8
 */


bool FUN_0081e6d8(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04377b80 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04377b80);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04377b88 = PTR_DAT_04377b98 + 0x10;
      __cxa_guard_release(PTR_DAT_04377b80);
      return param_2 == PTR_DAT_04377b88;
    }
  }
  return param_2 == PTR_DAT_04377b88;
}


