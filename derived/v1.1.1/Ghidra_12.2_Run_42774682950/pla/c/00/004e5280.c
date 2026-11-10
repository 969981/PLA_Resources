/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e5280; name: FUN_004e5280
 */


undefined8 FUN_004e5280(long param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(uint *)(param_1 + 0x5cc) >> 2 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x5cc) & 0x40000) == 0 && param_3 == 0) {
        FUN_004c99a0(param_1,0x28,0x1e3,0x152,"external/openssl/ssl/statem/extensions.c",0x37c);
        return 0;
      }
      return 1;
    }
  }
  else if ((*(int *)(param_1 + 0x740) != 0) &&
          ((*(uint *)(param_1 + 0x5cc) & 0x40000) == 0 && param_3 == 0)) {
    FUN_004c99a0(param_1,0x28,0x1e3,0x152,"external/openssl/ssl/statem/extensions.c",0x388);
    return 0;
  }
  return 1;
}


