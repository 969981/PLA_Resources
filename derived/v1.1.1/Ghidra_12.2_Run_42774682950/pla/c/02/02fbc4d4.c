/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc4d4; name: FUN_02fbc4d4
 */


void FUN_02fbc4d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_02fc5eac(param_2,param_3,0,0);
  FUN_02fbc540(param_1,param_2,uVar1);
  if ((int)(uint)*(byte *)(param_1 + 0x1c) < *(int *)(param_3 + 8)) {
    *(char *)(param_1 + 0x1c) = (char)*(int *)(param_3 + 8);
  }
  FUN_032d647c(uVar1);
  return;
}


