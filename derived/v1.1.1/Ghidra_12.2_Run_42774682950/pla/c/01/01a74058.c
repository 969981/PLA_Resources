/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a74058; name: FUN_01a74058
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a74058(undefined1 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
                 undefined8 param_7,undefined8 *param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  byte extraout_b0;
  byte extraout_var;
  byte extraout_var_00;
  byte extraout_var_01;
  byte extraout_var_02;
  byte extraout_var_03;
  byte extraout_var_04;
  byte extraout_var_05;
  byte extraout_var_06;
  byte extraout_var_07;
  byte extraout_var_08;
  byte extraout_var_09;
  byte extraout_var_10;
  byte extraout_var_11;
  byte extraout_var_12;
  byte extraout_var_13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  bVar49 = param_5[0xf];
  bVar48 = param_5[0xe];
  bVar47 = param_5[0xd];
  bVar46 = param_5[0xc];
  bVar45 = param_5[0xb];
  bVar44 = param_5[10];
  bVar43 = param_5[9];
  bVar42 = param_5[8];
  bVar41 = param_5[7];
  bVar40 = param_5[6];
  bVar39 = param_5[5];
  bVar38 = param_5[4];
  bVar37 = param_5[3];
  bVar36 = param_5[2];
  bVar35 = param_5[1];
  bVar34 = param_5[0];
  bVar33 = param_4[0xf];
  bVar32 = param_4[0xe];
  bVar31 = param_4[0xd];
  bVar30 = param_4[0xc];
  bVar29 = param_4[0xb];
  bVar28 = param_4[10];
  bVar27 = param_4[9];
  bVar26 = param_4[8];
  bVar25 = param_4[7];
  bVar24 = param_4[6];
  bVar23 = param_4[5];
  bVar22 = param_4[4];
  bVar21 = param_4[3];
  bVar20 = param_4[2];
  bVar19 = param_4[1];
  bVar18 = param_4[0];
  uVar17 = param_3._12_4_;
  uVar16 = param_3._8_4_;
  uVar15 = param_3._4_4_;
  uVar14 = param_3._0_4_;
  FUN_01a73650(local_60);
  lVar11 = FUN_01a74238(local_60);
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar10 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = *local_60[0];
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  if (((lVar11 == 0) || (lVar11 = FUN_00ab4364(lVar11 + 0xf0,local_60), lVar11 == 0)) ||
     (plVar13 = *(long **)(*(long *)(lVar11 + 0x208) + 0x88), plVar13 == (long *)0x0)) {
    *param_1 = 0;
  }
  else {
    plVar2 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar4 = (undefined8 *)plVar13[0xc];
    for (puVar3 = (undefined8 *)plVar13[0xb]; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      sVar9 = FUN_02b6f370(*puVar3,param_7);
      if (-1 < sVar9) {
        if ((~((uint)*(ushort *)((long)puVar3 + 10) + (int)sVar9) & 0xffff) != 0) {
          FUN_02b6a9fc(plVar13);
          bVar50 = (byte)_DAT_038897c0;
          bVar51 = (byte)((ulong)_DAT_038897c0 >> 8);
          bVar52 = (byte)((ulong)_DAT_038897c0 >> 0x10);
          bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x18);
          bVar54 = (byte)((ulong)_DAT_038897c0 >> 0x20);
          bVar55 = (byte)((ulong)_DAT_038897c0 >> 0x28);
          bVar56 = (byte)((ulong)_DAT_038897c0 >> 0x30);
          bVar57 = (byte)((ulong)_DAT_038897c0 >> 0x38);
          bVar58 = (byte)_UNK_038897c8;
          bVar59 = (byte)((ulong)_UNK_038897c8 >> 8);
          bVar60 = (byte)((ulong)_UNK_038897c8 >> 0x10);
          bVar61 = (byte)((ulong)_UNK_038897c8 >> 0x18);
          bVar62 = (byte)((ulong)_UNK_038897c8 >> 0x20);
          bVar63 = (byte)((ulong)_UNK_038897c8 >> 0x28);
          bVar64 = (byte)((ulong)_UNK_038897c8 >> 0x30);
          bVar65 = (byte)((ulong)_UNK_038897c8 >> 0x38);
          fVar66 = (float)*param_8;
          fVar67 = (float)((ulong)*param_8 >> 0x20);
          fVar68 = (float)param_8[1];
          fVar7 = (float)CONCAT13(extraout_var_05 & bVar57,
                                  CONCAT12(extraout_var_04 & bVar56,
                                           CONCAT11(extraout_var_03 & bVar55,
                                                    extraout_var_02 & bVar54))) * fVar66 +
                  (float)CONCAT13((byte)((uint)uVar15 >> 0x18) & bVar57,
                                  CONCAT12((byte)((uint)uVar15 >> 0x10) & bVar56,
                                           CONCAT11((byte)((uint)uVar15 >> 8) & bVar55,
                                                    (byte)uVar15 & bVar54))) * fVar67 +
                  (float)CONCAT13(bVar25 & bVar57,
                                  CONCAT12(bVar24 & bVar56,CONCAT11(bVar23 & bVar55,bVar22 & bVar54)
                                          )) * fVar68 +
                  (float)CONCAT13(bVar41 & bVar57,
                                  CONCAT12(bVar40 & bVar56,CONCAT11(bVar39 & bVar55,bVar38 & bVar54)
                                          ));
          fVar8 = (float)CONCAT13(extraout_var_13 & bVar65,
                                  CONCAT12(extraout_var_12 & bVar64,
                                           CONCAT11(extraout_var_11 & bVar63,
                                                    extraout_var_10 & bVar62))) * fVar66 +
                  (float)CONCAT13((byte)((uint)uVar17 >> 0x18) & bVar65,
                                  CONCAT12((byte)((uint)uVar17 >> 0x10) & bVar64,
                                           CONCAT11((byte)((uint)uVar17 >> 8) & bVar63,
                                                    (byte)uVar17 & bVar62))) * fVar67 +
                  (float)CONCAT13(bVar33 & bVar65,
                                  CONCAT12(bVar32 & bVar64,CONCAT11(bVar31 & bVar63,bVar30 & bVar62)
                                          )) * fVar68 +
                  (float)CONCAT13(bVar49 & bVar65,
                                  CONCAT12(bVar48 & bVar64,CONCAT11(bVar47 & bVar63,bVar46 & bVar62)
                                          ));
          *param_1 = 1;
          *(ulong *)(param_1 + 0x18) =
               CONCAT17((char)((uint)fVar8 >> 0x18),
                        CONCAT16((char)((uint)fVar8 >> 0x10),
                                 CONCAT15((char)((uint)fVar8 >> 8),
                                          CONCAT14(SUB41(fVar8,0),
                                                   (float)CONCAT13(extraout_var_09 & bVar61,
                                                                   CONCAT12(extraout_var_08 & bVar60
                                                                            ,CONCAT11(
                                                  extraout_var_07 & bVar59,extraout_var_06 & bVar58)
                                                  )) * fVar66 +
                                                  (float)CONCAT13((byte)((uint)uVar16 >> 0x18) &
                                                                  bVar61,CONCAT12((byte)((uint)
                                                  uVar16 >> 0x10) & bVar60,
                                                  CONCAT11((byte)((uint)uVar16 >> 8) & bVar59,
                                                           (byte)uVar16 & bVar58))) * fVar67 +
                                                  (float)CONCAT13(bVar29 & bVar61,
                                                                  CONCAT12(bVar28 & bVar60,
                                                                           CONCAT11(bVar27 & bVar59,
                                                                                    bVar26 & bVar58)
                                                                          )) * fVar68 +
                                                  (float)CONCAT13(bVar45 & bVar61,
                                                                  CONCAT12(bVar44 & bVar60,
                                                                           CONCAT11(bVar43 & bVar59,
                                                                                    bVar42 & bVar58)
                                                                          ))))));
          *(ulong *)(param_1 + 0x10) =
               CONCAT17((char)((uint)fVar7 >> 0x18),
                        CONCAT16((char)((uint)fVar7 >> 0x10),
                                 CONCAT15((char)((uint)fVar7 >> 8),
                                          CONCAT14(SUB41(fVar7,0),
                                                   (float)CONCAT13(extraout_var_01 & bVar53,
                                                                   CONCAT12(extraout_var_00 & bVar52
                                                                            ,CONCAT11(extraout_var &
                                                                                      bVar51,
                                                  extraout_b0 & bVar50))) * fVar66 +
                                                  (float)CONCAT13((byte)((uint)uVar14 >> 0x18) &
                                                                  bVar53,CONCAT12((byte)((uint)
                                                  uVar14 >> 0x10) & bVar52,
                                                  CONCAT11((byte)((uint)uVar14 >> 8) & bVar51,
                                                           (byte)uVar14 & bVar50))) * fVar67 +
                                                  (float)CONCAT13(bVar21 & bVar53,
                                                                  CONCAT12(bVar20 & bVar52,
                                                                           CONCAT11(bVar19 & bVar51,
                                                                                    bVar18 & bVar50)
                                                                          )) * fVar68 +
                                                  (float)CONCAT13(bVar37 & bVar53,
                                                                  CONCAT12(bVar36 & bVar52,
                                                                           CONCAT11(bVar35 & bVar51,
                                                                                    bVar34 & bVar50)
                                                                          ))))));
          goto LAB_01a74158;
        }
        break;
      }
    }
    *param_1 = 0;
LAB_01a74158:
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


