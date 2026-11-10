/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03357e58; name: FUN_03357e58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03357e58(long *param_1,undefined1 (*param_2) [16],int param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *plVar18;
  void *pvVar19;
  void *pvVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  undefined4 *puVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  uint uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar39;
  float fVar41;
  undefined1 auVar37 [16];
  undefined4 uVar40;
  undefined1 auVar38 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  byte bVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  int iVar93;
  undefined4 uVar94;
  undefined4 uVar96;
  undefined1 auVar95 [16];
  float fVar97;
  undefined4 uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined4 uVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  int iVar107;
  int iVar108;
  undefined4 uVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  fVar35 = *(float *)*param_2 + *(float *)param_2[1];
  fVar39 = *(float *)(*param_2 + 4) + *(float *)(param_2[1] + 4);
  fVar41 = *(float *)(*param_2 + 8) + *(float *)(param_2[1] + 8);
  bVar68 = (byte)_UNK_03889708;
  bVar71 = (byte)((ulong)_UNK_03889708 >> 8);
  bVar74 = (byte)((ulong)_UNK_03889708 >> 0x10);
  bVar77 = (byte)((ulong)_UNK_03889708 >> 0x18);
  bVar80 = (byte)((ulong)_UNK_03889708 >> 0x20);
  bVar81 = (byte)((ulong)_UNK_03889708 >> 0x28);
  bVar82 = (byte)((ulong)_UNK_03889708 >> 0x30);
  bVar83 = (byte)((ulong)_UNK_03889708 >> 0x38);
  bVar44 = (byte)_DAT_03889700;
  bVar47 = (byte)((ulong)_DAT_03889700 >> 8);
  bVar50 = (byte)((ulong)_DAT_03889700 >> 0x10);
  bVar53 = (byte)((ulong)_DAT_03889700 >> 0x18);
  bVar56 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar59 = (byte)((ulong)_DAT_03889700 >> 0x28);
  bVar62 = (byte)((ulong)_DAT_03889700 >> 0x30);
  bVar65 = (byte)((ulong)_DAT_03889700 >> 0x38);
  uVar34 = 2;
  iVar93 = 1;
  while( true ) {
    pauVar22 = (undefined1 (*) [16])((long)param_1 + (long)iVar93 * 0x80 + *param_1);
    uVar12 = *(ulong *)pauVar22[4];
    auVar89 = pauVar22[6];
    iVar107 = NEON_sminv(auVar89,4);
    iVar93 = auVar89._0_4_;
    iVar108 = -(uint)(iVar93 == iVar107);
    iVar110 = -(uint)(auVar89._4_4_ == iVar107);
    iVar111 = -(uint)(auVar89._8_4_ == iVar107);
    iVar112 = -(uint)(auVar89._12_4_ == iVar107);
    auVar92 = *pauVar22;
    auVar95 = pauVar22[2];
    iVar107 = CONCAT13((byte)((uint)iVar108 >> 0x18) & bVar53,
                       CONCAT12((byte)((uint)iVar108 >> 0x10) & bVar50,
                                CONCAT11((byte)((uint)iVar108 >> 8) & bVar47,(byte)iVar108 & bVar44)
                               ));
    iVar108 = CONCAT13((byte)((uint)iVar111 >> 0x18) & bVar77,
                       CONCAT12((byte)((uint)iVar111 >> 0x10) & bVar74,
                                CONCAT11((byte)((uint)iVar111 >> 8) & bVar71,(byte)iVar111 & bVar68)
                               ));
    cVar4 = (&DAT_03aadfc0)
            [(uint)(iVar107 + (int)(CONCAT17((byte)((uint)iVar110 >> 0x18) & bVar65,
                                             CONCAT16((byte)((uint)iVar110 >> 0x10) & bVar62,
                                                      CONCAT15((byte)((uint)iVar110 >> 8) & bVar59,
                                                               CONCAT14((byte)iVar110 & bVar56,
                                                                        iVar107)))) >> 0x20) +
                   iVar108 + (int)(CONCAT17((byte)((uint)iVar112 >> 0x18) & bVar83,
                                            CONCAT16((byte)((uint)iVar112 >> 0x10) & bVar82,
                                                     CONCAT15((byte)((uint)iVar112 >> 8) & bVar81,
                                                              CONCAT14((byte)iVar112 & bVar80,
                                                                       iVar108)))) >> 0x20))];
    uStack_88 = auVar89._8_8_;
    local_90 = auVar89._0_8_;
    if (3 < (ulong)(long)cVar4 || *(int *)((ulong)&local_90 | ((long)cVar4 & 3U) << 2) == 0) {
      auVar95._0_8_ = SUB168(ZEXT416(0xff7fffee),0) << 0x20;
      auVar95._8_4_ = 0xff7fffee;
      auVar95._12_4_ = 0xff7fffee;
      uVar43 = auVar95._8_8_;
      auVar91._8_8_ = uVar43;
      auVar91._0_8_ = auVar95._0_8_;
      uVar103 = *(undefined4 *)param_2[1];
      uVar109 = *(undefined4 *)(*param_2 + 4);
      auVar89._4_12_ = auVar91._4_12_;
      auVar89._0_4_ = *(undefined4 *)(param_2[1] + 4);
      uVar86 = *(undefined4 *)*param_2;
      uVar98 = *(undefined4 *)(*param_2 + 8);
      auVar92._4_12_ = auVar95._4_12_;
      auVar92._0_4_ = *(undefined4 *)(param_2[1] + 8);
      lVar21 = param_1[1];
      if (cVar4 == '\0') {
        *(undefined4 *)*pauVar22 = uVar86;
        *(undefined4 *)pauVar22[1] = *(undefined4 *)param_2[1];
        *(undefined4 *)pauVar22[2] = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)pauVar22[3] = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)pauVar22[4] = *(undefined4 *)(*param_2 + 8);
        pauVar27 = pauVar22 + 5;
      }
      else if (cVar4 == '\x01') {
        *(undefined4 *)(*pauVar22 + 4) = uVar86;
        *(undefined4 *)(pauVar22[1] + 4) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar22[2] + 4) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar22[3] + 4) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar22[4] + 4) = *(undefined4 *)(*param_2 + 8);
        pauVar27 = (undefined1 (*) [16])(pauVar22[5] + 4);
      }
      else if (cVar4 == 2) {
        *(undefined4 *)(*pauVar22 + 8) = uVar86;
        *(undefined4 *)(pauVar22[1] + 8) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar22[2] + 8) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar22[3] + 8) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar22[4] + 8) = *(undefined4 *)(*param_2 + 8);
        pauVar27 = (undefined1 (*) [16])(pauVar22[5] + 8);
      }
      else {
        *(undefined4 *)(*pauVar22 + 0xc) = uVar86;
        *(undefined4 *)(pauVar22[1] + 0xc) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar22[2] + 0xc) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar22[3] + 0xc) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar22[4] + 0xc) = *(undefined4 *)(*param_2 + 8);
        pauVar27 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
      }
      *(undefined4 *)*pauVar27 = *(undefined4 *)(param_2[1] + 8);
      *(int *)(pauVar22[6] + (long)(int)cVar4 * 4) = (int)lVar21;
      uVar34 = *(uint *)(param_1 + 1);
      uVar25 = *(uint *)((long)param_1 + 0xc);
      if (*(uint *)((long)param_1 + 0xc) == 0) {
        *(uint *)((long)param_1 + 0xc) = uVar34;
        uVar25 = uVar34;
      }
      if ((int)uVar34 < (int)(uVar25 & 0x7fffffff)) {
        lVar21 = *param_1;
      }
      else {
        uVar26 = uVar34 | (int)uVar34 >> 0x10;
        uVar26 = uVar26 | (int)uVar26 >> 8;
        uVar26 = uVar26 | (int)uVar26 >> 4;
        uVar42 = auVar92._0_8_;
        uVar26 = uVar26 | (int)uVar26 >> 2;
        uVar26 = uVar26 | (int)uVar26 >> 1;
        uVar88 = auVar89._0_8_;
        uVar25 = uVar26 + 1;
        if ((int)uVar26 < (int)uVar34) {
          local_70 = 0;
          local_80 = 0;
          puStack_78 = PTR_DAT_04372528;
          FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow",&local_80);
        }
        lVar21 = tpidr_el0;
        lVar24 = *(long *)(lVar21 + 0x38d490);
        if (lVar24 == 0) {
          lVar24 = FUN_0333d16c(0,1);
          *(long *)(lVar21 + 0x38d490) = lVar24;
        }
        plVar18 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
        pvVar19 = (void *)(**(code **)(*plVar18 + 0x10))
                                    (plVar18,-(ulong)(uVar25 >> 0x1f) & 0xffffff8000000000 |
                                             (ulong)uVar25 << 7,0);
        if (*param_1 == 0) {
          pvVar20 = (void *)0x0;
        }
        else {
          pvVar20 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar19,pvVar20,(long)(int)param_1[1] << 7);
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          uVar26 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar26 <= (int)*(uint *)(param_1 + 1)) {
            uVar26 = *(uint *)(param_1 + 1);
          }
          lVar24 = *param_1;
          if (lVar24 != 0) {
            lVar24 = lVar24 + (long)param_1;
          }
          lVar28 = *(long *)(lVar21 + 0x38d490);
          if (lVar28 == 0) {
            lVar28 = FUN_0333d16c(0,1);
            *(long *)(lVar21 + 0x38d490) = lVar28;
          }
          plVar18 = *(long **)(*(long *)(lVar28 + 8) + 0x58);
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar24,(ulong)uVar26 << 7);
        }
        auVar92._8_8_ = uVar43;
        auVar92._0_8_ = uVar42;
        auVar89._8_8_ = uVar43;
        auVar89._0_8_ = uVar88;
        if (pvVar19 == (void *)0x0) {
          lVar21 = 0;
        }
        else {
          lVar21 = (long)pvVar19 - (long)param_1;
        }
        *param_1 = lVar21;
        *(uint *)((long)param_1 + 0xc) = uVar25 | 0x80000000;
      }
      puVar2 = (undefined8 *)((long)param_1 + (long)(int)uVar34 * 0x80 + lVar21);
      *(uint *)(param_1 + 1) = uVar34 + 1;
      *(undefined8 *)((long)puVar2 + 100) = 0xffffffffffffffff;
      puVar2[1] = 0x7f7fffee7f7fffee;
      *puVar2 = CONCAT17(0x7f,CONCAT16(0x7f,CONCAT15(0xff,CONCAT14(0xee,uVar86))));
      puVar2[3] = uVar43;
      puVar2[2] = CONCAT44(0xff7fffee,uVar103);
      *(undefined4 *)((long)puVar2 + 0x6c) = 0xffffffff;
      *(int *)(puVar2 + 0xc) = param_3;
      *(undefined1 *)(puVar2 + 0xe) = 1;
      puVar2[5] = 0x7f7fffee7f7fffee;
      puVar2[4] = CONCAT44(0x7f7fffee,uVar109);
      puVar2[7] = auVar89._8_8_;
      puVar2[6] = auVar89._0_8_;
      puVar2[9] = 0x7f7fffee7f7fffee;
      puVar2[8] = CONCAT17(0x7f,CONCAT16(0x7f,CONCAT15(0xff,CONCAT14(0xee,uVar98))));
      puVar2[0xb] = auVar92._8_8_;
      puVar2[10] = auVar92._0_8_;
      return;
    }
    fVar102 = (auVar92._0_4_ + (float)*(undefined8 *)pauVar22[1]) - fVar35;
    fVar104 = (auVar92._4_4_ + (float)((ulong)*(undefined8 *)pauVar22[1] >> 0x20)) - fVar35;
    fVar105 = (auVar92._8_4_ + (float)*(undefined8 *)(pauVar22[1] + 8)) - fVar35;
    fVar106 = (auVar92._12_4_ + (float)((ulong)*(undefined8 *)(pauVar22[1] + 8) >> 0x20)) - fVar35;
    fVar97 = (auVar95._0_4_ + (float)*(undefined8 *)pauVar22[3]) - fVar39;
    fVar99 = (auVar95._4_4_ + (float)((ulong)*(undefined8 *)pauVar22[3] >> 0x20)) - fVar39;
    fVar100 = (auVar95._8_4_ + (float)*(undefined8 *)(pauVar22[3] + 8)) - fVar39;
    fVar101 = (auVar95._12_4_ + (float)((ulong)*(undefined8 *)(pauVar22[3] + 8) >> 0x20)) - fVar39;
    fVar14 = ((float)uVar12 + (float)*(undefined8 *)pauVar22[5]) - fVar41;
    fVar15 = ((float)(uVar12 >> 0x20) + (float)((ulong)*(undefined8 *)pauVar22[5] >> 0x20)) - fVar41
    ;
    fVar16 = ((float)*(undefined8 *)(pauVar22[4] + 8) + (float)*(undefined8 *)(pauVar22[5] + 8)) -
             fVar41;
    fVar17 = ((float)((ulong)*(undefined8 *)(pauVar22[4] + 8) >> 0x20) +
             (float)((ulong)*(undefined8 *)(pauVar22[5] + 8) >> 0x20)) - fVar41;
    fVar14 = fVar102 * fVar102 + fVar97 * fVar97 + fVar14 * fVar14;
    fVar15 = fVar104 * fVar104 + fVar99 * fVar99 + fVar15 * fVar15;
    fVar16 = fVar105 * fVar105 + fVar100 * fVar100 + fVar16 * fVar16;
    fVar17 = fVar106 * fVar106 + fVar101 * fVar101 + fVar17 * fVar17;
    auVar13[4] = SUB41(fVar15,0);
    auVar13._0_4_ = fVar14;
    auVar13[5] = (char)((uint)fVar15 >> 8);
    auVar13[6] = (char)((uint)fVar15 >> 0x10);
    auVar13[7] = (char)((uint)fVar15 >> 0x18);
    auVar13[8] = SUB41(fVar16,0);
    auVar13[9] = (char)((uint)fVar16 >> 8);
    auVar13[10] = (char)((uint)fVar16 >> 0x10);
    auVar13[0xb] = (char)((uint)fVar16 >> 0x18);
    auVar13[0xc] = SUB41(fVar17,0);
    auVar13[0xd] = (char)((uint)fVar17 >> 8);
    auVar13[0xe] = (char)((uint)fVar17 >> 0x10);
    auVar13[0xf] = (char)((uint)fVar17 >> 0x18);
    fVar97 = (float)NEON_fminnmv(auVar13,4);
    iVar107 = -(uint)(fVar14 <= fVar97);
    iVar108 = -(uint)(fVar15 <= fVar97);
    iVar110 = -(uint)(fVar16 <= fVar97);
    iVar111 = -(uint)(fVar17 <= fVar97);
    cVar4 = (&DAT_03aadfc0)
            [(uint)(CONCAT13((byte)((uint)iVar107 >> 0x18) & bVar53,
                             CONCAT12((byte)((uint)iVar107 >> 0x10) & bVar50,
                                      CONCAT11((byte)((uint)iVar107 >> 8) & bVar47,
                                               (byte)iVar107 & bVar44))) +
                    CONCAT13((byte)((uint)iVar108 >> 0x18) & bVar65,
                             CONCAT12((byte)((uint)iVar108 >> 0x10) & bVar62,
                                      CONCAT11((byte)((uint)iVar108 >> 8) & bVar59,
                                               (byte)iVar108 & bVar56))) +
                   CONCAT13((byte)((uint)iVar110 >> 0x18) & bVar77,
                            CONCAT12((byte)((uint)iVar110 >> 0x10) & bVar74,
                                     CONCAT11((byte)((uint)iVar110 >> 8) & bVar71,
                                              (byte)iVar110 & bVar68))) +
                   CONCAT13((byte)((uint)iVar111 >> 0x18) & bVar83,
                            CONCAT12((byte)((uint)iVar111 >> 0x10) & bVar82,
                                     CONCAT11((byte)((uint)iVar111 >> 8) & bVar81,
                                              (byte)iVar111 & bVar80))))];
    switch(cVar4) {
    case '\0':
      break;
    case '\x01':
      iVar93 = auVar89._4_4_;
      break;
    case '\x02':
      iVar93 = auVar89._8_4_;
      break;
    case '\x03':
      iVar93 = auVar89._12_4_;
      break;
    default:
      iVar93 = 0;
    }
    puVar1 = (undefined4 *)((long)param_1 + (long)iVar93 * 0x80 + *param_1);
    if (*(char *)(puVar1 + 0x1c) != '\0') break;
    if (cVar4 == '\0') {
      auVar90._4_4_ = (int)*(undefined8 *)pauVar22[2];
      auVar90._0_4_ = (int)*(undefined8 *)*pauVar22;
      auVar90._8_8_ = uVar12 & 0xffffffff;
      pauVar29 = pauVar22 + 1;
      pauVar27 = pauVar22 + 3;
      pauVar30 = pauVar22 + 5;
    }
    else if (cVar4 == '\x02') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 8);
      auVar90._0_4_ = *(undefined4 *)(*pauVar22 + 8);
      auVar90._4_4_ = *(undefined4 *)(pauVar22[2] + 8);
      auVar90._8_4_ = *(undefined4 *)(pauVar22[4] + 8);
      auVar90._12_4_ = 0;
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 8);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else if (cVar4 == '\x01') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 4);
      auVar90._0_4_ = *(undefined4 *)(*pauVar22 + 4);
      auVar90._4_4_ = *(undefined4 *)(pauVar22[2] + 4);
      auVar90._8_4_ = *(undefined4 *)(pauVar22[4] + 4);
      auVar90._12_4_ = 0;
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 4);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 0xc);
      auVar90._0_4_ = *(undefined4 *)(*pauVar22 + 0xc);
      auVar90._4_4_ = *(undefined4 *)(pauVar22[2] + 0xc);
      auVar90._8_4_ = *(undefined4 *)(pauVar22[4] + 0xc);
      auVar90._12_4_ = 0;
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 0xc);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    auVar92 = NEON_fmin(auVar90,*param_2,4);
    uVar103 = auVar92._0_4_;
    auVar11._4_4_ = *(undefined4 *)*pauVar27;
    auVar11._0_4_ = *(undefined4 *)*pauVar29;
    auVar11._8_4_ = *(undefined4 *)*pauVar30;
    auVar11._12_4_ = 0;
    auVar89 = NEON_fmax(auVar11,param_2[1],4);
    uVar109 = auVar92._4_4_;
    uVar86 = auVar89._0_4_;
    uVar98 = auVar89._4_4_;
    if (cVar4 == '\0') {
      *(undefined4 *)*pauVar22 = uVar103;
      *(undefined4 *)pauVar22[1] = uVar86;
      *(undefined4 *)pauVar22[2] = uVar109;
      *(undefined4 *)pauVar22[3] = uVar98;
      pauVar27 = pauVar22 + 4;
      pauVar22 = pauVar22 + 5;
    }
    else if (cVar4 == '\x01') {
      *(undefined4 *)(*pauVar22 + 4) = uVar103;
      *(undefined4 *)(pauVar22[1] + 4) = uVar86;
      *(undefined4 *)(pauVar22[2] + 4) = uVar109;
      *(undefined4 *)(pauVar22[3] + 4) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 4);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else if (cVar4 == '\x02') {
      *(undefined4 *)(*pauVar22 + 8) = uVar103;
      *(undefined4 *)(pauVar22[1] + 8) = uVar86;
      *(undefined4 *)(pauVar22[2] + 8) = uVar109;
      *(undefined4 *)(pauVar22[3] + 8) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 8);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else {
      *(undefined4 *)(*pauVar22 + 0xc) = uVar103;
      *(undefined4 *)(pauVar22[1] + 0xc) = uVar86;
      *(undefined4 *)(pauVar22[2] + 0xc) = uVar109;
      *(undefined4 *)(pauVar22[3] + 0xc) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 0xc);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    *(int *)*pauVar27 = auVar92._8_4_;
    uVar34 = uVar34 + 1;
    *(int *)*pauVar22 = auVar89._8_4_;
  }
  uVar42 = *(undefined8 *)(puVar1 + 0x1a);
  uVar43 = *(undefined8 *)(puVar1 + 0x18);
  auVar8[9] = (char)((ulong)uVar42 >> 8);
  auVar8._0_9_ = *(unkbyte9 *)(puVar1 + 0x18);
  auVar8[10] = (char)((ulong)uVar42 >> 0x10);
  auVar8[0xb] = (char)((ulong)uVar42 >> 0x18);
  auVar8[0xc] = (char)((ulong)uVar42 >> 0x20);
  auVar8[0xd] = (char)((ulong)uVar42 >> 0x28);
  auVar8[0xe] = (char)((ulong)uVar42 >> 0x30);
  auVar8[0xf] = (char)((ulong)uVar42 >> 0x38);
  iVar111 = NEON_sminv(auVar8,4);
  iVar107 = -(uint)((int)uVar43 == iVar111);
  iVar108 = -(uint)((int)((ulong)uVar43 >> 0x20) == iVar111);
  iVar110 = -(uint)((int)uVar42 == iVar111);
  iVar111 = -(uint)((int)((ulong)uVar42 >> 0x20) == iVar111);
  cVar3 = (&DAT_03aadfc0)
          [(uint)(CONCAT13((byte)((uint)iVar107 >> 0x18) & bVar53,
                           CONCAT12((byte)((uint)iVar107 >> 0x10) & bVar50,
                                    CONCAT11((byte)((uint)iVar107 >> 8) & bVar47,
                                             (byte)iVar107 & bVar44))) +
                  CONCAT13((byte)((uint)iVar108 >> 0x18) & bVar65,
                           CONCAT12((byte)((uint)iVar108 >> 0x10) & bVar62,
                                    CONCAT11((byte)((uint)iVar108 >> 8) & bVar59,
                                             (byte)iVar108 & bVar56))) +
                 CONCAT13((byte)((uint)iVar110 >> 0x18) & bVar77,
                          CONCAT12((byte)((uint)iVar110 >> 0x10) & bVar74,
                                   CONCAT11((byte)((uint)iVar110 >> 8) & bVar71,
                                            (byte)iVar110 & bVar68))) +
                 CONCAT13((byte)((uint)iVar111 >> 0x18) & bVar83,
                          CONCAT12((byte)((uint)iVar111 >> 0x10) & bVar82,
                                   CONCAT11((byte)((uint)iVar111 >> 8) & bVar81,
                                            (byte)iVar111 & bVar80))))];
  if (cVar3 == '\0') {
    uVar86 = *puVar1;
    uVar45 = (undefined1)uVar86;
    uVar48 = (undefined1)((uint)uVar86 >> 8);
    uVar51 = (undefined1)((uint)uVar86 >> 0x10);
    uVar54 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[8];
    uVar57 = (undefined1)uVar86;
    uVar60 = (undefined1)((uint)uVar86 >> 8);
    uVar63 = (undefined1)((uint)uVar86 >> 0x10);
    uVar66 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[0x10];
    uVar69 = (undefined1)uVar86;
    uVar72 = (undefined1)((uint)uVar86 >> 8);
    uVar75 = (undefined1)((uint)uVar86 >> 0x10);
    uVar78 = (undefined1)((uint)uVar86 >> 0x18);
    pfVar31 = (float *)(puVar1 + 4);
    pfVar32 = (float *)(puVar1 + 0xc);
    pfVar33 = (float *)(puVar1 + 0x14);
  }
  else if (cVar3 == '\x02') {
    pfVar31 = (float *)(puVar1 + 6);
    uVar86 = puVar1[2];
    uVar45 = (undefined1)uVar86;
    uVar48 = (undefined1)((uint)uVar86 >> 8);
    uVar51 = (undefined1)((uint)uVar86 >> 0x10);
    uVar54 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[10];
    uVar57 = (undefined1)uVar86;
    uVar60 = (undefined1)((uint)uVar86 >> 8);
    uVar63 = (undefined1)((uint)uVar86 >> 0x10);
    uVar66 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[0x12];
    uVar69 = (undefined1)uVar86;
    uVar72 = (undefined1)((uint)uVar86 >> 8);
    uVar75 = (undefined1)((uint)uVar86 >> 0x10);
    uVar78 = (undefined1)((uint)uVar86 >> 0x18);
    pfVar32 = (float *)(puVar1 + 0xe);
    pfVar33 = (float *)(puVar1 + 0x16);
  }
  else if (cVar3 == 1) {
    pfVar31 = (float *)(puVar1 + 5);
    uVar86 = puVar1[1];
    uVar45 = (undefined1)uVar86;
    uVar48 = (undefined1)((uint)uVar86 >> 8);
    uVar51 = (undefined1)((uint)uVar86 >> 0x10);
    uVar54 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[9];
    uVar57 = (undefined1)uVar86;
    uVar60 = (undefined1)((uint)uVar86 >> 8);
    uVar63 = (undefined1)((uint)uVar86 >> 0x10);
    uVar66 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[0x11];
    uVar69 = (undefined1)uVar86;
    uVar72 = (undefined1)((uint)uVar86 >> 8);
    uVar75 = (undefined1)((uint)uVar86 >> 0x10);
    uVar78 = (undefined1)((uint)uVar86 >> 0x18);
    pfVar32 = (float *)(puVar1 + 0xd);
    pfVar33 = (float *)(puVar1 + 0x15);
  }
  else {
    pfVar31 = (float *)(puVar1 + 7);
    uVar86 = puVar1[3];
    uVar45 = (undefined1)uVar86;
    uVar48 = (undefined1)((uint)uVar86 >> 8);
    uVar51 = (undefined1)((uint)uVar86 >> 0x10);
    uVar54 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[0xb];
    uVar57 = (undefined1)uVar86;
    uVar60 = (undefined1)((uint)uVar86 >> 8);
    uVar63 = (undefined1)((uint)uVar86 >> 0x10);
    uVar66 = (undefined1)((uint)uVar86 >> 0x18);
    uVar86 = puVar1[0x13];
    uVar69 = (undefined1)uVar86;
    uVar72 = (undefined1)((uint)uVar86 >> 8);
    uVar75 = (undefined1)((uint)uVar86 >> 0x10);
    uVar78 = (undefined1)((uint)uVar86 >> 0x18);
    pfVar32 = (float *)(puVar1 + 0xf);
    pfVar33 = (float *)(puVar1 + 0x17);
  }
  uVar46 = auVar92[0];
  uVar49 = auVar92[1];
  uVar52 = auVar92[2];
  uVar55 = auVar92[3];
  uVar58 = auVar95[0];
  uVar61 = auVar95[1];
  uVar64 = auVar95[2];
  uVar67 = auVar95[3];
  uVar70 = (undefined1)uVar12;
  uVar73 = (undefined1)(uVar12 >> 8);
  uVar76 = (undefined1)(uVar12 >> 0x10);
  uVar79 = (undefined1)(uVar12 >> 0x18);
  if ((puVar1[(long)(int)cVar3 + 0x18] != 0) ||
     ((float)CONCAT13(uVar78,CONCAT12(uVar75,CONCAT11(uVar72,uVar69))) <= *pfVar33 &&
      ((float)CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,uVar45))) <= *pfVar31 &&
      (float)CONCAT13(uVar66,CONCAT12(uVar63,CONCAT11(uVar60,uVar57))) <= *pfVar32))) {
    iVar107 = (int)param_1[1];
    uVar86 = *(undefined4 *)*param_2;
    uVar113 = *(undefined4 *)(*param_2 + 4);
    uVar114 = *(undefined4 *)(param_2[1] + 4);
    uVar103 = *(undefined4 *)param_2[1];
    uVar98 = *(undefined4 *)(*param_2 + 8);
    uVar109 = *(undefined4 *)(param_2[1] + 8);
    if (cVar4 == '\0') {
      pauVar29 = pauVar22 + 1;
      pauVar27 = pauVar22 + 3;
      pauVar30 = pauVar22 + 5;
    }
    else if (cVar4 == '\x02') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 8);
      uVar36 = *(undefined4 *)(*pauVar22 + 8);
      uVar46 = (undefined1)uVar36;
      uVar49 = (undefined1)((uint)uVar36 >> 8);
      uVar52 = (undefined1)((uint)uVar36 >> 0x10);
      uVar55 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[2] + 8);
      uVar58 = (undefined1)uVar36;
      uVar61 = (undefined1)((uint)uVar36 >> 8);
      uVar64 = (undefined1)((uint)uVar36 >> 0x10);
      uVar67 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[4] + 8);
      uVar70 = (undefined1)uVar36;
      uVar73 = (undefined1)((uint)uVar36 >> 8);
      uVar76 = (undefined1)((uint)uVar36 >> 0x10);
      uVar79 = (undefined1)((uint)uVar36 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 8);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else if (cVar4 == '\x01') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 4);
      uVar36 = *(undefined4 *)(*pauVar22 + 4);
      uVar46 = (undefined1)uVar36;
      uVar49 = (undefined1)((uint)uVar36 >> 8);
      uVar52 = (undefined1)((uint)uVar36 >> 0x10);
      uVar55 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[2] + 4);
      uVar58 = (undefined1)uVar36;
      uVar61 = (undefined1)((uint)uVar36 >> 8);
      uVar64 = (undefined1)((uint)uVar36 >> 0x10);
      uVar67 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[4] + 4);
      uVar70 = (undefined1)uVar36;
      uVar73 = (undefined1)((uint)uVar36 >> 8);
      uVar76 = (undefined1)((uint)uVar36 >> 0x10);
      uVar79 = (undefined1)((uint)uVar36 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 4);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 0xc);
      uVar36 = *(undefined4 *)(*pauVar22 + 0xc);
      uVar46 = (undefined1)uVar36;
      uVar49 = (undefined1)((uint)uVar36 >> 8);
      uVar52 = (undefined1)((uint)uVar36 >> 0x10);
      uVar55 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[2] + 0xc);
      uVar58 = (undefined1)uVar36;
      uVar61 = (undefined1)((uint)uVar36 >> 8);
      uVar64 = (undefined1)((uint)uVar36 >> 0x10);
      uVar67 = (undefined1)((uint)uVar36 >> 0x18);
      uVar36 = *(undefined4 *)(pauVar22[4] + 0xc);
      uVar70 = (undefined1)uVar36;
      uVar73 = (undefined1)((uint)uVar36 >> 8);
      uVar76 = (undefined1)((uint)uVar36 >> 0x10);
      uVar79 = (undefined1)((uint)uVar36 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 0xc);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    uVar87 = *(undefined4 *)*pauVar29;
    uVar84 = *(undefined4 *)*pauVar27;
    auVar89 = *param_2;
    uVar42 = *(undefined8 *)(param_2[1] + 8);
    uVar43 = *(undefined8 *)param_2[1];
    auVar6[1] = uVar49;
    auVar6[0] = uVar46;
    auVar6[2] = uVar52;
    auVar6[3] = uVar55;
    auVar6[4] = uVar58;
    auVar6[5] = uVar61;
    auVar6[6] = uVar64;
    auVar6[7] = uVar67;
    auVar6[8] = uVar70;
    auVar6[9] = uVar73;
    auVar6[10] = uVar76;
    auVar6[0xb] = uVar79;
    auVar6._12_4_ = 0;
    auVar95 = NEON_fmin(auVar6,auVar89,4);
    uVar85 = *(undefined4 *)*pauVar30;
    uVar94 = auVar95._0_4_;
    auVar37._4_4_ = uVar84;
    auVar37._0_4_ = uVar87;
    auVar37._8_4_ = uVar85;
    auVar37._12_4_ = 0;
    auVar9[9] = (char)((ulong)uVar42 >> 8);
    auVar9._0_9_ = *(unkbyte9 *)param_2[1];
    auVar9[10] = (char)((ulong)uVar42 >> 0x10);
    auVar9[0xb] = (char)((ulong)uVar42 >> 0x18);
    auVar9[0xc] = (char)((ulong)uVar42 >> 0x20);
    auVar9[0xd] = (char)((ulong)uVar42 >> 0x28);
    auVar9[0xe] = (char)((ulong)uVar42 >> 0x30);
    auVar9[0xf] = (char)((ulong)uVar42 >> 0x38);
    auVar92 = NEON_fmax(auVar37,auVar9,4);
    uVar96 = auVar95._4_4_;
    uVar36 = auVar92._0_4_;
    uVar40 = auVar92._4_4_;
    if (cVar4 == '\0') {
      *(undefined4 *)*pauVar22 = uVar94;
      *(undefined4 *)pauVar22[1] = uVar36;
      *(undefined4 *)pauVar22[2] = uVar96;
      *(undefined4 *)pauVar22[3] = uVar40;
      pauVar27 = pauVar22 + 4;
      pauVar22 = pauVar22 + 5;
    }
    else if (cVar4 == '\x01') {
      *(undefined4 *)(*pauVar22 + 4) = uVar94;
      *(undefined4 *)(pauVar22[1] + 4) = uVar36;
      *(undefined4 *)(pauVar22[2] + 4) = uVar96;
      *(undefined4 *)(pauVar22[3] + 4) = uVar40;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 4);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else if (cVar4 == '\x02') {
      *(undefined4 *)(*pauVar22 + 8) = uVar94;
      *(undefined4 *)(pauVar22[1] + 8) = uVar36;
      *(undefined4 *)(pauVar22[2] + 8) = uVar96;
      *(undefined4 *)(pauVar22[3] + 8) = uVar40;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 8);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else {
      *(undefined4 *)(*pauVar22 + 0xc) = uVar94;
      *(undefined4 *)(pauVar22[1] + 0xc) = uVar36;
      *(undefined4 *)(pauVar22[2] + 0xc) = uVar96;
      *(undefined4 *)(pauVar22[3] + 0xc) = uVar40;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 0xc);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    *(int *)*pauVar27 = auVar95._8_4_;
    *(int *)*pauVar22 = auVar92._8_4_;
    uVar25 = *(uint *)(param_1 + 1);
    uVar26 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar25;
      uVar26 = uVar25;
    }
    if ((int)uVar25 < (int)(uVar26 & 0x7fffffff)) {
      lVar21 = *param_1;
    }
    else {
      uVar5 = uVar25 | (int)uVar25 >> 0x10;
      uVar5 = uVar5 | (int)uVar5 >> 8;
      uVar5 = uVar5 | (int)uVar5 >> 4;
      uVar5 = uVar5 | (int)uVar5 >> 2;
      uVar5 = uVar5 | (int)uVar5 >> 1;
      uVar26 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar25) {
        local_70 = 0;
        local_80 = 0;
        puStack_78 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_80);
      }
      lVar21 = tpidr_el0;
      lVar24 = *(long *)(lVar21 + 0x38d490);
      if (lVar24 == 0) {
        lVar24 = FUN_0333d16c(0,1);
        *(long *)(lVar21 + 0x38d490) = lVar24;
      }
      plVar18 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x10))
                                  (plVar18,-(ulong)(uVar26 >> 0x1f) & 0xffffff8000000000 |
                                           (ulong)uVar26 << 7,0);
      if (*param_1 == 0) {
        pvVar20 = (void *)0x0;
      }
      else {
        pvVar20 = (void *)(*param_1 + (long)param_1);
      }
      memcpy(pvVar19,pvVar20,(long)(int)param_1[1] << 7);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar5 <= (int)*(uint *)(param_1 + 1)) {
          uVar5 = *(uint *)(param_1 + 1);
        }
        lVar24 = *param_1;
        if (lVar24 != 0) {
          lVar24 = lVar24 + (long)param_1;
        }
        lVar28 = *(long *)(lVar21 + 0x38d490);
        if (lVar28 == 0) {
          lVar28 = FUN_0333d16c(0,1);
          *(long *)(lVar21 + 0x38d490) = lVar28;
        }
        plVar18 = *(long **)(*(long *)(lVar28 + 8) + 0x58);
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar24,(ulong)uVar5 << 7);
      }
      if (pvVar19 == (void *)0x0) {
        lVar21 = 0;
      }
      else {
        lVar21 = (long)pvVar19 - (long)param_1;
      }
      *param_1 = lVar21;
      *(uint *)((long)param_1 + 0xc) = uVar26 | 0x80000000;
    }
    puVar2 = (undefined8 *)((long)param_1 + (long)(int)uVar25 * 0x80 + lVar21);
    *(uint *)(param_1 + 1) = uVar25 + 1;
    puVar2[1] = 0x7f7fffee7f7fffee;
    *puVar2 = CONCAT44(auVar89._0_4_,CONCAT13(uVar55,CONCAT12(uVar52,CONCAT11(uVar49,uVar46))));
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = CONCAT44((int)uVar43,uVar87);
    *(int *)(puVar2 + 0xc) = iVar107;
    *(int *)((long)puVar2 + 100) = iVar107 + 1;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2[5] = 0x7f7fffee7f7fffee;
    puVar2[4] = CONCAT44(auVar89._4_4_,CONCAT13(uVar67,CONCAT12(uVar64,CONCAT11(uVar61,uVar58))));
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = CONCAT44((int)((ulong)uVar43 >> 0x20),uVar84);
    puVar2[9] = 0x7f7fffee7f7fffee;
    puVar2[8] = CONCAT44(auVar89._8_4_,CONCAT13(uVar79,CONCAT12(uVar76,CONCAT11(uVar73,uVar70))));
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = CONCAT44((int)uVar42,uVar85);
    uVar25 = *(uint *)(param_1 + 1);
    uVar26 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar25;
      uVar26 = uVar25;
    }
    if ((int)uVar25 < (int)(uVar26 & 0x7fffffff)) {
      lVar21 = *param_1;
    }
    else {
      uVar5 = uVar25 | (int)uVar25 >> 0x10;
      uVar5 = uVar5 | (int)uVar5 >> 8;
      uVar5 = uVar5 | (int)uVar5 >> 4;
      uVar5 = uVar5 | (int)uVar5 >> 2;
      uVar5 = uVar5 | (int)uVar5 >> 1;
      uVar26 = uVar5 + 1;
      if ((int)uVar5 < (int)uVar25) {
        local_70 = 0;
        local_80 = 0;
        puStack_78 = PTR_DAT_04372528;
        FUN_03320b50(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_80);
      }
      lVar21 = tpidr_el0;
      lVar24 = *(long *)(lVar21 + 0x38d490);
      if (lVar24 == 0) {
        lVar24 = FUN_0333d16c(0,1);
        *(long *)(lVar21 + 0x38d490) = lVar24;
      }
      plVar18 = *(long **)(*(long *)(lVar24 + 8) + 0x58);
      pvVar19 = (void *)(**(code **)(*plVar18 + 0x10))
                                  (plVar18,-(ulong)(uVar26 >> 0x1f) & 0xffffff8000000000 |
                                           (ulong)uVar26 << 7,0);
      if (*param_1 == 0) {
        pvVar20 = (void *)0x0;
      }
      else {
        pvVar20 = (void *)(*param_1 + (long)param_1);
      }
      memcpy(pvVar19,pvVar20,(long)(int)param_1[1] << 7);
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar5 <= (int)*(uint *)(param_1 + 1)) {
          uVar5 = *(uint *)(param_1 + 1);
        }
        lVar24 = *param_1;
        if (lVar24 != 0) {
          lVar24 = lVar24 + (long)param_1;
        }
        lVar28 = *(long *)(lVar21 + 0x38d490);
        if (lVar28 == 0) {
          lVar28 = FUN_0333d16c(0,1);
          *(long *)(lVar21 + 0x38d490) = lVar28;
        }
        plVar18 = *(long **)(*(long *)(lVar28 + 8) + 0x58);
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar24,(ulong)uVar5 << 7);
      }
      if (pvVar19 == (void *)0x0) {
        lVar21 = 0;
      }
      else {
        lVar21 = (long)pvVar19 - (long)param_1;
      }
      *param_1 = lVar21;
      *(uint *)((long)param_1 + 0xc) = uVar26 | 0x80000000;
    }
    puVar2 = (undefined8 *)((long)param_1 + (long)(int)uVar25 * 0x80 + lVar21);
    *(uint *)(param_1 + 1) = uVar25 + 1;
    *(undefined8 *)((long)puVar2 + 100) = 0xffffffffffffffff;
    *(int *)(puVar2 + 0xc) = param_3;
    *(undefined4 *)((long)puVar2 + 0x6c) = 0xffffffff;
    puVar2[1] = 0x7f7fffee7f7fffee;
    *puVar2 = CONCAT17(0x7f,CONCAT16(0x7f,CONCAT15(0xff,CONCAT14(0xee,uVar86))));
    puVar2[3] = 0xff7fffeeff7fffee;
    puVar2[2] = CONCAT44(0xff7fffee,uVar103);
    *(undefined1 *)(puVar2 + 0xe) = 1;
    puVar2[5] = 0x7f7fffee7f7fffee;
    puVar2[4] = CONCAT44(0x7f7fffee,uVar113);
    puVar2[7] = 0xff7fffeeff7fffee;
    puVar2[6] = CONCAT44(0xff7fffee,uVar114);
    puVar2[9] = 0x7f7fffee7f7fffee;
    puVar2[8] = CONCAT44(0x7f7fffee,uVar98);
    puVar2[0xb] = 0xff7fffeeff7fffee;
    puVar2[10] = CONCAT44(0xff7fffee,uVar109);
    FUN_0335d210((long)param_1 + (long)iVar107 * 0x80 + *param_1,
                 (long)param_1 + (long)iVar93 * 0x80 + *param_1);
  }
  else {
    if (cVar4 == '\0') {
      pauVar29 = pauVar22 + 1;
      pauVar27 = pauVar22 + 3;
      pauVar30 = pauVar22 + 5;
    }
    else if (cVar4 == '\x02') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 8);
      uVar86 = *(undefined4 *)(*pauVar22 + 8);
      uVar46 = (undefined1)uVar86;
      uVar49 = (undefined1)((uint)uVar86 >> 8);
      uVar52 = (undefined1)((uint)uVar86 >> 0x10);
      uVar55 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[2] + 8);
      uVar58 = (undefined1)uVar86;
      uVar61 = (undefined1)((uint)uVar86 >> 8);
      uVar64 = (undefined1)((uint)uVar86 >> 0x10);
      uVar67 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[4] + 8);
      uVar70 = (undefined1)uVar86;
      uVar73 = (undefined1)((uint)uVar86 >> 8);
      uVar76 = (undefined1)((uint)uVar86 >> 0x10);
      uVar79 = (undefined1)((uint)uVar86 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 8);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else if (cVar4 == '\x01') {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 4);
      uVar86 = *(undefined4 *)(*pauVar22 + 4);
      uVar46 = (undefined1)uVar86;
      uVar49 = (undefined1)((uint)uVar86 >> 8);
      uVar52 = (undefined1)((uint)uVar86 >> 0x10);
      uVar55 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[2] + 4);
      uVar58 = (undefined1)uVar86;
      uVar61 = (undefined1)((uint)uVar86 >> 8);
      uVar64 = (undefined1)((uint)uVar86 >> 0x10);
      uVar67 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[4] + 4);
      uVar70 = (undefined1)uVar86;
      uVar73 = (undefined1)((uint)uVar86 >> 8);
      uVar76 = (undefined1)((uint)uVar86 >> 0x10);
      uVar79 = (undefined1)((uint)uVar86 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 4);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else {
      pauVar27 = (undefined1 (*) [16])(pauVar22[3] + 0xc);
      uVar86 = *(undefined4 *)(*pauVar22 + 0xc);
      uVar46 = (undefined1)uVar86;
      uVar49 = (undefined1)((uint)uVar86 >> 8);
      uVar52 = (undefined1)((uint)uVar86 >> 0x10);
      uVar55 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[2] + 0xc);
      uVar58 = (undefined1)uVar86;
      uVar61 = (undefined1)((uint)uVar86 >> 8);
      uVar64 = (undefined1)((uint)uVar86 >> 0x10);
      uVar67 = (undefined1)((uint)uVar86 >> 0x18);
      uVar86 = *(undefined4 *)(pauVar22[4] + 0xc);
      uVar70 = (undefined1)uVar86;
      uVar73 = (undefined1)((uint)uVar86 >> 8);
      uVar76 = (undefined1)((uint)uVar86 >> 0x10);
      uVar79 = (undefined1)((uint)uVar86 >> 0x18);
      pauVar29 = (undefined1 (*) [16])(pauVar22[1] + 0xc);
      pauVar30 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    auVar38._0_4_ = *(undefined4 *)*pauVar29;
    uVar43 = *(undefined8 *)(param_2[1] + 8);
    auVar7[1] = uVar49;
    auVar7[0] = uVar46;
    auVar7[2] = uVar52;
    auVar7[3] = uVar55;
    auVar7[4] = uVar58;
    auVar7[5] = uVar61;
    auVar7[6] = uVar64;
    auVar7[7] = uVar67;
    auVar7[8] = uVar70;
    auVar7[9] = uVar73;
    auVar7[10] = uVar76;
    auVar7[0xb] = uVar79;
    auVar7._12_4_ = 0;
    auVar92 = NEON_fmin(auVar7,*param_2,4);
    uVar103 = auVar92._0_4_;
    auVar38._4_4_ = *(undefined4 *)*pauVar27;
    auVar38._8_4_ = *(undefined4 *)*pauVar30;
    auVar38._12_4_ = 0;
    auVar10[9] = (char)((ulong)uVar43 >> 8);
    auVar10._0_9_ = *(unkbyte9 *)param_2[1];
    auVar10[10] = (char)((ulong)uVar43 >> 0x10);
    auVar10[0xb] = (char)((ulong)uVar43 >> 0x18);
    auVar10[0xc] = (char)((ulong)uVar43 >> 0x20);
    auVar10[0xd] = (char)((ulong)uVar43 >> 0x28);
    auVar10[0xe] = (char)((ulong)uVar43 >> 0x30);
    auVar10[0xf] = (char)((ulong)uVar43 >> 0x38);
    auVar89 = NEON_fmax(auVar38,auVar10,4);
    uVar109 = auVar92._4_4_;
    uVar86 = auVar89._0_4_;
    uVar98 = auVar89._4_4_;
    if (cVar4 == '\0') {
      *(undefined4 *)*pauVar22 = uVar103;
      *(undefined4 *)pauVar22[1] = uVar86;
      *(undefined4 *)pauVar22[2] = uVar109;
      *(undefined4 *)pauVar22[3] = uVar98;
      pauVar27 = pauVar22 + 4;
      pauVar22 = pauVar22 + 5;
    }
    else if (cVar4 == '\x01') {
      *(undefined4 *)(*pauVar22 + 4) = uVar103;
      *(undefined4 *)(pauVar22[1] + 4) = uVar86;
      *(undefined4 *)(pauVar22[2] + 4) = uVar109;
      *(undefined4 *)(pauVar22[3] + 4) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 4);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 4);
    }
    else if (cVar4 == '\x02') {
      *(undefined4 *)(*pauVar22 + 8) = uVar103;
      *(undefined4 *)(pauVar22[1] + 8) = uVar86;
      *(undefined4 *)(pauVar22[2] + 8) = uVar109;
      *(undefined4 *)(pauVar22[3] + 8) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 8);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
    }
    else {
      *(undefined4 *)(*pauVar22 + 0xc) = uVar103;
      *(undefined4 *)(pauVar22[1] + 0xc) = uVar86;
      *(undefined4 *)(pauVar22[2] + 0xc) = uVar109;
      *(undefined4 *)(pauVar22[3] + 0xc) = uVar98;
      pauVar27 = (undefined1 (*) [16])(pauVar22[4] + 0xc);
      pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 0xc);
    }
    *(int *)*pauVar27 = auVar92._8_4_;
    *(int *)*pauVar22 = auVar89._8_4_;
    uVar86 = *(undefined4 *)*param_2;
    if (cVar3 == '\0') {
      *puVar1 = uVar86;
      puVar1[4] = *(undefined4 *)param_2[1];
      puVar1[8] = *(undefined4 *)(*param_2 + 4);
      puVar1[0xc] = *(undefined4 *)(param_2[1] + 4);
      puVar1[0x10] = *(undefined4 *)(*param_2 + 8);
      puVar23 = puVar1 + 0x14;
    }
    else if (cVar3 == '\x01') {
      puVar1[1] = uVar86;
      puVar1[5] = *(undefined4 *)param_2[1];
      puVar1[9] = *(undefined4 *)(*param_2 + 4);
      puVar1[0xd] = *(undefined4 *)(param_2[1] + 4);
      puVar1[0x11] = *(undefined4 *)(*param_2 + 8);
      puVar23 = puVar1 + 0x15;
    }
    else if (cVar3 == '\x02') {
      puVar1[2] = uVar86;
      puVar1[6] = *(undefined4 *)param_2[1];
      puVar1[10] = *(undefined4 *)(*param_2 + 4);
      puVar1[0xe] = *(undefined4 *)(param_2[1] + 4);
      puVar1[0x12] = *(undefined4 *)(*param_2 + 8);
      puVar23 = puVar1 + 0x16;
    }
    else {
      puVar1[3] = uVar86;
      puVar1[7] = *(undefined4 *)param_2[1];
      puVar1[0xb] = *(undefined4 *)(*param_2 + 4);
      puVar1[0xf] = *(undefined4 *)(param_2[1] + 4);
      puVar1[0x13] = *(undefined4 *)(*param_2 + 8);
      puVar23 = puVar1 + 0x17;
    }
    *puVar23 = *(undefined4 *)(param_2[1] + 8);
    puVar1[(long)(int)cVar3 + 0x18] = param_3;
  }
  if (uVar34 < 0x52) {
    return;
  }
  FUN_03358eb0(param_1);
  if (param_4 == (undefined1 *)0x0) {
    return;
  }
  *param_4 = 1;
  return;
}


