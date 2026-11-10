/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091d3e0; name: FUN_0091d3e0
 */


void FUN_0091d3e0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_0091d564(param_1,(param_1[1] - *param_1) * -0x5555555555555555 + 1);
  FUN_0091d5c4(auStack_58,uVar1,(param_1[1] - *param_1) * -0x5555555555555555,param_1 + 3);
  FUN_0091d47c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 3;
  FUN_0091d654(param_1,auStack_58);
  FUN_0091d6fc(auStack_58);
  return;
}


