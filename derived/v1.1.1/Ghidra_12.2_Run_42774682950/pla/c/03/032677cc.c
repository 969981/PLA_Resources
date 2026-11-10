/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032677cc; name: FUN_032677cc
 */


void FUN_032677cc(long *param_1)

{
  FUN_032c7b9c(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[0x1a],0x10,*(uint *)((long)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  if (*param_1 == 0) {
    return;
  }
  FUN_032d647c();
  return;
}


