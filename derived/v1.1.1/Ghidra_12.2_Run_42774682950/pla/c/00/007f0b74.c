/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f0b74; name: FUN_007f0b74
 */


void FUN_007f0b74(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_608 [4];
  int local_5f8 [4];
  int local_5e8 [362];
  undefined4 local_38 [2];
  
  if ((*(int *)(param_2 + 8) == 0x32ab9864) && ((*(byte *)(param_2 + 0xc) & 0x7f) == 0xb)) {
    uVar1 = *(uint *)(param_2 + 0x5f8) - 0x1c;
    if (0x5a4 < uVar1) goto LAB_007f0c14;
    if ((char)*(byte *)(param_2 + 0xc) < '\0') {
      if (*param_3 == 1) {
        if ((*(uint *)(param_2 + 0x5f8) < *(byte *)(param_2 + 0x14) + 0x1c) ||
           (uVar1 = uVar1 - *(byte *)(param_2 + 0x14), uVar1 == 0)) {
          *(undefined1 *)(param_2 + 0xc) = 0xb;
          goto LAB_007f0bc8;
        }
        uVar3 = FUN_007e6cb0(1);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar1 / uVar3;
        }
        if ((uVar1 == uVar2 * uVar3) && (uVar1 < 0x5a5)) {
          FUN_007e6aac(local_5f8,local_5e8,(void *)(param_2 + 0x4c),uVar1,param_2 + 0x1d,8,param_3);
          if (local_5f8[0] == 0) {
            memcpy((void *)(param_2 + 0x4c),local_5e8,(ulong)uVar1);
            *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0x7f;
            local_608[0] = 0;
            local_38[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_608 | 4),(Result *)local_38);
            piVar4 = local_608;
          }
          else {
            piVar4 = local_5f8;
          }
          goto LAB_007f0c34;
        }
      }
      goto LAB_007f0c14;
    }
LAB_007f0bc8:
    local_5e8[0] = 0;
  }
  else {
LAB_007f0c14:
    local_5e8[0] = 0x2c03;
  }
  local_5f8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_5e8 | 4),(Result *)local_5f8);
  piVar4 = local_5e8;
LAB_007f0c34:
  FUN_007ee578(param_1,piVar4);
  return;
}


