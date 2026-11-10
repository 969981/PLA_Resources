/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032657a0; name: FUN_032657a0
 */


void FUN_032657a0(long param_1,uint param_2,ushort *param_3,ushort *param_4)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  long lVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 local_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar10 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0x98) != 1) {
    bVar22 = false;
    plVar2 = (long *)(param_1 + 0x90);
    uVar23 = 0xffff;
    uVar24 = 0xffff;
    do {
      lVar16 = *plVar2;
      if (param_2 != *(uint *)(lVar16 + 0x10) >> 2) break;
      uVar12 = *(ulong *)(lVar16 + 0x10);
      uStack_68 = *(undefined8 *)(lVar16 + 0x18);
      uVar4 = (uint)uVar12 & 3;
      local_70._4_2_ = (ushort)(uVar12 >> 0x20);
      local_70 = uVar12;
      if (uVar4 == 2) {
        lVar16 = *(long *)(param_1 + 0x100);
        if ((~(uint)uVar23 & 0xffff) == 0) {
          piVar3 = (int *)(lVar16 + (ulong)local_70._4_2_ * 0x20);
          bVar11 = *piVar3 == piVar3[1];
          uVar18 = (uint)local_70._4_2_;
          uVar4 = uVar18;
          if (bVar11) {
            uVar4 = (uint)uVar24;
          }
          uVar24 = (ulong)uVar4;
          if (bVar11) {
            uVar18 = 0xffffffff;
          }
          uVar23 = (ulong)uVar18;
        }
        uVar14 = *(ushort *)(lVar16 + (ulong)local_70._4_2_ * 0x20 + 0xc);
        if ((ulong)uVar14 == 0xffff) {
          FUN_03260cb4(plVar2);
        }
        else {
          iVar8 = *(int *)(param_1 + 0xc0);
          *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar8 * 2) = uVar14;
          *(int *)(param_1 + 0xc0) = iVar8 + 1;
          iVar8 = *(int *)(lVar16 + (ulong)uVar14 * 0x20 + 4);
          lVar16 = *(long *)(param_1 + 0x90);
          *(ushort *)(lVar16 + 0x14) = uVar14;
          *(uint *)(lVar16 + 0x10) = iVar8 << 2 | 2;
          FUN_03260e6c(plVar2);
        }
      }
      else if (uVar4 == 1) {
        iVar8 = *(int *)(param_1 + 0xc0);
        *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar8 * 2) = local_70._4_2_;
        *(int *)(param_1 + 0xc0) = iVar8 + 1;
        lVar16 = *(long *)(param_1 + 0x100) + (ulong)local_70._4_2_ * 0x20;
        if (*(short *)(lVar16 + 10) == 0) {
          lVar20 = *plVar2;
          *(ushort *)(lVar20 + 0x14) = local_70._4_2_;
          *(uint *)(lVar20 + 0x10) = *(int *)(lVar16 + 4) << 2 | 2;
          FUN_03260e6c(plVar2);
        }
        else {
          FUN_03260cb4(plVar2);
        }
        uVar14 = local_70._6_2_;
        uVar12 = (ulong)local_70._6_2_;
        if (uVar12 != 0xffff) {
          iVar7 = *(int *)(param_1 + 0xc0);
          *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar7 * 2) = local_70._6_2_;
          lVar16 = *(long *)(param_1 + 0x90);
          iVar13 = *(int *)(param_1 + 0x98);
          iVar8 = iVar13 + 1;
          *(int *)(param_1 + 0xc0) = iVar7 + 1;
          if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) <= iVar13) {
            lVar16 = FUN_032610ec(puVar10,iVar8,lVar16,iVar13,param_1 + 0x9c);
            iVar13 = *(int *)(param_1 + 0x98);
            *(long *)(param_1 + 0x90) = lVar16;
          }
          puVar1 = (uint *)(lVar16 + (long)iVar13 * 0x10);
          *(int *)(param_1 + 0x98) = iVar8;
          *(ushort *)(puVar1 + 1) = uVar14;
          *puVar1 = *(int *)(*(long *)(param_1 + 0x100) + uVar12 * 0x20 + 4) << 2 | 2;
          FUN_03260e74(plVar2);
        }
      }
      else if ((uVar12 & 3) == 0) {
        FUN_03260cb4(plVar2);
        uVar12 = FUN_032675c0(param_1,&local_70);
        if ((uVar12 & 1) != 0) {
          uVar12 = (ulong)local_70._4_2_;
          if (bVar22) {
            lVar16 = *(long *)(param_1 + 0x100);
            uVar19 = uVar12;
            uVar21 = uVar23;
            do {
              if ((uint)local_70._4_2_ == ((uint)uVar21 & 0xffff)) goto LAB_03265968;
              if ((uint)uVar19 == ((uint)uVar23 & 0xffff)) break;
              uVar14 = *(ushort *)(lVar16 + uVar19 * 0x20 + 0x10);
              uVar19 = (ulong)uVar14;
              if (uVar14 == 0xffff) goto LAB_03265968;
              uVar14 = *(ushort *)(lVar16 + (uVar21 & 0xffff) * 0x20 + 0x10);
              uVar21 = (ulong)uVar14;
            } while (uVar14 != 0xffff);
            uVar23 = uVar12;
LAB_03265968:
            uVar12 = uVar24;
            uVar19 = (ulong)local_70._6_2_;
            do {
              if ((uint)uVar19 == (uint)uVar24) {
LAB_03265b14:
                bVar22 = true;
                goto LAB_032658c0;
              }
              if ((uint)local_70._6_2_ == (uint)uVar12) {
                bVar22 = true;
                uVar24 = (ulong)(uint)local_70._6_2_;
                goto LAB_032658c0;
              }
              uVar14 = *(ushort *)(lVar16 + uVar12 * 0x20 + 0x10);
              uVar12 = (ulong)uVar14;
              if (uVar14 == 0xffff) goto LAB_03265b14;
              uVar14 = *(ushort *)(lVar16 + uVar19 * 0x20 + 0x10);
              uVar19 = (ulong)uVar14;
              bVar22 = true;
            } while (uVar14 != 0xffff);
            uVar24 = (ulong)local_70._6_2_;
          }
          else {
            uVar24 = (ulong)local_70._6_2_;
            bVar22 = true;
            uVar23 = uVar12;
          }
        }
      }
LAB_032658c0:
    } while (*(int *)(param_1 + 0x98) != 1);
    if ((~(uint)uVar23 & 0xffff) != 0) {
      uVar14 = *(ushort *)(*(long *)(param_1 + 0x100) + (uVar23 & 0xffff) * 0x20 + 0xe);
      uVar15 = 0xffff;
      if (uVar14 != 0xffff) {
        do {
          uVar12 = (ulong)uVar14;
          piVar3 = (int *)(*(long *)(param_1 + 0x100) + uVar12 * 0x20);
          iVar8 = *piVar3 - piVar3[1];
          iVar13 = param_2 - piVar3[1];
          iVar8 = (iVar8 * 2 & 0x10000U) + iVar8;
          iVar13 = (iVar13 * 2 & 0x10000U) + iVar13;
          iVar7 = iVar8 >> 0x10;
          iVar5 = iVar13 >> 0x10;
          iVar9 = (int)(short)iVar13;
          iVar8 = (int)(short)iVar8;
          iVar13 = iVar9 * iVar7 - iVar8 * iVar5;
          iVar8 = iVar7 * iVar5 + iVar8 * iVar9;
          if (iVar13 != 0) {
            iVar8 = iVar13;
          }
          uVar15 = uVar14;
          if (iVar8 < 0) goto LAB_03265bcc;
          uVar14 = *(ushort *)((long)piVar3 + 0xe);
          uVar23 = uVar12;
        } while (uVar14 != 0xffff);
        uVar15 = 0xffff;
      }
LAB_03265bcc:
      *param_3 = uVar15;
      do {
        uVar14 = *(ushort *)(*(long *)(param_1 + 0x100) + uVar24 * 0x20 + 0x10);
        uVar24 = (ulong)uVar14;
        if (uVar24 == 0xffff) break;
        piVar3 = (int *)(*(long *)(param_1 + 0x100) + uVar24 * 0x20);
        iVar13 = *piVar3;
        iVar8 = piVar3[1] - iVar13;
        iVar13 = param_2 - iVar13;
        iVar8 = (iVar8 * 2 & 0x10000U) + iVar8;
        iVar13 = (iVar13 * 2 & 0x10000U) + iVar13;
        iVar7 = iVar8 >> 0x10;
        iVar5 = iVar13 >> 0x10;
        iVar9 = (int)(short)iVar13;
        iVar8 = (int)(short)iVar8;
        iVar13 = iVar9 * iVar7 - iVar8 * iVar5;
        iVar8 = iVar7 * iVar5 + iVar8 * iVar9;
        if (iVar13 != 0) {
          iVar8 = iVar13;
        }
      } while (-1 < iVar8);
      *param_4 = uVar14;
      if ((uint)uVar14 == ((uint)uVar23 & 0xffff)) {
        return;
      }
      do {
        lVar16 = *(long *)(param_1 + 0x100) + (uVar23 & 0xffff) * 0x20;
        iVar8 = *(int *)(param_1 + 0xb0);
        *(short *)(*(long *)(param_1 + 0xa8) + (long)iVar8 * 2) = (short)uVar23;
        *(int *)(param_1 + 0xb0) = iVar8 + 1;
        uVar15 = *(ushort *)(lVar16 + 10);
        if (uVar15 >> 8 < 0xff) {
          if (*(uint *)(lVar16 + 4) != param_2) {
            iVar8 = *(int *)(param_1 + 0xc0);
            *(short *)(*(long *)(param_1 + 0xb8) + (long)iVar8 * 2) = (short)uVar23;
            *(int *)(param_1 + 0xc0) = iVar8 + 1;
          }
        }
        else {
          *(ushort *)(lVar16 + 10) = uVar15 + 1;
        }
        uVar23 = (ulong)*(ushort *)(lVar16 + 0x10);
      } while (*(ushort *)(lVar16 + 0x10) != uVar14);
      return;
    }
  }
  uVar14 = 0xffff;
  if (*(ushort *)(param_1 + 0xa0) != 0xffff) {
    uVar23 = 0xffff;
    uVar15 = *(ushort *)(param_1 + 0xa0);
    do {
      uVar17 = uVar15;
      uVar14 = (ushort)uVar23;
      piVar3 = (int *)(*(long *)(param_1 + 0x100) + (ulong)uVar17 * 0x20);
      iVar8 = piVar3[1] - *piVar3;
      iVar13 = param_2 - *piVar3;
      iVar8 = (iVar8 * 2 & 0x10000U) + iVar8;
      iVar13 = (iVar13 * 2 & 0x10000U) + iVar13;
      iVar7 = (int)(short)iVar13 * (iVar8 >> 0x10);
      iVar8 = (int)(short)iVar8 * (iVar13 >> 0x10);
      if (iVar7 - iVar8 < 1) {
        if (iVar7 == iVar8) {
          iVar8 = *(int *)(param_1 + 0xb0);
          *(ushort *)(*(long *)(param_1 + 0xa8) + (long)iVar8 * 2) = uVar17;
          *(int *)(param_1 + 0xb0) = iVar8 + 1;
          sVar6 = *(short *)((long)piVar3 + 10);
          if ((char)((ushort)sVar6 >> 8) == -1) {
            *(short *)((long)piVar3 + 10) = sVar6 + 1;
            uVar17 = *(ushort *)(piVar3 + 4);
          }
          else {
            iVar8 = *(int *)(param_1 + 0xc0);
            *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar8 * 2) = uVar17;
            *(int *)(param_1 + 0xc0) = iVar8 + 1;
            uVar17 = *(ushort *)(piVar3 + 4);
          }
        }
        goto LAB_03265864;
      }
      uVar23 = (ulong)uVar17;
      uVar15 = *(ushort *)(piVar3 + 4);
      uVar14 = uVar17;
    } while (*(ushort *)(piVar3 + 4) != 0xffff);
  }
  uVar17 = 0xffff;
LAB_03265864:
  *param_3 = uVar14;
  *param_4 = uVar17;
  return;
}


