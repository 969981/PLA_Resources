/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314be50; name: FUN_0314be50
 */


void FUN_0314be50(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  puVar1 = PTR_DAT_043888d8;
  *(undefined2 *)(param_1 + 3) = 0x200;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[6] = 0x3400000034000000;
  param_1[7] = -1;
  return;
}


