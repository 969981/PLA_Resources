/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b71a4; name: FUN_031b71a4
 */


undefined4 FUN_031b71a4(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_031b3624(param_1 + 0x10,param_2);
  *(undefined4 **)(param_1 + 0x58) = puVar1;
  *(undefined4 **)(param_1 + 0x60) = puVar1;
  *(int *)(param_1 + 0x50) = ((int)puVar1 - *(int *)(param_1 + 0x10)) * 0x1000 >> 0x10;
  return *puVar1;
}


