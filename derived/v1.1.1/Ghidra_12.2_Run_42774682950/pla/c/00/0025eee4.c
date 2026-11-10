/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025eee4; name: FUN_0025eee4
 */


/* WARNING: Removing unreachable block (ram,0x0025ef30) */

long FUN_0025eee4(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ushort *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x91) >> 1 & 1) == 0)) {
    lVar11 = 0x40;
    goto LAB_0025efd0;
  }
  uVar2 = *(ushort *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10);
  uVar13 = (ulong)uVar2;
  if (uVar13 == 0) {
LAB_0025efc8:
    lVar11 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10 + 8);
    if (uVar2 == 1) {
      lVar11 = 0;
      uVar12 = 0;
LAB_0025ef6c:
      if (*(int *)(lVar6 + lVar11 * 0x38 + 4) != 0) {
        uVar12 = uVar12 + 1;
      }
    }
    else {
      lVar11 = 0;
      uVar12 = 0;
      piVar15 = (int *)(lVar6 + 0x3c);
      do {
        if (piVar15[-0xe] != 0) {
          uVar12 = uVar12 + 1;
        }
        lVar11 = lVar11 + 2;
        if (*piVar15 != 0) {
          uVar12 = uVar12 + 1;
        }
        piVar15 = piVar15 + 0x1c;
      } while (uVar13 - (uVar13 & 1) != lVar11);
      if ((uVar2 & 1) != 0) goto LAB_0025ef6c;
    }
    if (uVar12 == 0) goto LAB_0025efc8;
    lVar11 = (ulong)uVar12 * 0x88 + 0xd8;
    uVar12 = *(uint *)(lVar6 + 4);
    puVar4 = (uint *)(lVar6 + 8);
    while( true ) {
      if (uVar12 != 0) {
        lVar11 = lVar11 + (ulong)*puVar4 * 0x18;
      }
      if (uVar13 == 1) break;
      uVar13 = uVar13 - 1;
      uVar12 = puVar4[0xd];
      puVar4 = puVar4 + 0xe;
    }
  }
  lVar11 = lVar11 + 0x40;
LAB_0025efd0:
  uVar12 = *(uint *)(param_1 + 0xa8);
  if ((ulong)*(ushort *)(param_1 + 0xac) != 0) {
    lVar11 = lVar11 + (ulong)*(ushort *)(param_1 + 0xac) * 0x40 + 0x10;
  }
  lVar11 = lVar11 + (ulong)uVar12 * 0x30;
  if (uVar12 == 0) {
    return lVar11;
  }
  puVar14 = *(ushort **)(param_1 + 0xb0);
  uVar13 = 0;
  uVar17 = (ulong)*puVar14;
  lVar11 = lVar11 + uVar17 * 8;
  if (uVar17 != 0) goto LAB_0025f064;
LAB_0025f02c:
  do {
    uVar18 = (ulong)puVar14[uVar13 * 0x50 + 8];
    while( true ) {
      lVar6 = 0;
      if ((int)uVar18 != 0) {
        lVar6 = uVar18 << 3;
      }
      uVar13 = uVar13 + 1;
      lVar6 = lVar11 + uVar18 * 0x10 + lVar6;
      if (uVar13 == uVar12) {
        return lVar6;
      }
      uVar17 = (ulong)puVar14[uVar13 * 0x50];
      lVar11 = lVar6 + uVar17 * 8;
      if (uVar17 == 0) break;
LAB_0025f064:
      puVar19 = *(undefined8 **)(puVar14 + uVar13 * 0x50 + 4);
      uVar18 = uVar17 & 1;
      iVar16 = (int)uVar17;
      if (iVar16 != 1) {
        lVar6 = 0;
        bVar1 = *(byte *)*puVar19;
joined_r0x0025f0c8:
        if (bVar1 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0025f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)(&UNK_0025f104 + (ulong)(byte)(&DAT_039cff52)[bVar1] * 4))();
          return lVar11;
        }
        switch(*(undefined1 *)puVar19[lVar6 + 1]) {
        case 0:
          lVar11 = lVar11 + (ulong)*(uint *)((undefined1 *)puVar19[lVar6 + 1] + 0x18) * 0x18 + 0x38;
          if (uVar17 - uVar18 != lVar6 + 2) goto LAB_0025f0e4;
LAB_0025f16c:
          lVar6 = lVar6 + 2;
          if (uVar18 != 0) goto LAB_0025f080;
          goto switchD_0025f09c_default;
        case 1:
          lVar11 = lVar11 + 0x38;
        case 2:
          lVar11 = lVar11 + 0x40;
          break;
        case 3:
          lVar11 = lVar11 + 0x40;
        }
        if (uVar17 - uVar18 == lVar6 + 2) goto LAB_0025f16c;
LAB_0025f0e4:
        lVar6 = lVar6 + 2;
        bVar1 = *(byte *)puVar19[lVar6];
        goto joined_r0x0025f0c8;
      }
      lVar6 = 0;
      if (uVar18 == 0) {
switchD_0025f09c_default:
      }
      else {
LAB_0025f080:
        switch(*(undefined1 *)puVar19[lVar6]) {
        case 0:
          lVar11 = lVar11 + (ulong)*(uint *)((undefined1 *)puVar19[lVar6] + 0x18) * 0x18 + 0x38;
          if (iVar16 != 0) goto LAB_0025f174;
          goto LAB_0025f02c;
        case 1:
          lVar11 = lVar11 + 0x38;
        case 2:
joined_r0x0025f260:
          lVar11 = lVar11 + 0x40;
          break;
        case 3:
          goto joined_r0x0025f260;
        default:
          goto switchD_0025f09c_default;
        }
      }
      if (iVar16 == 0) break;
LAB_0025f174:
      uVar2 = puVar14[uVar13 * 0x50 + 8];
      uVar18 = (ulong)uVar2;
      uVar5 = 0;
      uVar7 = 0;
      uVar3 = *(ushort *)(**(long **)(puVar14 + uVar13 * 0x50 + 4) + 2);
      while( true ) {
        if (uVar3 < uVar2) {
          uVar8 = (ulong)uVar3;
          uVar9 = ~uVar8;
          uVar10 = (ulong)((uint)uVar2 - (uint)uVar3) & 3;
          if (((uint)uVar2 - (uint)uVar3 & 3) != 0) {
            do {
              lVar6 = uVar8 * 8;
              uVar8 = uVar8 + 1;
              if (**(byte **)(*(long *)(puVar14 + uVar13 * 0x50 + 0xc) + lVar6) < 2) {
                uVar7 = uVar7 + 1;
              }
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (2 < uVar9 + uVar18) {
            lVar6 = uVar18 - uVar8;
            puVar19 = (undefined8 *)(*(long *)(puVar14 + uVar13 * 0x50 + 0xc) + 0x10 + uVar8 * 8);
            do {
              if (*(byte *)puVar19[-2] < 2) {
                uVar7 = uVar7 + 1;
              }
              if (*(byte *)puVar19[-1] < 2) {
                uVar7 = uVar7 + 1;
              }
              if (*(byte *)*puVar19 < 2) {
                uVar7 = uVar7 + 1;
              }
              if (*(byte *)puVar19[1] < 2) {
                uVar7 = uVar7 + 1;
              }
              lVar6 = lVar6 + -4;
              puVar19 = puVar19 + 4;
            } while (lVar6 != 0);
          }
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar17) break;
        uVar3 = *(ushort *)((*(long **)(puVar14 + uVar13 * 0x50 + 4))[uVar5] + 2);
      }
      if (uVar7 != 0) {
        lVar11 = lVar11 + (ulong)uVar7 * 0x18;
      }
    }
  } while( true );
}


