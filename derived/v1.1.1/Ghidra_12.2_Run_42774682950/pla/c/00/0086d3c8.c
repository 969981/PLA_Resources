/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086d3c8; name: FUN_0086d3c8
 */


void FUN_0086d3c8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int local_78 [4];
  undefined4 local_68 [8];
  int local_48 [4];
  undefined4 local_38 [2];
  
  local_48[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_68);
  FUN_0086d304(local_68,param_2);
  FUN_007ee660(local_48,local_68);
  if (local_48[0] == 0) {
    FUN_007e3400(local_68);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    FUN_0086e2d0(param_2,*(undefined8 *)(param_3 + 8));
    lVar1 = param_2 + 0xa20;
    FUN_007e5bd8(lVar1);
    FUN_007e5bd8(param_2 + 0xa50);
    FUN_007e5c24(lVar1,PTR_LAB_043783c8,param_2);
    FUN_0086e0c4(local_78,param_2,lVar1,param_2 + 0xa50,param_2 + 0xef0,param_2 + 0xa80,
                 param_2 + 0xcb0,local_68);
    FUN_007ee660(local_48,local_78);
    if (local_48[0] == 0) {
      FUN_0086f01c(param_2);
      local_78[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_38);
      piVar2 = local_78;
    }
    else {
      piVar2 = local_48;
    }
    FUN_007ee578(param_1,piVar2);
    FUN_007e34a4(local_68);
  }
  else {
    FUN_007ee578(param_1,local_48);
  }
  return;
}


