/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb454; name: FUN_007eb454
 */


void FUN_007eb454(undefined8 param_1,long param_2,long param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38;
  uint local_34;
  
  piVar3 = local_60;
  if ((param_3 == 0) || (param_4 == (int *)0x0)) {
LAB_007eb49c:
    local_50[0] = 0x10407;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    iVar1 = FUN_007eb6c4();
    iVar2 = FUN_007eb290();
    if (param_5 < (uint)(iVar2 + iVar1)) goto LAB_007eb49c;
    local_34 = 0;
    local_50[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_007eb58c(local_60,param_2,param_3,&local_34,param_5);
    FUN_007ee660(local_50,local_60);
    if (local_50[0] == 0) {
      uVar4 = (ulong)local_34;
      FUN_007e9304(local_60,param_2 + 0x10,param_3 + uVar4,&local_34,param_5 - local_34);
      FUN_007ee660(local_50,local_60);
      if (local_50[0] == 0) {
        *param_4 = ((int)(param_3 + uVar4) + local_34) - (int)param_3;
        local_60[0] = 0;
        local_38 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)&local_38);
        goto LAB_007eb4c0;
      }
    }
  }
  piVar3 = local_50;
LAB_007eb4c0:
  FUN_007ee578(param_1,piVar3);
  return;
}


