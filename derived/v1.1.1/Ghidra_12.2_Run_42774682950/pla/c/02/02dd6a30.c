/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd6a30; name: FUN_02dd6a30
 */


void FUN_02dd6a30(long param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  char *pcVar7;
  char cVar8;
  undefined1 (*pauVar9) [12];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  long *plVar21;
  undefined *puVar22;
  undefined1 (*pauVar23) [12];
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar47;
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 auVar50 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar22 = PTR_PTR_0434a080;
  pcVar7 = (char *)**(long **)(param_1 + 0xb8);
  lVar28 = *(long *)(pcVar7 + param_2 * 0x70 + 0x10);
  if ((char *)(*(long **)(param_1 + 0xb8))[1] != pcVar7) {
    uVar29 = 0;
    puVar3 = (uint *)(pcVar7 + param_2 * 0x70 + 0x58);
    plVar4 = (long *)(pcVar7 + param_2 * 0x70 + 0x50);
    puVar5 = (uint *)(pcVar7 + param_2 * 0x70 + 0x5c);
    cVar8 = *pcVar7;
    plVar21 = (long *)(pcVar7 + 0x20);
    while( true ) {
      if ((cVar8 == '\0') && (plVar21[-3] == -1)) {
        lVar27 = plVar21[-1];
        if ((lVar27 == lVar28) || (*plVar21 == lVar28)) {
          plVar21[-3] = lVar28;
          plVar6 = plVar21;
          if (lVar27 != lVar28) {
            plVar6 = plVar21 + -1;
          }
          lVar27 = *plVar6;
          plVar21[-2] = lVar27;
          if (lVar27 != *(long *)(pcVar7 + param_2 * 0x70 + 8)) {
            uVar26 = *puVar5;
            uVar25 = *puVar3;
            uVar2 = uVar25 + 1;
            if ((int)uVar25 < (int)(uVar26 & 0x3fffffff)) {
              lVar27 = *plVar4;
            }
            else {
              lVar27 = *plVar4;
              if (0x3ffffffe < (int)uVar25) {
                FUN_032bd0a8(uVar2);
                uVar26 = *puVar5;
              }
              uVar26 = (uVar26 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar26) {
                uVar26 = 0x3fffffff;
              }
              uVar20 = uVar2;
              if ((int)uVar2 <= (int)uVar26) {
                uVar20 = uVar26;
              }
              lVar27 = FUN_032bd1d4(puVar22,uVar20,4,lVar27,uVar25,puVar5);
              *plVar4 = lVar27;
              uVar25 = *puVar3;
            }
            *(int *)(lVar27 + (long)(int)uVar25 * 4) = (int)uVar29;
            *puVar3 = uVar2;
            FUN_02dd6a30(param_1,uVar29);
          }
        }
      }
      uVar29 = uVar29 + 1;
      if ((ulong)(((*(long **)(param_1 + 0xb8))[1] - **(long **)(param_1 + 0xb8) >> 4) *
                 0x6db6db6db6db6db7) <= uVar29) break;
      cVar8 = (char)plVar21[10];
      plVar21 = plVar21 + 0xe;
    }
  }
  pauVar23 = (undefined1 (*) [12])
             (**(code **)(**(long **)(param_1 + 0x10) + 0x118))
                       (*(long **)(param_1 + 0x10),*(undefined8 *)(pcVar7 + param_2 * 0x70 + 8));
  puVar24 = (undefined8 *)
            (**(code **)(**(long **)(param_1 + 0x10) + 0x118))(*(long **)(param_1 + 0x10),lVar28);
  uVar38 = (undefined4)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
  pauVar9 = (undefined1 (*) [12])(pauVar23[1] + 4);
  uVar42 = (undefined4)((ulong)*(undefined8 *)pauVar23[2] >> 0x20);
  auVar48._12_4_ = uVar42;
  auVar48._0_12_ = *pauVar9;
  auVar50._12_4_ = uVar42;
  auVar50._0_12_ = *pauVar9;
  auVar48 = NEON_ext(auVar48,auVar50,8,1);
  pauVar1 = (undefined1 (*) [12])(pauVar23[2] + 8);
  uVar42 = (undefined4)((ulong)*(undefined8 *)(pauVar23[3] + 4) >> 0x20);
  fVar43 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar46._12_4_ = uVar38;
  auVar46._0_12_ = *pauVar23;
  auVar49._12_4_ = uVar38;
  auVar49._0_12_ = *pauVar23;
  auVar46 = NEON_ext(auVar46,auVar49,8,1);
  fVar30 = auVar46._0_4_;
  fVar31 = auVar48._0_4_;
  auVar16._12_4_ = uVar42;
  auVar16._0_12_ = *pauVar1;
  auVar17._12_4_ = uVar42;
  auVar17._0_12_ = *pauVar1;
  auVar46 = NEON_ext(auVar16,auVar17,8,1);
  fVar12 = (float)*(undefined8 *)*pauVar9;
  fVar44 = (float)*(undefined8 *)*pauVar23;
  fVar41 = (float)puVar24[1];
  fVar11 = (float)*puVar24;
  fVar51 = (float)*(undefined8 *)*pauVar1;
  fVar39 = auVar46._4_4_;
  fVar36 = (float)((ulong)*puVar24 >> 0x20);
  fVar40 = (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
  fVar47 = auVar46._0_4_;
  fVar37 = fVar31 * fVar41 + fVar12 * fVar11 + fVar10 * fVar36;
  uStack_98 = CONCAT44(fVar39 * fVar41 + fVar43 * fVar11 + fVar39 * fVar36,
                       fVar47 * fVar41 + fVar51 * fVar11 + fVar43 * fVar36);
  local_a0 = CONCAT17((char)((uint)fVar37 >> 0x18),
                      CONCAT16((char)((uint)fVar37 >> 0x10),
                               CONCAT15((char)((uint)fVar37 >> 8),
                                        CONCAT14(SUB41(fVar37,0),
                                                 fVar30 * fVar41 + fVar44 * fVar11 + fVar40 * fVar36
                                                ))));
  fVar41 = (float)puVar24[3];
  fVar11 = (float)puVar24[2];
  fVar36 = (float)((ulong)puVar24[2] >> 0x20);
  fVar37 = fVar31 * fVar41 + fVar12 * fVar11 + fVar10 * fVar36;
  uStack_88 = CONCAT44(fVar39 * fVar41 + fVar43 * fVar11 + fVar39 * fVar36,
                       fVar47 * fVar41 + fVar51 * fVar11 + fVar43 * fVar36);
  local_90 = CONCAT17((char)((uint)fVar37 >> 0x18),
                      CONCAT16((char)((uint)fVar37 >> 0x10),
                               CONCAT15((char)((uint)fVar37 >> 8),
                                        CONCAT14(SUB41(fVar37,0),
                                                 fVar30 * fVar41 + fVar44 * fVar11 + fVar40 * fVar36
                                                ))));
  fVar37 = (float)puVar24[5];
  fVar11 = (float)puVar24[4];
  fVar36 = (float)((ulong)puVar24[4] >> 0x20);
  fVar10 = fVar31 * fVar37 + fVar12 * fVar11 + fVar10 * fVar36;
  uStack_78 = CONCAT44(fVar39 * fVar37 + fVar43 * fVar11 + fVar39 * fVar36,
                       fVar47 * fVar37 + fVar51 * fVar11 + fVar43 * fVar36);
  local_80 = CONCAT17((char)((uint)fVar10 >> 0x18),
                      CONCAT16((char)((uint)fVar10 >> 0x10),
                               CONCAT15((char)((uint)fVar10 >> 8),
                                        CONCAT14(SUB41(fVar10,0),
                                                 fVar30 * fVar37 + fVar44 * fVar11 + fVar40 * fVar36
                                                ))));
  uVar38 = (undefined4)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
  fVar40 = (float)puVar24[6] - (float)*(undefined8 *)pauVar23[4];
  fVar10 = (float)((ulong)puVar24[6] >> 0x20) - (float)((ulong)*(undefined8 *)pauVar23[4] >> 0x20);
  fVar36 = (float)puVar24[7] - (float)*(undefined8 *)(pauVar23[4] + 8);
  auVar18._12_4_ = uVar38;
  auVar18._0_12_ = *pauVar23;
  auVar19._12_4_ = uVar38;
  auVar19._0_12_ = *pauVar23;
  auVar49 = NEON_ext(auVar18,auVar19,8,1);
  auVar46 = *(undefined1 (*) [16])(pauVar23[1] + 4);
  pauVar1 = (undefined1 (*) [12])(pauVar23[2] + 8);
  uVar38 = (undefined4)((ulong)*(undefined8 *)(pauVar23[3] + 4) >> 0x20);
  auVar48 = NEON_ext(auVar46,auVar46,8,1);
  auVar13._12_4_ = uVar38;
  auVar13._0_12_ = *pauVar1;
  auVar14._12_4_ = uVar38;
  auVar14._0_12_ = *pauVar1;
  auVar50 = NEON_ext(auVar13,auVar14,8,1);
  fVar12 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar44 = auVar49._0_4_ * fVar36 +
           (float)*(undefined8 *)*pauVar23 * fVar40 +
           (float)((ulong)*(undefined8 *)*pauVar23 >> 0x20) * fVar10;
  fVar11 = auVar48._0_4_ * fVar36 + auVar46._0_4_ * fVar40 + auVar46._4_4_ * fVar10;
  uVar32 = (undefined1)((uint)fVar11 >> 8);
  uVar33 = (undefined1)((uint)fVar11 >> 0x10);
  uVar34 = (undefined1)((uint)fVar11 >> 0x18);
  fVar37 = auVar50._0_4_ * fVar36 + (float)*(undefined8 *)*pauVar1 * fVar40 + fVar12 * fVar10;
  fVar40 = auVar50._4_4_ * fVar36 + fVar12 * fVar40 + auVar50._4_4_ * fVar10;
  uStack_68 = CONCAT44(fVar40,fVar37);
  local_70 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(SUB41(fVar11,0),fVar44))));
  *(ulong *)(pcVar7 + param_2 * 0x70 + 0x38) = CONCAT44(fVar40,fVar37);
  *(ulong *)(pcVar7 + param_2 * 0x70 + 0x30) =
       CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(SUB41(fVar11,0),fVar44))));
  fVar40 = (float)((ulong)local_70 >> 0x20);
  fVar40 = fVar40 * fVar40;
  fVar10 = fVar44 * fVar44 + fVar40 + fVar37 * fVar37;
  fVar40 = fVar44 * fVar44 + fVar40 + fVar37 * fVar37;
  uVar32 = SUB41(fVar40,0);
  uVar33 = (undefined1)((uint)fVar40 >> 8);
  uVar34 = (undefined1)((uint)fVar40 >> 0x10);
  uVar35 = (undefined1)((uint)fVar40 >> 0x18);
  uVar45 = NEON_frsqrte(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar10)))),4
                       );
  fVar40 = (float)uVar45;
  fVar44 = (float)((ulong)uVar45 >> 0x20);
  uVar45 = NEON_frsqrts(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar10)))),
                        CONCAT44(fVar44 * fVar44,fVar40 * fVar40),4);
  fVar40 = fVar40 * (float)uVar45;
  fVar44 = fVar44 * (float)((ulong)uVar45 >> 0x20);
  uVar45 = NEON_frsqrts(CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,fVar10)))),
                        CONCAT44(fVar44 * fVar44,fVar40 * fVar40),4);
  iVar15 = -(uint)(fVar10 <= 0.0);
  fVar10 = fVar10 * (float)uVar45 * fVar40;
  *(uint *)(pcVar7 + param_2 * 0x70 + 0x60) =
       CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                         CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                  SUB41(fVar10,0) & ~(byte)iVar15)));
  FUN_032cb3d8(pcVar7 + param_2 * 0x70 + 0x40,&local_a0);
  return;
}


