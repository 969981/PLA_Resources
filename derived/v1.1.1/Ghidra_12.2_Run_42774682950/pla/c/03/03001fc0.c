/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001fc0; name: FUN_03001fc0
 */


void FUN_03001fc0(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = (param_2 & 0xffffff) * 8;
  FUN_03001ff0(*(undefined4 *)(*(long *)(param_1 + 0x68) + lVar1),
               *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffff) * 0xc0 + 0x78),
               *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar1));
  return;
}


