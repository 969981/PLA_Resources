/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f14b8; name: FUN_030f14b8
 */


void FUN_030f14b8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  param_1[4] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_030f1614(param_2 + 0x6a8,param_1,&LAB_030f1688,0);
  return;
}


