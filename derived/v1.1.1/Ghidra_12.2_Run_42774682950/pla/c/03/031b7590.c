/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b7590; name: FUN_031b7590
 */


void FUN_031b7590(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_031b3624(param_1 + 0x10,param_2);
  *(undefined4 *)(lVar1 + 4) = 0;
  *(ushort *)(lVar1 + 0xe) = *(ushort *)(lVar1 + 0xe) | 8;
  FUN_031b7750(param_1 + 0x80,param_2);
  return;
}


