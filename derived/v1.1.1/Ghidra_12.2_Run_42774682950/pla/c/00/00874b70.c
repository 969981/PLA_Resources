/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00874b70; name: FUN_00874b70
 */


void FUN_00874b70(undefined8 param_1,long param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == (undefined1 *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x19)) {
    local_30[0] = 0x10407;
  }
  else {
    *param_3 = *(undefined1 *)(param_2 + 8);
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    *(uint *)(param_3 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_3 + 5) = *(ushort *)(param_2 + 0x10) >> 8 | *(ushort *)(param_2 + 0x10) << 8;
    uVar1 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
    *(uint *)(param_3 + 7) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_3 + 0xb) = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8
    ;
    uVar2 = (*(ulong *)(param_2 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x20) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_3 + 0xd) = uVar2 >> 0x20 | uVar2 << 0x20;
    *(ushort *)(param_3 + 0x15) =
         *(ushort *)(param_2 + 0x28) >> 8 | *(ushort *)(param_2 + 0x28) << 8;
    *(ushort *)(param_3 + 0x17) =
         *(ushort *)(param_2 + 0x2a) >> 8 | *(ushort *)(param_2 + 0x2a) << 8;
    *param_4 = 0x19;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


