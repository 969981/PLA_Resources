/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5794; name: FUN_007e5794
 */


ulong FUN_007e5794(void)

{
  ulong uVar1;
  
  if (DAT_041aa970 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((ulong)DAT_041aa970 != 0) {
    uVar1 = DAT_041aa978 / DAT_041aa970;
  }
  return uVar1;
}


