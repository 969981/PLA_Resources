/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c2654; name: FUN_030c2654
 */


void FUN_030c2654(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = &PTR_LAB_042b48f8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = &PTR_LAB_042b4938;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*(long *)(param_3 + 0x4b0) + 0x1c);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return;
}


