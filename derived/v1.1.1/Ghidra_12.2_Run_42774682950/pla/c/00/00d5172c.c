/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5172c; name: FUN_00d5172c
 */


void FUN_00d5172c(long *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  (**(code **)(*param_1 + 0xb0))();
  FUN_00d52a24(param_1,param_3);
  bVar1 = (int)param_1[0xdc] == 2;
  FUN_00d5751c(param_1,0,bVar1);
  FUN_00d5751c(param_1,1,bVar1);
  return;
}


