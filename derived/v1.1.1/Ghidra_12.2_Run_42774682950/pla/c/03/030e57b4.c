/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e57b4; name: FUN_030e57b4
 */


void FUN_030e57b4(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  
  iVar3 = (int)((float)*param_3 * (float)*(undefined8 *)(param_1 + 0x578));
  iVar11 = (int)((float)((ulong)*param_3 >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20));
  auVar1._12_4_ = iVar11;
  auVar1._8_4_ = iVar3;
  auVar1._4_4_ = iVar11;
  auVar1._0_4_ = iVar3;
  uVar4 = NEON_sqxtun(CONCAT44(iVar11,iVar3),auVar1,4);
  uVar5 = *param_4;
  uVar7 = param_2;
  do {
    lVar9 = *(long *)(param_1 + 0x38) + (ulong)(uVar7 & 0xffffff) * 0xc0;
    uVar7 = (uint)((float)uVar5 * 41720.875 + 0.9999);
    if (0xfffe < (int)uVar7) {
      uVar7 = 0xffff;
    }
    FUN_030192b0(param_1 + 0x530,
                 *(long *)(param_1 + 0x8a8) + (ulong)*(byte *)(lVar9 + 0x89) * 0x40 + 0x20,
                 param_1 + 0x4e0,lVar9,
                 *(long *)(param_1 + 0x150) + (ulong)*(uint *)(lVar9 + 0x80) * 0x80);
    iVar3 = (int)((float)*(undefined8 *)(param_1 + 0x578) *
                 (float)*param_4 * (float)((uint)*(ushort *)(lVar9 + 0x94) << 0x10));
    iVar11 = (int)((float)((ulong)*(undefined8 *)(param_1 + 0x578) >> 0x20) *
                  (float)((ulong)*param_4 >> 0x20) *
                  (float)((uint)*(ushort *)(lVar9 + 0x94) << 0x10));
    auVar2._12_4_ = iVar11;
    auVar2._8_4_ = iVar3;
    auVar2._4_4_ = iVar11;
    auVar2._0_4_ = iVar3;
    uVar6 = NEON_sqxtun(CONCAT44(iVar11,iVar3),auVar2,4);
    uVar8 = (uint)uVar6 & 0xffff;
    uVar10 = (uint)*(ushort *)(lVar9 + 0x5c) + (uint)(ushort)uVar4 + uVar8;
    if (0xfffe < uVar10) {
      uVar10 = 0xffff;
    }
    *(short *)(lVar9 + 0x5c) = (short)uVar10;
    uVar7 = (uint)*(ushort *)(lVar9 + 0x5a) + (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU) & 0xffff);
    uVar8 = *(ushort *)(lVar9 + 0x5e) + uVar8;
    if (0xfffe < uVar8) {
      uVar8 = 0xffff;
    }
    if (0xfffe < uVar7) {
      uVar7 = 0xffff;
    }
    *(short *)(lVar9 + 0x5e) = (short)uVar8;
    *(short *)(lVar9 + 0x5a) = (short)uVar7;
    *(ushort *)(lVar9 + 0x58) = *(ushort *)(lVar9 + 0x58) | 4;
    uVar7 = *(uint *)(lVar9 + 0x84);
  } while (uVar7 != param_2);
  return;
}


