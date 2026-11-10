/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265d20; name: FUN_03265d20
 */


void FUN_03265d20(long param_1,ushort param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ushort local_6c [2];
  ushort local_68 [2];
  ushort local_64 [2];
  
  uVar3 = *(uint *)(param_1 + 0xb0);
  if (uVar3 != 0) {
    if ((int)uVar3 < 1) {
      uVar5 = 1;
      uVar9 = 0xffff;
    }
    else {
      lVar8 = 0;
      uVar5 = 1;
      uVar9 = 0xffff;
      do {
        lVar2 = *(long *)(param_1 + 0x100) +
                (ulong)*(ushort *)(*(long *)(param_1 + 0xa8) + lVar8) * 0x20;
        uVar6 = (uint)*(ushort *)(lVar2 + 8);
        uVar4 = uVar6 << 2;
        if (((uVar6 ^ 0xffffffff) & 0xffff) == 0) {
          uVar4 = 1;
        }
        uVar7 = (ulong)uVar4;
        if (param_2 == 0xffff) {
          uVar9 = 0xffff;
        }
        else {
          lVar1 = *(long *)(param_1 + 0x110) + (ulong)param_2 * 8;
          if (lVar8 == 0) {
            unaff_x24 = unaff_x24 & 0xffffffff00000000 | uVar7 & 0xffff;
            FUN_03265130(param_1,lVar1,param_3,unaff_x24,local_64);
          }
          else {
            unaff_x22 = unaff_x22 & 0xffffffff00000000 | uVar7 & 0xffff;
            unaff_x23 = uVar5 | unaff_x23 & 0xffffffff00000000;
            FUN_03264f80(param_1,lVar1,param_3,unaff_x23,unaff_x22,local_68,local_64);
            if (((~uVar9 & 0xffff) != 0) && (local_68[0] != 0xffff)) {
              *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)(ushort)uVar9 * 8 + 4) =
                   local_68[0] << 2 | 2;
              *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)local_68[0] * 8 + 4) =
                   (ushort)(uVar9 << 2) | 2;
            }
          }
          uVar9 = (uint)local_64[0];
        }
        param_2 = *(ushort *)(lVar2 + 0x12);
        lVar8 = lVar8 + 2;
        uVar5 = uVar7 & 0xffff;
      } while ((ulong)uVar3 * 2 != lVar8);
    }
    if (((param_2 != 0xffff) &&
        (FUN_03265220(param_1,*(long *)(param_1 + 0x110) + (ulong)param_2 * 8,param_3,uVar5,local_6c
                     ), uVar9 != 0xffff)) && (local_6c[0] != 0xffff)) {
      *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)uVar9 * 8 + 4) = local_6c[0] << 2 | 2;
      *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)local_6c[0] * 8 + 4) =
           (ushort)(uVar9 << 2) | 2;
    }
  }
  return;
}


