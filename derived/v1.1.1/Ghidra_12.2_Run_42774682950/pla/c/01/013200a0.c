/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013200a0; name: FUN_013200a0
 */


void FUN_013200a0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_042052e0;
  param_1[9] = &PTR_LAB_042053e8;
  param_1[10] = &PTR_LAB_04205430;
  FUN_013200f0(param_1 + 0xae);
  memset(param_1 + 0xe4,0,0x148);
  return;
}


