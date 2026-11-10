/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086dd90; name: FUN_0086dd90
 */


void FUN_0086dd90(undefined8 param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    lVar1 = param_2 + 8;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    if (0 < *(int *)(lVar1 + 4)) {
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)(local_28 + 4));
      FUN_007ee578(param_1,local_28);
      return;
    }
  }
  piVar2 = local_50;
  FUN_007eb6ec(local_40,lVar1,2,2,0x11);
  if (local_40[0] == 0) {
    FUN_0086dcc4(local_50,param_2,lVar1);
    FUN_007ee660(local_40,local_50);
    if (local_40[0] == 0) {
      local_50[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      goto LAB_0086de6c;
    }
    FUN_007eb8b0(local_50,lVar1);
  }
  piVar2 = local_40;
LAB_0086de6c:
  FUN_007ee578(param_1,piVar2);
  return;
}


