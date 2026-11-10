/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825a20; name: FUN_00825a20
 */


void FUN_00825a20(long *param_1)

{
  FUN_0085082c();
  *param_1 = (long)(PTR_DAT_04377cc0 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = 0xfdfd;
  FUN_0083fbc0(param_1 + 0x13);
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  FUN_007e8190(param_1 + 0x20);
  FUN_007e8434(param_1 + 0x20);
  memset(param_1 + 0x31,0,0x10);
  FUN_007e8190(param_1 + 0x33);
  FUN_007e8434(param_1 + 0x33);
  memset(param_1 + 0x44,0,0x10);
  FUN_007e8190(param_1 + 0x46);
  FUN_007e8434(param_1 + 0x46);
  memset(param_1 + 0x57,0,0x10);
  FUN_007e8190(param_1 + 0x59);
  FUN_007e8434(param_1 + 0x59);
  memset(param_1 + 0x6a,0,0x10);
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0x362) = 0;
  return;
}


