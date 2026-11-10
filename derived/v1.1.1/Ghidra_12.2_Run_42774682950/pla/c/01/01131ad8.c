/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01131ad8; name: FUN_01131ad8
 */


void FUN_01131ad8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  byte bVar24;
  ulong uVar25;
  int *piVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  byte bVar30;
  long lVar31;
  uint uVar32;
  ulong uVar33;
  ushort *puVar34;
  short sVar35;
  short sVar36;
  ulong uVar37;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  uint local_68;
  ushort local_64;
  
  bVar16 = true;
  bVar14 = true;
  bVar12 = true;
  bVar10 = true;
  puVar1 = (uint *)(param_1 + 0x6c);
  bVar17 = true;
  bVar15 = true;
  bVar13 = true;
  bVar8 = true;
  bVar11 = true;
  bVar9 = true;
  bVar7 = true;
  bVar6 = true;
  uVar33 = 1;
  do {
    uVar32 = (uint)uVar33;
    local_80 = 0;
    uStack_78 = 0;
    local_a8 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    if ((int)uVar32 < 0x38a) {
      plVar3 = (long *)*(&DAT_043f23a0)[uVar33 * 4];
      lVar28 = (&DAT_043f23a0)[uVar33 * 4][1] - (long)plVar3;
      if (lVar28 != 0) {
        bVar24 = 0;
        bVar30 = 0;
        uVar27 = 0;
        lVar31 = *plVar3;
        while( true ) {
          if (lVar31 != 0) {
            bVar24 = bVar24 + 1;
            *(short *)((long)&local_a8 + (ulong)bVar30 * 2) = (short)uVar27;
            bVar30 = bVar24;
          }
          uVar27 = uVar27 + 1;
          if ((ulong)(lVar28 >> 3) <= uVar27) break;
          lVar31 = plVar3[uVar27];
        }
        if (bVar24 != 0) {
          uVar27 = 0;
          if ((uVar32 | 1) != 0x38b) {
            uVar27 = uVar33;
          }
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar22 = 0;
          bVar23 = false;
          uVar37 = (ulong)bVar24;
          puVar34 = (ushort *)&local_a8;
          sVar35 = 0;
          do {
            uVar4 = *puVar34;
            uVar2 = 0;
            if ((uVar32 | 1) != 0x38b) {
              uVar2 = (uint)uVar4;
            }
            uVar25 = (ulong)uVar2;
            if (uVar2 < 0x1c) {
              lVar28 = *(&DAT_043f23a0)[uVar27 * 4];
              uVar29 = (&DAT_043f23a0)[uVar27 * 4][1] - lVar28 >> 3;
              if ((uVar29 <= uVar25) || (*(long *)(lVar28 + uVar25 * 8) == 0)) goto LAB_01131c60;
            }
            else {
LAB_01131c60:
              uVar25 = 0;
              lVar28 = *DAT_043f23a0;
              uVar29 = DAT_043f23a0[1] - lVar28 >> 3;
            }
            if (uVar29 <= uVar25) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            piVar26 = *(int **)(lVar28 + uVar25 * 8);
            sVar36 = sVar35;
            if (((0x66 < *(ushort *)((long)piVar26 - (long)*piVar26)) &&
                (uVar25 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[0x33], uVar25 != 0))
               && (sVar5 = *(short *)((long)piVar26 + uVar25), sVar5 != 0)) {
              sVar36 = sVar5;
              if (sVar35 != 0) {
                sVar36 = sVar35;
              }
              if (iVar18 == 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = uVar32;
                local_64 = uVar4;
                iVar18 = FUN_02c54af0(&local_70,0);
              }
              if (iVar19 == 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = uVar32;
                local_64 = uVar4;
                iVar19 = FUN_02c54af0(&local_70,1);
              }
              if (iVar20 == 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = uVar32;
                local_64 = uVar4;
                iVar20 = FUN_02c54af0(&local_70,2);
              }
              if (iVar21 == 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = uVar32;
                local_64 = uVar4;
                iVar21 = FUN_02c54af0(&local_70,3);
              }
              if (iVar22 == 0) {
                local_70 = &PTR_LAB_0428ac88;
                local_68 = uVar32;
                local_64 = uVar4;
                iVar22 = FUN_02c54af0(&local_70,4);
              }
              bVar23 = true;
            }
            uVar37 = uVar37 - 1;
            puVar34 = puVar34 + 1;
            sVar35 = sVar36;
          } while (uVar37 != 0);
          if (bVar23) {
            if (((ushort)puVar1[uVar33 * 0x16 + 0x1e] < 100) ||
               (uVar27 = FUN_011357f8(param_1,uVar33 & 0xffffffff), (uVar27 & 1) == 0)) {
              if (sVar36 != 0) {
                bVar6 = false;
              }
              if (iVar18 != 0) {
                bVar8 = false;
              }
              if (iVar19 != 0) {
                bVar10 = false;
              }
              if (iVar20 != 0) {
                bVar12 = false;
              }
              if (iVar21 != 0) {
                bVar14 = false;
              }
              if (iVar22 != 0) {
                bVar16 = false;
              }
            }
            if (((byte)puVar1[uVar33 * 0x16 + 0x1c] >> 2 & 1) == 0) {
              if (sVar36 != 0) {
                bVar7 = false;
              }
              if (iVar18 != 0) {
                bVar9 = false;
              }
              if (iVar19 != 0) {
                bVar11 = false;
              }
              if (iVar20 != 0) {
                bVar13 = false;
              }
              if (iVar21 != 0) {
                bVar15 = false;
              }
              if (iVar22 != 0) {
                bVar17 = false;
              }
            }
          }
        }
      }
    }
    uVar33 = uVar33 + 1;
    if (uVar33 == 0x38a) {
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
      }
      if (bVar7) {
        *puVar1 = *puVar1 | 0x40;
      }
      if (bVar8) {
        *puVar1 = *puVar1 | 2;
      }
      if (bVar9) {
        *puVar1 = *puVar1 | 0x80;
      }
      if (bVar10) {
        *puVar1 = *puVar1 | 4;
      }
      if (bVar11) {
        *puVar1 = *puVar1 | 0x100;
      }
      if (bVar12) {
        *puVar1 = *puVar1 | 8;
      }
      if (bVar13) {
        *puVar1 = *puVar1 | 0x200;
      }
      if (bVar14) {
        *puVar1 = *puVar1 | 0x10;
      }
      if (bVar15) {
        *puVar1 = *puVar1 | 0x400;
      }
      if (bVar16) {
        *puVar1 = *puVar1 | 0x20;
      }
      if (bVar17) {
        *puVar1 = *puVar1 | 0x800;
      }
      return;
    }
  } while( true );
}


