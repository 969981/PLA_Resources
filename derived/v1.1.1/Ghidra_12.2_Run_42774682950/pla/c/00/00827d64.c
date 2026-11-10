/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827d64; name: FUN_00827d64
 */


undefined8 FUN_00827d64(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined8 uVar6;
  int local_40 [4];
  undefined4 local_30 [4];
  
  puVar5 = *(uint **)(param_1 + 0x110);
  if (*(code **)(puVar5 + 0x10) == (code *)0x0) {
    uVar1 = *puVar5;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = ((uint)param_2[1] + (uint)*param_2) / uVar1;
    }
    uVar3 = (ulong)(((uint)param_2[1] + (uint)*param_2) - uVar2 * uVar1);
  }
  else {
    uVar3 = (**(code **)(puVar5 + 0x10))(param_2,*puVar5);
  }
  pbVar4 = *(byte **)(*(long *)(puVar5 + 2) + (uVar3 & 0xffffffff) * 0x18);
  if (pbVar4 == (byte *)0x0) {
LAB_00827e10:
    local_30[0] = 0x2c0a;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    uVar6 = 0;
  }
  else {
    if (*pbVar4 == *param_2) goto LAB_00827de4;
    do {
      do {
        pbVar4 = *(byte **)(pbVar4 + 0x30);
        if (pbVar4 == (byte *)0x0) goto LAB_00827e10;
      } while (*pbVar4 != *param_2);
LAB_00827de4:
    } while (pbVar4[1] != param_2[1]);
    uVar6 = *(undefined8 *)(pbVar4 + 8);
    local_30[0] = 0;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
  }
  FUN_007ee578(local_40,local_30);
  if (local_40[0] != 0) {
    uVar6 = 0;
  }
  return uVar6;
}


