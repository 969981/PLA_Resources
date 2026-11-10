/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859d98; name: FUN_00859d98
 */


void FUN_00859d98(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  FUN_0085aed8(local_30,*(undefined8 *)PTR_DAT_043780f8);
  if (local_30[0] == 0) {
    if (0 < *(int *)(*(long *)(param_2 + 0xc88) + 4)) {
      FUN_007eb8b0(local_40);
      FUN_007ee660(local_30,local_40);
      if (local_30[0] != 0) goto LAB_00859dc8;
    }
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  else {
LAB_00859dc8:
    piVar1 = local_30;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


