/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fc69c; name: FUN_007fc69c
 */


void FUN_007fc69c(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  puVar7 = local_60;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  FUN_007ee578(param_1,local_50);
  bVar1 = FUN_007f233c(param_3);
  if (DAT_043a3f80 == 0) {
    bVar2 = (**(code **)(*param_2 + 0x200))(param_2);
    if (bVar2 <= bVar1) goto LAB_007fc728;
LAB_007fc77c:
    local_50[0] = 0x6468;
LAB_007fc79c:
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    puVar7 = local_50;
  }
  else {
    if (bVar1 < DAT_043a3f80) goto LAB_007fc77c;
LAB_007fc728:
    bVar1 = FUN_007f233c(param_3);
    if (DAT_043a3f80 == 0) {
      bVar2 = (**(code **)(*param_2 + 0x200))(param_2);
      if (bVar1 <= bVar2) goto LAB_007fc768;
LAB_007fc798:
      local_50[0] = 0x6467;
      goto LAB_007fc79c;
    }
    if (DAT_043a3f80 < bVar1) goto LAB_007fc798;
LAB_007fc768:
    sVar3 = FUN_007f2314(param_3);
    if (sVar3 < *(short *)((long)param_2 + 0x5a)) goto LAB_007fc77c;
    sVar3 = FUN_007f2314(param_3);
    if (*(short *)((long)param_2 + 0x5a) < sVar3) goto LAB_007fc798;
    uVar6 = FUN_007f247c(param_3);
    if ((uVar6 & 1) == 0) goto LAB_007fc7c0;
    FUN_007f235c(local_60,param_3,local_50,0x10);
    iVar5 = memcmp(param_2 + 0x44,local_50,0x10);
    if (iVar5 == 0) goto LAB_007fc7c0;
    local_38[0] = 0;
    local_60[0] = 0x6c4d;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
  }
  FUN_007ee660(param_1,puVar7);
LAB_007fc7c0:
  if ((param_4 & 1) != 0) {
    sVar3 = (**(code **)(*param_3 + 0x18))(param_3);
    sVar4 = (**(code **)(*param_3 + 0x20))(param_3);
    if (sVar3 == sVar4) {
      local_50[0] = 0x6c1d;
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
      if ((uVar6 & 1) != 0) {
        return;
      }
      local_50[0] = 0x6c4f;
    }
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    FUN_007ee660(param_1,local_50);
  }
  return;
}


