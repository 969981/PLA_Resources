/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859f30; name: FUN_00859f30
 */


void FUN_00859f30(undefined8 param_1,long param_2)

{
  int *piVar1;
  ErrorResultVariant *this;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 9) == '\0') {
    local_38[0] = 0x6c05;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar1 = local_38;
  }
  else {
    FUN_0086d53c(local_38,*(undefined8 *)(param_2 + 0x20));
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    local_48[0] = 0x6c05;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    if (local_38[0] == local_48[0]) {
      local_48[0] = 0x6c05;
    }
    else {
      if (local_38[0] != 0) {
        piVar1 = local_38;
        goto LAB_00859fe0;
      }
      this = (ErrorResultVariant *)((ulong)local_48 | 4);
      local_48[0] = 0;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    piVar1 = local_48;
  }
LAB_00859fe0:
  FUN_007ee578(param_1,piVar1);
  return;
}


