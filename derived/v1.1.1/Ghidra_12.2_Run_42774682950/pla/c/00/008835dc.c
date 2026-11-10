/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008835dc; name: FUN_008835dc
 */


void FUN_008835dc(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 local_18;
  
  FUN_0088362c(param_1,&local_18,param_2);
  bVar1 = *(byte *)(param_1 + 0x2be0);
  if ((ulong)bVar1 < 10) {
    *(byte *)(param_1 + 0x2be0) = bVar1 + 1;
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x2be8) = local_18;
  }
  return;
}


