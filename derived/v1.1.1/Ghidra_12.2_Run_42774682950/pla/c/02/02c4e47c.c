/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4e47c; name: FUN_02c4e47c
 */


undefined8 * FUN_02c4e47c(void)

{
  int iVar1;
  
  if (((DAT_043f2288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2288), iVar1 != 0)) {
    if (((DAT_043f2278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043f2278), iVar1 != 0)) {
      DAT_043f2270 = 0;
      __cxa_guard_release(&DAT_043f2278);
    }
    DAT_043f2280 = &DAT_043f2270;
    __cxa_guard_release(&DAT_043f2288);
  }
  return &DAT_043f2280;
}


