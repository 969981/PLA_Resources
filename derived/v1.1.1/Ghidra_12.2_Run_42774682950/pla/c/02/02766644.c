/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02766644; name: FUN_02766644
 */


void FUN_02766644(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_027667e4(param_1,(param_1[1] - *param_1 >> 3) * -0x79435e50d79435e5 + 1);
  FUN_02766850(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x79435e50d79435e5,param_1 + 3);
  FUN_027666f0(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x98;
  FUN_027668e0(param_1,auStack_58);
  FUN_02766988(auStack_58);
  return;
}


