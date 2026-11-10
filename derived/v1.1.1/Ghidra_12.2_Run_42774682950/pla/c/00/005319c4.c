/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005319c4; name: FUN_005319c4
 */


void FUN_005319c4(long *param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = 1;
  puVar1 = PTR_DAT_04374b78 + 0x10;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
                    /* try { // try from 00531a10 to 00531a13 has its CatchHandler @ 00531a54 */
  FUN_002ef6d0(param_1 + 9);
  *param_1 = (long)&PTR_FUN_04185800;
  lVar2 = *param_2;
  *param_2 = 0;
  param_1[0xd] = lVar2;
  param_1[0xe] = 0;
  param_1[0xe] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0xf) = param_4;
  param_1[0x10] = 0;
  return;
}


