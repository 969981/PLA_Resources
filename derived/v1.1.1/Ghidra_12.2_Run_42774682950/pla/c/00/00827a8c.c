/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827a8c; name: FUN_00827a8c
 */


void FUN_00827a8c(undefined8 param_1,uint *param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined4 local_70 [4];
  int local_60 [4];
  int local_50 [4];
  ushort local_34 [2];
  
  local_60[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_50);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    uVar1 = *param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((uint)param_3[1] + (uint)*param_3) / uVar1;
    }
    uVar4 = (ulong)(((uint)param_3[1] + (uint)*param_3) - uVar2 * uVar1);
  }
  else {
    uVar4 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
  }
  pbVar7 = *(byte **)(*(long *)(param_2 + 2) + (uVar4 & 0xffffffff) * 0x18);
  if (pbVar7 == (byte *)0x0) {
LAB_00827b4c:
    local_50[0] = 0x2c0a;
  }
  else {
    if (*pbVar7 == *param_3) goto LAB_00827b34;
    do {
      do {
        pbVar7 = *(byte **)(pbVar7 + 0x30);
        if (pbVar7 == (byte *)0x0) goto LAB_00827b4c;
      } while (*pbVar7 != *param_3);
LAB_00827b34:
    } while (pbVar7[1] != param_3[1]);
    local_50[0] = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  FUN_007ee578(local_70,local_50);
  FUN_007ee660(local_60,local_70);
  if (local_60[0] == 0) {
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar1 = *param_2;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = ((uint)param_3[1] + (uint)*param_3) / uVar1;
      }
      uVar4 = (ulong)(((uint)param_3[1] + (uint)*param_3) - uVar2 * uVar1);
    }
    else {
      uVar4 = (**(code **)(param_2 + 0x10))(param_3,*param_2);
    }
    FUN_00828e40(local_50,*(long *)(param_2 + 2) + (uVar4 & 0xffffffff) * 0x18,param_3);
    FUN_007ee660(local_60,local_50);
    pcVar8 = *(code **)(param_2 + 0x10);
    if (pcVar8 != (code *)0x0) goto LAB_00827bac;
LAB_00827c1c:
    uVar1 = *param_2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((uint)param_3[1] + (uint)*param_3) / uVar1;
    }
    uVar4 = (ulong)(((uint)param_3[1] + (uint)*param_3) - uVar2 * uVar1);
  }
  else {
    local_50[0] = 0x2c0a;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
    pcVar8 = *(code **)(param_2 + 0x10);
    if (pcVar8 == (code *)0x0) goto LAB_00827c1c;
LAB_00827bac:
    uVar4 = (*pcVar8)(param_3,*param_2);
    uVar4 = uVar4 & 0xffffffff;
  }
  FUN_00828fb8(local_50,*(long *)(param_2 + 2) + uVar4 * 0x18,param_3,param_4);
  FUN_007ee660(local_60,local_50);
  local_70[0] = 0;
  local_50[0] = 0xc10;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  if (local_60[0] == local_50[0]) {
    local_34[0] = **(ushort **)(param_2 + 6);
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      uVar1 = (uint)(local_34[0] >> 8) + (local_34[0] & 0xff);
      uVar2 = *param_2;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      uVar5 = (ulong)(uVar1 - uVar3 * uVar2);
    }
    else {
      uVar5 = (**(code **)(param_2 + 0x10))(local_34,*param_2);
    }
    FUN_00828e40(local_50,*(long *)(param_2 + 2) + (uVar5 & 0xffffffff) * 0x18,local_34);
    FUN_007ee660(local_60,local_50);
    FUN_00828fb8(local_50,*(long *)(param_2 + 2) + uVar4 * 0x18,param_3,param_4);
    FUN_007ee660(local_60,local_50);
  }
  else if (local_60[0] != 0) {
    piVar6 = local_60;
    goto LAB_00827d44;
  }
  local_50[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
  piVar6 = local_50;
LAB_00827d44:
  FUN_007ee578(param_1,piVar6);
  return;
}


