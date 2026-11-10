/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2c58; name: FUN_007f2c58
 */


void FUN_007f2c58(undefined8 param_1,long *param_2,long param_3)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_2[2] == 0) || (*(char *)((long)param_2 + 9) != '\0')) {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  else {
    (**(code **)(*param_2 + 0x1c8))(local_38,param_2);
    if (local_38[0] == 0) {
      FUN_007fc8a4(param_2[2],param_3 + 8);
      *(undefined1 *)((long)param_2 + 9) = 1;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
      goto LAB_007f2ca0;
    }
  }
  piVar1 = local_38;
LAB_007f2ca0:
  FUN_007ee578(param_1,piVar1);
  return;
}


