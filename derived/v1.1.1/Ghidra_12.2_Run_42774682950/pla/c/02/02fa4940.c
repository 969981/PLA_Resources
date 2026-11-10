/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa4940; name: FUN_02fa4940
 */


long FUN_02fa4940(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  float fVar24;
  int iVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_c0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  
  (**(code **)(*param_3 + 0x20))(param_3,&local_84,&local_88);
  iVar10 = local_84 + -1;
  iVar11 = local_88 + -1;
  uVar18 = 0;
  iVar5 = iVar10;
  if (iVar10 <= iVar11) {
    iVar5 = iVar11;
  }
  do {
    uVar18 = uVar18 + 1;
  } while (2 << (ulong)(uVar18 & 0x1f) < iVar5);
  if ((int)param_4 <= (int)uVar18) {
    uVar18 = param_4;
  }
  if ((int)param_4 < 1) {
    uVar18 = 1;
  }
  iVar5 = 1 << (ulong)(uVar18 & 0x1f);
  uVar8 = 0;
  if (iVar5 != 0) {
    uVar8 = (iVar5 + -1 + iVar10) / iVar5;
  }
  uVar9 = 0;
  if (iVar5 != 0) {
    uVar9 = (iVar5 + -1 + iVar11) / iVar5;
  }
  uVar8 = (uVar8 & 1) + uVar8;
  uVar9 = (uVar9 & 1) + uVar9;
  lVar17 = FUN_032cf5b0(0x60);
  FUN_02fa30d4(lVar17,uVar18);
  local_90 = CONCAT44(param_1,param_1);
  lVar1 = lVar17 + 0x20;
  local_98 = CONCAT44(param_2,param_2);
  FUN_02fadaf0(lVar1,uVar8,uVar9,&local_90,&local_98);
  if (0 < (int)uVar9) {
    uVar32 = NEON_fmov(0xbf800000,4);
    uVar33 = NEON_fmov(0x3f800000,4);
    local_c0 = 0;
    do {
      if (0 < (int)uVar8) {
        uVar21 = 0;
        iVar6 = local_c0 << (ulong)(uVar18 & 0x1f);
        iVar4 = iVar6 + iVar5;
        if (iVar11 <= iVar6 + iVar5) {
          iVar4 = iVar11;
        }
        do {
          uVar22 = 0xffee;
          uVar23 = 0xff7f;
          uVar26 = 0xffee;
          uVar27 = 0x7f7f;
          local_98 = 0xff7fffeeff7fffee;
          local_90 = 0x7f7fffee7f7fffee;
          fVar24 = -3.40282e+38;
          fVar28 = 3.40282e+38;
          if (iVar6 < iVar11) {
            uVar22 = 0xffee;
            uVar23 = 0xff7f;
            uVar26 = 0xffee;
            uVar27 = 0x7f7f;
            iVar7 = uVar21 << (ulong)(uVar18 & 0x1f);
            if (iVar7 < iVar10) {
              iVar15 = iVar7 + iVar5;
              if (iVar10 <= iVar7 + iVar5) {
                iVar15 = iVar10;
              }
              FUN_02fa4180(param_3,iVar10,iVar11,iVar7,iVar6,iVar15,iVar4,&local_90,&local_98);
              uVar22 = (undefined2)local_98;
              uVar23 = (undefined2)((ulong)local_98 >> 0x10);
              fVar24 = (float)((ulong)local_98 >> 0x20);
              uVar26 = (undefined2)local_90;
              uVar27 = (undefined2)((ulong)local_90 >> 0x10);
              fVar28 = (float)((ulong)local_90 >> 0x20);
            }
          }
          fVar31 = (float)*(undefined8 *)(lVar17 + 0x30);
          fVar30 = *(float *)(lVar17 + 0x44);
          iVar15 = (int)(((float)CONCAT22(uVar27,uVar26) - fVar31) * fVar30 + (float)uVar32);
          iVar29 = (int)((fVar28 - fVar31) * fVar30 + (float)((ulong)uVar32 >> 0x20));
          iVar7 = (int)(((float)CONCAT22(uVar23,uVar22) - fVar31) * fVar30 + (float)uVar33);
          iVar25 = (int)((fVar24 - fVar31) * fVar30 + (float)((ulong)uVar33 >> 0x20));
          auVar14._12_4_ = iVar29;
          auVar14._8_4_ = iVar15;
          plVar2 = (long *)(*(long *)(lVar17 + 0x20) + lVar1);
          auVar12._12_4_ = iVar25;
          auVar12._8_4_ = iVar7;
          uVar19 = ((local_c0 >> 1) + (uVar21 >> 1) * (uint)*(ushort *)((long)plVar2 + 0x12)) * 4;
          auVar14._4_4_ = iVar29;
          auVar14._0_4_ = iVar15;
          uVar16 = NEON_sqxtun(CONCAT44(iVar29,iVar15),auVar14,4);
          auVar12._4_4_ = iVar25;
          auVar12._0_4_ = iVar7;
          uVar13 = NEON_sqxtun(CONCAT44(iVar25,iVar7),auVar12,4);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar21 & 1 | (local_c0 & 1) << 1) {
          case 0:
            *(short *)((long)plVar2 + (ulong)uVar19 * 4 + *plVar2) = (short)uVar16;
            puVar20 = (uint *)((long)plVar2 + (ulong)(uVar19 | 2) * 4 + *plVar2);
            uVar19 = (uint)uVar13 & 0xffff | (uint)*(ushort *)((long)puVar20 + 2) << 0x10;
            break;
          case 1:
            *(short *)((long)plVar2 + (ulong)(uVar19 | 1) * 4 + *plVar2 + 2) = (short)uVar16;
            puVar20 = (uint *)((long)plVar2 + (ulong)(uVar19 | 3) * 4 + *plVar2);
            uVar19 = (uint)(ushort)*puVar20 | (uint)uVar13 << 0x10;
          }
          uVar21 = uVar21 + 1;
          *puVar20 = uVar19;
        } while (uVar8 != uVar21);
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 != uVar9);
  }
  lVar3 = *(long *)(lVar17 + 0x20) + lVar1;
  FUN_02fae4f4(lVar1,0,0,*(ushort *)(lVar3 + 0x10) - 1,*(ushort *)(lVar3 + 0x12) - 1,&local_90,
               &local_98);
  return lVar17;
}


