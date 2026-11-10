/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe660; name: FUN_007fe660
 */


void FUN_007fe660(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 != 0) {
    uVar1 = (*(uint *)(param_3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 4) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar2 = (*(ulong *)(param_3 + 8) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 8) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x10) = uVar2 >> 0x20 | uVar2 << 0x20;
    *(ushort *)(param_2 + 0x18) =
         *(ushort *)(param_3 + 0x10) >> 8 | *(ushort *)(param_3 + 0x10) << 8;
    *(ushort *)(param_2 + 0x1a) =
         *(ushort *)(param_3 + 0x12) >> 8 | *(ushort *)(param_3 + 0x12) << 8;
    uVar2 = (*(ulong *)(param_3 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 0x14) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x20) = uVar2 >> 0x20 | uVar2 << 0x20;
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x1c);
    *(bool *)(param_2 + 0x29) = *(char *)(param_3 + 0x1d) != '\0';
    uVar1 = (*(uint *)(param_3 + 0x1e) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x1e) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x2c) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_3 + 0x22) & 0xff00ff00) >> 8 |
            (*(uint *)(param_3 + 0x22) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x30) = uVar1 >> 0x10 | uVar1 << 0x10;
    if (0x25 < param_4) {
      local_30[0] = 0;
      goto LAB_007fe70c;
    }
  }
  local_30[0] = 0x10407;
LAB_007fe70c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


