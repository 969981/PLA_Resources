/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d9f60; name: FUN_013d9f60
 */


void FUN_013d9f60(long *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00d42690(param_1,0,1);
  FUN_00d42438(param_1,0,1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  uVar2 = 3;
  if (param_2 != 2) {
    uVar2 = 0;
  }
  uVar1 = 2;
  if (param_2 != 1) {
    uVar1 = uVar2;
  }
  FUN_00d7331c(param_1,uVar1);
  return;
}


