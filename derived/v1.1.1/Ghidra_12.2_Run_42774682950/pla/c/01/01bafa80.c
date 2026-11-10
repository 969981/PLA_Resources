/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bafa80; name: FUN_01bafa80
 */


bool FUN_01bafa80(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01a5badc(param_1,&DAT_03a7ca78);
  return (uVar1 & 0xff) != 0 && ((int)(uVar1 >> 0x20) != 0 && -1 < (long)uVar1);
}


