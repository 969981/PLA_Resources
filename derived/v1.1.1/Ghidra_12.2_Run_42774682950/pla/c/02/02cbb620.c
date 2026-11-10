/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbb620; name: FUN_02cbb620
 */


undefined8 FUN_02cbb620(byte param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(long *)PTR_DAT_04377550 == 0) || (iVar1 = FUN_0082ad44(), iVar1 != 1 || 7 < param_1)) ||
     (*(long *)PTR_DAT_043773c0 == 0)) {
    return 0;
  }
  uVar2 = FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,(&DAT_04408a60)[param_1],0x81);
  return uVar2;
}


