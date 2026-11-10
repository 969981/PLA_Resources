/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129e4ec; name: FUN_0129e4ec
 */


void FUN_0129e4ec(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d37d1c(param_1,param_2,param_3 & 1,0);
  *param_1 = &PTR_LAB_04202c48;
  param_1[9] = &PTR_LAB_04202d48;
  param_1[10] = &PTR_LAB_04202d90;
  FUN_0129e538(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0xd1) = 0;
  return;
}


