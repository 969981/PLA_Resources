/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d80ac; name: FUN_001d80ac
 */


/* WARNING: Removing unreachable block (ram,0x001d82e0) */

void FUN_001d80ac(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  uint uVar32;
  byte bVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  byte bVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  plVar17 = (long *)FUN_032cf5b0(0x50);
  puVar16 = PTR_DAT_04372370;
  *plVar17 = (long)(PTR_DAT_043726c8 + 0x10);
  plVar17[1] = 0xffffffff;
  lVar25 = *(long *)(puVar16 + 0x248);
  lVar18 = *(long *)(puVar16 + 0x240);
  plVar17[4] = 0;
  plVar17[5] = 0;
  plVar17[2] = 1;
  plVar17[7] = lVar25;
  plVar17[6] = lVar18;
  plVar17[9] = CONCAT44(-(float)((ulong)lVar25 >> 0x20),-(float)lVar25);
  plVar17[8] = CONCAT44(-(float)((ulong)lVar18 >> 0x20),-(float)lVar18);
  lVar18 = *(long *)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar17;
  if (lVar18 != 0) {
    FUN_032d647c();
  }
  lVar18 = FUN_001d5bbc(param_2);
  puVar16 = PTR_DAT_04372370;
  lVar25 = *(long *)(param_1 + 0x18);
  plVar17 = (long *)(lVar25 + 0x20);
  uVar43 = *(undefined8 *)(PTR_DAT_04372370 + 0x248);
  uVar35 = *(undefined8 *)(PTR_DAT_04372370 + 0x240);
  *(undefined4 *)(lVar25 + 0x28) = 0;
  *(undefined8 *)(lVar25 + 0x38) = uVar43;
  *(undefined8 *)(lVar25 + 0x30) = uVar35;
  *(ulong *)(lVar25 + 0x48) = CONCAT44(-(float)((ulong)uVar43 >> 0x20),-(float)uVar43);
  *(ulong *)(lVar25 + 0x40) = CONCAT44(-(float)((ulong)uVar35 >> 0x20),-(float)uVar35);
  if (*(int *)(lVar18 + 0x14) == 0) {
    return;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_02fcb1fc(lVar18,&local_98);
  iVar9 = local_88._4_4_ * 2;
  uVar35 = *(undefined8 *)PTR_PTR_04372408;
  uVar10 = iVar9 - 1;
  local_78 = CONCAT44(local_78._4_4_,iVar9);
  if (iVar9 < 1) {
    puVar19 = (undefined8 *)0x0;
    uVar37 = 0x80000000;
  }
  else {
    puVar19 = (undefined8 *)FUN_032cf190(uVar35,0x20,&local_78);
    uVar37 = (uint)local_78;
  }
  lVar18 = 0;
  if (local_98 != 0) {
    lVar18 = (long)&local_98 + local_98;
  }
  uVar43 = *(undefined8 *)(lVar18 + 0x30);
  puVar19[1] = *(undefined8 *)(lVar18 + 0x38);
  *puVar19 = uVar43;
  uVar43 = *(undefined8 *)(lVar18 + 0x40);
  puVar19[3] = *(undefined8 *)(lVar18 + 0x48);
  puVar19[2] = uVar43;
  uVar32 = *(uint *)(lVar25 + 0x28);
  if (uVar32 == uVar10) goto LAB_001d83f4;
  uVar28 = *(uint *)(lVar25 + 0x2c);
  if (*(uint *)(lVar25 + 0x2c) == 0) {
    *(uint *)(lVar25 + 0x2c) = uVar32;
    uVar28 = uVar32;
  }
  if ((int)uVar32 < (int)uVar10) {
    uVar7 = uVar28 & 0x7fffffff;
    if ((int)(uVar28 & 0x7fffffff) <= (int)uVar32) {
      uVar7 = uVar32;
    }
    if ((int)uVar7 < (int)uVar10) {
      uVar32 = iVar9 - 2U | (int)(iVar9 - 2U) >> 0x10;
      uVar32 = uVar32 | (int)uVar32 >> 8;
      uVar32 = uVar32 | (int)uVar32 >> 4;
      uVar32 = uVar32 | (int)uVar32 >> 2;
      uVar32 = (uVar32 | (int)uVar32 >> 1) + 1;
      if ((int)uVar32 < (int)uVar10) {
        local_68 = 0;
        local_78 = 0;
        puStack_70 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_78);
      }
      lVar18 = tpidr_el0;
      lVar26 = *(long *)(lVar18 + 0x38d490);
      if (lVar26 == 0) {
        lVar26 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar26;
      }
      plVar20 = *(long **)(*(long *)(lVar26 + 8) + 0x58);
      puVar21 = (undefined4 *)(**(code **)(*plVar20 + 0x10))(plVar20,(long)(int)uVar32 * 6,0);
      uVar28 = *(uint *)(lVar25 + 0x28);
      puVar4 = (undefined4 *)0x0;
      if (*plVar17 != 0) {
        puVar4 = (undefined4 *)(*plVar17 + (long)plVar17);
      }
      if (0 < (int)uVar28) {
        if (uVar28 == 1) {
          lVar26 = 0;
        }
        else {
          lVar26 = 0;
          puVar30 = puVar4;
          puVar31 = puVar21;
          do {
            uVar40 = *puVar30;
            lVar26 = lVar26 + 2;
            *(undefined2 *)(puVar31 + 1) = *(undefined2 *)(puVar30 + 1);
            *puVar31 = uVar40;
            uVar40 = *(undefined4 *)((long)puVar30 + 6);
            *(undefined2 *)((long)puVar31 + 10) = *(undefined2 *)((long)puVar30 + 10);
            *(undefined4 *)((long)puVar31 + 6) = uVar40;
            puVar31 = puVar31 + 3;
            puVar30 = puVar30 + 3;
          } while ((ulong)uVar28 - ((ulong)uVar28 & 1) != lVar26);
          if ((uVar28 & 1) == 0) goto LAB_001d834c;
        }
        puVar4 = (undefined4 *)((long)puVar4 + lVar26 * 6);
        puVar31 = (undefined4 *)((long)puVar21 + lVar26 * 6);
        uVar40 = *puVar4;
        *(undefined2 *)(puVar31 + 1) = *(undefined2 *)(puVar4 + 1);
        *puVar31 = uVar40;
      }
LAB_001d834c:
      if ((int)*(uint *)(lVar25 + 0x2c) < 0) {
        uVar28 = *(uint *)(lVar25 + 0x2c) & 0x7fffffff;
        if ((int)uVar28 <= (int)*(uint *)(lVar25 + 0x28)) {
          uVar28 = *(uint *)(lVar25 + 0x28);
        }
        lVar26 = 0;
        if (*plVar17 != 0) {
          lVar26 = *plVar17 + (long)plVar17;
        }
        lVar27 = *(long *)(lVar18 + 0x38d490);
        if (lVar27 == 0) {
          lVar27 = FUN_0333d16c(0,1);
          *(long *)(lVar18 + 0x38d490) = lVar27;
        }
        plVar20 = *(long **)(*(long *)(lVar27 + 8) + 0x58);
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar26,(ulong)uVar28 * 6);
      }
      lVar18 = 0;
      if (puVar21 != (undefined4 *)0x0) {
        lVar18 = (long)puVar21 - (long)plVar17;
      }
      *plVar17 = lVar18;
      *(uint *)(lVar25 + 0x2c) = uVar32 | 0x80000000;
    }
  }
  *(uint *)(lVar25 + 0x28) = uVar10;
LAB_001d83f4:
  uVar43 = *puVar19;
  *(undefined8 *)(lVar25 + 0x38) = puVar19[1];
  *(undefined8 *)(lVar25 + 0x30) = uVar43;
  uVar43 = puVar19[2];
  *(undefined8 *)(lVar25 + 0x48) = puVar19[3];
  *(undefined8 *)(lVar25 + 0x40) = uVar43;
  lVar18 = 0;
  if (local_98 != 0) {
    lVar18 = (long)&local_98 + local_98;
  }
  if ((int)uVar10 < 1) {
LAB_001d886c:
    if (-1 < (int)uVar37) {
      FUN_032cf244(uVar35,puVar19,0x20,uVar37 & 0x3fffffff);
    }
    if (local_90 < 0) {
      uVar10 = local_90._4_4_ & 0x7fffffff;
      if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)(uint)local_90) {
        uVar10 = (uint)local_90;
      }
      lVar18 = 0;
      if (local_98 != 0) {
        lVar18 = (long)&local_98 + local_98;
      }
      lVar25 = tpidr_el0;
      lVar26 = *(long *)(lVar25 + 0x38d490);
      if (lVar26 == 0) {
        lVar26 = FUN_0333d16c(0,1);
        *(long *)(lVar25 + 0x38d490) = lVar26;
      }
      plVar17 = *(long **)(*(long *)(lVar26 + 8) + 0x58);
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,(ulong)uVar10 * 0x30);
    }
    return;
  }
  pauVar1 = (undefined1 (*) [12])(puVar16 + 0x1e0);
  uVar40 = (undefined4)((ulong)*(undefined8 *)(puVar16 + 0x1e8) >> 0x20);
  fVar38 = (float)*(undefined8 *)*pauVar1;
  fVar39 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar41._12_4_ = uVar40;
  auVar41._0_12_ = *pauVar1;
  auVar11._12_4_ = uVar40;
  auVar11._0_12_ = *pauVar1;
  auVar41 = NEON_ext(auVar41,auVar11,8,1);
  auVar12._12_4_ = uVar40;
  auVar12._0_12_ = *pauVar1;
  auVar41 = NEON_ext(auVar41,auVar12,8,1);
  uVar29 = 0;
LAB_001d845c:
  lVar26 = *plVar17;
  uVar2 = uVar29 + 1;
  puVar34 = (undefined8 *)(lVar18 + uVar2 * 0x30);
  uVar46 = puVar34[1];
  uVar43 = *puVar34;
  uVar48 = puVar34[3];
  uVar47 = puVar34[2];
  pbVar23 = (byte *)((long)plVar17 + uVar29 * 6 + lVar26);
  uVar32 = *(uint *)(puVar34 + 5);
  pfVar5 = (float *)(puVar19 + (long)*(int *)(puVar34 + 4) * 4);
  lVar25 = 0;
  pbVar3 = pbVar23 + 1;
  pbVar22 = pbVar23 + 2;
  pbVar23[0] = 0;
  pbVar23[1] = 0;
  *pbVar22 = 0;
  pbVar24 = (byte *)((long)plVar17 + uVar29 * 6 + lVar26);
LAB_001d854c:
  bVar33 = *pbVar24;
  do {
    bVar36 = bVar33;
    if (0xef < bVar36) goto LAB_001d8634;
    *pbVar24 = bVar36 + 0x10;
    bVar33 = bVar36 + 0x10;
  } while (*pfVar5 + fVar38 * (pfVar5[4] - *pfVar5) *
                     (float)(byte)((*pbVar23 >> 4) * (*pbVar23 >> 4)) <= (float)uVar43);
LAB_001d8630:
  do {
    *pbVar24 = bVar36;
LAB_001d8634:
    do {
      bVar33 = bVar36;
      if ((int)lVar25 == 0) {
        do {
          bVar36 = bVar33;
          if ((~bVar36 & 0xf) == 0) goto LAB_001d84d8;
          *pbVar24 = bVar36 + 1;
          fVar42 = pfVar5[4];
          bVar33 = bVar36 + 1;
        } while ((float)uVar47 <=
                 fVar42 - fVar38 * (fVar42 - *pfVar5) *
                          (float)(byte)((*pbVar23 & 0xf) * (*pbVar23 & 0xf)));
LAB_001d84d4:
        *pbVar24 = bVar36;
      }
      else {
        if ((int)lVar25 == 1) {
          do {
            bVar36 = bVar33;
            if ((~bVar36 & 0xf) == 0) goto LAB_001d84d8;
            *pbVar24 = bVar36 + 1;
            bVar33 = bVar36 + 1;
          } while ((float)((ulong)uVar47 >> 0x20) <=
                   pfVar5[5] -
                   fVar39 * (pfVar5[5] - pfVar5[1]) *
                   (float)(byte)((*pbVar3 & 0xf) * (*pbVar3 & 0xf)));
          goto LAB_001d84d4;
        }
        if (lVar25 == 2) {
          do {
            bVar36 = bVar33;
            if ((~bVar36 & 0xf) == 0) goto LAB_001d84d8;
            *pbVar24 = bVar36 + 1;
            bVar33 = bVar36 + 1;
          } while ((float)uVar48 <=
                   pfVar5[6] -
                   fVar38 * (pfVar5[6] - pfVar5[2]) *
                   (float)(byte)((*pbVar22 & 0xf) * (*pbVar22 & 0xf)));
          goto LAB_001d84d4;
        }
        if ((float)((ulong)uVar48 >> 0x20) <= 0.0) {
          if ((bVar36 & 0xf) != 0xf) {
            do {
              bVar36 = bVar36 + 1;
            } while ((~bVar36 & 0xf) != 0);
            goto LAB_001d84d4;
          }
        }
        else if ((bVar36 & 0xf) != 0xf) {
          *pbVar24 = bVar36 + 1;
          goto LAB_001d84d4;
        }
      }
LAB_001d84d8:
      lVar25 = lVar25 + 1;
      if (lVar25 == 3) {
        bVar13 = *pbVar23 >> 4;
        bVar33 = *pbVar23 & 0xf;
        pfVar6 = (float *)(puVar19 + uVar2 * 4);
        fVar42 = auVar41._0_4_ * ((float)*(undefined8 *)(pfVar5 + 4) - (float)*(undefined8 *)pfVar5)
        ;
        fVar44 = auVar41._4_4_ *
                 ((float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) -
                 (float)((ulong)*(undefined8 *)pfVar5 >> 0x20));
        fVar45 = auVar41._8_4_ *
                 ((float)*(undefined8 *)(pfVar5 + 6) - (float)*(undefined8 *)(pfVar5 + 2));
        bVar36 = *pbVar3;
        bVar8 = *pbVar22;
        pfVar6[4] = 0.0;
        pfVar6[5] = 0.0;
        pfVar6[6] = 0.0;
        pfVar6[7] = 0.0;
        pfVar6[0] = 0.0;
        pfVar6[1] = 0.0;
        pfVar6[2] = 0.0;
        pfVar6[3] = 0.0;
        bVar14 = bVar36 >> 4;
        bVar15 = bVar8 >> 4;
        bVar36 = bVar36 & 0xf;
        bVar8 = bVar8 & 0xf;
        *pfVar6 = *pfVar5 + (float)(byte)(bVar13 * bVar13) * fVar42;
        pfVar6[1] = (float)(byte)(bVar14 * bVar14) * fVar44 + pfVar5[1];
        pfVar6[2] = (float)(byte)(bVar15 * bVar15) * fVar45 + pfVar5[2];
        pfVar6[4] = pfVar5[4] - (float)(byte)(bVar33 * bVar33) * fVar42;
        pfVar6[5] = pfVar5[5] - (float)(byte)(bVar36 * bVar36) * fVar44;
        pfVar6[6] = pfVar5[6] - (float)(byte)(bVar8 * bVar8) * fVar45;
        if (*(int *)(lVar18 + uVar2 * 0x30 + 0x24) == 0) {
          bVar33 = (byte)(uVar32 >> 0x10) & 0x7f;
        }
        else {
          uVar28 = uVar32 + ~(uint)uVar29;
          uVar32 = uVar28 >> 1;
          bVar33 = (byte)(uVar28 >> 0x11) | 0x80;
        }
        lVar26 = uVar29 * 6 + lVar26;
        *(byte *)((long)plVar17 + lVar26 + 3) = bVar33;
        *(short *)((long)plVar17 + lVar26 + 4) = (short)uVar32;
        uVar29 = uVar2;
        if (uVar2 == uVar10) goto LAB_001d886c;
        goto LAB_001d845c;
      }
      pbVar24 = (byte *)((long)plVar17 + lVar25 + uVar29 * 6 + lVar26);
      if ((int)lVar25 == 0) goto LAB_001d854c;
      if ((int)lVar25 == 1) {
        bVar33 = *pbVar24;
        while (bVar36 = bVar33, bVar36 < 0xf0) {
          *pbVar24 = bVar36 + 0x10;
          bVar33 = bVar36 + 0x10;
          if ((float)((ulong)uVar43 >> 0x20) <
              pfVar5[1] +
              fVar39 * (pfVar5[5] - pfVar5[1]) * (float)(byte)((*pbVar3 >> 4) * (*pbVar3 >> 4)))
          goto LAB_001d8630;
        }
        goto LAB_001d8634;
      }
      bVar36 = *pbVar24;
      bVar33 = bVar36;
      if (lVar25 == 2) {
        while (bVar36 = bVar33, bVar36 < 0xf0) {
          *pbVar24 = bVar36 + 0x10;
          bVar33 = bVar36 + 0x10;
          if ((float)uVar46 <
              pfVar5[2] +
              fVar38 * (pfVar5[6] - pfVar5[2]) * (float)(byte)((*pbVar22 >> 4) * (*pbVar22 >> 4)))
          goto LAB_001d8630;
        }
        goto LAB_001d8634;
      }
      if (0.0 <= (float)((ulong)uVar46 >> 0x20)) {
        if (bVar36 < 0xf0) goto LAB_001d8620;
        goto LAB_001d8634;
      }
    } while (0xef < bVar36);
    *pbVar24 = bVar36 + 0x10;
  } while( true );
LAB_001d8620:
  do {
    bVar36 = bVar36 + 0x10;
  } while (bVar36 < 0xf0);
  goto LAB_001d8630;
}


