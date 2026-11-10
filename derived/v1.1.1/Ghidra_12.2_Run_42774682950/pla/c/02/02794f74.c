/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02794f74; name: FUN_02794f74
 */


void FUN_02794f74(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_02795160(param_1,(param_1[1] - *param_1 >> 3) * -0x1111111111111111 + 1);
  FUN_027951c4(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x1111111111111111,param_1 + 3);
  FUN_02795018(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x78;
  FUN_013298fc(param_1,auStack_58);
  FUN_013299a4(auStack_58);
  return;
}


