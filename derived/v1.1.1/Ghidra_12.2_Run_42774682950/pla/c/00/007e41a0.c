/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e41a0; name: FUN_007e41a0
 */


void FUN_007e41a0(undefined8 param_1,long param_2,uint *param_3,int *param_4,uint param_5)

{
  uint *__s1;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if ((param_3 != (uint *)0x0) && (param_4 != (int *)0x0)) {
    __s1 = (uint *)(param_2 + 8);
    iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
    if (iVar1 == 0) {
      if (1 < param_5) goto LAB_007e4280;
    }
    else {
      iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
      uVar2 = 6;
      if (iVar1 != 0) {
        iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03a7160c,0xc);
        uVar2 = 6;
        if (iVar1 != 0) {
          uVar2 = 0x12;
        }
      }
      if (uVar2 <= param_5) {
LAB_007e4280:
        iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
        puVar3 = param_3;
        if (iVar1 != 0) {
          iVar1 = memcmp(__s1,&DAT_03a7160c,0x10);
          if ((iVar1 == 0) ||
             (iVar1 = memcmp((void *)(param_2 + 0xc),&DAT_03a7160c,0xc), iVar1 == 0)) {
            uVar2 = (*__s1 & 0xff00ff00) >> 8 | (*__s1 & 0xff00ff) << 8;
            puVar3 = param_3 + 1;
            *param_3 = uVar2 >> 0x10 | uVar2 << 0x10;
          }
          else {
            memcpy(param_3,__s1,0x10);
            puVar3 = param_3 + 4;
          }
        }
        *(ushort *)puVar3 = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
        *param_4 = ((int)puVar3 - (int)param_3) + 2;
        local_58[0] = 0;
        goto LAB_007e423c;
      }
    }
  }
  local_58[0] = 0x10407;
LAB_007e423c:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_58);
  return;
}


