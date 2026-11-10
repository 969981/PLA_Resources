/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108eef8; name: FUN_0108eef8
 */


uint FUN_0108eef8(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  
  FUN_02c4fb44(auStack_30,param_2);
  uVar1 = FUN_0108ef4c(param_1,auStack_30,param_3);
  FUN_02c4fc5c(auStack_30);
  return uVar1 & 1;
}


