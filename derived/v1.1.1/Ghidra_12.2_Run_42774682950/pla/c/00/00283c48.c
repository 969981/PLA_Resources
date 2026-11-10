/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00283c48; name: FUN_00283c48
 */


void FUN_00283c48(long param_1,ulong param_2,undefined8 param_3,int param_4,uint param_5,
                 ulong param_6,uint param_7,undefined8 param_8)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_68 [8];
  
  lVar16 = *(long *)(param_1 + (long)param_4 * 8 + 0xb0);
  if (lVar16 != 0) {
    iVar8 = (int)param_2;
    if ((param_6 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      puVar12 = (uint *)(lVar10 + (long)iVar8 * 0x9e8);
      puVar1 = puVar12 + 0x274;
      uVar14 = *puVar12 & *(uint *)(lVar16 + 0x48);
      do {
        if (((uVar14 != 0) && ((*(uint *)(lVar16 + 0x230) & param_5) != 0)) &&
           (*(char *)(lVar16 + 0xb) != '\0')) {
          uVar6 = *(undefined8 *)(lVar16 + 0x98);
          uVar5 = *(undefined8 *)(lVar16 + 0x90);
          *(long *)(*(long *)(puVar12 + 0x272) + (long)(int)*puVar1 * 0x10) = lVar16;
          auVar7 = *(undefined1 (*) [12])(puVar12 + 0x19e);
          fVar19 = (float)uVar5 * auVar7._0_4_;
          fVar20 = (float)((ulong)uVar5 >> 0x20) * auVar7._4_4_;
          fVar21 = (float)uVar6 * auVar7._8_4_;
          fVar22 = (float)((ulong)uVar6 >> 0x20) * 0.0;
          auVar23._4_4_ = fVar20;
          auVar23._0_4_ = fVar19;
          auVar23._8_4_ = fVar21;
          auVar23._12_4_ = fVar22;
          auVar4._4_4_ = fVar20;
          auVar4._0_4_ = fVar19;
          auVar4._8_4_ = fVar21;
          auVar4._12_4_ = fVar22;
          auVar23 = NEON_ext(auVar23,auVar4,8,1);
          fVar19 = auVar23._0_4_ + fVar19 + auVar23._4_4_ + fVar20 + (float)puVar12[0x1a1];
          uVar14 = (uint)fVar19 >> 8 & 0x800000;
          if (ABS(fVar19) == 0.0) {
            uVar9 = 0;
LAB_00283cc8:
            uVar14 = uVar14 | (uint)fVar19 >> 7 & 0xffff | (uVar9 & 0x7f) << 0x10;
          }
          else {
            uVar9 = ((uint)fVar19 >> 0x17 & 0xff) - 0x40;
            if (-1 < (int)uVar9) {
              if ((int)uVar9 < 0x80) goto LAB_00283cc8;
              uVar14 = 0x7f0000;
            }
          }
          *(uint *)(*(long *)(puVar12 + 0x272) + (long)(int)*puVar1 * 0x10 + 8) =
               uVar14 | (uint)*(byte *)(lVar16 + 0x10) << 0x18;
          *puVar1 = *puVar1 + 1;
        }
        lVar16 = *(long *)(lVar16 + 0x1d0);
        if (lVar16 == 0) {
          lVar10 = lVar10 + (long)iVar8 * 0x9e8;
          *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | param_5;
          lVar10 = *(long *)(param_1 + 0x10);
          lVar16 = lVar10 + (long)iVar8 * 0x9e8;
          iVar3 = *(int *)(lVar16 + 0x9d0);
          lVar17 = (long)iVar8;
          if (iVar3 != 0) {
            piVar2 = (int *)(lVar16 + 0x9d0);
            lVar15 = lVar10 + lVar17 * 0x9e8;
            lVar16 = *(long *)(lVar15 + 0x9c8);
            FUN_002849b0(0,lVar16,lVar16 + (long)iVar3 * 0x10,auStack_68);
            if (iVar8 < *(int *)(param_1 + 8)) {
              lVar11 = lVar17 * 0x9e8;
              lVar16 = lVar17 * 0x40;
              *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar16 + 0x10) =
                   *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar11);
              *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar16 + 0x14) =
                   *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar11 + 0x108);
              *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar16 + 0x18) =
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar11 + 0x7a8);
              *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar16 + 0x20) =
                   *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar11 + 0x7b0);
              lVar11 = *(long *)(param_1 + 0x10) + lVar11;
              lVar18 = lVar11 + 0x798;
              if (*(char *)(lVar11 + 0x9e0) != '\0') {
                lVar18 = 0;
              }
              *(long *)(*(long *)(param_1 + 0x20) + lVar16 + 0x28) = lVar18;
              lVar16 = *(long *)(param_1 + 0x20) + lVar16;
              iVar8 = *piVar2;
            }
            else {
              lVar16 = 0;
              iVar8 = *piVar2;
            }
            if (0 < iVar8) {
              lVar11 = 0;
              lVar18 = 0;
              do {
                FUN_002664e0(*(undefined8 *)(*(long *)(lVar15 + 0x9c8) + lVar11),param_3,
                             *(undefined4 *)(lVar10 + lVar17 * 0x9e8 + 4),param_7 & 1,param_8,lVar16
                             ,*(undefined8 *)(param_1 + 0x11f8),*(undefined8 *)(param_1 + 0x11e8));
                lVar18 = lVar18 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar18 < *piVar2);
            }
            *piVar2 = 0;
          }
          *(undefined4 *)(lVar10 + lVar17 * 0x9e8 + 4) = 0;
          return;
        }
        uVar14 = *puVar12 & *(uint *)(lVar16 + 0x48);
      } while( true );
    }
    if (iVar8 < *(int *)(param_1 + 8)) {
      uVar13 = -(param_2 >> 0x1f & 1) & 0xffffffc000000000 | (param_2 & 0xffffffff) << 6;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x10) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x14) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8 + 0x108);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8 + 0x7a8);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar13 + 0x20) =
           *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8 + 0x7b0);
      lVar17 = *(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8;
      lVar10 = lVar17 + 0x798;
      if (*(char *)(lVar17 + 0x9e0) != '\0') {
        lVar10 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x20) + uVar13 + 0x28) = lVar10;
      lVar10 = *(long *)(param_1 + 0x20) + uVar13;
    }
    else {
      lVar10 = 0;
    }
    do {
      if ((((*(uint *)(*(long *)(param_1 + 0x10) + (long)iVar8 * 0x9e8) & *(uint *)(lVar16 + 0x48))
            != 0) && ((*(uint *)(lVar16 + 0x230) & param_5) != 0)) &&
         (*(char *)(lVar16 + 0xb) != '\0')) {
        FUN_002664e0(lVar16,param_3,param_5,param_7 & 1,param_8,lVar10,
                     *(undefined8 *)(param_1 + 0x11f8),*(undefined8 *)(param_1 + 0x11e8));
      }
      lVar16 = *(long *)(lVar16 + 0x1d0);
    } while (lVar16 != 0);
  }
  return;
}


