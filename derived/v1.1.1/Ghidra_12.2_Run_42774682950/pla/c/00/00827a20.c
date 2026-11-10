/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827a20; name: FUN_00827a20
 */


void FUN_00827a20(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_38 [2];
  long local_28;
  
  local_28 = param_2;
  FUN_00825bcc(param_2,param_3,param_4);
  local_38[0] = 0;
  FUN_007ecf14(local_38);
  *(undefined8 *)(param_2 + 0x88) = local_38[0];
  if (*(long *)(*(long *)(param_1 + 0x110) + 0x28) != 0) {
    FUN_00827a8c(local_38,*(long *)(param_1 + 0x110),param_3,&local_28);
  }
  return;
}


