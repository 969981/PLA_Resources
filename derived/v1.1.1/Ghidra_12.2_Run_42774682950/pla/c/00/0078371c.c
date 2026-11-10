/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078371c; name: FUN_0078371c
 */


uint FUN_0078371c(long *param_1)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  FUN_00783554(auStack_30);
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  FUN_00783640(auStack_30);
  return uVar1 & 1;
}


