/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b738; name: FUN_0085b738
 */


void FUN_0085b738(int *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10407;
  }
  else {
    uVar1 = FUN_007e5f0c();
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_2 + 0x90) == 0) {
        *(long *)(param_2 + 0x58) = param_3;
        FUN_007e5bd8(param_3);
        FUN_007e5c2c(*(undefined8 *)(param_2 + 0x58));
      }
      else {
        FUN_0085baa0(param_1,*(long *)(param_2 + 0x90),param_2 + 0x60);
        if (*param_1 != 0) {
          return;
        }
        *(long *)(param_2 + 0x58) = param_3;
        FUN_007e5bd8(param_3);
        FUN_007e5c2c(*(undefined8 *)(param_2 + 0x58));
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x90),1);
      }
      *(undefined8 *)(param_2 + 0x30) = 0x50;
      *(undefined8 *)(param_2 + 0x38) = 1;
      *(char **)(param_2 + 0x40) = "WanLoginJob::WaitLogout";
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0x10408;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


