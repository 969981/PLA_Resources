/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00834dd0; name: FUN_00834dd0
 */


void FUN_00834dd0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ErrorResultVariant *this;
  undefined1 auStack_50 [16];
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_40[0] = 0x10407;
LAB_00834e20:
    this = (ErrorResultVariant *)((ulong)local_40 | 4);
  }
  else {
    if ((*(int *)(param_2 + 0x68) == 1) ||
       (uVar2 = FUN_007e5f0c(*(undefined8 *)(param_2 + 0xb0)), (uVar2 & 1) != 0)) {
      local_40[0] = 0x10408;
      goto LAB_00834e20;
    }
    if (*(char *)(param_2 + 0x780) != '\0') {
      iVar1 = FUN_007e5ee4(*(undefined8 *)(param_2 + 0xb0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xb0) + 0x10))(*(long **)(param_2 + 0xb0),1);
      }
      FUN_0083b820(local_40,*(undefined8 *)(param_2 + 0xb0),param_3);
      if (local_40[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0xb0),0);
      }
      goto LAB_00834e38;
    }
    FUN_007e5bd8(param_3);
    FUN_007e5c2c(param_3);
    this = (ErrorResultVariant *)((ulong)local_40 | 4);
    local_28[0] = 0;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    FUN_007ee578(auStack_50,local_40);
    FUN_007e5c40(param_3,auStack_50);
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
LAB_00834e38:
  FUN_007ee578(param_1,local_40);
  return;
}


