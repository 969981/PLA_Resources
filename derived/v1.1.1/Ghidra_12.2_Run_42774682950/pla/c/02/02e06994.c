/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06994; name: FUN_02e06994
 */


undefined4 FUN_02e06994(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)((param_3 >> 1) + 1) << 3);
  *param_1 = lVar1;
  uVar2 = 0x34;
  if (lVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


