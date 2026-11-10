/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277f164; name: FUN_0277f164
 */


void FUN_0277f164(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_0277f304(param_1,(param_1[1] - *param_1 >> 2) * 0x14c1bacf914c1bad + 1);
  FUN_0277f370(auStack_58,uVar1,(param_1[1] - *param_1 >> 2) * 0x14c1bacf914c1bad,param_1 + 3);
  FUN_0277f210(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x94;
  FUN_0277f400(param_1,auStack_58);
  FUN_0277f4a8(auStack_58);
  return;
}


