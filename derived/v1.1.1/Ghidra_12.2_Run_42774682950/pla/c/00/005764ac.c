/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005764ac; name: FUN_005764ac
 */


void FUN_005764ac(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  puVar1 = PTR_DAT_04374dc8;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
                    /* try { // try from 005764f8 to 005764fb has its CatchHandler @ 00576510 */
  FUN_002ef6d0(param_1 + 3);
  return;
}


