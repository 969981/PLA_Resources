/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00843a34; name: FUN_00843a34
 */


void FUN_00843a34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_0084375c(local_48,param_2);
  FUN_007ee660(local_38,local_48);
  if (local_38[0] == 0) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    uVar1 = FUN_007e336c();
    lVar2 = FUN_0081a750(0x88,uVar1);
    if (lVar2 == 0) {
      *(undefined8 *)(param_2 + 0xe0) = 0;
      local_48[0] = 0x10401;
    }
    else {
      FUN_007f1b70();
      *(long *)(param_2 + 0xe0) = lVar2;
      FUN_007f1b80(local_48,lVar2,*(undefined8 *)(param_2 + 0x20),0x9750);
      FUN_007ee660(local_38,local_48);
      if (local_38[0] != 0) goto LAB_00843a80;
      local_48[0] = 0;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar3 = local_48;
  }
  else {
LAB_00843a80:
    piVar3 = local_38;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


