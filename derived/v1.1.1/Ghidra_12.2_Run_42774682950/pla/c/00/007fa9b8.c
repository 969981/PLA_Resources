/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa9b8; name: FUN_007fa9b8
 */


uint FUN_007fa9b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar3 = *(ushort *)(param_1 + 0x114e);
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    lVar9 = *(long *)(param_1 + 0x88);
    uVar8 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      plVar10 = (long *)(lVar9 + 0x10);
      do {
        *(undefined1 *)(plVar10[-2] + 9) = 0xff;
        *(undefined1 *)(plVar10[-1] + 9) = 0xff;
        *(undefined1 *)(*plVar10 + 9) = 0xff;
        plVar1 = plVar10 + 1;
        lVar11 = lVar11 + 4;
        plVar10 = plVar10 + 4;
        *(undefined1 *)(*plVar1 + 9) = 0xff;
      } while (uVar12 - uVar8 != lVar11);
    }
    if ((uVar3 & 3) != 0) {
      plVar10 = (long *)(lVar9 + lVar11 * 8);
      do {
        uVar8 = uVar8 - 1;
        *(undefined1 *)(*plVar10 + 9) = 0xff;
        plVar10 = plVar10 + 1;
      } while (uVar8 != 0);
    }
  }
  uVar12 = FUN_007fa8e0(param_1,param_2);
  uVar7 = (uint)*(ushort *)(param_1 + 0x114e);
  if (*(ushort *)(param_1 + 0x114e) == 0) {
    uVar14 = 0xff;
  }
  else {
    uVar15 = 0;
    uVar13 = 0xff;
    do {
      if (uVar7 == 0) {
LAB_007fab60:
        if (((uVar13 ^ 0xffffffff) & 0xff) != 0) {
          uVar15 = uVar13;
        }
        return uVar15;
      }
      uVar8 = 0;
      uVar16 = 0xffffffff;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar6 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + uVar8 * 8) + 0x10);
        if ((((uVar6 & 1) != 0) &&
            (lVar9 = *(long *)(*(long *)(param_1 + 0x88) + uVar8 * 8), *(char *)(lVar9 + 9) == -1))
           && (uVar6 = FUN_007f0f48(lVar9 + 0x10,param_2), (uVar6 & 1) == 0)) {
          uVar6 = FUN_007fa8e0(uVar6,*(long *)(*(long *)(param_1 + 0x88) + uVar8 * 8) + 0x10);
          uVar7 = (uint)uVar8;
          uVar4 = uVar6;
          if (uVar17 <= uVar6) {
            uVar7 = (uint)uVar16;
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar16 = (ulong)uVar7;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(param_1 + 0x114e));
      if ((int)uVar16 == -1) goto LAB_007fab60;
      uVar17 = -(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      uVar8 = FUN_007fa8e0(uVar6,*(long *)(*(long *)(param_1 + 0x88) + uVar17) + 0x10);
      bVar5 = ((uVar13 ^ 0xffffffff) & 0xff) == 0;
      iVar2 = uVar15 + (bVar5 && uVar12 < uVar8);
      uVar14 = uVar15;
      if (!bVar5 || uVar12 >= uVar8) {
        uVar14 = uVar13;
      }
      uVar15 = iVar2 + 1;
      *(char *)(*(long *)(*(long *)(param_1 + 0x88) + uVar17) + 9) = (char)iVar2;
      uVar7 = (uint)*(ushort *)(param_1 + 0x114e);
      uVar13 = uVar14;
    } while ((uVar15 & 0xff) < uVar7);
  }
  return uVar14;
}


