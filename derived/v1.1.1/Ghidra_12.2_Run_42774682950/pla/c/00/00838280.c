/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838280; name: FUN_00838280
 */


void FUN_00838280(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_3 == 0x11) {
    uVar7 = (*(ulong *)(param_2 + 5) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 5) & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    bVar1 = *(byte *)(param_2 + 0xd);
    bVar2 = *(byte *)(param_2 + 0xe);
    bVar3 = *(byte *)(param_2 + 0xf);
    bVar4 = *(byte *)(param_2 + 0x10);
    lVar8 = *(long *)PTR_DAT_04377550;
    uVar6 = FUN_0083fd98(lVar8 + 0x178);
    if (((uVar6 == (uVar7 >> 0x20 | uVar7 << 0x20)) &&
        (uVar5 = FUN_0083fda0(lVar8 + 0x178),
        ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4) ==
        (uVar5 & 0xffff))) &&
       (uVar7 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xb0)), (uVar7 & 1) != 0)) {
      *(undefined1 *)(*(long *)(param_1 + 0xb0) + 0x69) = 1;
    }
  }
  return;
}


