/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870cd8; name: FUN_00870cd8
 */


void FUN_00870cd8(long param_1)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((*(int *)(param_1 + 0x6f8) != 1) && (*(int *)(param_1 + 0x6f8) - 2U < 3)) {
    FUN_007ee578(local_38,param_1 + 0x6fc);
    if (local_38[0] != 0) {
      FUN_007ee578(local_38,param_1 + 0x6fc);
      FUN_007ee660(param_1 + 0x728,local_38);
      *(undefined4 *)(param_1 + 0x7b8) = 5;
      local_38[0] = 0x6488;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
      if (*(int *)(param_1 + 0x728) == local_38[0]) {
        *(undefined1 *)(param_1 + 0x1828) = 1;
      }
    }
  }
  FUN_00870db0(param_1);
  FUN_00870f58(param_1);
  FUN_0087128c(param_1);
  FUN_0087141c(param_1);
  FUN_008714d4(param_1);
  FUN_00871bc8(param_1);
  return;
}


