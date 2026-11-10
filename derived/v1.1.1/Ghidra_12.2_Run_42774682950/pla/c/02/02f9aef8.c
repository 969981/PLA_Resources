/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9aef8; name: FUN_02f9aef8
 */


void FUN_02f9aef8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  byte bVar10;
  undefined1 (*pauVar11) [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [12];
  long lVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  float fVar60;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float *local_b0 [3];
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  if (*(char *)(param_1 + 0x100) == '\x02') {
    FUN_02f9a080(param_1);
    return;
  }
  if (0 < (int)param_3) {
    uVar59 = NEON_fmov(0x3f800000,4);
    uVar31 = 0;
    plVar1 = (long *)(param_1 + 200);
    do {
      uVar25 = (ulong)*(ushort *)(param_2 + uVar31 * 2);
      if (uVar25 != 0xffff) {
        pauVar2 = (undefined1 (*) [16])(param_1 + 0x48 + uVar25 * 0x40 + *(long *)(param_1 + 0x48));
        auVar39 = *pauVar2;
        fVar38 = auVar39._0_4_;
        auVar54._0_4_ = fVar38 + fVar38;
        fVar41 = auVar39._4_4_;
        auVar54._4_4_ = fVar41 + fVar41;
        auVar54._8_4_ = auVar39._8_4_ + auVar39._8_4_;
        fVar53 = auVar39._12_4_;
        auVar54._12_4_ = fVar53 + fVar53;
        auVar39 = NEON_ext(auVar39,auVar39,8,1);
        auVar42 = NEON_ext(auVar54,auVar54,8,1);
        fVar37 = auVar39._0_4_ * auVar42._0_4_;
        fVar47 = (float)uVar59;
        local_b0[2] = (float *)CONCAT44(fVar47 - (auVar54._0_4_ * fVar38 + fVar37),
                                        auVar54._4_4_ * fVar38 - auVar54._8_4_ * fVar53);
        local_b0[0] = (float *)CONCAT44(auVar54._4_4_ * fVar38 + auVar54._8_4_ * fVar53,
                                        fVar47 - (auVar54._4_4_ * fVar41 + fVar37));
        local_b0[1] = (float *)(ulong)(uint)(auVar54._8_4_ * fVar38 - auVar54._4_4_ * fVar53);
        uStack_98 = (ulong)(uint)(auVar54._8_4_ * fVar41 + auVar54._0_4_ * fVar53);
        uStack_88 = (ulong)(uint)(fVar47 - (auVar54._0_4_ * fVar38 + auVar54._4_4_ * fVar41));
        local_90 = CONCAT44(auVar54._8_4_ * fVar41 - auVar54._0_4_ * fVar53,
                            auVar54._8_4_ * fVar38 + auVar54._4_4_ * fVar53);
        uStack_78 = (ulong)SUB164(pauVar2[1],8);
        uStack_80 = SUB168(pauVar2[1],0);
        lVar27 = *(long *)pauVar2[3];
        bVar10 = pauVar2[1][0xe];
        if (lVar27 == 0) {
          puVar24 = (undefined1 *)0x0;
          if ((bVar10 >> 3 & 1) != 0) goto LAB_02f9b318;
LAB_02f9b080:
          (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar24[0x18] * 0x200 + 0x18))
                    (puVar24,local_b0,&local_e0);
        }
        else {
          puVar24 = pauVar2[3] + lVar27;
          if ((bVar10 >> 3 & 1) == 0) goto LAB_02f9b080;
LAB_02f9b318:
          auVar39._0_12_ = SUB1612(pauVar2[2],0);
          auVar39._12_4_ = 0x3f800000;
          uStack_b8 = auVar39._8_8_;
          local_c0 = SUB168(pauVar2[2],0);
          FUN_02ffe574(puVar24,local_b0,&local_c0,(bVar10 >> 5 ^ 0xff) & 1,&local_e0);
        }
        uVar9 = *(undefined2 *)(param_2 + uVar31 * 2);
        uVar6 = *(ushort *)(param_1 + 0xd8);
        if (uVar6 == 0) {
          FUN_02f9c618(plVar1,1);
          uVar6 = *(ushort *)(param_1 + 0xd8);
        }
        uVar25 = (ulong)uVar6;
        lVar27 = *(long *)(param_1 + 200) + (long)plVar1;
        *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar27 + uVar25 * 0x20);
        if (*(long *)(param_1 + 200) == 0) {
          lVar27 = 0;
        }
        puVar3 = (undefined4 *)(lVar27 + uVar25 * 0x20);
        *(undefined2 *)(puVar3 + 7) = 0;
        *(undefined2 *)((long)puVar3 + 0x1e) = uVar9;
        puVar3[2] = uStack_d8;
        puVar3[3] = puVar3[3];
        *puVar3 = local_e0;
        puVar3[1] = uStack_dc;
        auVar42._0_12_ = local_d0._0_12_;
        auVar42._12_4_ = puVar3[7];
        *(long *)(puVar3 + 6) = auVar42._8_8_;
        *(long *)(puVar3 + 4) = local_d0._0_8_;
        lVar29 = *(long *)(param_1 + 200);
        uVar7 = *(ushort *)(param_1 + 0xe4);
        lVar27 = lVar29 + (long)plVar1;
        if (lVar29 == 0) {
          pauVar26 = (undefined1 (*) [12])(uVar25 << 5);
          if (uVar7 != 0) goto LAB_02f9b128;
LAB_02f9af80:
          *(ushort *)(param_1 + 0xe4) = uVar6;
          *(undefined4 *)pauVar26[1] = 0x3f000000;
        }
        else {
          pauVar26 = (undefined1 (*) [12])(lVar27 + uVar25 * 0x20);
          if (uVar7 == 0) goto LAB_02f9af80;
LAB_02f9b128:
          fVar56 = (float)*(undefined8 *)(*pauVar26 + 8);
          fVar60 = (float)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
          auVar22 = *pauVar26;
          auVar20 = *pauVar26;
          fVar53 = (float)*(undefined8 *)*pauVar26;
          fVar47 = (float)((ulong)*(undefined8 *)*pauVar26 >> 0x20);
          pauVar11 = (undefined1 (*) [12])(pauVar26[1] + 4);
          fVar41 = (float)*(undefined8 *)pauVar26[2];
          auVar23 = *pauVar11;
          auVar21 = *pauVar11;
          fVar38 = (float)*(undefined8 *)*pauVar11;
          fVar37 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
          uVar8 = *(ushort *)(param_1 + 0xd8);
          if (uVar8 == 0) {
            FUN_02f9c618(plVar1,1);
            lVar29 = *(long *)(param_1 + 200);
            lVar27 = lVar29 + (long)plVar1;
            uVar8 = *(ushort *)(param_1 + 0xd8);
          }
          *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar27 + (ulong)uVar8 * 0x20);
          if (lVar29 == 0) {
            lVar27 = 0;
          }
          puVar4 = (undefined8 *)(lVar27 + (ulong)uVar8 * 0x20);
          pauVar28 = (undefined1 (*) [16])(lVar27 + (ulong)uVar7 * 0x20);
          uVar7 = *(ushort *)(pauVar28[1] + 0xc);
          if (uVar7 != 0) {
            fVar32 = fVar53 + fVar38;
            fVar35 = fVar47 + fVar37;
            fVar36 = fVar56 + fVar41;
            fVar38 = fVar38 - fVar53;
            fVar37 = fVar37 - fVar47;
            fVar41 = fVar41 - fVar56;
            while( true ) {
              lVar27 = 0;
              if (lVar29 != 0) {
                lVar27 = lVar29 + (long)plVar1;
              }
              local_b0[0] = (float *)(lVar27 + (ulong)uVar7 * 0x20);
              local_b0[1] = (float *)(lVar27 + (ulong)*(ushort *)(pauVar28[1] + 0xe) * 0x20);
              uVar50 = (undefined4)((ulong)*(undefined8 *)(*pauVar28 + 8) >> 0x20);
              auVar58._12_4_ = uVar50;
              auVar58._0_12_ = *(undefined1 (*) [12])*pauVar28;
              auVar18._12_4_ = fVar60;
              auVar18._0_12_ = auVar20;
              auVar54 = NEON_fmin(auVar18,auVar58,4);
              auVar44._0_12_ = SUB1612(pauVar28[1],0);
              auVar44._12_4_ = 0;
              auVar55._0_12_ = auVar54._0_12_;
              auVar55._12_4_ = uVar50;
              auVar16._12_4_ = 0;
              auVar16._0_12_ = auVar21;
              auVar39 = NEON_fmax(auVar16,auVar44,4);
              auVar45._0_12_ = auVar39._0_12_;
              auVar45._12_4_ = SUB164(pauVar28[1],0xc);
              *(long *)(*pauVar28 + 8) = auVar55._8_8_;
              *(long *)*pauVar28 = auVar54._0_8_;
              *(long *)(pauVar28[1] + 8) = auVar45._8_8_;
              *(long *)pauVar28[1] = auVar39._0_8_;
              fVar57 = (float)*(undefined8 *)(local_b0[0] + 2);
              fVar51 = (float)((ulong)*(undefined8 *)(local_b0[0] + 2) >> 0x20);
              fVar53 = (float)*(undefined8 *)local_b0[0];
              fVar56 = (float)((ulong)*(undefined8 *)local_b0[0] >> 0x20);
              fVar47 = (fVar53 + local_b0[0][4]) - fVar32;
              fVar48 = (fVar56 + local_b0[0][5]) - fVar35;
              fVar49 = (fVar57 + local_b0[0][6]) - fVar36;
              fVar52 = (fVar51 + 0.0) - (fVar60 + 0.0);
              fVar47 = fVar47 * fVar47;
              fVar48 = fVar48 * fVar48;
              fVar49 = fVar49 * fVar49;
              fVar52 = fVar52 * fVar52;
              auVar12._4_4_ = fVar48;
              auVar12._0_4_ = fVar47;
              auVar12._8_4_ = fVar49;
              auVar12._12_4_ = fVar52;
              auVar13._4_4_ = fVar48;
              auVar13._0_4_ = fVar47;
              auVar13._8_4_ = fVar49;
              auVar13._12_4_ = fVar52;
              auVar42 = NEON_ext(auVar12,auVar13,8,1);
              auVar43._0_4_ = fVar38 + (local_b0[0][4] - fVar53);
              auVar43._4_4_ = fVar37 + (local_b0[0][5] - fVar56);
              auVar43._8_4_ = fVar41 + (local_b0[0][6] - fVar57);
              auVar43._12_4_ = (0.0 - fVar60) + (0.0 - fVar51);
              fVar53 = (*local_b0[1] + local_b0[1][4]) - fVar32;
              fVar56 = (local_b0[1][1] + local_b0[1][5]) - fVar35;
              fVar57 = (local_b0[1][2] + local_b0[1][6]) - fVar36;
              fVar49 = (local_b0[1][3] + 0.0) - (fVar60 + 0.0);
              auVar58 = NEON_ext(auVar43,auVar43,8,1);
              auVar46._0_4_ = fVar38 + (local_b0[1][4] - *local_b0[1]);
              auVar46._4_4_ = fVar37 + (local_b0[1][5] - local_b0[1][1]);
              auVar46._8_4_ = fVar41 + (local_b0[1][6] - local_b0[1][2]);
              auVar46._12_4_ = (0.0 - fVar60) + (0.0 - local_b0[1][3]);
              fVar53 = fVar53 * fVar53;
              fVar56 = fVar56 * fVar56;
              fVar57 = fVar57 * fVar57;
              fVar49 = fVar49 * fVar49;
              auVar14._4_4_ = fVar56;
              auVar14._0_4_ = fVar53;
              auVar14._8_4_ = fVar57;
              auVar14._12_4_ = fVar49;
              auVar15._4_4_ = fVar56;
              auVar15._0_4_ = fVar53;
              auVar15._8_4_ = fVar57;
              auVar15._12_4_ = fVar49;
              auVar39 = NEON_ext(auVar14,auVar15,8,1);
              auVar54 = NEON_ext(auVar46,auVar46,8,1);
              pauVar28 = (undefined1 (*) [16])
                         local_b0[(fVar53 + fVar56 + auVar39._0_4_) *
                                  (auVar54._0_4_ + auVar46._0_4_ + auVar46._4_4_) <
                                  (fVar47 + fVar48 + auVar42._0_4_) *
                                  (auVar58._0_4_ + auVar43._0_4_ + auVar43._4_4_)];
              uVar7 = *(ushort *)(pauVar28[1] + 0xc);
              if (uVar7 == 0) break;
              lVar29 = *plVar1;
            }
          }
          if ((*(uint *)(*pauVar28 + 0xc) & 0xffff) == 0) {
            *(ushort *)(param_1 + 0xe4) = uVar8;
          }
          else {
            lVar29 = *plVar1;
            lVar27 = 0;
            if (lVar29 != 0) {
              lVar27 = lVar29 + (long)plVar1;
            }
            lVar30 = 0;
            if (lVar29 != 0) {
              lVar30 = lVar29 + (long)plVar1;
            }
            lVar30 = lVar30 + ((ulong)*(uint *)(*pauVar28 + 0xc) & 0xffff) * 0x20;
            *(ushort *)
             (lVar30 + (ulong)((uint)*(ushort *)(lVar30 + 0x1e) ==
                              ((uint)((ulong)((long)pauVar28 - lVar27) >> 5) & 0xffff)) * 2 + 0x1c)
                 = uVar8;
          }
          *(uint *)((long)puVar4 + 0xc) = *(ushort *)(*pauVar28 + 0xc) | 0x3f000000;
          lVar27 = *plVar1;
          *(ushort *)((long)puVar4 + 0x1e) = uVar6;
          iVar5 = 0;
          if (lVar27 != 0) {
            iVar5 = (int)lVar27 + (int)plVar1;
          }
          *(short *)((long)puVar4 + 0x1c) = (short)((uint)((int)pauVar28 - iVar5) >> 5);
          *(uint *)(*pauVar28 + 0xc) = uVar8 | 0x3f000000;
          lVar27 = *plVar1;
          if (lVar27 != 0) {
            lVar27 = lVar27 + (long)plVar1;
          }
          *(uint *)(lVar27 + uVar25 * 0x20 + 0xc) = uVar8 | 0x3f000000;
          auVar33._0_12_ = SUB1612(pauVar28[1],0);
          auVar33._12_4_ = 0;
          auVar19._12_4_ = fVar60;
          auVar19._0_12_ = auVar22;
          auVar54 = NEON_fmin(*pauVar28,auVar19,4);
          auVar40._0_12_ = auVar54._0_12_;
          auVar40._12_4_ = *(undefined4 *)((long)puVar4 + 0xc);
          auVar17._12_4_ = 0;
          auVar17._0_12_ = auVar23;
          auVar39 = NEON_fmax(auVar33,auVar17,4);
          auVar34._0_12_ = auVar39._0_12_;
          auVar34._12_4_ = *(undefined4 *)((long)puVar4 + 0x1c);
          puVar4[1] = auVar40._8_8_;
          *puVar4 = auVar54._0_8_;
          puVar4[3] = auVar34._8_8_;
          puVar4[2] = auVar39._0_8_;
        }
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
        *(ushort *)(pauVar2[1] + 0xc) = uVar6;
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != param_3);
  }
  return;
}


