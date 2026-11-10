/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da4fcc; name: FUN_00da4fcc
 */


void FUN_00da4fcc(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 local_38;
  
  if ((ulong)((param_1[2] - param_1[1] >> 4) * 0x6db6db6db6db6db7) < param_2) {
    uVar1 = FUN_00da50b8(param_1,param_2 + (param_1[1] - *param_1 >> 4) * 0x6db6db6db6db6db7);
    FUN_00da5124(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * 0x6db6db6db6db6db7,param_1 + 3);
    do {
      FUN_00da539c(local_38,local_48);
      local_48 = local_48 + 0x70;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    FUN_00da51b8(param_1,auStack_58);
    FUN_00da5260(auStack_58);
  }
  else {
    do {
      FUN_00da539c(param_1 + 3);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x70;
    } while (param_2 != 0);
  }
  return;
}


