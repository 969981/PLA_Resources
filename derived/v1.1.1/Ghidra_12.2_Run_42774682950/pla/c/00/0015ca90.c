/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ca90; name: FUN_0015ca90
 */


void FUN_0015ca90(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar1 + 0x55) < 2) {
    FUN_0015cac0(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xf8 | *(byte *)(lVar1 + 0x54) & 3;
  return;
}


