/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc830; name: FUN_004dc830
 */


ulong FUN_004dc830(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x488) + 0x1e) & 3) == 0) {
    sVar1 = FUN_004dc120(param_1,0);
    return (ulong)(sVar1 != 0);
  }
  if (param_2 == 0x300c02c) {
    uVar2 = FUN_004dc620(param_1,0x18,1);
    return uVar2;
  }
  if (param_2 == 0x300c02b) {
    uVar2 = FUN_004dc620(param_1,0x17,1);
    return uVar2;
  }
  return 0;
}


