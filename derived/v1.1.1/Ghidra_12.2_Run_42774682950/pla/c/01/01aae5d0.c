/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aae5d0; name: FUN_01aae5d0
 */


void FUN_01aae5d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_01abb2f4();
  *param_1 = &PTR_FUN_0423ab68;
  param_1[0x99] = 0;
  param_1[0x3e] = &PTR_LAB_0423ad78;
  param_1[9] = &PTR_LAB_0423ac70;
  param_1[10] = &PTR_LAB_0423ad50;
  param_1[0x9a] = 0;
  FUN_01aae8f4(param_1 + 0x99,param_4);
  param_1[0x9b] = *(undefined8 *)(param_4 + 0x10);
  return;
}


