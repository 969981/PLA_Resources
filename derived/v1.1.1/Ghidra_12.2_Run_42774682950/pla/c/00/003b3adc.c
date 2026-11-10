/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b3adc; name: FUN_003b3adc
 */


void FUN_003b3adc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04373ef8 + 0x10);
                    /* try { // try from 003b3b08 to 003b3b0f has its CatchHandler @ 003b3b9c */
  FUN_0032dd08(param_1 + 2);
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(int *)PTR_DAT_04373f40 != 0) {
                    /* try { // try from 003b3b70 to 003b3b7b has its CatchHandler @ 003b3b80 */
    FUN_0032d2b0(PTR_DAT_04373f40);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  param_1[10] = (long)puVar1;
  param_1[9] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[0xb] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0xa4) = 1;
  param_1[0xe] = (long)puVar1;
  param_1[0xd] = (long)puVar1;
  param_1[0x10] = (long)puVar1;
  param_1[0xf] = (long)puVar1;
  param_1[0x12] = (long)puVar1;
  param_1[0x11] = (long)puVar1;
  return;
}


