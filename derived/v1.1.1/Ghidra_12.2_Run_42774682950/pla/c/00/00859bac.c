/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859bac; name: FUN_00859bac
 */


void FUN_00859bac(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  int local_60 [4];
  int local_50 [4];
  int local_40;
  undefined4 uStack_3c;
  
  local_50[0] = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_40);
  lVar4 = *(long *)(param_3 + 8);
  if (lVar4 == 0) {
    iVar1 = nn::account::GetNetworkServiceAccountId
                      ((NetworkServiceAccountId *)&local_40,(UserHandle *)(param_4 + 8));
    lVar4 = CONCAT44(uStack_3c,local_40);
    if (iVar1 != 0) {
      lVar4 = 0;
    }
  }
  lVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_007ec6ec(&local_40,lVar2 + 0x18,param_3 + 0x18);
  lVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_007ec6ec(&local_40,lVar2 + 0x148,param_3 + 0x148);
  lVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(long *)(lVar2 + 8) = lVar4;
  lVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_007ec6ec(&local_40,lVar4 + 0x278,param_3 + 0x278);
  local_40 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_60);
  FUN_007ee660(param_2 + 5,&local_40);
  FUN_00859e50(local_60,param_2);
  if ((local_60[0] != 0) && (0 < *(int *)(param_2[0x191] + 4))) {
    FUN_007eb8b0(&local_40);
    FUN_007ee660(local_60,&local_40);
  }
  FUN_007ee660(local_50,local_60);
  if (local_50[0] == 0) {
    *(undefined1 *)((long)param_2 + 9) = 3;
    local_40 = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_60);
    piVar3 = &local_40;
  }
  else {
    FUN_007ee660(param_2 + 5,local_50);
    *(undefined1 *)((long)param_2 + 9) = 5;
    piVar3 = local_50;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


