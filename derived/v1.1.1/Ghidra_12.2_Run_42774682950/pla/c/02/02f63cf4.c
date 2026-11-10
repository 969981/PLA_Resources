/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f63cf4; name: FUN_02f63cf4
 */


/* WARNING: Removing unreachable block (ram,0x02f63eb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f63cf4(long *param_1,float *param_2,undefined8 *param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  byte bVar28;
  int iVar29;
  uint uVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  byte bVar36;
  byte bVar37;
  byte bVar39;
  int iVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar33 [16];
  byte bVar38;
  byte bVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar46;
  int iVar47;
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  int iVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  byte local_570;
  byte bStack_56f;
  byte bStack_56e;
  byte bStack_56d;
  byte bStack_56c;
  byte bStack_56b;
  byte bStack_56a;
  byte bStack_569;
  byte bStack_568;
  byte bStack_567;
  byte bStack_566;
  byte bStack_565;
  byte bStack_564;
  byte bStack_563;
  byte bStack_562;
  byte bStack_561;
  undefined4 local_4f0 [256];
  undefined4 *local_f0;
  long local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  long lStack_c0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined8 local_70;
  
  uVar17 = _UNK_03889708;
  uVar16 = _DAT_03889700;
  if (*(char *)(param_4 + 600) == '\0') {
    fVar11 = *param_2;
    fVar12 = param_2[1];
    fVar13 = param_2[2];
    auVar14._12_4_ = fVar11;
    auVar14._8_4_ = fVar11;
    auVar14._4_4_ = fVar11;
    auVar14._0_4_ = fVar11;
    auVar9._4_4_ = fVar12;
    auVar9._0_4_ = fVar12;
    uVar65 = *param_3;
    local_4f0[0] = 1;
    auVar33 = NEON_fmov(0x3f800000,4);
    puVar22 = (undefined4 *)((ulong)local_4f0 | 4);
    uVar20 = uVar65;
    do {
      while( true ) {
        local_f0 = puVar22 + -1;
        pauVar1 = (undefined1 (*) [16])((long)param_1 + (long)(int)puVar22[-1] * 0x80 + *param_1);
        auVar9._8_4_ = fVar12;
        auVar49 = *pauVar1;
        fVar46 = (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
        uVar8 = *(undefined8 *)pauVar1[1];
        auVar48 = NEON_fmax(auVar14,auVar49,4);
        auVar10._4_4_ = fVar13;
        auVar10._0_4_ = fVar13;
        auVar10._8_4_ = fVar13;
        iVar29 = -(uint)(auVar49._0_4_ <= (float)uVar8);
        iVar40 = -(uint)(auVar49._4_4_ <= (float)((ulong)uVar8 >> 0x20));
        iVar44 = -(uint)(auVar49._8_4_ <= (float)*(undefined8 *)(pauVar1[1] + 8));
        iVar45 = -(uint)(auVar49._12_4_ <= fVar46);
        auVar49._12_4_ = fVar46;
        auVar49._0_12_ = *(undefined1 (*) [12])pauVar1[1];
        auVar49 = NEON_fmin(auVar48,auVar49,4);
        fVar46 = auVar49._0_4_ - fVar11;
        fVar50 = auVar49._4_4_ - fVar11;
        fVar52 = auVar49._8_4_ - fVar11;
        fVar54 = auVar49._12_4_ - fVar11;
        auVar9._12_4_ = fVar12;
        auVar49 = NEON_fmax(auVar9,pauVar1[2],4);
        auVar49 = NEON_fmin(auVar49,pauVar1[3],4);
        fVar56 = auVar49._0_4_ - fVar12;
        fVar57 = auVar49._4_4_ - fVar12;
        fVar58 = auVar49._8_4_ - fVar12;
        fVar59 = auVar49._12_4_ - fVar12;
        auVar10._12_4_ = fVar13;
        auVar49 = NEON_fmax(auVar10,pauVar1[4],4);
        auVar48._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[5] + 8) >> 0x20);
        auVar48._0_12_ = *(undefined1 (*) [12])pauVar1[5];
        auVar49 = NEON_fmin(auVar49,auVar48,4);
        fVar60 = auVar49._0_4_ - fVar13;
        fVar61 = auVar49._4_4_ - fVar13;
        fVar62 = auVar49._8_4_ - fVar13;
        fVar63 = auVar49._12_4_ - fVar13;
        fVar64 = (float)uVar65;
        iVar47 = -(uint)(fVar46 * fVar46 + fVar56 * fVar56 + fVar60 * fVar60 <= fVar64);
        iVar51 = -(uint)(fVar50 * fVar50 + fVar57 * fVar57 + fVar61 * fVar61 <=
                        (float)((ulong)uVar65 >> 0x20));
        iVar53 = -(uint)(fVar52 * fVar52 + fVar58 * fVar58 + fVar62 * fVar62 <= (float)uVar20);
        iVar55 = -(uint)(fVar54 * fVar54 + fVar59 * fVar59 + fVar63 * fVar63 <=
                        (float)((ulong)uVar20 >> 0x20));
        bVar28 = (byte)iVar47 & (byte)iVar29;
        bVar36 = (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar29 >> 8);
        bVar37 = (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
        bVar38 = (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
        iVar29 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar36,bVar28)));
        bVar39 = (byte)iVar51 & (byte)iVar40;
        bVar41 = (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar40 >> 8);
        bVar42 = (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
        bVar43 = (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar40 >> 0x18);
        auVar31._0_8_ = CONCAT17(bVar43,CONCAT16(bVar42,CONCAT15(bVar41,CONCAT14(bVar39,iVar29))));
        auVar31[8] = (byte)iVar53 & (byte)iVar44;
        auVar31[9] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar44 >> 8);
        auVar31[10] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
        auVar31[0xb] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar44 >> 0x18);
        auVar34[0xc] = (byte)iVar55 & (byte)iVar45;
        auVar34._0_12_ = auVar31;
        auVar34[0xd] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar45 >> 8);
        auVar34[0xe] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
        auVar34[0xf] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar45 >> 0x18);
        if (((iVar29 == 0 && (int)((ulong)auVar31._0_8_ >> 0x20) == 0) && auVar31._8_4_ == 0) &&
            auVar34._12_4_ == 0) break;
        local_570 = (byte)uVar16;
        bStack_56f = (byte)((ulong)uVar16 >> 8);
        bStack_56e = (byte)((ulong)uVar16 >> 0x10);
        bStack_56d = (byte)((ulong)uVar16 >> 0x18);
        bStack_56c = (byte)((ulong)uVar16 >> 0x20);
        bStack_56b = (byte)((ulong)uVar16 >> 0x28);
        bStack_56a = (byte)((ulong)uVar16 >> 0x30);
        bStack_569 = (byte)((ulong)uVar16 >> 0x38);
        bStack_568 = (byte)uVar17;
        bStack_567 = (byte)((ulong)uVar17 >> 8);
        bStack_566 = (byte)((ulong)uVar17 >> 0x10);
        bStack_565 = (byte)((ulong)uVar17 >> 0x18);
        bStack_564 = (byte)((ulong)uVar17 >> 0x20);
        bStack_563 = (byte)((ulong)uVar17 >> 0x28);
        bStack_562 = (byte)((ulong)uVar17 >> 0x30);
        bStack_561 = (byte)((ulong)uVar17 >> 0x38);
        iVar29 = CONCAT13(bVar38 & bStack_56d,
                          CONCAT12(bVar37 & bStack_56e,
                                   CONCAT11(bVar36 & bStack_56f,bVar28 & local_570)));
        auVar32._0_8_ =
             CONCAT17(bVar43 & bStack_569,
                      CONCAT16(bVar42 & bStack_56a,
                               CONCAT15(bVar41 & bStack_56b,CONCAT14(bVar39 & bStack_56c,iVar29))));
        auVar32[8] = auVar31[8] & bStack_568;
        auVar32[9] = auVar31[9] & bStack_567;
        auVar32[10] = auVar31[10] & bStack_566;
        auVar32[0xb] = auVar31[0xb] & bStack_565;
        auVar35[0xc] = auVar34[0xc] & bStack_564;
        auVar35._0_12_ = auVar32;
        auVar35[0xd] = auVar34[0xd] & bStack_563;
        auVar35[0xe] = auVar34[0xe] & bStack_562;
        auVar35[0xf] = auVar34[0xf] & bStack_561;
        uVar30 = iVar29 + (int)((ulong)auVar32._0_8_ >> 0x20) + auVar32._8_4_ + auVar35._12_4_;
        uVar6 = *(uint *)(&DAT_03aadfe0 + (ulong)uVar30 * 4);
        auVar7._12_4_ = (int)((ulong)*(undefined8 *)(pauVar1[6] + 8) >> 0x20);
        auVar7._0_12_ = *(undefined1 (*) [12])pauVar1[6];
        auVar49 = a64_TBL(ZEXT816(0),auVar7,
                          *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar30 * 0x10));
        if (pauVar1[7][0] == '\0') {
          *(long *)(puVar22 + -1) = auVar49._0_8_;
          auVar49 = NEON_ext(auVar49,auVar49,8,1);
          *(long *)(puVar22 + 1) = auVar49._0_8_;
          puVar22 = local_f0 + (int)uVar6;
          if (local_4f0 == local_f0 + (int)uVar6) {
            return;
          }
        }
        else {
          uVar65 = CONCAT44(fVar64,fVar64);
          if (uVar30 != 0) {
            uVar30 = 0;
LAB_02f63ef0:
            switch(uVar30) {
            default:
              cVar4 = *(char *)(param_4 + 600);
              uVar15 = auVar49._0_4_;
              break;
            case 1:
              cVar4 = *(char *)(param_4 + 600);
              uVar15 = auVar49._4_4_;
              break;
            case 2:
              cVar4 = *(char *)(param_4 + 600);
              uVar15 = auVar49._8_4_;
              break;
            case 3:
              cVar4 = *(char *)(param_4 + 600);
              uVar15 = auVar49._12_4_;
            }
            do {
              if (cVar4 == '\0') {
                lVar26 = *(long *)(param_4 + 0x240);
                lVar23 = lVar26 + (ulong)uVar15 * 0xc0;
                if ((~*(uint *)(lVar23 + 0x50) & 0xffffff) != 0) {
                  plVar24 = *(long **)(param_4 + 0x248);
                  plVar18 = (long *)plVar24[1];
                  if (plVar18 != (long *)0x0) {
                    uVar19 = (**(code **)(*plVar18 + 0x30))(plVar18,4,plVar24 + 2,lVar23);
                    if ((uVar19 & 1) == 0) goto LAB_02f63edc;
                    plVar24 = *(long **)(param_4 + 0x248);
                  }
                  lVar26 = lVar26 + (ulong)uVar15 * 0xc0;
                  lVar25 = *(long *)(lVar26 + 0x78);
                  uVar5 = *(undefined2 *)(lVar26 + 0x8a);
                  uVar3 = *(undefined4 *)(lVar26 + 0x8c);
                  uVar65 = *(undefined8 *)(lVar26 + 0x98);
                  local_c8 = 0xffffffff;
                  uStack_d0 = 0;
                  local_ac = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                  lVar27 = *(long *)(param_4 + 0x250);
                  lVar26 = tpidr_el0;
                  local_e0 = lVar23;
                  local_d8 = lVar25;
                  lStack_c0 = lVar23;
                  local_a0 = auVar33._0_8_;
                  uStack_98 = auVar33._8_8_;
                  if (*(long *)(lVar26 + 0x38d490) == 0) {
                    lVar21 = FUN_0333d16c(0,1);
                    *(long *)(lVar26 + 0x38d490) = lVar21;
                    lVar26 = *(long *)(lVar21 + 0x10);
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(lVar26 + 0x38d490) + 0x10);
                  }
                  if (lVar26 != 0) {
                    puVar2 = *(undefined8 **)(lVar26 + 8);
                    uVar19 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= *(ulong *)(lVar26 + 0x10)) &&
                       (*(ulong *)(lVar26 + 8) = uVar19, puVar2 != (undefined8 *)0x0)) {
                      *puVar2 = "TtQueryPoint";
                      uVar20 = nn::os::GetSystemTick();
                      puVar2[1] = uVar20;
                    }
                  }
                  plVar18 = (long *)*plVar24;
                  local_78[0] = uVar5;
                  local_74 = uVar3;
                  local_70 = uVar65;
                  if ((plVar18 != (long *)0x0) && ((*(byte *)(plVar18 + 3) & 1) != 0)) {
                    (**(code **)(*plVar18 + 0x38))(plVar18,4,lVar23,lVar25,local_78);
                  }
                  uVar65 = NEON_fmin(*(undefined8 *)(lVar27 + 0x10),
                                     CONCAT44((int)plVar24[8],(int)plVar24[8]),4);
                  *(undefined8 *)(lVar27 + 0x10) = uVar65;
                  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar25 + 0x18) * 0x200 + 0xd8))
                            (lVar25,param_4 + 0x220,plVar24,local_78,&local_e0,lVar27);
                  if (lVar26 != 0) {
                    puVar2 = *(undefined8 **)(lVar26 + 8);
                    uVar19 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar19 <= *(ulong *)(lVar26 + 0x10)) &&
                       (*(ulong *)(lVar26 + 8) = uVar19, puVar2 != (undefined8 *)0x0)) {
                      *puVar2 = &DAT_0390f40e;
                      uVar65 = nn::os::GetSystemTick();
                      puVar2[1] = uVar65;
                    }
                  }
                  uVar65 = *(undefined8 *)(*(long *)(param_4 + 0x250) + 0x10);
                  fVar46 = (float)uVar65;
                  fVar50 = (float)((ulong)uVar65 >> 0x20);
                  uVar65 = CONCAT44(fVar50 * fVar50,fVar46 * fVar46);
                  *(bool *)(param_4 + 600) = *(char *)(*(long *)(param_4 + 0x250) + 0x18) != '\0';
                }
              }
LAB_02f63edc:
              uVar30 = uVar30 + 1;
              if (uVar6 == uVar30) break;
              if (uVar30 < 4) goto LAB_02f63ef0;
              cVar4 = *(char *)(param_4 + 600);
              uVar15 = 0;
            } while( true );
          }
          if (*(char *)(param_4 + 600) != '\0') {
            return;
          }
          puVar22 = local_f0;
          uVar20 = uVar65;
          if (local_4f0 == local_f0) {
            return;
          }
        }
      }
      puVar22 = local_f0;
    } while (local_4f0 != local_f0);
  }
  return;
}


