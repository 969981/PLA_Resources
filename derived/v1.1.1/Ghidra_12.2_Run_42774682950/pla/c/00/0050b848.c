/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050b848; name: FUN_0050b848
 */


void FUN_0050b848(long param_1,uint param_2)

{
  if (param_2 < 0x80) {
    FUN_002e6a9c(param_1 + 200,param_2);
    return;
  }
  if (param_2 < 0x800) {
    FUN_002e6a9c(param_1 + 200,param_2 >> 6 & 0x1f | 0xffffffc0);
    FUN_002e6a9c(param_1 + 200,param_2 & 0x3f | 0xffffff80);
    return;
  }
  if (param_2 >> 0x10 == 0) {
    FUN_002e6a9c(param_1 + 200,param_2 >> 0xc & 0xf | 0xffffffe0);
  }
  else {
    if (param_2 >> 0x15 != 0) {
      return;
    }
    FUN_002e6a9c(param_1 + 200,param_2 >> 0x12 & 7 | 0xfffffff0);
    FUN_002e6a9c(param_1 + 200,param_2 >> 0xc & 0x3f | 0xffffff80);
  }
  FUN_002e6a9c(param_1 + 200,param_2 >> 6 & 0x3f | 0xffffff80);
  FUN_002e6a9c(param_1 + 200,param_2 & 0x3f | 0xffffff80);
  return;
}


