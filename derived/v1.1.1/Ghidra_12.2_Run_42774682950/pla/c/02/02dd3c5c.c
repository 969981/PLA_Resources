/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd3c5c; name: FUN_02dd3c5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dd3c5c(undefined4 param_1,undefined4 param_2,ulong param_3,undefined8 param_4,int param_5
                 )

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong *puVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  ushort uVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  size_t sVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  char *pcVar33;
  long lVar34;
  long lVar35;
  char *pcVar36;
  long *plVar37;
  ulong uVar38;
  undefined8 uVar39;
  int iVar40;
  long lVar41;
  undefined1 *puVar42;
  undefined4 *puVar43;
  long lVar44;
  undefined1 *puVar45;
  long lVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  ulong uVar51;
  undefined4 *puVar52;
  ulong uVar53;
  int *piVar54;
  byte *pbVar55;
  ulong *puVar56;
  undefined8 *puVar57;
  ulong uVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined4 local_2e8;
  undefined1 *local_2c0;
  byte *local_2b8;
  byte *local_2b0;
  byte *local_2a8;
  byte *pbStack_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_248;
  long local_240;
  long *local_238;
  long *local_230;
  ulong local_228;
  undefined8 local_220;
  char local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  long *local_190;
  byte *pbStack_188;
  byte *local_180;
  undefined2 local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  long local_e8;
  long local_e0;
  uint uStack_d4;
  undefined8 uStack_d0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  long *local_b0;
  uint local_a8;
  int local_a4;
  ulong local_a0;
  undefined *local_98;
  int *local_90;
  uint *local_88;
  
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar26 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar26;
  cVar7 = *(char *)(*(long *)(lVar26 + 0x230) + 0x120);
  local_b0 = (long *)0x0;
  FUN_02c073d4(param_4,&local_b0);
  if (local_b0 == (long *)0x0) {
    return;
  }
  lVar60 = *(long *)local_b0[3];
  iVar16 = *(int *)(lVar60 + 0x20);
  lVar26 = tpidr_el0;
  lVar27 = *(long *)(lVar26 + 0x38d490);
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar27;
  }
  plVar18 = *(long **)(*(long *)(lVar27 + 8) + 0x58);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x78,0);
  FUN_03012d10(plVar18,iVar16 + 4);
  iVar16 = *(int *)(lVar60 + 0x30);
  lVar27 = *(long *)(lVar26 + 0x38d490);
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar27;
  }
  plVar19 = *(long **)(*(long *)(lVar27 + 8) + 0x58);
  plVar19 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,0);
  plVar22 = plVar19 + 2;
  *plVar22 = 1;
  *plVar19 = (long)&PTR_LAB_042c7870;
  plVar19[1] = 0xffffffff;
  plVar19[3] = 0;
  plVar19[4] = 0;
  plVar19[5] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = -0x8000000000000000;
  plVar19[10] = 0;
  *(undefined4 *)((long)plVar19 + 0x5c) = 0xffffffff;
  *(undefined4 *)(plVar19 + 0xc) = 0;
  *(undefined4 *)((long)plVar19 + 100) = 0xffffffff;
  lVar27 = plVar19[9];
  *(undefined4 *)(plVar19 + 0xb) = 0;
  iVar16 = FUN_03016d6c(plVar19 + 8,0,iVar16 + 5,0x10);
  if (-1 < iVar16) {
    FUN_0301707c(plVar19 + 3,plVar19,(int)lVar27);
  }
  puVar20 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x10) + 0x38))();
  fVar62 = (float)*puVar20;
  fVar64 = (float)((ulong)*puVar20 >> 0x20);
  fVar62 = fVar62 * fVar62;
  fVar64 = fVar64 * fVar64;
  fVar65 = (float)puVar20[1] * (float)puVar20[1];
  fVar63 = fVar62 + fVar64 + fVar65;
  fVar65 = fVar62 + fVar64 + fVar65;
  uVar67 = CONCAT44(fVar65,fVar63);
  uVar66 = NEON_frsqrte(uVar67,4);
  fVar62 = (float)uVar66;
  fVar64 = (float)((ulong)uVar66 >> 0x20);
  uVar66 = NEON_frsqrts(uVar67,CONCAT44(fVar64 * fVar64,fVar62 * fVar62),4);
  fVar62 = fVar62 * (float)uVar66;
  fVar64 = fVar64 * (float)((ulong)uVar66 >> 0x20);
  uVar67 = NEON_frsqrts(uVar67,CONCAT44(fVar64 * fVar64,fVar62 * fVar62),4);
  fVar62 = (float)uVar67 * fVar62;
  fVar64 = (float)((ulong)uVar67 >> 0x20) * fVar64;
  iVar16 = -(uint)(fVar63 <= 0.0);
  iVar40 = -(uint)(fVar65 <= 0.0);
  fVar63 = fVar63 * fVar62;
  fVar65 = fVar65 * fVar64;
  FUN_0301713c(CONCAT17((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                        CONCAT16((byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                 CONCAT15((byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                          CONCAT14(SUB41(fVar65,0) & ~(byte)iVar40,
                                                   CONCAT13((byte)((uint)fVar63 >> 0x18) &
                                                            ~(byte)((uint)iVar16 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                                                     ~(byte)((uint)iVar16 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar63 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar16
                                                                                     >> 8),
                                                                              SUB41(fVar63,0) &
                                                                              ~(byte)iVar16))))))),
               (byte)iVar16,CONCAT44(fVar64,fVar62),plVar19);
  if (0 < *(int *)(lVar60 + 0x40)) {
    lVar44 = 0;
    lVar27 = 0;
    do {
      lVar41 = *(long *)(lVar60 + 0x38) + lVar44;
      uVar13 = FUN_030131f8(plVar18,*(long *)(lVar60 + 0x18) +
                                    (ulong)*(ushort *)(lVar41 + 0x14) * 0x50);
      *(undefined2 *)(lVar41 + 0x14) = uVar13;
      uVar13 = FUN_03017280(plVar19,*(long *)(lVar60 + 0x28) +
                                    (ulong)*(ushort *)(lVar41 + 0x88) * 0x70);
      *(undefined2 *)(lVar41 + 0x88) = uVar13;
      lVar27 = lVar27 + 1;
      lVar44 = lVar44 + 0xb0;
    } while (lVar27 < *(int *)(lVar60 + 0x40));
  }
  puVar11 = PTR_PTR_0434a080;
  lVar27 = plVar18[9];
  if (4 < (int)plVar18[0xd]) {
    uVar51 = 4;
    do {
      local_158 = 0;
      uStack_156 = 0;
      uStack_155 = 0;
      uStack_154 = 0;
      local_160 = (long *)0x0;
      plVar21 = (long *)0x0;
      pcVar36 = (char *)(*(ulong *)(lVar27 + uVar51 * 0x50) & 0xfffffffffffffffe);
      if (pcVar36 != (char *)0x0) {
        sVar23 = strlen(pcVar36);
        uVar17 = (int)sVar23 + 1;
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)puVar11 + 0x10))
                            (puVar11,(long)((sVar23 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar20 = puVar11;
        *(uint *)(puVar20 + 1) = uVar17;
        memcpy(puVar20 + 2,pcVar36,(ulong)uVar17);
        plVar21 = (long *)CONCAT44(uStack_154,CONCAT13(uStack_155,CONCAT12(uStack_156,local_158)));
        local_160 = (long *)((ulong)(puVar20 + 2) | 1);
      }
      plVar37 = (long *)(lVar27 + uVar51 * 0x50 + 8);
      plVar28 = (long *)*plVar37;
      if (plVar21 != plVar28) {
        if ((plVar28 != (long *)0x0) && (plVar28[1] != 0)) {
          plVar28 = plVar28 + 2;
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar10) {
              *plVar28 = *plVar28 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          plVar28 = (long *)*plVar37;
        }
        local_158 = SUB82(plVar28,0);
        uStack_156 = (undefined1)((ulong)plVar28 >> 0x10);
        uStack_155 = (undefined1)((ulong)plVar28 >> 0x18);
        uStack_154 = (undefined4)((ulong)plVar28 >> 0x20);
        if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
          plVar28 = plVar21 + 2;
          do {
            lVar44 = *plVar28;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar10) {
              *plVar28 = lVar44 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar44 + -1 == 0) {
            (**(code **)(*plVar21 + 0x18))();
          }
        }
      }
      lVar44 = lVar27 + uVar51 * 0x50;
      local_140 = *(undefined8 *)(lVar44 + 0x20);
      local_138 = *(undefined8 *)(lVar44 + 0x28);
      local_150._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar44 + 0x10) >> 0x20);
      local_148._0_4_ = (uint)*(undefined8 *)(lVar44 + 0x18);
      local_148._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar44 + 0x18) >> 0x20);
      local_130 = *(undefined8 *)(lVar44 + 0x30);
      local_128 = *(undefined8 *)(lVar44 + 0x38);
      local_120 = *(undefined8 *)(lVar44 + 0x40);
      local_118 = *(undefined8 *)(lVar44 + 0x48);
      local_150._0_4_ = 1;
      uVar14 = (**(code **)(**(long **)(param_3 + 0x10) + 0x78))
                         (*(long **)(param_3 + 0x10),&local_160);
      plVar21 = *(long **)(param_3 + 0x18);
      uVar53 = (ulong)uVar14;
      uVar58 = plVar21[1];
      uVar29 = param_3;
      if (uVar58 == 0) {
LAB_02dd4054:
        plVar28 = (long *)(**(code **)(*(long *)plVar21[7] + 0x10))((long *)plVar21[7],0x18,2);
        if (plVar28 == (long *)0x0) {
          (**(code **)(*(long *)plVar21[7] + 0xb8))();
        }
        lVar44 = plVar21[7];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379520), iVar16 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar41 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar41 == 0) {
          *(ushort *)(plVar28 + 2) = uVar14;
          *(ushort *)((long)plVar28 + 0x12) = uVar14;
        }
        else {
          if (0xf < *(ulong *)(lVar41 + 0x80)) goto LAB_02dd65b0;
          *(long *)(lVar41 + *(ulong *)(lVar41 + 0x80) * 8) = lVar44;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + 1;
          *(ushort *)(plVar28 + 2) = uVar14;
          *(ushort *)((long)plVar28 + 0x12) = uVar14;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + -1;
        }
        *plVar28 = 0;
        plVar28[1] = uVar53;
        if ((uVar58 == 0) || (*(float *)(plVar21 + 0xc) * (float)uVar58 < (float)(plVar21[0xb] + 1))
           ) {
          uVar29 = (ulong)(uVar58 < 3 || (uVar58 & uVar58 - 1) != 0) | uVar58 << 1;
          uVar58 = (ulong)((float)(plVar21[0xb] + 1) / *(float *)(plVar21 + 0xc));
          if (uVar58 <= uVar29) {
            uVar58 = uVar29;
          }
          if (uVar58 - 1 == 0) {
            uVar58 = 2;
          }
          else if ((uVar58 & uVar58 - 1) != 0) {
            uVar58 = std::__next_prime(uVar58);
          }
          uVar29 = plVar21[1];
          if (uVar29 < uVar58) {
            uVar38 = uVar58;
LAB_02dd416c:
            FUN_02dd8ad0(plVar21,uVar38);
          }
          else if (uVar58 < uVar29) {
            uVar38 = (ulong)((float)(ulong)plVar21[0xb] / *(float *)(plVar21 + 0xc));
            if ((uVar29 < 3) ||
               (uVar30 = uVar29 - (uVar29 >> 1 & 0x5555555555555555),
               uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333),
               1 < (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar38 = std::__next_prime(uVar38);
            }
            else if (1 < uVar38) {
              uVar38 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar38 - 1) & 0x3f);
            }
            if (uVar38 <= uVar58) {
              uVar38 = uVar58;
            }
            if (uVar38 < uVar29) goto LAB_02dd416c;
          }
          uVar58 = plVar21[1];
          if ((uVar58 & uVar58 - 1) == 0) {
            uVar29 = (int)uVar58 - 1 & uVar53;
          }
          else if (uVar53 < uVar58) {
            uVar29 = uVar53;
          }
          else {
            uVar29 = 0;
            if (uVar58 != 0) {
              uVar29 = uVar53 / uVar58;
            }
            uVar29 = uVar53 - uVar29 * uVar58;
          }
        }
        plVar37 = *(long **)(*plVar21 + uVar29 * 8);
        if (plVar37 == (long *)0x0) {
          plVar37 = plVar21 + 6;
          *plVar28 = *plVar37;
          *plVar37 = (long)plVar28;
          *(long **)(*plVar21 + uVar29 * 8) = plVar37;
          if (*plVar28 != 0) {
            uVar29 = *(ulong *)(*plVar28 + 8);
            if ((uVar58 & uVar58 - 1) == 0) {
              uVar29 = uVar29 & uVar58 - 1;
            }
            else if (uVar58 <= uVar29) {
              uVar53 = 0;
              if (uVar58 != 0) {
                uVar53 = uVar29 / uVar58;
              }
              uVar29 = uVar29 - uVar53 * uVar58;
            }
            plVar37 = (long *)(*plVar21 + uVar29 * 8);
            goto LAB_02dd4300;
          }
        }
        else {
          *plVar28 = *plVar37;
LAB_02dd4300:
          *plVar37 = (long)plVar28;
        }
        plVar21[0xb] = plVar21[0xb] + 1;
      }
      else {
        uVar29 = uVar58 - (uVar58 >> 1 & 0x5555555555555555);
        uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
        uVar38 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar38 < 2) {
          uVar29 = (int)uVar58 - 1 & uVar53;
        }
        else {
          uVar29 = uVar53;
          if (uVar58 <= uVar53) {
            uVar29 = 0;
            if (uVar58 != 0) {
              uVar29 = uVar53 / uVar58;
            }
            uVar29 = uVar53 - uVar29 * uVar58;
          }
        }
        plVar28 = *(long **)(*plVar21 + uVar29 * 8);
        if (plVar28 == (long *)0x0) goto LAB_02dd4054;
        if (uVar38 < 2) {
          do {
            plVar28 = (long *)*plVar28;
            if ((plVar28 == (long *)0x0) ||
               (plVar28[1] != uVar53 && (plVar28[1] & uVar58 - 1) != uVar29)) goto LAB_02dd4054;
          } while (*(ushort *)(plVar28 + 2) != uVar14);
        }
        else {
          do {
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_02dd4054;
            uVar38 = plVar28[1];
            if (uVar38 != uVar53) {
              if (uVar58 <= uVar38) {
                uVar30 = 0;
                if (uVar58 != 0) {
                  uVar30 = uVar38 / uVar58;
                }
                uVar38 = uVar38 - uVar30 * uVar58;
              }
              if (uVar38 != uVar29) goto LAB_02dd4054;
            }
          } while (*(ushort *)(plVar28 + 2) != uVar14);
        }
      }
      iVar16 = *(int *)(lVar60 + 0x40);
      if (0 < iVar16) {
        lVar44 = 0;
        lVar41 = 0x14;
        do {
          if (uVar51 == *(ushort *)(*(long *)(lVar60 + 0x38) + lVar41)) {
            *(ushort *)(*(long *)(lVar60 + 0x38) + lVar41) = uVar14;
            iVar16 = *(int *)(lVar60 + 0x40);
          }
          lVar44 = lVar44 + 1;
          lVar41 = lVar41 + 0xb0;
        } while (lVar44 < iVar16);
      }
      plVar21 = (long *)CONCAT44(uStack_154,CONCAT13(uStack_155,CONCAT12(uStack_156,local_158)));
      plVar28 = local_160;
      if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
        plVar37 = plVar21 + 2;
        do {
          lVar44 = *plVar37;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar10) {
            *plVar37 = lVar44 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar44 + -1 == 0) {
          (**(code **)(*plVar21 + 0x18))();
          plVar28 = local_160;
        }
      }
      local_160 = plVar28;
      if (((ulong)plVar28 & 1) != 0) {
        lVar44 = *(long *)(lVar26 + 0x38d490);
        if (lVar44 == 0) {
          lVar44 = FUN_0333d16c(0,1);
          *(long *)(lVar26 + 0x38d490) = lVar44;
        }
        plVar21 = *(long **)(*(long *)(lVar44 + 8) + 0x58);
        *(undefined8 *)((long)plVar28 - 0x11U) = 0;
        (**(code **)(*plVar21 + 0x18))
                  (plVar21,(undefined8 *)((long)plVar28 - 0x11U),
                   (long)*(int *)((long)plVar28 - 9) + 0x10);
      }
      uVar51 = uVar51 + 1;
    } while ((long)uVar51 < (long)(int)plVar18[0xd]);
  }
  lVar27 = plVar19[8];
  if ((int)plVar19[0xc] < 6) {
    if (plVar19[1] != 0) {
      do {
        lVar27 = *plVar22;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar10) {
          *plVar22 = lVar27 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar27 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
  }
  else {
    uVar51 = 5;
    do {
      puVar20 = (undefined8 *)(lVar27 + uVar51 * 0x70);
      uVar67 = puVar20[1];
      local_f8 = puVar20[0xd];
      local_108 = puVar20[0xb];
      local_118 = puVar20[9];
      local_128 = puVar20[7];
      local_138 = puVar20[5];
      local_148._0_4_ = (uint)puVar20[3];
      local_148._4_4_ = (undefined4)((ulong)puVar20[3] >> 0x20);
      local_158 = (undefined2)uVar67;
      uStack_156 = (undefined1)((ulong)uVar67 >> 0x10);
      uStack_155 = (undefined1)((ulong)uVar67 >> 0x18);
      uStack_154 = (undefined4)((ulong)uVar67 >> 0x20);
      local_140 = puVar20[4];
      local_150._0_4_ = (uint)puVar20[2];
      local_150._4_4_ = (undefined4)((ulong)puVar20[2] >> 0x20);
      local_130 = puVar20[6];
      local_120 = puVar20[8];
      local_110 = puVar20[10];
      local_100 = puVar20[0xc];
      local_160 = (long *)CONCAT44((int)((ulong)*puVar20 >> 0x20),1);
      uVar14 = (**(code **)(**(long **)(param_3 + 0x10) + 0x90))
                         (*(long **)(param_3 + 0x10),&local_160);
      plVar21 = *(long **)(param_3 + 0x38);
      uVar58 = (ulong)uVar14;
      uVar53 = plVar21[1];
      uVar29 = param_3;
      if (uVar53 == 0) {
LAB_02dd46ac:
        plVar28 = (long *)(**(code **)(*(long *)plVar21[7] + 0x10))((long *)plVar21[7],0x18,2);
        if (plVar28 == (long *)0x0) {
          (**(code **)(*(long *)plVar21[7] + 0xb8))();
        }
        lVar44 = plVar21[7];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_04379520), iVar16 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar41 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar41 == 0) {
          *(ushort *)(plVar28 + 2) = uVar14;
          *(ushort *)((long)plVar28 + 0x12) = uVar14;
        }
        else {
          if (0xf < *(ulong *)(lVar41 + 0x80)) {
LAB_02dd65b0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar41 + *(ulong *)(lVar41 + 0x80) * 8) = lVar44;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + 1;
          *(ushort *)(plVar28 + 2) = uVar14;
          *(ushort *)((long)plVar28 + 0x12) = uVar14;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + -1;
        }
        *plVar28 = 0;
        plVar28[1] = uVar58;
        if ((uVar53 == 0) || (*(float *)(plVar21 + 0xc) * (float)uVar53 < (float)(plVar21[0xb] + 1))
           ) {
          uVar29 = (ulong)(uVar53 < 3 || (uVar53 & uVar53 - 1) != 0) | uVar53 << 1;
          uVar53 = (ulong)((float)(plVar21[0xb] + 1) / *(float *)(plVar21 + 0xc));
          if (uVar53 <= uVar29) {
            uVar53 = uVar29;
          }
          if (uVar53 - 1 == 0) {
            uVar53 = 2;
          }
          else if ((uVar53 & uVar53 - 1) != 0) {
            uVar53 = std::__next_prime(uVar53);
          }
          uVar29 = plVar21[1];
          if (uVar29 < uVar53) {
            uVar38 = uVar53;
LAB_02dd47c0:
            FUN_02dd8f2c(plVar21,uVar38);
          }
          else if (uVar53 < uVar29) {
            uVar38 = (ulong)((float)(ulong)plVar21[0xb] / *(float *)(plVar21 + 0xc));
            if ((uVar29 < 3) ||
               (uVar30 = uVar29 - (uVar29 >> 1 & 0x5555555555555555),
               uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333),
               1 < (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar38 = std::__next_prime(uVar38);
            }
            else if (1 < uVar38) {
              uVar38 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar38 - 1) & 0x3f);
            }
            if (uVar38 <= uVar53) {
              uVar38 = uVar53;
            }
            if (uVar38 < uVar29) goto LAB_02dd47c0;
          }
          uVar53 = plVar21[1];
          if ((uVar53 & uVar53 - 1) == 0) {
            uVar29 = (int)uVar53 - 1 & uVar58;
          }
          else if (uVar58 < uVar53) {
            uVar29 = uVar58;
          }
          else {
            uVar29 = 0;
            if (uVar53 != 0) {
              uVar29 = uVar58 / uVar53;
            }
            uVar29 = uVar58 - uVar29 * uVar53;
          }
        }
        plVar37 = *(long **)(*plVar21 + uVar29 * 8);
        if (plVar37 == (long *)0x0) {
          plVar37 = plVar21 + 6;
          *plVar28 = *plVar37;
          *plVar37 = (long)plVar28;
          *(long **)(*plVar21 + uVar29 * 8) = plVar37;
          if (*plVar28 != 0) {
            uVar29 = *(ulong *)(*plVar28 + 8);
            if ((uVar53 & uVar53 - 1) == 0) {
              uVar29 = uVar29 & uVar53 - 1;
            }
            else if (uVar53 <= uVar29) {
              uVar58 = 0;
              if (uVar53 != 0) {
                uVar58 = uVar29 / uVar53;
              }
              uVar29 = uVar29 - uVar58 * uVar53;
            }
            plVar37 = (long *)(*plVar21 + uVar29 * 8);
            goto LAB_02dd48f4;
          }
        }
        else {
          *plVar28 = *plVar37;
LAB_02dd48f4:
          *plVar37 = (long)plVar28;
        }
        plVar21[0xb] = plVar21[0xb] + 1;
      }
      else {
        uVar29 = uVar53 - (uVar53 >> 1 & 0x5555555555555555);
        uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
        uVar38 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar38 < 2) {
          uVar29 = (int)uVar53 - 1 & uVar58;
        }
        else {
          uVar29 = uVar58;
          if (uVar53 <= uVar58) {
            uVar29 = 0;
            if (uVar53 != 0) {
              uVar29 = uVar58 / uVar53;
            }
            uVar29 = uVar58 - uVar29 * uVar53;
          }
        }
        plVar28 = *(long **)(*plVar21 + uVar29 * 8);
        if (plVar28 == (long *)0x0) goto LAB_02dd46ac;
        if (uVar38 < 2) {
          do {
            plVar28 = (long *)*plVar28;
            if ((plVar28 == (long *)0x0) ||
               (plVar28[1] != uVar58 && (plVar28[1] & uVar53 - 1) != uVar29)) goto LAB_02dd46ac;
          } while (*(ushort *)(plVar28 + 2) != uVar14);
        }
        else {
          do {
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_02dd46ac;
            uVar38 = plVar28[1];
            if (uVar38 != uVar58) {
              if (uVar53 <= uVar38) {
                uVar30 = 0;
                if (uVar53 != 0) {
                  uVar30 = uVar38 / uVar53;
                }
                uVar38 = uVar38 - uVar30 * uVar53;
              }
              if (uVar38 != uVar29) goto LAB_02dd46ac;
            }
          } while (*(ushort *)(plVar28 + 2) != uVar14);
        }
      }
      iVar16 = *(int *)(lVar60 + 0x40);
      if (0 < iVar16) {
        lVar44 = 0;
        lVar41 = 0x88;
        do {
          if (uVar51 == *(ushort *)(*(long *)(lVar60 + 0x38) + lVar41)) {
            *(ushort *)(*(long *)(lVar60 + 0x38) + lVar41) = uVar14;
            iVar16 = *(int *)(lVar60 + 0x40);
          }
          lVar44 = lVar44 + 1;
          lVar41 = lVar41 + 0xb0;
        } while (lVar44 < iVar16);
      }
      uVar51 = uVar51 + 1;
    } while ((long)uVar51 < (long)(int)plVar19[0xc]);
    if (plVar19[1] != 0) {
      do {
        lVar27 = *plVar22;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar10) {
          *plVar22 = lVar27 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar27 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
    if (plVar18 == (long *)0x0) goto LAB_02dd4a68;
  }
  if (plVar18[1] != 0) {
    plVar19 = plVar18 + 2;
    do {
      lVar27 = *plVar19;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar10) {
        *plVar19 = lVar27 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar18 + 0x18))();
    }
  }
LAB_02dd4a68:
  puVar11 = PTR_PTR_0434a080;
  pbVar32 = _UNK_03888fc8;
  plVar18 = _DAT_03888fc0;
  if (0 < *(int *)(lVar60 + 0x40)) {
    uVar67 = *(undefined8 *)PTR_DAT_0437a120;
    lVar27 = 0;
    do {
      lVar44 = *(long *)(lVar60 + 0x38);
      local_160 = *(long **)(lVar44 + lVar27 * 0xb0);
      if ((local_160 != (long *)0x0) && (local_160[1] != 0)) {
        plVar19 = local_160 + 2;
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      lVar41 = lVar44 + lVar27 * 0xb0;
      uVar66 = *(undefined8 *)(lVar41 + 8);
      *(undefined8 *)((long)((ulong)&local_160 | 8) + 7) = *(undefined8 *)(lVar41 + 0xf);
      *(undefined8 *)((ulong)&local_160 | 8) = uVar66;
      local_148._0_4_ = 0;
      local_148._4_4_ = 0;
      pcVar36 = (char *)(*(ulong *)(lVar41 + 0x18) & 0xfffffffffffffffe);
      if (pcVar36 != (char *)0x0) {
        sVar23 = strlen(pcVar36);
        uVar17 = (int)sVar23 + 1;
        puVar48 = (undefined8 *)
                  (**(code **)(*(long *)puVar11 + 0x10))
                            (puVar11,(long)((sVar23 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar48 = puVar11;
        puVar20 = puVar48 + 2;
        *(uint *)(puVar48 + 1) = uVar17;
        memcpy(puVar20,pcVar36,(ulong)uVar17);
        local_148._0_4_ = (uint)puVar20 | 1;
        local_148._4_4_ = (undefined4)((ulong)puVar20 >> 0x20);
      }
      lVar41 = lVar44 + lVar27 * 0xb0;
      local_f8 = *(undefined8 *)(lVar41 + 0x68);
      local_108 = *(undefined8 *)(lVar41 + 0x58);
      local_f0 = *(undefined4 *)(lVar41 + 0x70);
      local_118 = *(undefined8 *)(lVar41 + 0x48);
      local_128 = *(undefined8 *)(lVar41 + 0x38);
      local_138 = *(undefined8 *)(lVar41 + 0x28);
      local_140 = *(undefined8 *)(lVar41 + 0x20);
      local_130 = *(undefined8 *)(lVar41 + 0x30);
      local_120 = *(undefined8 *)(lVar41 + 0x40);
      local_110 = *(undefined8 *)(lVar41 + 0x50);
      local_100 = *(undefined8 *)(lVar41 + 0x60);
      local_e8 = *(long *)(lVar41 + 0x78);
      if ((local_e8 != 0) && (*(long *)(local_e8 + 8) != 0)) {
        plVar19 = (long *)(local_e8 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      local_e0 = *(long *)(lVar44 + lVar27 * 0xb0 + 0x80);
      if ((local_e0 != 0) && (*(long *)(local_e0 + 8) != 0)) {
        plVar19 = (long *)(local_e0 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      lVar41 = lVar44 + lVar27 * 0xb0;
      uStack_d0 = *(undefined8 *)(lVar41 + 0x90);
      local_c8 = *(long *)(lVar41 + 0x98);
      if ((local_c8 != 0) && (*(long *)(local_c8 + 8) != 0)) {
        plVar19 = (long *)(local_c8 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = *plVar19 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      lVar44 = lVar44 + lVar27 * 0xb0;
      local_c0 = *(undefined1 *)(lVar44 + 0xa0);
      local_bc = *(undefined8 *)(lVar44 + 0xa4);
      if (cVar7 != '\0') {
        local_150._0_4_ =
             ((uint)local_150 >> 0xf) << 0x10 |
             (uint)local_150 & 0x1f | ((uint)local_150 >> 5 & 0x1f) << 6 |
             ((uint)local_150 >> 10 & 0x1f) << 0xb;
      }
      pbVar55 = (byte *)(CONCAT44(local_148._4_4_,(uint)local_148) & 0xfffffffffffffffe);
      if (pbVar55 == (byte *)0x0) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        local_2c0 = *(undefined1 **)PTR_DAT_0437a0d8;
        local_2b8 = *(byte **)(PTR_DAT_0437a0d8 + 8);
        local_2b0 = *(byte **)(PTR_DAT_0437a0d8 + 0x10);
        local_2a8 = *(byte **)(PTR_DAT_0437a0d8 + 0x18);
        pbVar55 = local_2b8;
        if (local_2a8 != (byte *)0x0) {
          (**(code **)(*(long *)local_2a8 + 0x18))(local_2a8);
          pbVar55 = local_2b8;
        }
      }
      else {
        local_2b0 = (byte *)strlen((char *)pbVar55);
        cVar9 = *pbVar55;
        pcVar36 = (char *)pbVar55;
        while (cVar9 != '\0') {
          pcVar36 = pcVar36 + 1;
          cVar9 = *pcVar36;
        }
        local_2a8 = (byte *)0x0;
      }
      uVar51 = (ulong)local_2b0;
      if (3 < local_2b0) {
        uVar51 = 4;
      }
      local_2c0 = &DAT_cbf29ce484222645;
      local_2b8 = pbVar55 + uVar51;
      pbVar55 = (byte *)((long)local_2b0 - uVar51);
      if (pbVar55 != (byte *)0x0) {
        uVar29 = (ulong)pbVar55 & 3;
        pbVar31 = local_2b8;
        if ((long)local_2b0 + ~uVar51 < 3) {
          local_2c0 = &DAT_cbf29ce484222645;
        }
        else {
          lVar44 = (long)pbVar55 - uVar29;
          local_2c0 = &DAT_cbf29ce484222645;
          do {
            bVar8 = *pbVar31;
            pbVar3 = pbVar31 + 1;
            pbVar1 = pbVar31 + 2;
            pbVar2 = pbVar31 + 3;
            pbVar31 = pbVar31 + 4;
            local_2c0 = (undefined1 *)
                        ((((((ulong)local_2c0 ^ (ulong)bVar8) * 0x100000001b3 ^ (ulong)*pbVar3) *
                           0x100000001b3 ^ (ulong)*pbVar1) * 0x100000001b3 ^ (ulong)*pbVar2) *
                        0x100000001b3);
            lVar44 = lVar44 + -4;
          } while (lVar44 != 0);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          local_2c0 = (undefined1 *)(((ulong)local_2c0 ^ (ulong)*pbVar31) * 0x100000001b3);
          pbVar31 = pbVar31 + 1;
        }
      }
      lVar44 = *(long *)(param_3 + 8);
      local_2b0 = pbVar55;
      if (((*PTR_DAT_0437a570 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a570);
      }
      lVar44 = *(long *)(lVar44 + 200);
      plVar19 = (long *)PTR_DAT_0437a578;
      if (lVar44 != 0) {
        plVar19 = (long *)(lVar44 + 0x88);
      }
      puVar48 = *(undefined8 **)(*plVar19 + 0x60);
      for (puVar20 = *(undefined8 **)(*plVar19 + 0x58); puVar20 != puVar48; puVar20 = puVar20 + 2) {
        sVar15 = FUN_02b6f370(*puVar20,&local_2c0);
        if (-1 < sVar15) {
          sVar15 = *(short *)((long)puVar20 + 10) + sVar15;
          goto LAB_02dd4d9c;
        }
      }
      sVar15 = -1;
LAB_02dd4d9c:
      plVar19 = local_160;
      local_140 = CONCAT44(0xffffffff,(int)sVar15);
      local_240 = -1;
      *(undefined8 *)((ulong)&local_240 | 8) = 0;
      ((undefined8 *)((ulong)&local_240 | 8))[1] = 0;
      local_220 = uVar67;
      if ((local_160 == (long *)0x0) || ((*(ushort *)((long)local_160 + 0x1a) & 1) == 0)) {
        uVar51 = FUN_02c07228(local_160,&local_230);
        plVar19 = local_160;
        plVar22 = local_160;
        if (((uVar51 & 1) != 0) && (local_160 != local_230)) {
          if ((local_230 != (long *)0x0) && (local_230[1] != 0)) {
            plVar22 = local_230 + 2;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar10) {
                *plVar22 = *plVar22 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          local_160 = local_230;
          plVar22 = local_160;
          if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
            plVar22 = plVar19 + 2;
            do {
              lVar44 = *plVar22 + -1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar10) {
                *plVar22 = lVar44;
                cVar9 = ExclusiveMonitorsStatus();
              }
              plVar21 = local_160;
            } while (cVar9 != '\0');
            goto LAB_02dd4eec;
          }
        }
      }
      else {
        pbStack_188 = pbVar32;
        local_190 = plVar18;
        lVar44 = *(long *)(lVar26 + 0x38d490);
        if (lVar44 == 0) {
          lVar44 = FUN_0333d16c(0,1);
          *(long *)(lVar26 + 0x38d490) = lVar44;
        }
        plVar22 = *(long **)(*(long *)(lVar44 + 8) + 0x58);
        plVar21 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x80,0);
        FUN_02fe89b0(plVar21,plVar19,&local_190,1);
        local_238 = plVar21;
        plVar22 = local_160;
        if (local_160 != plVar21) {
          if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
            plVar19 = plVar21 + 2;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar10) {
                *plVar19 = *plVar19 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar22 = plVar21;
          if ((local_160 != (long *)0x0) && (local_160[1] != 0)) {
            plVar22 = local_160 + 2;
            do {
              lVar44 = *plVar22 + -1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar10) {
                *plVar22 = lVar44;
                cVar9 = ExclusiveMonitorsStatus();
              }
              plVar19 = local_160;
            } while (cVar9 != '\0');
LAB_02dd4eec:
            local_160 = plVar21;
            plVar22 = local_160;
            if (lVar44 == 0) {
              (**(code **)(*plVar19 + 0x18))();
              plVar22 = local_160;
            }
          }
        }
      }
      local_160 = plVar22;
      lVar41 = (**(code **)(**(long **)(param_3 + 0x10) + 0xc0))
                         (*(long **)(param_3 + 0x10),&local_160,0xffffffffffffffff);
      *(int *)(*(long *)(lVar60 + 0x38) + lVar27 * 0xb0 + 0x8c) = (int)lVar41;
      lVar44 = 0x78;
      if ((char)local_138 != '\x02') {
        lVar44 = 0x58;
      }
      local_240 = lVar41;
      FUN_02dd6610(*(undefined8 *)(param_3 + lVar44),&local_240);
      (**(code **)(**(long **)(param_3 + 0x10) + 200))(*(long **)(param_3 + 0x10),lVar41,1,0);
      if ((local_230 != (long *)0x0) && (local_230[1] != 0)) {
        plVar19 = local_230 + 2;
        do {
          lVar44 = *plVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = lVar44 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar44 + -1 == 0) {
          (**(code **)(*local_230 + 0x18))();
        }
      }
      if ((local_238 != (long *)0x0) && (local_238[1] != 0)) {
        plVar19 = local_238 + 2;
        do {
          lVar44 = *plVar19;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar10) {
            *plVar19 = lVar44 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar44 + -1 == 0) {
          (**(code **)(*local_238 + 0x18))();
        }
      }
      if (local_2a8 != (byte *)0x0) {
        (**(code **)(*(long *)local_2a8 + 0x20))();
      }
      FUN_02fff010(&local_160);
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(lVar60 + 0x40));
  }
  puVar11 = PTR_DAT_0437a0d8;
  puVar56 = (ulong *)**(long **)(param_3 + 0x78);
  puVar6 = (ulong *)(*(long **)(param_3 + 0x78))[1];
  if (puVar56 != puVar6) {
    pbVar32 = PTR_DAT_0437a570;
    do {
      lVar27 = *(long *)(*(long *)(param_3 + 0x10) + 0x38) + (*puVar56 & 0xffffff) * 0xc0;
      piVar54 = (int *)(lVar27 + 0x98);
      if (*piVar54 != -1) {
        lVar44 = *(long *)(param_3 + 8);
        if (((*pbVar32 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar32), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar32);
        }
        lVar44 = *(long *)(lVar44 + 200);
        puVar20 = (undefined8 *)PTR_DAT_0437a578;
        if (lVar44 != 0) {
          puVar20 = (undefined8 *)(lVar44 + 0x88);
        }
        uVar17 = FUN_02b68b4c(*puVar20,*piVar54);
        if ((~uVar17 & 0xffff) != 0) {
          lVar44 = *(long *)(param_3 + 8);
          if (((*pbVar32 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar32), iVar16 != 0)) {
            FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar32);
          }
          lVar44 = *(long *)(lVar44 + 200);
          puVar20 = (undefined8 *)PTR_DAT_0437a578;
          if (lVar44 != 0) {
            puVar20 = (undefined8 *)(lVar44 + 0x88);
          }
          puVar20 = (undefined8 *)FUN_02b68dac(*puVar20,uVar17);
          puVar45 = (undefined1 *)*puVar20;
          plVar18 = (long *)puVar20[3];
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
          if (*(int *)(lVar60 + 0x40) != 0) {
            lVar44 = *(long *)(lVar60 + 0x38);
            lVar41 = lVar44 + (long)*(int *)(lVar60 + 0x40) * 0xb0;
            do {
              pcVar36 = (char *)(*(ulong *)(lVar44 + 0x18) & 0xfffffffffffffffe);
              if (pcVar36 == (char *)0x0) {
                if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar16 != 0)) {
                  FUN_00100250(PTR_FUN_0437a0e0,puVar11,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_0437a0d0);
                }
                pcVar36 = *(char **)(puVar11 + 8);
                uVar51 = *(ulong *)(puVar11 + 0x10);
                plVar19 = *(long **)(puVar11 + 0x18);
                if (plVar19 != (long *)0x0) {
                  (**(code **)(*plVar19 + 0x18))(plVar19);
                }
              }
              else {
                uVar51 = strlen(pcVar36);
                cVar7 = *pcVar36;
                pcVar33 = pcVar36;
                while (cVar7 != '\0') {
                  pcVar33 = pcVar33 + 1;
                  cVar7 = *pcVar33;
                }
                plVar19 = (long *)0x0;
              }
              uVar29 = uVar51;
              if (3 < uVar51) {
                uVar29 = 4;
              }
              puVar42 = &DAT_cbf29ce484222645;
              uVar53 = uVar51 - uVar29;
              if (uVar53 != 0) {
                pbVar32 = (byte *)(pcVar36 + uVar29);
                uVar58 = uVar53 & 3;
                if (uVar51 + ~uVar29 < 3) {
                  puVar42 = &DAT_cbf29ce484222645;
                }
                else {
                  lVar46 = uVar53 - uVar58;
                  puVar42 = &DAT_cbf29ce484222645;
                  do {
                    bVar8 = *pbVar32;
                    pbVar55 = pbVar32 + 1;
                    pbVar31 = pbVar32 + 2;
                    pbVar3 = pbVar32 + 3;
                    pbVar32 = pbVar32 + 4;
                    puVar42 = (undefined1 *)
                              ((((((ulong)puVar42 ^ (ulong)bVar8) * 0x100000001b3 ^ (ulong)*pbVar55)
                                 * 0x100000001b3 ^ (ulong)*pbVar31) * 0x100000001b3 ^ (ulong)*pbVar3
                               ) * 0x100000001b3);
                    lVar46 = lVar46 + -4;
                  } while (lVar46 != 0);
                }
                for (; uVar58 != 0; uVar58 = uVar58 - 1) {
                  puVar42 = (undefined1 *)(((ulong)puVar42 ^ (ulong)*pbVar32) * 0x100000001b3);
                  pbVar32 = pbVar32 + 1;
                }
              }
              if (puVar42 == puVar45) {
                iVar40 = 0x16;
                iVar16 = 0x16;
                *(undefined4 *)(lVar27 + 0x9c) = *(undefined4 *)(lVar44 + 0x8c);
              }
              else {
                iVar40 = 0;
                iVar16 = 0;
              }
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 0x20))(plVar19);
                iVar16 = iVar40;
              }
              lVar44 = lVar44 + 0xb0;
            } while ((lVar44 != lVar41) && (iVar16 == 0));
          }
          pbVar32 = PTR_DAT_0437a570;
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x20))();
          }
        }
      }
      puVar56 = puVar56 + 6;
    } while (puVar56 != puVar6);
  }
  lVar27 = **(long **)(param_3 + 0xb8);
  lVar44 = (*(long **)(param_3 + 0xb8))[1];
  if (param_5 < 1) {
    local_2e8 = 0x7fffffff;
  }
  else {
    local_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0x3089705f;
    local_150._0_4_ = 0x3f000000;
    local_150._4_4_ = 0x3f000000;
    local_148._0_4_ = 0x7fffffff;
    local_140 = 0;
    local_160 = (long *)(CONCAT44((int)((ulong)local_160 >> 0x20),param_5) & 0xffffff00ffffffff);
    local_2e8 = (**(code **)(**(long **)(param_3 + 0x10) + 0x300))
                          (*(long **)(param_3 + 0x10),&local_160);
  }
  puVar11 = PTR_PTR_0434a080;
  uVar66 = _UNK_0388a138;
  uVar67 = _DAT_0388a130;
  if (0 < *(int *)(lVar60 + 0x50)) {
    lVar41 = 0;
    do {
      lVar46 = *(long *)(lVar60 + 0x48);
      local_190 = *(long **)(lVar46 + lVar41 * 0x30);
      if ((local_190 != (long *)0x0) && (local_190[1] != 0)) {
        plVar18 = local_190 + 2;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar34 = lVar46 + lVar41 * 0x30;
      pbStack_188 = *(byte **)(lVar34 + 8);
      local_180 = *(byte **)(lVar34 + 0x10);
      local_178 = *(undefined2 *)(lVar34 + 0x18);
      local_170 = 0;
      pcVar36 = (char *)(*(ulong *)(lVar34 + 0x20) & 0xfffffffffffffffe);
      if (pcVar36 != (char *)0x0) {
        sVar23 = strlen(pcVar36);
        uVar17 = (int)sVar23 + 1;
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)puVar11 + 0x10))
                            (puVar11,(long)((sVar23 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar20 = puVar11;
        *(uint *)(puVar20 + 1) = uVar17;
        memcpy(puVar20 + 2,pcVar36,(ulong)uVar17);
        local_170 = (ulong)(puVar20 + 2) | 1;
      }
      lVar34 = (long)(int)pbStack_188;
      local_168 = *(undefined8 *)(lVar46 + lVar41 * 0x30 + 0x28);
      lVar46 = *(long *)(lVar60 + 0x38);
      local_160 = *(long **)(lVar46 + lVar34 * 0xb0);
      if ((local_160 != (long *)0x0) && (local_160[1] != 0)) {
        plVar18 = local_160 + 2;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      uVar39 = *(undefined8 *)(lVar35 + 8);
      *(undefined8 *)((long)((ulong)&local_160 | 8) + 7) = *(undefined8 *)(lVar35 + 0xf);
      *(undefined8 *)((ulong)&local_160 | 8) = uVar39;
      local_148._0_4_ = 0;
      local_148._4_4_ = 0;
      pcVar36 = (char *)(*(ulong *)(lVar35 + 0x18) & 0xfffffffffffffffe);
      if (pcVar36 != (char *)0x0) {
        sVar23 = strlen(pcVar36);
        uVar17 = (int)sVar23 + 1;
        puVar48 = (undefined8 *)
                  (**(code **)(*(long *)puVar11 + 0x10))
                            (puVar11,(long)((sVar23 << 0x20) + 0x1100000000) >> 0x20,0);
        puVar20 = puVar48 + 2;
        *puVar48 = puVar11;
        *(uint *)(puVar48 + 1) = uVar17;
        memcpy(puVar20,pcVar36,(ulong)uVar17);
        local_148._0_4_ = (uint)puVar20 | 1;
        local_148._4_4_ = (undefined4)((ulong)puVar20 >> 0x20);
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      local_f8 = *(undefined8 *)(lVar35 + 0x68);
      local_108 = *(undefined8 *)(lVar35 + 0x58);
      local_f0 = *(undefined4 *)(lVar35 + 0x70);
      local_118 = *(undefined8 *)(lVar35 + 0x48);
      local_128 = *(undefined8 *)(lVar35 + 0x38);
      local_138 = *(undefined8 *)(lVar35 + 0x28);
      local_140 = *(undefined8 *)(lVar35 + 0x20);
      local_130 = *(undefined8 *)(lVar35 + 0x30);
      local_120 = *(undefined8 *)(lVar35 + 0x40);
      local_110 = *(undefined8 *)(lVar35 + 0x50);
      local_100 = *(undefined8 *)(lVar35 + 0x60);
      local_e8 = *(long *)(lVar35 + 0x78);
      if ((local_e8 != 0) && (*(long *)(local_e8 + 8) != 0)) {
        plVar18 = (long *)(local_e8 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_e0 = *(long *)(lVar46 + lVar34 * 0xb0 + 0x80);
      if ((local_e0 != 0) && (*(long *)(local_e0 + 8) != 0)) {
        plVar18 = (long *)(local_e0 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      uStack_d0 = *(undefined8 *)(lVar35 + 0x90);
      uStack_d4 = (uint)((ulong)*(undefined8 *)(lVar35 + 0x88) >> 0x20);
      local_c8 = *(long *)(lVar35 + 0x98);
      if ((local_c8 != 0) && (*(long *)(local_c8 + 8) != 0)) {
        plVar18 = (long *)(local_c8 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar46 = lVar46 + lVar34 * 0xb0;
      lVar34 = (long)(int)local_180;
      local_c0 = *(undefined1 *)(lVar46 + 0xa0);
      local_bc = *(undefined8 *)(lVar46 + 0xa4);
      lVar46 = *(long *)(lVar60 + 0x38);
      local_240 = *(long *)(lVar46 + lVar34 * 0xb0);
      if ((local_240 != 0) && (*(long *)(local_240 + 8) != 0)) {
        plVar18 = (long *)(local_240 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      uVar39 = *(undefined8 *)(lVar35 + 8);
      *(undefined8 *)((long)((ulong)&local_240 | 8) + 7) = *(undefined8 *)(lVar35 + 0xf);
      *(undefined8 *)((ulong)&local_240 | 8) = uVar39;
      local_228 = 0;
      pcVar36 = (char *)(*(ulong *)(lVar35 + 0x18) & 0xfffffffffffffffe);
      if (pcVar36 != (char *)0x0) {
        sVar23 = strlen(pcVar36);
        uVar17 = (int)sVar23 + 1;
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)puVar11 + 0x10))
                            (puVar11,(long)((sVar23 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar20 = puVar11;
        *(uint *)(puVar20 + 1) = uVar17;
        memcpy(puVar20 + 2,pcVar36,(ulong)uVar17);
        local_228 = (ulong)(puVar20 + 2) | 1;
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      local_1d8 = *(undefined8 *)(lVar35 + 0x68);
      local_1e8 = *(undefined8 *)(lVar35 + 0x58);
      local_1d0 = *(undefined4 *)(lVar35 + 0x70);
      local_1f8 = *(undefined8 *)(lVar35 + 0x48);
      local_208 = *(undefined8 *)(lVar35 + 0x38);
      local_218 = (char)*(undefined8 *)(lVar35 + 0x28);
      local_220 = *(undefined8 *)(lVar35 + 0x20);
      local_210 = *(undefined8 *)(lVar35 + 0x30);
      local_200 = *(undefined8 *)(lVar35 + 0x40);
      local_1f0 = *(undefined8 *)(lVar35 + 0x50);
      local_1e0 = *(undefined8 *)(lVar35 + 0x60);
      local_1c8 = *(long *)(lVar35 + 0x78);
      if ((local_1c8 != 0) && (*(long *)(local_1c8 + 8) != 0)) {
        plVar18 = (long *)(local_1c8 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      local_1c0 = *(long *)(lVar46 + lVar34 * 0xb0 + 0x80);
      if ((local_1c0 != 0) && (*(long *)(local_1c0 + 8) != 0)) {
        plVar18 = (long *)(local_1c0 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar35 = lVar46 + lVar34 * 0xb0;
      uVar51 = *(ulong *)(lVar35 + 0x88);
      uStack_1b0 = *(undefined8 *)(lVar35 + 0x90);
      local_1a8 = *(long *)(lVar35 + 0x98);
      if ((local_1a8 != 0) && (*(long *)(local_1a8 + 8) != 0)) {
        plVar18 = (long *)(local_1a8 + 0x10);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      lVar46 = lVar46 + lVar34 * 0xb0;
      local_1a0 = *(undefined1 *)(lVar46 + 0xa0);
      local_19c = *(undefined8 *)(lVar46 + 0xa4);
      pbStack_188 = (byte *)((ulong)uStack_d4 | 0x8000000000000000);
      local_180 = (byte *)(uVar51 >> 0x20 | 0x8000000000000000);
      local_168 = CONCAT44(local_168._4_4_,local_2e8);
      local_248 = (**(code **)(**(long **)(param_3 + 0x10) + 0x298))
                            (*(long **)(param_3 + 0x10),&local_190,0xffffffffffffffff);
      (**(code **)(**(long **)(param_3 + 0x10) + 0x2a8))(*(long **)(param_3 + 0x10),local_248,0);
      plVar19 = *(long **)(param_3 + 0x98);
      plVar18 = plVar19 + 3;
      uVar51 = plVar19[1];
      if (uVar51 < (ulong)plVar19[2]) {
        FUN_02dd94b8(plVar18,uVar51,&local_248);
        plVar19[1] = plVar19[1] + 8;
      }
      else {
        uVar29 = plVar19[4];
        lVar46 = (long)(uVar51 - *plVar19) >> 3;
        uVar51 = lVar46 + 1;
        if (0x7ffffffffffffffe < uVar29) {
          uVar29 = 0x7fffffffffffffff;
        }
        if (uVar29 < uVar51) goto LAB_02dd6608;
        lVar34 = plVar19[2] - *plVar19;
        if ((ulong)(lVar34 >> 3) < uVar29 >> 1) {
          uVar53 = lVar34 >> 2;
          uVar29 = uVar51;
          if (uVar51 <= uVar53) {
            uVar29 = uVar53;
          }
        }
        if (uVar29 == 0) {
          lVar34 = 0;
        }
        else {
          lVar34 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar29 << 3,8);
          if (lVar34 == 0) {
            (**(code **)(*(long *)*plVar18 + 0xb8))();
          }
        }
        lVar35 = lVar34 + lVar46 * 8;
        FUN_02dd94b8(plVar18,lVar35,&local_248);
        lVar59 = *plVar19;
        lVar61 = plVar19[1];
        lVar46 = lVar35 + 8;
        if (lVar61 != lVar59) {
          do {
            lVar35 = lVar35 + -8;
            lVar61 = lVar61 + -8;
            FUN_02bfc060(plVar18,lVar35,lVar61);
          } while (lVar59 != lVar61);
          lVar59 = *plVar19;
        }
        *plVar19 = lVar35;
        plVar19[1] = lVar46;
        lVar46 = plVar19[2];
        plVar19[2] = lVar34 + uVar29 * 8;
        if (lVar59 != 0) {
          plVar18 = (long *)*plVar18;
          uVar51 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar51 & 1) != 0) {
            if (*(char *)(lVar26 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar26 + 0x38d488) = 1;
              *(undefined8 *)(lVar26 + 0x38d478) = 0;
              *(undefined8 *)(lVar26 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar26 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar59,lVar46 - lVar59,8);
              goto LAB_02dd5bc4;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar59,lVar46 - lVar59,8);
        }
      }
LAB_02dd5bc4:
      *(undefined8 *)((ulong)&local_2c0 | 8) = 0xffffffffffffffff;
      ((undefined8 *)((ulong)&local_2c0 | 8))[1] = 0xffffffffffffffff;
      local_290 = 0;
      uStack_288 = 0;
      local_260 = 0;
      local_270 = 0;
      local_268 = -0x8000000000000000;
      local_2a8 = pbStack_188;
      pbStack_2a0 = local_180;
      uStack_278 = uVar66;
      local_280 = uVar67;
      if (((char)local_138 == '\x02') || (local_218 != '\x02')) {
        if (((char)local_138 == '\x02') && (local_218 != '\x02')) {
          local_2c0 = (undefined1 *)CONCAT71(local_2c0._1_7_,1);
          local_2b8 = local_180;
          local_2b0 = pbStack_188;
        }
        else {
          local_2c0 = (undefined1 *)((ulong)local_2c0._1_7_ << 8);
        }
      }
      else {
        local_2c0 = (undefined1 *)CONCAT71(local_2c0._1_7_,1);
        local_2b8 = pbStack_188;
        local_2b0 = local_180;
      }
      plVar19 = *(long **)(param_3 + 0xb8);
      plVar18 = plVar19 + 3;
      uVar51 = plVar19[1];
      local_25c = param_1;
      local_258 = param_2;
      if (uVar51 < (ulong)plVar19[2]) {
        FUN_02dd9590(plVar18,uVar51,&local_2c0);
        plVar19[1] = plVar19[1] + 0x70;
      }
      else {
        uVar29 = plVar19[4];
        lVar46 = (long)(uVar51 - *plVar19) >> 4;
        if (0x7ffffffffffffffe < uVar29) {
          uVar29 = 0x7fffffffffffffff;
        }
        uVar51 = lVar46 * 0x6db6db6db6db6db7 + 1;
        if (uVar29 < uVar51) {
LAB_02dd6608:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar34 = plVar19[2] - *plVar19 >> 4;
        if ((ulong)(lVar34 * 0x6db6db6db6db6db7) < uVar29 >> 1) {
          uVar53 = lVar34 * -0x2492492492492492;
          uVar29 = uVar51;
          if (uVar51 <= uVar53) {
            uVar29 = uVar53;
          }
        }
        if (uVar29 == 0) {
          lVar34 = 0;
        }
        else {
          lVar34 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar29 * 0x70,0x10);
          if (lVar34 == 0) {
            (**(code **)(*(long *)*plVar18 + 0xb8))();
          }
        }
        puVar48 = (undefined8 *)(lVar34 + lVar46 * 0x10);
        FUN_02dd9590(plVar18,puVar48,&local_2c0);
        puVar20 = (undefined8 *)*plVar19;
        if ((undefined8 *)plVar19[1] == puVar20) {
          puVar49 = puVar48;
          puVar47 = puVar20;
        }
        else {
          puVar47 = (undefined8 *)plVar19[1];
          puVar50 = puVar48;
          do {
            lVar46 = *plVar18;
            if ((*PTR_DAT_04379520 & 1) == 0) {
              iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
              puVar12 = PTR_DAT_04379528;
              if (iVar16 != 0) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,puVar12,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
            }
            lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar35 != 0) {
              if (0xf < *(ulong *)(lVar35 + 0x80)) goto LAB_02dd65b0;
              *(long *)(lVar35 + *(ulong *)(lVar35 + 0x80) * 8) = lVar46;
              *(long *)(lVar35 + 0x80) = *(long *)(lVar35 + 0x80) + 1;
            }
            puVar57 = puVar47 + -0xe;
            uVar39 = puVar47[-5];
            puVar49 = puVar50 + -0xe;
            puVar50[-7] = puVar47[-7];
            puVar50[-5] = uVar39;
            uVar39 = puVar47[-9];
            puVar50[-0xb] = puVar47[-0xb];
            puVar50[-9] = uVar39;
            puVar50[-0xd] = puVar47[-0xd];
            *puVar49 = *puVar57;
            uVar39 = puVar47[-0xc];
            puVar50[-10] = puVar47[-10];
            puVar50[-0xc] = uVar39;
            uVar39 = puVar47[-6];
            puVar50[-8] = puVar47[-8];
            puVar50[-6] = uVar39;
            puVar50[-4] = 0;
            puVar50[-3] = 0x8000000000000000;
            uVar17 = *(uint *)(puVar47 + -3);
            puVar52 = (undefined4 *)puVar47[-4];
            local_a8 = uVar17;
            if ((int)uVar17 < 1) {
              puVar50[-4] = 0;
              puVar50[-3] = 0x8000000000000000;
            }
            else {
              uVar51 = (ulong)(int)uVar17;
              local_a4 = 4;
              if ((uVar51 & 0x3fffffffe0000000) != 0) {
                local_98 = &DAT_0411b3a0;
                local_a0 = 2;
                local_88 = &local_a8;
                local_90 = &local_a4;
                FUN_03320b50(0xc69ddef,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                             ,0x30,"Memory allocation request overflow {}*{}",&local_a0);
              }
              local_a0 = -(uVar51 >> 0x1d & 1) & 0xffffffff00000000 | (uVar51 & 0x3fffffff) << 2;
              puVar25 = (undefined4 *)
                        (**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_a0,&local_a0);
              puVar50[-4] = puVar25;
              iVar16 = 0;
              if (local_a4 != 0) {
                iVar16 = (int)local_a0 / local_a4;
              }
              *(uint *)(puVar50 + -3) = uVar17;
              *(int *)((long)puVar50 + -0x14) = iVar16;
              uVar5 = uVar17 & 7;
              if (6 < uVar17 - 1) {
                iVar16 = uVar5 - uVar17;
                puVar24 = puVar25;
                do {
                  *puVar24 = *puVar52;
                  puVar24[1] = puVar52[1];
                  puVar24[2] = puVar52[2];
                  puVar24[3] = puVar52[3];
                  puVar24[4] = puVar52[4];
                  puVar24[5] = puVar52[5];
                  puVar24[6] = puVar52[6];
                  puVar43 = puVar52 + 7;
                  puVar25 = puVar24 + 8;
                  puVar52 = puVar52 + 8;
                  iVar16 = iVar16 + 8;
                  puVar24[7] = *puVar43;
                  puVar24 = puVar25;
                } while (iVar16 != 0);
              }
              for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar25 = *puVar52;
                puVar52 = puVar52 + 1;
                puVar25 = puVar25 + 1;
              }
            }
            uVar39 = puVar47[-2];
            *(undefined4 *)(puVar50 + -1) = *(undefined4 *)(puVar47 + -1);
            puVar50[-2] = uVar39;
            if (lVar35 != 0) {
              *(long *)(lVar35 + 0x80) = *(long *)(lVar35 + 0x80) + -1;
            }
            puVar47 = puVar57;
            puVar50 = puVar49;
          } while (puVar57 != puVar20);
          puVar20 = (undefined8 *)*plVar19;
          puVar47 = (undefined8 *)plVar19[1];
        }
        lVar46 = plVar19[2];
        *plVar19 = (long)puVar49;
        plVar19[1] = (long)(puVar48 + 0xe);
        plVar19[2] = lVar34 + uVar29 * 0x70;
        for (; puVar47 != puVar20; puVar47 = puVar47 + -0xe) {
          *(undefined4 *)(puVar47 + -3) = 0;
          if ((-1 < *(int *)((long)puVar47 + -0x14)) && (puVar47[-4] != 0)) {
            (**(code **)(*(long *)puVar11 + 0x18))
                      (puVar11,puVar47[-4],*(int *)((long)puVar47 + -0x14) << 2);
          }
          puVar47[-4] = 0;
          *(undefined4 *)((long)puVar47 + -0x14) = 0x80000000;
        }
        if (puVar20 != (undefined8 *)0x0) {
          plVar18 = (long *)*plVar18;
          uVar51 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar51 & 1) != 0) {
            if (*(char *)(lVar26 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar26 + 0x38d488) = 1;
              *(undefined8 *)(lVar26 + 0x38d478) = 0;
              *(undefined8 *)(lVar26 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar26 + 0x38d480)) {
              FUN_02bcc824(plVar18,puVar20,lVar46 - (long)puVar20,0x10);
              goto LAB_02dd6078;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,puVar20,lVar46 - (long)puVar20,0x10);
        }
      }
LAB_02dd6078:
      lVar46 = local_268;
      uVar17 = local_268._4_4_;
      local_268 = (ulong)local_268._4_4_ << 0x20;
      if ((-1 < lVar46) && (local_270 != 0)) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_270,uVar17 << 2);
      }
      FUN_02fff010(&local_240);
      FUN_02fff010(&local_160);
      uVar51 = local_170;
      if ((local_170 & 1) != 0) {
        lVar46 = *(long *)(lVar26 + 0x38d490);
        if (lVar46 == 0) {
          lVar46 = FUN_0333d16c(0,1);
          *(long *)(lVar26 + 0x38d490) = lVar46;
        }
        plVar18 = *(long **)(*(long *)(lVar46 + 8) + 0x58);
        puVar20 = (undefined8 *)(uVar51 - 0x11);
        *puVar20 = 0;
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar20,(long)*(int *)(uVar51 - 9) + 0x10);
      }
      if ((local_190 != (long *)0x0) && (local_190[1] != 0)) {
        plVar18 = local_190 + 2;
        do {
          lVar46 = *plVar18;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = lVar46 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar46 + -1 == 0) {
          (**(code **)(*local_190 + 0x18))();
        }
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 < *(int *)(lVar60 + 0x50));
  }
  puVar11 = PTR_PTR_0434a080;
  uVar51 = (lVar44 - lVar27 >> 4) * 0x6db6db6db6db6db7;
  plVar18 = *(long **)(param_3 + 0xb8);
  if (uVar51 < (ulong)((plVar18[1] - *plVar18 >> 4) * 0x6db6db6db6db6db7)) {
    do {
      pcVar36 = (char *)(*plVar18 + uVar51 * 0x70);
      uVar17 = *(uint *)(pcVar36 + 0x58);
      uVar29 = (ulong)(int)uVar17;
      cVar7 = *pcVar36;
      puVar52 = *(undefined4 **)(pcVar36 + 0x50);
      local_2c0 = (undefined1 *)CONCAT44(local_2c0._4_4_,uVar17);
      if ((int)uVar17 < 1) {
        puVar25 = (undefined4 *)0x0;
        iVar16 = -0x80000000;
      }
      else {
        local_240 = CONCAT44(local_240._4_4_,4);
        if ((uVar29 & 0x3fffffffe0000000) != 0) {
          local_158 = 0xb3a0;
          uStack_156 = 0x11;
          uStack_155 = 4;
          uStack_154 = 0;
          local_160 = (long *)0x2;
          local_148 = &local_2c0;
          local_150 = &local_240;
          FUN_03320b50(0xc69ddef,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                       ,0x30,"Memory allocation request overflow {}*{}",&local_160);
        }
        local_160 = (long *)(-(uVar29 >> 0x1d & 1) & 0xffffffff00000000 | (uVar29 & 0x3fffffff) << 2
                            );
        puVar25 = (undefined4 *)(**(code **)(*(long *)puVar11 + 0x10))(puVar11,local_160,&local_160)
        ;
        iVar16 = 0;
        if ((int)local_240 != 0) {
          iVar16 = (int)local_160 / (int)local_240;
        }
        uVar5 = uVar17 & 7;
        puVar24 = puVar25;
        if (6 < uVar17 - 1) {
          iVar40 = uVar5 - uVar17;
          puVar43 = puVar25;
          do {
            *puVar43 = *puVar52;
            puVar43[1] = puVar52[1];
            puVar43[2] = puVar52[2];
            puVar43[3] = puVar52[3];
            puVar43[4] = puVar52[4];
            puVar43[5] = puVar52[5];
            puVar43[6] = puVar52[6];
            puVar4 = puVar52 + 7;
            puVar24 = puVar43 + 8;
            puVar52 = puVar52 + 8;
            iVar40 = iVar40 + 8;
            puVar43[7] = *puVar4;
            puVar43 = puVar24;
          } while (iVar40 != 0);
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar24 = *puVar52;
          puVar52 = puVar52 + 1;
          puVar24 = puVar24 + 1;
        }
      }
      if (cVar7 != '\0') {
        FUN_02dd6a30(param_3,uVar51);
      }
      if ((-1 < iVar16) && (puVar25 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar25,iVar16 << 2);
      }
      uVar51 = uVar51 + 1;
      plVar18 = *(long **)(param_3 + 0xb8);
    } while (uVar51 < (ulong)((plVar18[1] - *plVar18 >> 4) * 0x6db6db6db6db6db7));
  }
  if ((local_b0 != (long *)0x0) && (local_b0[1] != 0)) {
    plVar18 = local_b0 + 2;
    do {
      lVar26 = *plVar18;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar10) {
        *plVar18 = lVar26 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar26 + -1 == 0) {
      (**(code **)(*local_b0 + 0x18))();
    }
  }
  return;
}


