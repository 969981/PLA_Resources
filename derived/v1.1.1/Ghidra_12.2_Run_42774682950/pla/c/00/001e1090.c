/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1090; name: FUN_001e1090
 */


undefined * FUN_001e1090(void)

{
  int iVar1;
  
  if ((DAT_0438eacc & 1) == 0) {
    iVar1 = FUN_001e0a0c(&DAT_0438ead0,7,PTR_LAB_04372748,PTR_DAT_04372750,FUN_001e10f8);
    if (iVar1 != 0) {
      return (undefined *)0x0;
    }
    DAT_0438eacc = 1;
  }
  return &DAT_0438ead0;
}


