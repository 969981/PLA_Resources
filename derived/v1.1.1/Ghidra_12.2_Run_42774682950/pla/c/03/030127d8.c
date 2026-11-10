/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030127d8; name: FUN_030127d8
 */


void FUN_030127d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_03012520();
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(lVar1 + 0x20) * 0x80 + 0x18))(lVar1,param_2);
  *(long *)(param_2 + 0x10) = param_1 + 0x30;
  *(undefined4 *)(param_2 + 0x18) = 0x20;
  return;
}


