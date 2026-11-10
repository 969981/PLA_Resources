/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b9dc; name: FUN_0085b9dc
 */


void FUN_0085b9dc(undefined8 param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_007e5f0c();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x58))(local_38,param_2);
    if (local_38[0] == 0) {
      (**(code **)(*param_2 + 0x10))(param_2,0);
      param_2[0x72] = param_3;
      FUN_007e5bd8(param_3);
      FUN_007e5c2c(param_2[0x72]);
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar2 = local_48;
      goto LAB_0085ba88;
    }
  }
  else {
    local_38[0] = 0x10408;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar2 = local_38;
LAB_0085ba88:
  FUN_007ee578(param_1,piVar2);
  return;
}


