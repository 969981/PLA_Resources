/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9b898; name: FUN_02f9b898
 */


undefined8 FUN_02f9b898(long param_1)

{
  float *pfVar1;
  unkbyte9 *pVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  float *pfVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  float *pfVar20;
  long lVar21;
  undefined8 *puVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  long lVar28;
  long *plVar29;
  float *pfVar30;
  float fVar31;
  uint uVar32;
  int iVar37;
  float fVar38;
  int iVar39;
  undefined1 auVar33 [12];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar45;
  int iVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar50;
  int iVar51;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined8 uVar64;
  undefined1 auVar65 [12];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 local_6c0;
  float fStack_6b8;
  undefined4 uStack_6b4;
  float local_6b0;
  float fStack_6ac;
  float fStack_6a8;
  undefined4 uStack_6a4;
  undefined8 local_698;
  undefined8 *local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined4 local_670;
  undefined4 uStack_66c;
  ulong uStack_668;
  undefined8 *local_660;
  ushort local_658;
  
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x38d490) == 0) {
    lVar28 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar28;
    lVar28 = *(long *)(lVar28 + 0x10);
  }
  else {
    lVar28 = *(long *)(*(long *)(lVar15 + 0x38d490) + 0x10);
  }
  if (lVar28 != 0) {
    puVar22 = *(undefined8 **)(lVar28 + 8);
    uVar17 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar17, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = "TthknpCompoundShape::updateCachedBounds()";
      uVar64 = nn::os::GetSystemTick();
      puVar22[1] = uVar64;
    }
  }
  puVar13 = PTR_PTR_0434a080;
  cVar4 = *(char *)(param_1 + 0x100);
  if (cVar4 != '\x02') {
    if (cVar4 == '\x01') {
      uVar5 = *(ushort *)(param_1 + 0xe4);
      if (uVar5 != 0) {
LAB_02f9bd5c:
        local_658 = uVar5;
        local_690 = &local_680;
        uStack_688._4_4_ = 0x80000020;
        plVar29 = (long *)(param_1 + 200);
        lVar15 = 0;
        if (*plVar29 != 0) {
          lVar15 = *plVar29 + (long)plVar29;
        }
        local_660 = (undefined8 *)(lVar15 + (ulong)uVar5 * 0x20);
        iVar51 = 1;
        uStack_668 = (ulong)*(uint *)(local_660 + 3);
        local_670 = *(undefined4 *)(local_660 + 2);
        uStack_66c = *(undefined4 *)((long)local_660 + 0x14);
        fStack_6a8 = 3.40282e+38;
        uStack_6a4 = 0x7f7fffee;
        local_6b0 = 3.40282e+38;
        fStack_6ac = 3.40282e+38;
        uStack_678 = local_660[1];
        local_680 = *local_660;
        fStack_6b8 = -3.40282e+38;
        uStack_6b4 = 0xff7fffee;
        local_6c0 = 0xff7fffeeff7fffee;
        do {
          uVar17 = (long)iVar51 - 1;
          pauVar19 = (undefined1 (*) [16])(local_690 + uVar17 * 6);
          lVar15 = *(long *)pauVar19[2];
          uStack_688._0_4_ = (int)uVar17;
          uVar5 = *(ushort *)(lVar15 + 0x1c);
          if (uVar5 == 0) {
            if ((*(byte *)(param_1 + 0x48 +
                          (ulong)*(ushort *)(lVar15 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) +
                          0x1e) >> 6 & 1) == 0) goto LAB_02f9bea8;
            auVar11._4_4_ = fStack_6ac;
            auVar11._0_4_ = local_6b0;
            auVar11._8_4_ = fStack_6a8;
            auVar11._12_4_ = uStack_6a4;
            auVar67 = NEON_fmin(auVar11,*pauVar19,4);
            auVar66._8_4_ = fStack_6b8;
            auVar66._0_8_ = local_6c0;
            auVar66._12_4_ = uStack_6b4;
            auVar68 = NEON_fmax(auVar66,pauVar19[1],4);
            fStack_6b8 = auVar68._8_4_;
            uStack_6b4 = auVar68._12_4_;
            local_6c0 = auVar68._0_8_;
            fStack_6a8 = auVar67._8_4_;
            uStack_6a4 = auVar67._12_4_;
            local_6b0 = auVar67._0_4_;
            fStack_6ac = auVar67._4_4_;
            uVar32 = uStack_688._4_4_;
          }
          else {
            if ((int)(uStack_688._4_4_ & 0x3fffffff) <= iVar51) {
              local_690 = (undefined8 *)
                          FUN_02f9ffa8(puVar13,iVar51 + 1U,local_690,uVar17 & 0xffffffff,
                                       (ulong)&local_690 | 0xc);
              uVar5 = *(ushort *)(lVar15 + 0x1c);
            }
            puVar22 = local_690 + uVar17 * 6;
            *(ushort *)(puVar22 + 5) = uVar5;
            lVar18 = 0;
            if (*plVar29 != 0) {
              lVar18 = *plVar29 + (long)plVar29;
            }
            puVar3 = (undefined8 *)(lVar18 + (ulong)uVar5 * 0x20);
            puVar22[4] = puVar3;
            uVar8 = *(undefined4 *)(puVar3 + 2);
            uVar9 = *(undefined4 *)((long)puVar3 + 0x14);
            puVar22[3] = (ulong)*(uint *)(puVar3 + 3);
            *(undefined4 *)(puVar22 + 2) = uVar8;
            *(undefined4 *)((long)puVar22 + 0x14) = uVar9;
            uVar64 = *puVar3;
            puVar22[1] = puVar3[1];
            *puVar22 = uVar64;
            uVar5 = *(ushort *)(lVar15 + 0x1e);
            *(ushort *)(puVar22 + 0xb) = uVar5;
            lVar15 = 0;
            if (*plVar29 != 0) {
              lVar15 = *plVar29 + (long)plVar29;
            }
            puVar3 = (undefined8 *)(lVar15 + (ulong)uVar5 * 0x20);
            puVar22[10] = puVar3;
            uVar8 = *(undefined4 *)(puVar3 + 2);
            uVar9 = *(undefined4 *)((long)puVar3 + 0x14);
            puVar22[9] = (ulong)*(uint *)(puVar3 + 3);
            *(undefined4 *)(puVar22 + 8) = uVar8;
            *(undefined4 *)((long)puVar22 + 0x44) = uVar9;
            uVar64 = *puVar3;
            puVar22[7] = puVar3[1];
            puVar22[6] = uVar64;
            uVar17 = (ulong)(iVar51 + 1U);
LAB_02f9bea8:
            uStack_688._0_4_ = (int)uVar17;
            uVar32 = uStack_688._4_4_;
          }
          if ((int)uStack_688 == 0) goto LAB_02f9bee8;
          iVar51 = (int)uVar17;
          uStack_688._4_4_ = uVar32;
        } while( true );
      }
    }
    else if (cVar4 != '\0') {
      uVar5 = *(ushort *)(param_1 + 0xe4);
      if (uVar5 != 0) goto LAB_02f9bd5c;
      auVar67 = ZEXT816(0);
      fVar40 = 3.40282e+38;
      auVar68 = ZEXT816(0);
      goto LAB_02f9c188;
    }
    uVar64 = 0;
    goto joined_r0x02f9bd48;
  }
  plVar29 = (long *)(param_1 + 0xe8);
  lVar18 = *plVar29;
  auVar68 = *(undefined1 (*) [16])((long)plVar29 + lVar18 + 0x90);
  if (((*(float *)((long)plVar29 + lVar18 + 0x80) <= auVar68._0_4_ ||
       *(float *)((long)plVar29 + lVar18 + 0x84) <= auVar68._4_4_) ||
      *(float *)((long)plVar29 + lVar18 + 0x88) <= auVar68._8_4_) ||
      *(float *)((long)plVar29 + lVar18 + 0x8c) <= auVar68._12_4_) {
    iVar51 = *(int *)(param_1 + 0x5c);
    lVar18 = *(long *)(lVar15 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar18;
    }
    lVar18 = *(long *)(lVar18 + 8);
    uVar17 = (ulong)(int)(iVar51 * 0x10 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar18 + 0x10) < uVar17) {
LAB_02f9bcf4:
      pfVar14 = (float *)FUN_032ce670(lVar18,uVar17);
    }
    else {
      pfVar14 = *(float **)(lVar18 + 0x18);
      if (*(ulong *)(lVar18 + 0x20) < (long)pfVar14 + uVar17) goto LAB_02f9bcf4;
      *(ulong *)(lVar18 + 0x18) = (long)pfVar14 + uVar17;
    }
    pfVar30 = (float *)(*plVar29 + (long)plVar29);
    auVar66 = *(undefined1 (*) [16])(pfVar30 + 0x24);
    auVar67._8_4_ = 0x7f7fffee;
    auVar67._0_8_ = 0x7f7fffee7f7fffee;
    auVar67._12_4_ = 0x7f7fffee;
    auVar68._8_4_ = 0xff7fffee;
    auVar68._0_8_ = 0xff7fffeeff7fffee;
    auVar68._12_4_ = 0xff7fffee;
    if (((auVar66._0_4_ < pfVar30[0x20] && auVar66._4_4_ < pfVar30[0x21]) &&
        auVar66._8_4_ < pfVar30[0x22]) && auVar66._12_4_ < pfVar30[0x23]) {
LAB_02f9c034:
      uVar32 = 0;
    }
    else {
      if (*plVar29 == 0) {
        pfVar30 = (float *)0x0;
        iVar51 = *(int *)(param_1 + 0xf0);
      }
      else {
        iVar51 = *(int *)(param_1 + 0xf0);
      }
      if (iVar51 == 0) goto LAB_02f9c034;
      auVar67._8_4_ = 0x7f7fffee;
      auVar67._0_8_ = 0x7f7fffee7f7fffee;
      auVar67._12_4_ = 0x7f7fffee;
      auVar68._8_4_ = 0xff7fffee;
      auVar68._0_8_ = 0xff7fffeeff7fffee;
      auVar68._12_4_ = 0xff7fffee;
      pfVar1 = pfVar30 + (long)iVar51 * 0x20;
      uVar32 = 0;
      do {
        if (*(char *)(pfVar30 + 0x1c) != '\0') {
          lVar18 = 0;
          do {
            if (pfVar30[lVar18 + 0x18] != -NAN) {
              iVar51 = (int)lVar18;
              if (iVar51 == 0) {
                pfVar20 = pfVar30;
                pfVar23 = pfVar30 + 8;
                pfVar24 = pfVar30 + 0xc;
                pfVar25 = pfVar30 + 4;
                pfVar26 = pfVar30 + 0x14;
                pfVar27 = pfVar30 + 0x10;
              }
              else {
                pfVar20 = pfVar30 + 2;
                pfVar23 = pfVar30 + 10;
                pfVar24 = pfVar30 + 0xe;
                pfVar25 = pfVar30 + 6;
                pfVar26 = pfVar30 + 0x16;
                pfVar27 = pfVar30 + 0x12;
                if ((iVar51 != 2) &&
                   (pfVar20 = pfVar30 + 1, pfVar23 = pfVar30 + 9, pfVar24 = pfVar30 + 0xd,
                   pfVar25 = pfVar30 + 5, pfVar26 = pfVar30 + 0x15, pfVar27 = pfVar30 + 0x11,
                   iVar51 != 1)) {
                  pfVar20 = pfVar30 + 3;
                  pfVar23 = pfVar30 + 0xb;
                  pfVar24 = pfVar30 + 0xf;
                  pfVar25 = pfVar30 + 7;
                  pfVar26 = pfVar30 + 0x17;
                  pfVar27 = pfVar30 + 0x13;
                }
              }
              auVar34._0_4_ = *pfVar20;
              auVar44._0_4_ = *pfVar25;
              fVar40 = *pfVar26;
              auVar34._4_4_ = *pfVar23;
              auVar44._4_4_ = *pfVar24;
              auVar53._4_12_ = SUB1612(ZEXT816(0),4);
              auVar53._0_4_ = *pfVar27;
              auVar44._8_4_ = fVar40;
              auVar44._12_4_ = 0;
              auVar34._8_8_ = auVar53._0_8_;
              auVar66 = *(undefined1 (*) [16])PTR_DAT_04349f00;
              iVar42 = CONCAT13(auVar66[3] & (byte)((uint)auVar44._0_4_ >> 0x18),
                                CONCAT12(auVar66[2] & (byte)((uint)auVar44._0_4_ >> 0x10),
                                         CONCAT11(auVar66[1] & (byte)((uint)auVar44._0_4_ >> 8),
                                                  auVar66[0] & SUB41(auVar44._0_4_,0))));
              auVar65._0_8_ =
                   CONCAT17(auVar66[7] & (byte)((uint)auVar44._4_4_ >> 0x18),
                            CONCAT16(auVar66[6] & (byte)((uint)auVar44._4_4_ >> 0x10),
                                     CONCAT15(auVar66[5] & (byte)((uint)auVar44._4_4_ >> 8),
                                              CONCAT14(auVar66[4] & SUB41(auVar44._4_4_,0),iVar42)))
                           );
              auVar65[8] = auVar66[8] & SUB41(fVar40,0);
              auVar65[9] = auVar66[9] & (byte)((uint)fVar40 >> 8);
              auVar65[10] = auVar66[10] & (byte)((uint)fVar40 >> 0x10);
              auVar65[0xb] = auVar66[0xb] & (byte)((uint)fVar40 >> 0x18);
              iVar51 = -(uint)(CONCAT13(auVar66[3] & (byte)((uint)auVar34._0_4_ >> 0x18),
                                        CONCAT12(auVar66[2] & (byte)((uint)auVar34._0_4_ >> 0x10),
                                                 CONCAT11(auVar66[1] &
                                                          (byte)((uint)auVar34._0_4_ >> 8),
                                                          auVar66[0] & SUB41(auVar34._0_4_,0)))) ==
                              auVar66._0_4_);
              iVar37 = -(uint)(CONCAT13(auVar66[7] & (byte)((uint)auVar34._4_4_ >> 0x18),
                                        CONCAT12(auVar66[6] & (byte)((uint)auVar34._4_4_ >> 0x10),
                                                 CONCAT11(auVar66[5] &
                                                          (byte)((uint)auVar34._4_4_ >> 8),
                                                          auVar66[4] & SUB41(auVar34._4_4_,0)))) ==
                              auVar66._4_4_);
              iVar39 = -(uint)(CONCAT13(auVar66[0xb] & (byte)((uint)auVar53._0_4_ >> 0x18),
                                        CONCAT12(auVar66[10] & (byte)((uint)auVar53._0_4_ >> 0x10),
                                                 CONCAT11(auVar66[9] &
                                                          (byte)((uint)auVar53._0_4_ >> 8),
                                                          auVar66[8] & SUB41(auVar53._0_4_,0)))) ==
                              auVar66._8_4_);
              iVar42 = -(uint)(iVar42 == auVar66._0_4_);
              iVar46 = -(uint)((int)((ulong)auVar65._0_8_ >> 0x20) == auVar66._4_4_);
              iVar49 = -(uint)(auVar65._8_4_ == auVar66._8_4_);
              uVar50 = CONCAT13(~(byte)((uint)iVar42 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar42 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar42 >> 8),~(byte)iVar42)));
              auVar52._0_8_ =
                   CONCAT17(~(byte)((uint)iVar46 >> 0x18),
                            CONCAT16(~(byte)((uint)iVar46 >> 0x10),
                                     CONCAT15(~(byte)((uint)iVar46 >> 8),
                                              CONCAT14(~(byte)iVar46,uVar50))));
              auVar52[8] = ~(byte)iVar49;
              auVar52[9] = ~(byte)((uint)iVar49 >> 8);
              auVar52[10] = ~(byte)((uint)iVar49 >> 0x10);
              auVar52[0xb] = ~(byte)((uint)iVar49 >> 0x18);
              if (((((auVar34._0_4_ <= auVar44._0_4_ && auVar34._4_4_ <= auVar44._4_4_) &&
                    auVar53._0_4_ <= fVar40) &&
                   (CONCAT13(~(byte)((uint)iVar51 >> 0x18),
                             CONCAT12(~(byte)((uint)iVar51 >> 0x10),
                                      CONCAT11(~(byte)((uint)iVar51 >> 8),~(byte)iVar51))) &
                    CONCAT13(~(byte)((uint)iVar37 >> 0x18),
                             CONCAT12(~(byte)((uint)iVar37 >> 0x10),
                                      CONCAT11(~(byte)((uint)iVar37 >> 8),~(byte)iVar37))) &
                   CONCAT13(~(byte)((uint)iVar39 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar39 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar39 >> 8),~(byte)iVar39)))) != 0) &&
                   (uVar50 & (uint)((ulong)auVar52._0_8_ >> 0x20) & auVar52._8_4_) != 0) &&
                 (pVar2 = (unkbyte9 *)
                          (param_1 + 0x48 +
                          ((ulong)(uint)pfVar30[lVar18 + 0x18] & 0xffff) * 0x40 +
                          *(long *)(param_1 + 0x48)), (*(byte *)((long)pVar2 + 0x1e) >> 6 & 1) != 0)
                 ) {
                fVar69 = (auVar34._0_4_ + auVar44._0_4_) * 0.5;
                fVar70 = (auVar34._4_4_ + auVar44._4_4_) * 0.5;
                fVar71 = (auVar53._0_4_ + fVar40) * 0.5;
                uVar16 = *(undefined8 *)((long)pVar2 + 8);
                uVar57 = (undefined1)((ulong)uVar16 >> 8);
                uVar58 = (undefined1)((ulong)uVar16 >> 0x10);
                uVar59 = (undefined1)((ulong)uVar16 >> 0x18);
                uVar60 = (undefined1)((ulong)uVar16 >> 0x20);
                uVar61 = (undefined1)((ulong)uVar16 >> 0x28);
                uVar62 = (undefined1)((ulong)uVar16 >> 0x30);
                uVar63 = (undefined1)((ulong)uVar16 >> 0x38);
                uVar64 = *(undefined8 *)pVar2;
                auVar6[9] = uVar57;
                auVar6._0_9_ = *pVar2;
                auVar6[10] = uVar58;
                auVar6[0xb] = uVar59;
                auVar6[0xc] = uVar60;
                auVar6[0xd] = uVar61;
                auVar6[0xe] = uVar62;
                auVar6[0xf] = uVar63;
                auVar7[9] = uVar57;
                auVar7._0_9_ = *pVar2;
                auVar7[10] = uVar58;
                auVar7[0xb] = uVar59;
                auVar7[0xc] = uVar60;
                auVar7[0xd] = uVar61;
                auVar7[0xe] = uVar62;
                auVar7[0xf] = uVar63;
                auVar66 = NEON_ext(auVar6,auVar7,8,1);
                auVar54._0_4_ = fVar69 - *(float *)(pVar2 + 1);
                auVar54._4_4_ = fVar70 - *(float *)((long)pVar2 + 0x14);
                auVar54._8_4_ = fVar71 - *(float *)((long)pVar2 + 0x18);
                auVar54._12_4_ = 0;
                fVar40 = (float)uVar64;
                fVar45 = (float)((ulong)uVar64 >> 0x20);
                fVar31 = (float)uVar16;
                fVar41 = auVar66._4_4_ * auVar66._4_4_;
                fVar38 = fVar41 + -0.5;
                fVar41 = fVar41 + -0.5;
                uVar64 = NEON_ext(uVar64,auVar66._0_8_,4,1);
                fVar47 = fVar40 * auVar54._0_4_ + fVar45 * auVar54._4_4_ + fVar31 * auVar54._8_4_;
                fVar48 = fVar40 * auVar54._0_4_ + fVar45 * auVar54._4_4_ + fVar31 * auVar54._8_4_;
                fVar36 = (float)((ulong)uVar16 >> 0x20);
                auVar66 = NEON_ext(auVar54,auVar54,4,1);
                auVar55._0_4_ = auVar54._0_4_ * (float)uVar64 - fVar40 * auVar66._0_4_;
                auVar55._4_4_ =
                     auVar54._4_4_ * (float)((ulong)uVar64 >> 0x20) - fVar45 * auVar66._4_4_;
                auVar55._8_4_ = auVar54._8_4_ * fVar40 - fVar31 * auVar54._0_4_;
                auVar55._12_4_ = fVar45 * 0.0 - fVar36 * auVar54._4_4_;
                auVar66 = NEON_ext(auVar55,auVar55,4,1);
                fVar40 = auVar54._0_4_ * fVar38 + fVar40 * fVar47 + auVar66._0_4_ * fVar36;
                fVar45 = auVar54._4_4_ * fVar41 + fVar45 * fVar48 + auVar66._4_4_ * fVar36;
                fVar31 = auVar54._8_4_ * fVar38 + fVar31 * fVar47 + auVar55._0_4_ * fVar36;
                fVar36 = fVar41 * 0.0 + fVar36 * fVar48 + auVar55._4_4_ * fVar36;
                auVar56._0_8_ = (undefined8 *)CONCAT44(fVar45 + fVar45,fVar40 + fVar40);
                auVar56._8_4_ = fVar31 + fVar31;
                auVar56._12_4_ = fVar36 + fVar36;
                uStack_688 = auVar56._8_8_;
                lVar21 = *(long *)(pVar2 + 3);
                uVar64 = CONCAT44(fVar70,fVar69);
                if (lVar21 == 0) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = lVar21 + (long)(pVar2 + 3);
                }
                auVar67 = NEON_fmin(auVar67,auVar34,4);
                auVar68 = NEON_fmax(auVar68,auVar44,4);
                local_690 = auVar56._0_8_;
                (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar21 + 0x18) * 0x200 + 0x28))
                          (lVar21,&local_690,&local_698);
                uVar16 = CONCAT44(ABS(*(float *)((long)pVar2 + 0x24)),ABS(*(float *)(pVar2 + 2)));
                uVar16 = NEON_fmaxp(uVar16,uVar16,4);
                uVar16 = NEON_fmax(CONCAT44(ABS(*(float *)((long)pVar2 + 0x28)),
                                            ABS(*(float *)((long)pVar2 + 0x28))),uVar16,4);
                auVar43._8_4_ = fVar71;
                auVar43._0_8_ = uVar64;
                auVar43._12_4_ = (float)uVar16 * (float)local_698;
                *(long *)(pfVar14 + (long)(int)uVar32 * 4 + 2) = auVar43._8_8_;
                *(undefined8 *)(pfVar14 + (long)(int)uVar32 * 4) = uVar64;
                uVar32 = uVar32 + 1;
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != 4);
        }
        pfVar30 = pfVar30 + 0x20;
      } while (pfVar30 != pfVar1);
    }
    if ((auVar68._0_4_ < auVar67._0_4_ || auVar68._4_4_ < auVar67._4_4_) ||
        auVar68._8_4_ < auVar67._8_4_) {
      auVar67 = ZEXT816(0);
      auVar68 = ZEXT816(0);
      if (0 < (int)uVar32) goto LAB_02f9c05c;
LAB_02f9c138:
      fVar40 = 0.0;
    }
    else {
      if ((int)uVar32 < 1) goto LAB_02f9c138;
LAB_02f9c05c:
      fVar31 = (auVar67._0_4_ + auVar68._0_4_) * 0.5;
      fVar36 = (auVar67._4_4_ + auVar68._4_4_) * 0.5;
      fVar38 = (auVar67._8_4_ + auVar68._8_4_) * 0.5;
      fVar40 = fVar31 - *pfVar14;
      fVar45 = fVar36 - pfVar14[1];
      fVar47 = fVar38 - pfVar14[2];
      fVar40 = fVar40 * fVar40;
      fVar45 = fVar45 * fVar45;
      fVar47 = fVar47 * fVar47;
      fVar41 = fVar40 + fVar45 + fVar47;
      uVar16 = CONCAT44(fVar40 + fVar45 + fVar47,fVar41);
      uVar64 = NEON_frsqrte(uVar16,4);
      fVar40 = (float)uVar64;
      fVar45 = (float)((ulong)uVar64 >> 0x20);
      uVar64 = NEON_frsqrts(uVar16,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
      fVar40 = fVar40 * (float)uVar64;
      fVar45 = fVar45 * (float)((ulong)uVar64 >> 0x20);
      uVar64 = NEON_frsqrts(uVar16,CONCAT44(fVar45 * fVar45,fVar40 * fVar40),4);
      iVar51 = -(uint)(fVar41 <= 0.0);
      fVar41 = fVar41 * (float)uVar64 * fVar40;
      fVar40 = pfVar14[3] +
               (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                               CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar41 >> 8) &
                                                  ~(byte)((uint)iVar51 >> 8),
                                                  SUB41(fVar41,0) & ~(byte)iVar51)));
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      if (uVar32 != 1) {
        lVar18 = (ulong)uVar32 - 1;
        pfVar30 = pfVar14 + 7;
        do {
          fVar45 = fVar31 - pfVar30[-3];
          fVar41 = fVar36 - pfVar30[-2];
          fVar48 = fVar38 - pfVar30[-1];
          fVar45 = fVar45 * fVar45;
          fVar41 = fVar41 * fVar41;
          fVar48 = fVar48 * fVar48;
          fVar47 = fVar45 + fVar41 + fVar48;
          uVar16 = CONCAT44(fVar45 + fVar41 + fVar48,fVar47);
          uVar64 = NEON_frsqrte(uVar16,4);
          fVar45 = (float)uVar64;
          fVar41 = (float)((ulong)uVar64 >> 0x20);
          uVar64 = NEON_frsqrts(uVar16,CONCAT44(fVar41 * fVar41,fVar45 * fVar45),4);
          fVar45 = fVar45 * (float)uVar64;
          fVar41 = fVar41 * (float)((ulong)uVar64 >> 0x20);
          uVar64 = NEON_frsqrts(uVar16,CONCAT44(fVar41 * fVar41,fVar45 * fVar45),4);
          iVar51 = -(uint)(fVar47 <= 0.0);
          fVar47 = fVar47 * (float)uVar64 * fVar45;
          fVar45 = *pfVar30 +
                   (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                   CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                            ~(byte)((uint)iVar51 >> 0x10),
                                            CONCAT11((byte)((uint)fVar47 >> 8) &
                                                     ~(byte)((uint)iVar51 >> 8),
                                                     SUB41(fVar47,0) & ~(byte)iVar51)));
          if (fVar40 <= fVar45) {
            fVar40 = fVar45;
          }
          lVar18 = lVar18 + -1;
          pfVar30 = pfVar30 + 4;
        } while (lVar18 != 0);
      }
    }
    lVar18 = *(long *)(lVar15 + 0x38d490);
    fStack_6b8 = auVar68._8_4_;
    uStack_6b4 = auVar68._12_4_;
    local_6c0 = auVar68._0_8_;
    local_6b0 = auVar67._0_4_;
    fStack_6ac = auVar67._4_4_;
    fStack_6a8 = auVar67._8_4_;
    uStack_6a4 = auVar67._12_4_;
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar18;
    }
    lVar15 = *(long *)(lVar18 + 8);
    if (((*(ulong *)(lVar15 + 0x10) < uVar17) ||
        (*(long *)(lVar15 + 0x18) != (long)pfVar14 + uVar17)) ||
       (*(float **)(lVar15 + 0x28) == pfVar14)) {
      if (pfVar14 != (float *)0x0) {
        if (uVar17 <= *(ulong *)(lVar15 + 0x10)) {
          if (*(long *)(lVar15 + 0x18) == (long)pfVar14 + uVar17) {
            *(float **)(lVar15 + 0x18) = pfVar14;
            FUN_032ce944();
          }
          else {
            FUN_032ceaf0(lVar15,pfVar14,uVar17);
          }
          goto LAB_02f9c280;
        }
        *(int *)(*(long *)(lVar15 + 8) + 0x20) = *(int *)(*(long *)(lVar15 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar15 + 0x40) + 0x18))(*(long **)(lVar15 + 0x40),pfVar14,uVar17);
      }
    }
    else {
      *(float **)(lVar15 + 0x18) = pfVar14;
    }
    goto LAB_02f9c188;
  }
  goto LAB_02f9c2e4;
LAB_02f9bee8:
  if (((float)local_6c0 < local_6b0 || (float)((ulong)local_6c0 >> 0x20) < fStack_6ac) ||
      fStack_6b8 < fStack_6a8) {
    if ((ulong)*(ushort *)(param_1 + 0xe4) == 0) {
      fVar31 = 3.40282e+38;
      fVar40 = 3.40282e+38;
      fVar45 = 3.40282e+38;
      fVar36 = 3.40282e+38;
      fVar47 = -3.40282e+38;
      fVar38 = -3.40282e+38;
      fVar41 = -3.40282e+38;
      fVar48 = -3.40282e+38;
    }
    else {
      lVar15 = 0;
      if (*plVar29 != 0) {
        lVar15 = *plVar29 + (long)plVar29;
      }
      pfVar14 = (float *)(lVar15 + (ulong)*(ushort *)(param_1 + 0xe4) * 0x20);
      fVar40 = *pfVar14;
      fVar45 = pfVar14[1];
      fVar31 = pfVar14[2];
      fVar36 = pfVar14[3];
      fVar38 = pfVar14[4];
      fVar41 = pfVar14[5];
      fVar47 = pfVar14[6];
      fVar48 = 0.0;
    }
    auVar35._0_4_ = (fVar38 + fVar40) * 0.5;
    auVar35._4_4_ = (fVar41 + fVar45) * 0.5;
    auVar35._8_4_ = (fVar47 + fVar31) * 0.5;
    auVar35._12_4_ = (fVar48 + fVar36) * 0.5;
    auVar12._4_4_ = fStack_6ac;
    auVar12._0_4_ = local_6b0;
    auVar12._8_4_ = fStack_6a8;
    auVar12._12_4_ = uStack_6a4;
    auVar68 = NEON_fmin(auVar12,auVar35,4);
    fStack_6a8 = auVar68._8_4_;
    uStack_6a4 = auVar68._12_4_;
    local_6b0 = auVar68._0_4_;
    fStack_6ac = auVar68._4_4_;
    auVar10._8_4_ = fStack_6b8;
    auVar10._0_8_ = local_6c0;
    auVar10._12_4_ = uStack_6b4;
    auVar68 = NEON_fmax(auVar10,auVar35,4);
    fStack_6b8 = auVar68._8_4_;
    uStack_6b4 = auVar68._12_4_;
    local_6c0 = auVar68._0_8_;
  }
  uStack_688 = (ulong)uVar32 << 0x20;
  if ((-1 < (int)uVar32) && (local_690 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar13 + 0x18))(puVar13,local_690,((ulong)uVar32 & 0x3fffffff) * 0x30);
  }
  fVar40 = 3.40282e+38;
LAB_02f9c280:
  auVar68._8_4_ = fStack_6b8;
  auVar68._0_8_ = local_6c0;
  auVar68._12_4_ = uStack_6b4;
  auVar67._4_4_ = fStack_6ac;
  auVar67._0_4_ = local_6b0;
  auVar67._8_4_ = fStack_6a8;
  auVar67._12_4_ = uStack_6a4;
LAB_02f9c188:
  iVar42 = -(uint)(auVar68._0_4_ == *(float *)(param_1 + 0x80));
  iVar46 = -(uint)(auVar68._4_4_ == *(float *)(param_1 + 0x84));
  iVar49 = -(uint)(auVar68._8_4_ == *(float *)(param_1 + 0x88));
  iVar51 = -(uint)(auVar67._0_4_ == *(float *)(param_1 + 0x70));
  iVar37 = -(uint)(auVar67._4_4_ == *(float *)(param_1 + 0x74));
  iVar39 = -(uint)(auVar67._8_4_ == *(float *)(param_1 + 0x78));
  uVar32 = CONCAT13((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                    CONCAT12((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                             CONCAT11((byte)((uint)iVar42 >> 8) & (byte)((uint)iVar51 >> 8),
                                      (byte)iVar42 & (byte)iVar51)));
  auVar33._0_8_ =
       CONCAT17((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                CONCAT16((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                         CONCAT15((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar37 >> 8),
                                  CONCAT14((byte)iVar46 & (byte)iVar37,uVar32))));
  auVar33[8] = (byte)iVar49 & (byte)iVar39;
  auVar33[9] = (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar39 >> 8);
  auVar33[10] = (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
  auVar33[0xb] = (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
  fVar45 = (auVar68._0_4_ - auVar67._0_4_) * 0.5;
  fVar31 = (auVar68._4_4_ - auVar67._4_4_) * 0.5;
  fVar38 = (auVar68._8_4_ - auVar67._8_4_) * 0.5;
  fVar45 = fVar45 * fVar45;
  fVar31 = fVar31 * fVar31;
  fVar38 = fVar38 * fVar38;
  fVar36 = fVar45 + fVar31 + fVar38;
  uVar16 = CONCAT44(fVar45 + fVar31 + fVar38,fVar36);
  uVar64 = NEON_frsqrte(uVar16,4);
  fVar38 = (float)uVar64;
  fVar31 = (float)((ulong)uVar64 >> 0x20);
  fVar45 = fVar31 * fVar31;
  uVar64 = NEON_frsqrts(uVar16,CONCAT17((char)((uint)fVar45 >> 0x18),
                                        CONCAT16((char)((uint)fVar45 >> 0x10),
                                                 CONCAT15((char)((uint)fVar45 >> 8),
                                                          CONCAT14(SUB41(fVar45,0),fVar38 * fVar38))
                                                )),4);
  fVar38 = fVar38 * (float)uVar64;
  fVar31 = fVar31 * (float)((ulong)uVar64 >> 0x20);
  fVar31 = fVar31 * fVar31;
  uVar64 = NEON_frsqrts(uVar16,CONCAT17((char)((uint)fVar31 >> 0x18),
                                        CONCAT16((char)((uint)fVar31 >> 0x10),
                                                 CONCAT15((char)((uint)fVar31 >> 8),
                                                          CONCAT14(SUB41(fVar31,0),fVar38 * fVar38))
                                                )),4);
  iVar51 = -(uint)(fVar36 <= 0.0);
  fVar36 = fVar36 * (float)uVar64 * fVar38;
  fVar45 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                             SUB41(fVar36,0) & ~(byte)iVar51)));
  if (fVar45 <= fVar40) {
    fVar40 = fVar45;
  }
  if (((uVar32 & (uint)((ulong)auVar33._0_8_ >> 0x20) & auVar33._8_4_) == 0) ||
     (*(float *)(param_1 + 0x90) != fVar40)) {
    uVar64 = 1;
    *(float *)(param_1 + 0x90) = fVar40;
    *(long *)(param_1 + 0x78) = auVar67._8_8_;
    *(long *)(param_1 + 0x70) = auVar67._0_8_;
    *(long *)(param_1 + 0x88) = auVar68._8_8_;
    *(long *)(param_1 + 0x80) = auVar68._0_8_;
    goto joined_r0x02f9bd48;
  }
LAB_02f9c2e4:
  uVar64 = 0;
joined_r0x02f9bd48:
  if (lVar28 != 0) {
    puVar22 = *(undefined8 **)(lVar28 + 8);
    uVar17 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= *(ulong *)(lVar28 + 0x10)) &&
       (*(ulong *)(lVar28 + 8) = uVar17, puVar22 != (undefined8 *)0x0)) {
      *puVar22 = &DAT_0390f40e;
      uVar16 = nn::os::GetSystemTick();
      puVar22[1] = uVar16;
    }
  }
  return uVar64;
}


