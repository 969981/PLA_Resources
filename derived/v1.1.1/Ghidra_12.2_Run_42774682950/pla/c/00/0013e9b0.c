/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0013e9b0; name: FUN_0013e9b0
 */


/* WARNING: Type propagation algorithm not settling */

uint * FUN_0013e9b0(ulong *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  uint *puVar2;
  char *pcVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  char *pcVar21;
  uint local_d4;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  uint local_b0;
  long local_a8 [4];
  long local_88 [5];
  
  pcVar3 = (char *)*param_1;
  pcVar8 = (char *)param_1[1];
  iVar13 = (int)pcVar3;
  uVar11 = (ulong)(1 - iVar13) & 3;
  local_88[0] = (long)param_1 + ((ulong)(uint)-iVar13 & 3) * 0xd74 + 0x4c;
  local_88[1] = (long)param_1 + uVar11 * 0xd74 + 0x4c;
  uVar12 = (ulong)(3 - iVar13) & 3;
  pcVar14 = (char *)(param_1[2] - 4);
  uVar10 = (ulong)(2 - iVar13) & 3;
  local_88[2] = (long)param_1 + uVar10 * 0xd74 + 0x4c;
  local_88[3] = (long)param_1 + uVar12 * 0xd74 + 0x4c;
  local_a8[0] = (long)param_1 + ((ulong)(uint)-iVar13 & 3) * 0x1d4 + 0x361c;
  local_a8[1] = (long)param_1 + uVar11 * 0x1d4 + 0x361c;
  local_a8[2] = (long)param_1 + uVar10 * 0x1d4 + 0x361c;
  local_a8[3] = (long)param_1 + uVar12 * 0x1d4 + 0x361c;
  local_b0 = (uint)param_1[7];
  local_d0 = param_1[3];
  local_c8 = param_1[4];
  local_c0 = param_1[5];
  local_b8 = param_1[6];
  local_d4 = *(uint *)((long)param_1 + 0x3c);
  if ((int)param_1[8] == 0) {
    uVar18 = *param_2;
    if (uVar18 >> 0x10 == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      return param_2 + 1;
    }
    puVar2 = (uint *)((long)param_2 + 6);
    if (0xfffff < uVar18) {
      puVar2 = param_2 + 1;
    }
    uVar17 = (uint)(ushort)param_2[1] | (uVar18 >> 4) << 0x10;
    if (0xfffff < uVar18) {
      uVar17 = uVar18 >> 4;
    }
    uVar9 = uVar17 >> (ulong)(uVar18 & 0xf);
    uVar16 = (uint)(ushort)*puVar2 | uVar9 << 0x10;
    puVar15 = (uint *)((long)puVar2 + 2);
    if (0xffff < uVar9) {
      uVar16 = uVar9;
      puVar15 = puVar2;
    }
    param_2 = (uint *)((long)puVar15 + 2);
    uVar18 = ((uint)(ushort)*puVar15 | uVar17 << 0x10) &
             (-1 << (ulong)(uVar18 & 0xf | 0x10) ^ 0xffffffffU) | 1 << (ulong)(uVar18 & 0xf | 0x10);
    if ((pcVar8 == pcVar3) && (pcVar8 != pcVar14)) {
      bVar5 = uVar16 >> 0x18 != 0;
      puVar2 = puVar15 + 1;
      if (bVar5) {
        puVar2 = param_2;
      }
      uVar17 = (uint)*(ushort *)((long)puVar15 + 2) | (uVar16 >> 8) << 0x10;
      if (bVar5) {
        uVar17 = uVar16 >> 8;
      }
      pcVar8 = pcVar3 + 1;
      *pcVar3 = (char)uVar16;
      uVar16 = uVar18;
      uVar18 = uVar17;
      param_2 = puVar2;
    }
  }
  else {
    uVar16 = *(uint *)((long)param_1 + 0x44);
    uVar18 = (uint)param_1[9];
  }
  if (pcVar8 < pcVar14) {
    lVar20 = -(ulong)local_b0;
LAB_0013eac8:
    do {
      pcVar21 = pcVar8;
      if (param_3 < param_2) {
        *(undefined4 *)(param_1 + 8) = 1;
        uVar9 = uVar16;
        uVar17 = uVar18;
        break;
      }
      lVar6 = local_88[(ulong)pcVar8 & 3];
      uVar10 = (ulong)*(ushort *)(lVar6 + (ulong)(uVar16 >> 6 & 0x1ff) * 2);
      uVar17 = uVar16 & 0x7fff;
      if (*(ushort *)(lVar6 + 0x408 + uVar10 * 2 + 2) <= uVar17) {
        uVar10 = uVar10 + 1;
      }
      uVar4 = *(ushort *)(lVar6 + 0x408 + uVar10 * 2 + 2);
      if (uVar4 <= uVar17) {
        do {
          uVar4 = *(ushort *)(lVar6 + 0x40c + uVar10 * 2);
          uVar10 = uVar10 + 1;
        } while (uVar4 <= uVar17);
      }
      lVar1 = lVar6 + uVar10 * 2;
      uVar17 = (uVar17 - *(ushort *)(lVar1 + 0x408)) +
               ((uint)uVar4 - (uint)*(ushort *)(lVar1 + 0x408)) * (uVar16 >> 0xf);
      uVar16 = (uint)(ushort)*param_2 | uVar17 * 0x10000;
      puVar2 = (uint *)((long)param_2 + 2);
      if (0xffff < uVar17) {
        uVar16 = uVar17;
        puVar2 = param_2;
      }
      *(short *)(lVar1 + 0x662) = *(short *)(lVar1 + 0x662) + 0x1f;
      iVar13 = *(int *)(lVar6 + 0x8bc) + -1;
      *(int *)(lVar6 + 0x8bc) = iVar13;
      if (iVar13 == 0) {
        FUN_0013f620(lVar6,uVar10);
      }
      uVar17 = uVar16;
      uVar9 = uVar18;
      if (uVar10 < 0x100) {
        pcVar21 = pcVar8 + 1;
        *pcVar8 = pcVar8[lVar20] + (char)uVar10;
        param_2 = puVar2;
        if (pcVar14 <= pcVar21) break;
        lVar6 = local_88[(ulong)pcVar21 & 3];
        uVar10 = (ulong)*(ushort *)(lVar6 + (ulong)(uVar18 >> 6 & 0x1ff) * 2);
        uVar17 = uVar18 & 0x7fff;
        if (*(ushort *)(lVar6 + 0x408 + uVar10 * 2 + 2) <= uVar17) {
          uVar10 = uVar10 + 1;
        }
        uVar4 = *(ushort *)(lVar6 + 0x408 + uVar10 * 2 + 2);
        if (uVar4 <= uVar17) {
          do {
            uVar4 = *(ushort *)(lVar6 + 0x40c + uVar10 * 2);
            uVar10 = uVar10 + 1;
          } while (uVar4 <= uVar17);
        }
        lVar1 = lVar6 + uVar10 * 2;
        uVar17 = (uVar17 - *(ushort *)(lVar1 + 0x408)) +
                 ((uint)uVar4 - (uint)*(ushort *)(lVar1 + 0x408)) * (uVar18 >> 0xf);
        uVar18 = (uint)(ushort)*puVar2 | uVar17 * 0x10000;
        param_2 = (uint *)((long)puVar2 + 2);
        if (0xffff < uVar17) {
          uVar18 = uVar17;
          param_2 = puVar2;
        }
        *(short *)(lVar1 + 0x662) = *(short *)(lVar1 + 0x662) + 0x1f;
        iVar13 = *(int *)(lVar6 + 0x8bc) + -1;
        *(int *)(lVar6 + 0x8bc) = iVar13;
        if (iVar13 == 0) {
          FUN_0013f620(lVar6,uVar10);
        }
        uVar17 = uVar18;
        uVar9 = uVar16;
        puVar2 = param_2;
        if (uVar10 < 0x100) {
          pcVar8[1] = pcVar21[lVar20] + (char)uVar10;
          pcVar8 = pcVar8 + 2;
          pcVar21 = pcVar8;
          if (pcVar14 <= pcVar8) break;
          goto LAB_0013eac8;
        }
      }
      if (uVar10 < 0x120) {
        puVar15 = puVar2;
        uVar16 = uVar17;
        uVar17 = uVar9;
      }
      else {
        uVar19 = (int)uVar10 - 0x11f;
        uVar18 = uVar9 >> (ulong)(uVar19 & 0x1f);
        puVar15 = (uint *)((long)puVar2 + 2);
        if (0xffff < uVar18) {
          puVar15 = puVar2;
        }
        uVar16 = (uint)(ushort)*puVar2 | uVar18 << 0x10;
        if (0xffff < uVar18) {
          uVar16 = uVar18;
        }
        uVar10 = (ulong)((1 << (ulong)(uVar19 & 0x1f)) +
                         (uVar9 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU)) + 0x11e);
      }
      lVar6 = local_a8[(ulong)pcVar21 & 3];
      uVar11 = (ulong)*(ushort *)(lVar6 + (ulong)(uVar17 >> 9 & 0x3f) * 2);
      uVar18 = uVar17 & 0x7fff;
      if (*(ushort *)(lVar6 + 0x88 + uVar11 * 2 + 2) <= uVar18) {
        uVar11 = uVar11 + 1;
      }
      uVar4 = *(ushort *)(lVar6 + 0x88 + uVar11 * 2 + 2);
      if (uVar4 <= uVar18) {
        do {
          uVar4 = *(ushort *)(lVar6 + 0x8c + uVar11 * 2);
          uVar11 = uVar11 + 1;
        } while (uVar4 <= uVar18);
      }
      lVar1 = lVar6 + uVar11 * 2;
      uVar18 = (uVar18 - *(ushort *)(lVar1 + 0x88)) +
               ((uint)uVar4 - (uint)*(ushort *)(lVar1 + 0x88)) * (uVar17 >> 0xf);
      uVar17 = (uint)(ushort)*puVar15 | uVar18 * 0x10000;
      param_2 = (uint *)((long)puVar15 + 2);
      if (0xffff < uVar18) {
        uVar17 = uVar18;
        param_2 = puVar15;
      }
      *(short *)(lVar1 + 0xda) = *(short *)(lVar1 + 0xda) + 0x1f;
      iVar13 = *(int *)(lVar6 + 300) + -1;
      *(int *)(lVar6 + 300) = iVar13;
      if (iVar13 == 0) {
        FUN_0013f740(lVar6,uVar11);
        if (7 < uVar11) goto LAB_0013edec;
LAB_0013ed90:
        uVar18 = (int)uVar11 * 3;
        uVar9 = local_d4 >> (ulong)(uVar18 & 0x1f);
        uVar11 = (ulong)*(uint *)((long)local_a8 + (ulong)(uVar9 & 7) * 4 + -0x28);
        uVar18 = -8 << (ulong)(uVar18 & 0x1f);
        local_d4 = (uVar9 & 7 | local_d4 << 3) & (uVar18 ^ 0xffffffff) | uVar18 & local_d4;
        uVar18 = uVar17;
        if (uVar11 <= (ulong)((long)pcVar21 - (long)pcVar3)) goto LAB_0013ef2c;
LAB_0013f118:
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        uVar9 = uVar16;
        break;
      }
      if (uVar11 < 8) goto LAB_0013ed90;
LAB_0013edec:
      uVar12 = (ulong)*(ushort *)((long)param_1 + (ulong)(uVar16 >> 9 & 0x3f) * 2 + 0x3d6c);
      uVar18 = uVar16 & 0x7fff;
      if (*(ushort *)((long)param_1 + uVar12 * 2 + 0x3df6) <= uVar18) {
        uVar12 = uVar12 + 1;
      }
      uVar4 = *(ushort *)((long)param_1 + uVar12 * 2 + 0x3df6);
      while (uVar4 <= uVar18) {
        lVar6 = uVar12 * 2;
        uVar12 = uVar12 + 1;
        uVar4 = *(ushort *)((long)param_1 + lVar6 + 0x3df8);
      }
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar12 * 2 + 0x3df4);
      uVar18 = (uVar18 - uVar9) + (uVar4 - uVar9) * (uVar16 >> 0xf);
      uVar16 = (uint)(ushort)*param_2 | uVar18 * 0x10000;
      puVar2 = (uint *)((long)param_2 + 2);
      if (0xffff < uVar18) {
        uVar16 = uVar18;
        puVar2 = param_2;
      }
      *(short *)((long)param_1 + uVar12 * 2 + 0x3e20) =
           *(short *)((long)param_1 + uVar12 * 2 + 0x3e20) + 0x1f;
      iVar13 = *(int *)((long)param_1 + 0x3e4c) + -1;
      *(int *)((long)param_1 + 0x3e4c) = iVar13;
      if (iVar13 == 0) {
        FUN_0013f860((long)param_1 + 0x3d6c,uVar12);
      }
      uVar19 = (uint)uVar12;
      uVar9 = uVar17 >> (ulong)(uVar19 & 0xf);
      uVar18 = (uint)(ushort)*puVar2 | uVar9 << 0x10;
      puVar15 = (uint *)((long)puVar2 + 2);
      if (0xffff < uVar9) {
        uVar18 = uVar9;
        puVar15 = puVar2;
      }
      param_2 = puVar15;
      if (0xf < uVar19) {
        param_2 = (uint *)((long)puVar15 + 2);
        uVar17 = (uint)(ushort)*puVar15 | uVar17 << 0x10;
      }
      uVar11 = (uVar11 + (0x20L << (uVar12 & 0x3f)) +
               (ulong)(uVar17 & (-1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU)) * 0x20) - 0x27;
      lVar6 = (ulong)(local_d4 >> 0x12 & 7) * 4;
      *(undefined4 *)((long)local_a8 + (ulong)(local_d4 >> 0x15 & 7) * 4 + -0x28) =
           *(undefined4 *)((long)local_a8 + lVar6 + -0x28);
      *(int *)((long)local_a8 + lVar6 + -0x28) = (int)uVar11;
      uVar17 = uVar18;
      if ((ulong)((long)pcVar21 - (long)pcVar3) < uVar11) goto LAB_0013f118;
LAB_0013ef2c:
      uVar17 = uVar18;
      if ((ulong)((long)pcVar14 - (long)pcVar21) < (uVar10 - 0xf7 & 0xfffffffffffffff8))
      goto LAB_0013f118;
      uVar10 = uVar10 - 0xfe;
      pcVar8 = pcVar21 + -uVar11;
      if (uVar11 < 8) {
        *pcVar21 = *pcVar8;
        pcVar21[1] = pcVar8[1];
        pcVar21[2] = pcVar8[2];
        pcVar21[3] = pcVar8[3];
        pcVar21[4] = pcVar8[4];
        pcVar21[5] = pcVar8[5];
        pcVar21[6] = pcVar8[6];
        pcVar21[7] = pcVar8[7];
        pcVar8 = pcVar8 + *(long *)(&DAT_039c4f50 + uVar11 * 8);
      }
      else {
        *(undefined8 *)pcVar21 = *(undefined8 *)pcVar8;
      }
      if (8 < uVar10) {
        uVar12 = 8;
        do {
          *(undefined8 *)(pcVar21 + uVar12) = *(undefined8 *)(pcVar8 + uVar12);
          uVar12 = uVar12 + 8;
        } while (uVar12 < uVar10);
      }
      lVar20 = -uVar11;
      pcVar8 = pcVar21 + uVar10;
      pcVar21 = pcVar8;
      uVar9 = uVar16;
    } while (pcVar8 < pcVar14);
  }
  else {
    lVar20 = -(ulong)local_b0;
    pcVar21 = pcVar8;
    uVar9 = uVar16;
    uVar17 = uVar18;
  }
  if ((pcVar14 <= pcVar21) && (-1 < (int)param_1[8])) {
    if ((uVar9 | uVar17) >> 0x11 == 0) {
      *pcVar21 = (char)uVar9;
      pcVar21[1] = (char)(uVar9 >> 8);
      pcVar21[2] = (char)uVar17;
      uVar7 = 2;
      pcVar21[3] = (char)(uVar17 >> 8);
      pcVar21 = pcVar21 + 4;
    }
    else {
      uVar7 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 8) = uVar7;
  }
  param_1[3] = local_d0;
  *(int *)(param_1 + 7) = -(int)lVar20;
  param_1[4] = local_c8;
  param_1[5] = local_c0;
  param_1[6] = local_b8;
  *(uint *)((long)param_1 + 0x3c) = local_d4;
  param_1[1] = (ulong)pcVar21;
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(uVar17,uVar9);
  return param_2;
}


