/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f031c; name: FUN_007f031c
 */


void FUN_007f031c(long param_1)

{
  uint uVar1;
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0x3f) = *(undefined2 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_1 + 0x1a);
  uVar1 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x30) = uVar1 >> 0x10 | uVar1 << 0x10;
  *(ushort *)(param_1 + 0x35) = *(ushort *)(param_1 + 0xe) >> 8 | *(ushort *)(param_1 + 0xe) << 8;
  *(ushort *)(param_1 + 0x37) = *(ushort *)(param_1 + 0x10) >> 8 | *(ushort *)(param_1 + 0x10) << 8;
  *(ushort *)(param_1 + 0x39) = *(ushort *)(param_1 + 0x12) >> 8 | *(ushort *)(param_1 + 0x12) << 8;
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x21);
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  FUN_007ee578(local_30,local_20);
  return;
}


