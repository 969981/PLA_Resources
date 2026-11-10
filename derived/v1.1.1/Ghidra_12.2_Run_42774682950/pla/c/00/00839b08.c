/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00839b08; name: FUN_00839b08
 */


void FUN_00839b08(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_3 == 0x19) && (lVar7 = FUN_008473ec(), lVar7 != 0)) {
    lVar7 = FUN_008473ec(param_1);
    lVar8 = FUN_00847388(param_1);
    if (lVar7 == lVar8) {
      uVar10 = (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar11 = *(ulong *)(param_2 + 1);
      uVar1 = *(uint *)(param_2 + 9);
      bVar2 = *(byte *)(param_2 + 0x15);
      bVar3 = *(byte *)(param_2 + 0x16);
      bVar4 = *(byte *)(param_2 + 0x17);
      bVar5 = *(byte *)(param_2 + 0x18);
      lVar7 = *(long *)PTR_DAT_04377550;
      uVar9 = FUN_0083fd98(lVar7 + 0x178);
      if (((uVar9 == (uVar10 >> 0x20 | uVar10 << 0x20)) &&
          (uVar6 = FUN_0083fda0(lVar7 + 0x178),
          ((uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5) ==
          (uVar6 & 0xffff))) &&
         (uVar10 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xb8)), (uVar10 & 1) != 0)) {
        uVar10 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        FUN_0083f0a8(*(undefined8 *)(param_1 + 0xb8),uVar10 >> 0x20 | uVar10 << 0x20,
                     uVar1 >> 0x10 | uVar1 << 0x10);
        return;
      }
    }
  }
  return;
}


