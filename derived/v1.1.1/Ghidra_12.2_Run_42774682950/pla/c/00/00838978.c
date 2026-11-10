/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838978; name: FUN_00838978
 */


undefined8 FUN_00838978(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((0xf < param_3) && (bVar3 = *(byte *)(param_2 + 0xf), bVar3 < 0x19)) {
    uVar4 = *(ushort *)(param_2 + 1);
    uVar2 = *(uint *)(param_2 + 0xb);
    uVar7 = (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 3) & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    lVar1 = *(long *)PTR_DAT_04377550 + 0x1b8;
    uVar6 = FUN_0083fd98(lVar1);
    if ((uVar6 == (uVar7 >> 0x20 | uVar7 << 0x20)) &&
       (uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8, uVar5 = FUN_0083fda0(lVar1),
       (uVar2 >> 0x10 | uVar2 << 0x10) == (uVar5 & 0xffff))) {
      uVar4 = uVar4 >> 8 | uVar4 << 8;
      uVar7 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xa8));
      if (((uVar7 & 1) == 0) || (*(ushort *)(param_1 + 0xde) <= uVar4)) {
        uVar7 = FUN_0083fd04(param_1 + 0xe8,lVar1);
        if (((uVar7 & 1) != 0) ||
           ((*(short *)(param_1 + 0xdc) == -1 || (0 < (short)(uVar4 - *(short *)(param_1 + 0xdc)))))
           ) {
          *(ushort *)(param_1 + 0xdc) = uVar4;
          FUN_0083fc48(param_1 + 0xe8,lVar1);
          FUN_00839050(param_1,param_2 + 0x10,(ulong)param_3 - 0x10,bVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}


