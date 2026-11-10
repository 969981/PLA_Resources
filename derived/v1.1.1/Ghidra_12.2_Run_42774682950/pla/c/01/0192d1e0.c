/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192d1e0; name: FUN_0192d1e0
 */


void FUN_0192d1e0(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_04380730 + 0x10);
  param_1[1] = 0;
  FUN_01933b30();
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_01933da0(param_1 + 3,param_2 + 0x10);
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_01934018(param_1 + 5,param_2 + 0x20);
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_018c86f0(param_1 + 7,param_2 + 0x30);
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_01934290(param_1 + 9,param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x58);
  param_1[0xb] = *(long *)(param_2 + 0x50);
  param_1[0xc] = lVar1;
  return;
}


