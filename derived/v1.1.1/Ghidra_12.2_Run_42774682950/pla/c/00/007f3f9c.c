/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f3f9c; name: FUN_007f3f9c
 */


void FUN_007f3f9c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_38);
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_2 + 6) = 1;
  }
  local_48[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(local_38,local_48);
  if (param_2[2] != 0) {
    FUN_007fc610(local_48);
    FUN_007ee660(local_38,local_48);
  }
  if (local_38[0] == 0) {
    if ((char)param_2[6] == '\0') {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if ((*(long *)PTR_DAT_04377550 != 0) && (uVar1 = FUN_0082af74(), (uVar1 & 1) != 0)) {
      return;
    }
    local_48[0] = 0xc406;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_007ee660(param_1,piVar2);
  return;
}


