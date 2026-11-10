/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b1d20; name: FUN_005b1d20
 */


ulong FUN_005b1d20(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  short sVar5;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  if (*(char *)(param_1 + 0xd3) == '\0') {
    uVar3 = FUN_005b1f20(param_1,param_2,param_3);
    return uVar3;
  }
  if (param_2 != param_3) {
    sVar5 = *(short *)(param_1 + 0xd0);
    do {
      bVar1 = *param_2;
      uVar2 = *(ushort *)
               (&DAT_03a34e9c +
               ((ulong)(bVar1 >> 4) | (ulong)*(ushort *)(&DAT_03a36dbc + (long)sVar5 * 2) << 4) * 2)
      ;
      if (uVar2 != 0xffff) {
        if (uVar2 < 0x100) {
          local_68[0] = (undefined1)uVar2;
          uVar3 = FUN_005b1f20(param_1,local_68,(ulong)local_68 | 1);
          if (uVar3 != 0) goto LAB_005b1e64;
        }
        else if (uVar2 != 0x100) goto LAB_005b1ef8;
      }
      sVar5 = *(short *)(&DAT_03a36fbc +
                        ((ulong)(bVar1 >> 4) | (ulong)(byte)(&DAT_03a375bc)[sVar5] << 4) * 2);
      *(short *)(param_1 + 0xd0) = sVar5;
      bVar1 = *param_2;
      uVar2 = *(ushort *)
               (&DAT_03a34e9c +
               ((ulong)bVar1 & 0xf | (ulong)*(ushort *)(&DAT_03a36dbc + (long)sVar5 * 2) << 4) * 2);
      if (uVar2 != 0xffff) {
        if (uVar2 < 0x100) {
          local_64[0] = (undefined1)uVar2;
          uVar3 = FUN_005b1f20(param_1,local_64,(ulong)local_64 | 1);
          if (uVar3 != 0) {
LAB_005b1e64:
            if (*(long *)(param_1 + 0x10) == 0) {
              uVar4 = uVar3;
              if (4 < uVar3) {
                uVar4 = FUN_002f03c0(uVar3,
                                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                     ,0x435);
              }
              *(ulong *)(param_1 + 0x10) = uVar4;
            }
            *(undefined1 **)(param_1 + 0x18) = &LAB_005b1110;
            return uVar3;
          }
        }
        else if (uVar2 != 0x100) {
LAB_005b1ef8:
                    /* WARNING: Subroutine does not return */
          __assert_fail("emit == 256",
                        "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                        ,0x592,"huff_nibble");
        }
      }
      sVar5 = *(short *)(&DAT_03a36fbc +
                        ((ulong)bVar1 & 0xf | (ulong)(byte)(&DAT_03a375bc)[sVar5] << 4) * 2);
      param_2 = param_2 + 1;
      *(short *)(param_1 + 0xd0) = sVar5;
    } while (param_3 != param_2);
  }
  return 0;
}


