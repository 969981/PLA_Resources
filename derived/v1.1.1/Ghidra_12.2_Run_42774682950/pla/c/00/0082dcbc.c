/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082dcbc; name: FUN_0082dcbc
 */


ulong FUN_0082dcbc(ushort *param_1,long param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_70 [4];
  int local_60 [4];
  long local_50;
  byte local_44 [4];
  int local_40 [4];
  
  if ((ulong)*param_1 != 0) {
    uVar5 = 0;
    pcVar6 = (char *)(*(long *)(param_1 + 4) + 0x1c);
    do {
      if ((*(long *)(pcVar6 + -0xc) == 0) || (*pcVar6 == -1)) {
        local_44[0] = (byte)uVar5;
        if ((~(uint)uVar5 & 0xff) == 0) {
          return 0xff;
        }
        lVar3 = FUN_0082deb0(param_2 + 8);
        local_60[0] = 0;
        local_40[0] = 0;
        local_50 = lVar3;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_40);
        puVar1 = (uint *)(param_1 + 0xc);
        if (*(code **)(param_1 + 0x2c) == (code *)0x0) {
          uVar8 = (uint)lVar3;
          uVar7 = (uint)((ulong)lVar3 >> 0x20);
          uVar7 = (uVar8 >> 8 & 0xff) + (uVar8 & 0xff) + ((uint)((ulong)lVar3 >> 0x10) & 0xff) +
                  (uVar8 >> 0x18) + (uVar7 & 0xff) + (uVar7 >> 8 & 0xff) +
                  ((ushort)((ulong)lVar3 >> 0x30) & 0xff) + (uint)(byte)((ulong)lVar3 >> 0x38);
          uVar8 = *puVar1;
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar7 / uVar8;
          }
          uVar5 = (ulong)(uVar7 - uVar2 * uVar8);
        }
        else {
          uVar5 = (**(code **)(param_1 + 0x2c))(&local_50,*puVar1);
        }
        plVar4 = *(long **)(*(long *)(param_1 + 0x10) + (uVar5 & 0xffffffff) * 0x18);
        goto joined_r0x0082ddc0;
      }
      uVar5 = uVar5 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (*param_1 != uVar5);
  }
  return 0xff;
joined_r0x0082ddc0:
  if (plVar4 == (long *)0x0) {
    local_40[0] = 0x2c0a;
LAB_0082ddf4:
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_70);
    FUN_007ee578(local_70,local_40);
    FUN_007ee660(local_60,local_70);
    local_40[0] = 0x2c0a;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_70);
    if (local_60[0] == local_40[0]) {
      FUN_0082df88(local_40,puVar1,&local_50,local_44);
      FUN_007ee660(local_60,local_40);
      if (local_60[0] == 0) {
        param_1[2] = param_1[2] + 1;
        lVar3 = *(long *)(param_1 + 4) + (ulong)local_44[0] * 0x20;
        *(long *)(lVar3 + 0x10) = param_2;
        *(byte *)(lVar3 + 0x1c) = local_44[0];
        *(undefined4 *)(lVar3 + 0x18) = param_3;
        return (ulong)local_44[0];
      }
    }
    return 0xff;
  }
  if (*plVar4 == local_50) {
    local_40[0] = 0;
    goto LAB_0082ddf4;
  }
  plVar4 = (long *)plVar4[6];
  goto joined_r0x0082ddc0;
}


