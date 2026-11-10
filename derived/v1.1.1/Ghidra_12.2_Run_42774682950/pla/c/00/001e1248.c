/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e1248; name: FUN_001e1248
 */


long FUN_001e1248(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_001f43b0(lVar2,3,2);
  }
  lVar1 = FUN_001e12cc(param_1,param_2,param_3);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  }
  if (*(long *)(lVar2 + 0xe8) != 0) {
    FUN_001f43f8(lVar2,3);
  }
  return lVar1;
}


