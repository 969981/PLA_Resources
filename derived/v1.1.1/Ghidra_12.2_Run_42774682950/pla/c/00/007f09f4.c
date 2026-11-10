/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f09f4; name: FUN_007f09f4
 */


void FUN_007f09f4(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_610 [4];
  int local_600 [4];
  int local_5f0 [362];
  undefined4 local_48 [2];
  
  piVar4 = local_610;
  if ((*(int *)(param_2 + 8) == 0x32ab9864) && ((*(byte *)(param_2 + 0xc) & 0x7f) == 0xb)) {
    uVar2 = *(uint *)(param_2 + 0x5f8);
    if ((0x5a4 < uVar2 - 0x1c) || ((char)*(byte *)(param_2 + 0xc) < '\0')) goto LAB_007f0aa8;
    if (*param_3 == 1) {
      if (0x1c < uVar2) {
        iVar1 = 0;
        if (*(byte *)(param_2 + 0x14) + 0x1c <= uVar2) {
          iVar1 = (uVar2 - 0x1c) - (uint)*(byte *)(param_2 + 0x14);
        }
        uVar3 = FUN_007e6cb0(1);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = ((uVar3 + iVar1) - 1) / uVar3;
        }
        uVar2 = uVar2 * uVar3;
        if (uVar2 < 0x5a5) {
          memset(local_5f0,0xff,0x5a4);
          memcpy(local_5f0,(void *)(param_2 + 0x4c),(long)iVar1);
          FUN_007e68d0(local_600,(void *)(param_2 + 0x4c),local_5f0,uVar2,param_2 + 0x1d,8,param_3);
          if (local_600[0] == 0) {
            *(uint *)(param_2 + 0x5f8) = uVar2 + 0x1c;
            *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x80;
            local_610[0] = 0;
            local_48[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_610 | 4),(Result *)local_48);
          }
          else {
            piVar4 = local_600;
          }
          goto LAB_007f0acc;
        }
        goto LAB_007f0aa8;
      }
LAB_007f0a6c:
      local_5f0[0] = 0;
    }
    else {
      if (*param_3 == 0) goto LAB_007f0a6c;
      local_5f0[0] = 0xc0b;
    }
  }
  else {
LAB_007f0aa8:
    local_5f0[0] = 0x10408;
  }
  local_600[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_5f0 | 4),(Result *)local_600);
  piVar4 = local_5f0;
LAB_007f0acc:
  FUN_007ee578(param_1,piVar4);
  return;
}


