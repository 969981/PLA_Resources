/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008533e8; name: FUN_008533e8
 */


void FUN_008533e8(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (((param_3 != (undefined1 *)0x0) && (param_4 != (int *)0x0)) && (0x59f < param_5)) {
    *param_3 = *(undefined1 *)(param_2 + 8);
    param_3[1] = *(undefined1 *)(param_2 + 9);
    param_3[2] = *(undefined1 *)(param_2 + 10);
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_3 + 3) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    *(uint *)(param_3 + 7) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (*(uint *)(param_2 + 0x10) < 0x596) {
      memcpy(param_3 + 0xb,(void *)(param_2 + 0x14),(ulong)*(uint *)(param_2 + 0x10));
      iVar2 = ((int)(param_3 + 0xb) + *(int *)(param_2 + 0x10)) - (int)param_3;
      *param_4 = iVar2;
      if (*(int *)(param_2 + 0x10) + 0xb == iVar2) {
        local_48[0] = 0;
        goto LAB_008534a0;
      }
    }
  }
  local_48[0] = 0x10407;
LAB_008534a0:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_48);
  return;
}


