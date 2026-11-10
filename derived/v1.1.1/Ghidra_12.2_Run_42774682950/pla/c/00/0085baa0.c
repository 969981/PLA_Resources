/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085baa0; name: FUN_0085baa0
 */


void FUN_0085baa0(undefined8 param_1,long param_2)

{
  undefined4 local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_0085b9dc(local_38);
  if (local_38[0] == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0x48;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "WanBackgroundLoginJob::Logout";
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_48);
  return;
}


