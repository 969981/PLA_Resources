/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085506c; name: FUN_0085506c
 */


void FUN_0085506c(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  int local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
LAB_008550b4:
    if (param_4 != 0) {
      if (*(long *)(param_2 + 0x80) == 0) goto LAB_0085512c;
      FUN_0084524c(local_50,*(long *)(param_2 + 0x80),param_4);
      if (local_50[0] != 0) goto LAB_0085514c;
    }
    if (param_5 != 0) {
      if (*(long *)(param_2 + 0x88) == 0) goto LAB_0085512c;
      FUN_0084524c(local_50,*(long *)(param_2 + 0x88),param_5);
      if (local_50[0] != 0) goto LAB_0085514c;
    }
    if (param_6 != 0) {
      if (*(long *)(param_2 + 0x90) == 0) goto LAB_0085512c;
      FUN_0084524c(local_50,*(long *)(param_2 + 0x90),param_6);
      if (local_50[0] != 0) goto LAB_0085514c;
    }
    local_50[0] = 0;
  }
  else {
    if (*(long *)(param_2 + 0x78) != 0) {
      FUN_0084524c(local_50);
      if (local_50[0] != 0) goto LAB_0085514c;
      goto LAB_008550b4;
    }
LAB_0085512c:
    local_50[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
LAB_0085514c:
  FUN_007ee578(param_1,local_50);
  return;
}


