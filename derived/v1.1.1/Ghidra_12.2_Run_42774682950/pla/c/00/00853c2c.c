/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00853c2c; name: FUN_00853c2c
 */


void FUN_00853c2c(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  ulong __n;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if ((param_3 != (undefined1 *)0x0) && (0x59f < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    *(undefined1 *)(param_2 + 10) = param_3[2];
    uVar1 = (*(uint *)(param_3 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 3) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    __n = (ulong)(byte)param_3[7] << 0x18 | (ulong)(byte)param_3[8] << 0x10 |
          (ulong)(byte)param_3[9] << 8 | (ulong)(byte)param_3[10];
    uVar1 = (uint)__n;
    *(uint *)(param_2 + 0x10) = uVar1;
    if ((uVar1 < 0x596) &&
       (memcpy((void *)(param_2 + 0x14),param_3 + 0xb,__n),
       *(int *)(param_2 + 0x10) + 0xb ==
       ((int)(param_3 + 0xb) + *(int *)(param_2 + 0x10)) - (int)param_3)) {
      local_40[0] = 0;
      goto LAB_00853ce8;
    }
  }
  local_40[0] = 0x10407;
LAB_00853ce8:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


