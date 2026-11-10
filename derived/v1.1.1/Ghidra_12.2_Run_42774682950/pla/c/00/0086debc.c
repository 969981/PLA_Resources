/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086debc; name: FUN_0086debc
 */


void FUN_0086debc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_3 + 4) < 1) {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar1 = local_38;
  }
  else {
    local_38[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    FUN_007eb8b0(local_48,param_3);
    FUN_007ee660(local_38,local_48);
    if (local_38[0] == 0) {
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
    }
    else {
      piVar1 = local_38;
    }
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


