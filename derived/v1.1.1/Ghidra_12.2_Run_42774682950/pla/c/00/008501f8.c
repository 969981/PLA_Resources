/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008501f8; name: FUN_008501f8
 */


void FUN_008501f8(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (undefined1 *)0x0) || (param_4 < 0xb)) {
    local_30[0] = 0x10407;
  }
  else {
    *(undefined1 *)(param_2 + 8) = *param_3;
    uVar1 = (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_3 + 1) & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_2 + 0x10) = uVar1 >> 0x20 | uVar1 << 0x20;
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_3 + 9) >> 8 | *(ushort *)(param_3 + 9) << 8;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


