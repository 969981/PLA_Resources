/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086217c; name: FUN_0086217c
 */


void FUN_0086217c(long *param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043781a0;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007e3428(param_1 + 4,param_5);
  FUN_007e3428(param_1 + 8,param_6);
  param_1[0xc] = param_7;
  memset(param_1 + 0xd,0,3);
  return;
}


