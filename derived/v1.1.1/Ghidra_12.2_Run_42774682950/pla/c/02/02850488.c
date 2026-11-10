/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02850488; name: FUN_02850488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02850488(long *param_1,undefined8 param_2)

{
  unkbyte9 *pVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined *puVar42;
  int iVar43;
  undefined8 uVar44;
  long lVar45;
  long *plVar46;
  byte bVar47;
  byte bVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  long *local_50;
  long local_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar43 = __cxa_guard_acquire(PTR_DAT_04379678), iVar43 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar45 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar45;
  plVar46 = *(long **)(lVar45 + 0xc0);
  if (plVar46 != (long *)0x0) {
    lVar45 = plVar46[0xb];
    if (*(undefined8 **)(lVar45 + 0x18) == (undefined8 *)0x0) goto LAB_02850858;
    if (*(long *)(lVar45 + 0x10) == 0) {
      uVar44 = (**(code **)**(undefined8 **)(lVar45 + 0x18))();
      *(undefined8 *)(lVar45 + 0x10) = uVar44;
    }
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_48 = plVar46[0x2e];
  lStack_40 = plVar46[0x2f];
  if (plVar46 != (long *)0x0) {
    lVar45 = plVar46[0xb];
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      iVar43 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar43 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar43 + -1 == 0) {
      *(undefined8 *)(lVar45 + 0x18) = 0;
      (**(code **)(*plVar46 + 0x20))(plVar46);
    }
  }
  plVar46 = (long *)FUN_009ae864(auStack_38,param_2);
  *param_1 = (long)plVar46;
  if (plVar46 == (long *)0x0) {
    local_50 = (long *)0x0;
LAB_02850550:
    FUN_00da9be0(&local_50,&local_48);
    if (local_50 != (long *)0x0) {
      lVar45 = local_50[0xb];
      piVar2 = (int *)(lVar45 + 0xc);
      do {
        iVar43 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar43 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar45 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    lVar45 = FUN_0134ee74(plVar46,plVar46[1],&DAT_0393acb9);
    pVar1 = (unkbyte9 *)(lVar45 + 0x350);
    uVar44 = *(undefined8 *)(lVar45 + 0x358);
    uVar49 = (undefined1)((ulong)uVar44 >> 8);
    uVar50 = (undefined1)((ulong)uVar44 >> 0x10);
    uVar51 = (undefined1)((ulong)uVar44 >> 0x18);
    uVar52 = (undefined1)((ulong)uVar44 >> 0x20);
    uVar53 = (undefined1)((ulong)uVar44 >> 0x28);
    uVar54 = (undefined1)((ulong)uVar44 >> 0x30);
    uVar55 = (undefined1)((ulong)uVar44 >> 0x38);
    fVar66 = (float)_UNK_03889ac8;
    uVar25 = (ulong)_UNK_03889ac8 >> 0x20;
    fVar62 = (float)_DAT_03889ac0;
    uVar24 = (ulong)_DAT_03889ac0 >> 0x20;
    *(undefined4 *)(lVar45 + 0x230) = 0;
    uVar41 = DAT_0388a880;
    uVar74 = DAT_0388a790;
    uVar73 = DAT_0388a6c8;
    uVar61 = DAT_0388a680;
    uVar40 = DAT_0388a648;
    uVar60 = DAT_0388a580;
    uVar39 = DAT_0388a148;
    uVar38 = DAT_0388a140;
    fVar70 = (float)*(undefined8 *)pVar1;
    fVar62 = fVar70 * fVar62;
    fVar72 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar64 = fVar72 * (float)uVar24;
    fVar66 = (float)uVar44 * fVar66;
    fVar68 = (float)((ulong)uVar44 >> 0x20) * (float)uVar25;
    auVar14._8_8_ = DAT_0388a148;
    auVar14._0_8_ = DAT_0388a140;
    uVar44 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
    fVar57 = (float)((ulong)uVar44 >> 0x20);
    auVar15._8_8_ = DAT_0388a148;
    auVar15._0_8_ = DAT_0388a140;
    uVar71 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
    auVar17._4_4_ = fVar64;
    auVar17._0_4_ = fVar62;
    auVar17._8_4_ = fVar66;
    auVar17._12_4_ = fVar68;
    uVar16 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
    auVar18._4_4_ = fVar64;
    auVar18._0_4_ = fVar62;
    auVar18._8_4_ = fVar66;
    auVar18._12_4_ = fVar68;
    uVar75 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6c8);
    fVar78 = (float)DAT_0388a7e8;
    fVar79 = (float)((ulong)DAT_0388a7e8 >> 0x20);
    fVar59 = (float)((ulong)uVar71 >> 0x20);
    auVar19._4_4_ = fVar64;
    auVar19._0_4_ = fVar62;
    auVar19._8_4_ = fVar66;
    auVar19._12_4_ = fVar68;
    uVar76 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
    auVar20._4_4_ = fVar64;
    auVar20._0_4_ = fVar62;
    auVar20._8_4_ = fVar66;
    auVar20._12_4_ = fVar68;
    uVar83 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a790);
    auVar21._4_4_ = fVar64;
    auVar21._0_4_ = fVar62;
    auVar21._8_4_ = fVar66;
    auVar21._12_4_ = fVar68;
    uVar82 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
    auVar22._4_4_ = fVar64;
    auVar22._0_4_ = fVar62;
    auVar22._8_4_ = fVar62;
    auVar22._12_4_ = fVar64;
    uVar58 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a648);
    auVar23._8_8_ = DAT_0388a148;
    auVar23._0_8_ = DAT_0388a140;
    uVar80 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
    fVar81 = (float)((ulong)uVar80 >> 0x20);
    fVar67 = (float)_UNK_03889ad8;
    fVar69 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar63 = (float)_DAT_03889ad0;
    fVar65 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    *(undefined4 *)(lVar45 + 0x240) = 0x3fe38e39;
    auVar5[9] = uVar49;
    auVar5._0_9_ = *pVar1;
    auVar5[10] = uVar50;
    auVar5[0xb] = uVar51;
    auVar5[0xc] = uVar52;
    auVar5[0xd] = uVar53;
    auVar5[0xe] = uVar54;
    auVar5[0xf] = uVar55;
    uVar77 = a64_TBL(ZEXT816(0),auVar5,uVar60);
    fVar56 = (fVar62 * (float)uVar44 + fVar63 * (float)uVar16 * fVar78 +
             fVar63 * (float)uVar80 * (float)uVar76) - (float)uVar71 * (float)uVar82;
    fVar64 = (fVar64 * fVar57 + fVar65 * (float)((ulong)uVar16 >> 0x20) * fVar79 +
             fVar65 * fVar81 * (float)((ulong)uVar76 >> 0x20)) -
             fVar59 * (float)((ulong)uVar82 >> 0x20);
    fVar66 = (fVar66 * (float)uVar44 + fVar67 * (float)uVar71 * (float)uVar75 +
             fVar67 * (float)uVar58 * fVar78) - (float)uVar80 * (float)uVar83;
    fVar68 = (fVar68 * fVar57 + fVar69 * fVar59 * (float)((ulong)uVar75 >> 0x20) +
             fVar69 * (float)((ulong)uVar58 >> 0x20) * fVar79) -
             fVar81 * (float)((ulong)uVar83 >> 0x20);
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    auVar6[9] = uVar49;
    auVar6._0_9_ = *pVar1;
    auVar6[10] = uVar50;
    auVar6[0xb] = uVar51;
    auVar6[0xc] = uVar52;
    auVar6[0xd] = uVar53;
    auVar6[0xe] = uVar54;
    auVar6[0xf] = uVar55;
    uVar71 = a64_TBL(ZEXT816(0),auVar6,uVar61);
    auVar8._4_4_ = fVar64;
    auVar8._0_4_ = fVar56;
    auVar8._8_4_ = fVar66;
    auVar8._12_4_ = fVar68;
    uVar60 = a64_TBL(ZEXT816(0),auVar8,uVar60);
    auVar9._4_4_ = fVar64;
    auVar9._0_4_ = fVar56;
    auVar9._8_4_ = fVar66;
    auVar9._12_4_ = fVar68;
    uVar73 = a64_TBL(ZEXT816(0),auVar9,uVar73);
    fVar79 = (float)((ulong)uVar71 >> 0x20);
    auVar10._4_4_ = fVar64;
    auVar10._0_4_ = fVar56;
    auVar10._8_4_ = fVar66;
    auVar10._12_4_ = fVar68;
    uVar58 = a64_TBL(ZEXT816(0),auVar10,uVar61);
    auVar11._4_4_ = fVar64;
    auVar11._0_4_ = fVar56;
    auVar11._8_4_ = fVar66;
    auVar11._12_4_ = fVar68;
    uVar74 = a64_TBL(ZEXT816(0),auVar11,uVar74);
    auVar12._4_4_ = fVar64;
    auVar12._0_4_ = fVar56;
    auVar12._8_4_ = fVar66;
    auVar12._12_4_ = fVar68;
    uVar61 = a64_TBL(ZEXT816(0),auVar12,uVar41);
    auVar7[9] = uVar49;
    auVar7._0_9_ = *pVar1;
    auVar7[10] = uVar50;
    auVar7[0xb] = uVar51;
    auVar7[0xc] = uVar52;
    auVar7[0xd] = uVar53;
    auVar7[0xe] = uVar54;
    auVar7[0xf] = uVar55;
    uVar16 = a64_TBL(ZEXT816(0),auVar7,uVar41);
    fVar59 = (float)((ulong)uVar16 >> 0x20);
    auVar13._4_4_ = fVar64;
    auVar13._0_4_ = fVar56;
    auVar13._8_4_ = fVar56;
    auVar13._12_4_ = fVar64;
    uVar44 = a64_TBL(ZEXT816(0),auVar13,uVar40);
    fVar62 = fVar70 * (float)uVar44;
    fVar57 = fVar72 * (float)((ulong)uVar44 >> 0x20);
    bVar48 = (byte)_UNK_038897c8;
    uVar31 = (ulong)_UNK_038897c8 >> 8;
    uVar32 = (ulong)_UNK_038897c8 >> 0x10;
    uVar33 = (ulong)_UNK_038897c8 >> 0x18;
    uVar34 = (ulong)_UNK_038897c8 >> 0x20;
    uVar35 = (ulong)_UNK_038897c8 >> 0x28;
    uVar36 = (ulong)_UNK_038897c8 >> 0x30;
    uVar37 = (ulong)_UNK_038897c8 >> 0x38;
    bVar47 = (byte)_DAT_038897c0;
    uVar24 = (ulong)_DAT_038897c0 >> 8;
    uVar25 = (ulong)_DAT_038897c0 >> 0x10;
    uVar26 = (ulong)_DAT_038897c0 >> 0x18;
    uVar27 = (ulong)_DAT_038897c0 >> 0x20;
    uVar28 = (ulong)_DAT_038897c0 >> 0x28;
    uVar29 = (ulong)_DAT_038897c0 >> 0x30;
    uVar30 = (ulong)_DAT_038897c0 >> 0x38;
    *(ulong *)(lVar45 + 0x380) = *(ulong *)(lVar45 + 0x380) & 0xffffffffffffffe0 | 5;
    fVar70 = ((float)uVar77 * fVar56 + fVar63 * fVar70 * (float)uVar60 +
             fVar63 * (float)uVar16 * (float)uVar58) - (float)uVar71 * (float)uVar61;
    fVar72 = (fVar78 * fVar64 + fVar65 * fVar72 * (float)((ulong)uVar60 >> 0x20) +
             fVar65 * fVar59 * (float)((ulong)uVar58 >> 0x20)) -
             fVar79 * (float)((ulong)uVar61 >> 0x20);
    fVar56 = ((float)uVar77 * fVar66 + fVar67 * (float)uVar71 * (float)uVar73 + fVar67 * fVar62) -
             (float)uVar16 * (float)uVar74;
    fVar62 = (fVar78 * fVar68 + fVar69 * fVar79 * (float)((ulong)uVar73 >> 0x20) +
             fVar69 * (float)(CONCAT17((char)((uint)fVar57 >> 0x18),
                                       CONCAT16((char)((uint)fVar57 >> 0x10),
                                                CONCAT15((char)((uint)fVar57 >> 8),
                                                         CONCAT14(SUB41(fVar57,0),fVar62)))) >> 0x20
                             )) - fVar59 * (float)((ulong)uVar74 >> 0x20);
    *(ulong *)(lVar45 + 0x318) =
         CONCAT17((byte)((uint)fVar62 >> 0x18) & (byte)uVar37,
                  CONCAT16((byte)((uint)fVar62 >> 0x10) & (byte)uVar36,
                           CONCAT15((byte)((uint)fVar62 >> 8) & (byte)uVar35,
                                    CONCAT14(SUB41(fVar62,0) & (byte)uVar34,
                                             CONCAT13((byte)((uint)fVar56 >> 0x18) & (byte)uVar33,
                                                      CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                                               (byte)uVar32,
                                                               CONCAT11((byte)((uint)fVar56 >> 8) &
                                                                        (byte)uVar31,
                                                                        SUB41(fVar56,0) & bVar48))))
                                   )));
    *(ulong *)(lVar45 + 0x310) =
         CONCAT17((byte)((uint)fVar72 >> 0x18) & (byte)uVar30,
                  CONCAT16((byte)((uint)fVar72 >> 0x10) & (byte)uVar29,
                           CONCAT15((byte)((uint)fVar72 >> 8) & (byte)uVar28,
                                    CONCAT14(SUB41(fVar72,0) & (byte)uVar27,
                                             CONCAT13((byte)((uint)fVar70 >> 0x18) & (byte)uVar26,
                                                      CONCAT12((byte)((uint)fVar70 >> 0x10) &
                                                               (byte)uVar25,
                                                               CONCAT11((byte)((uint)fVar70 >> 8) &
                                                                        (byte)uVar24,
                                                                        SUB41(fVar70,0) & bVar47))))
                                   )));
    (**(code **)(*(long *)(lVar45 + 0x208) + 0x10))(lVar45 + 0x208);
    (**(code **)(*(long *)(lVar45 + 0x208) + 0x18))(lVar45 + 0x208);
    uVar44 = _DAT_03888d20;
    *(undefined8 *)(lVar45 + 0x308) = _UNK_03888d28;
    *(undefined8 *)(lVar45 + 0x300) = uVar44;
    *(undefined8 *)(lVar45 + 0x318) = uVar39;
    *(undefined8 *)(lVar45 + 0x310) = uVar38;
    uVar16 = _UNK_03889c18;
    uVar44 = _DAT_03889c10;
    *(undefined8 *)(lVar45 + 0x328) = 0;
    *(undefined8 *)(lVar45 + 800) = 0;
    *(undefined8 *)(lVar45 + 0x338) = uVar16;
    *(undefined8 *)(lVar45 + 0x330) = uVar44;
    puVar42 = PTR_FloatPi_04372cf0;
    *(undefined8 *)(lVar45 + 0x234) = 0x477fff003f800000;
    *(float *)(lVar45 + 0x23c) = (*(float *)puVar42 / *(float *)PTR_FloatDegree180_04372ce0) * 30.0;
    return;
  }
  lVar45 = plVar46[0xb];
  if (*(undefined8 **)(lVar45 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar45 + 0x10) == 0) {
      uVar44 = (**(code **)**(undefined8 **)(lVar45 + 0x18))();
      *(undefined8 *)(lVar45 + 0x10) = uVar44;
    }
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar45 = plVar46[0xb];
    local_50 = plVar46;
    if (*(undefined8 **)(lVar45 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar45 + 0x10) == 0) {
        uVar44 = (**(code **)**(undefined8 **)(lVar45 + 0x18))();
        *(undefined8 *)(lVar45 + 0x10) = uVar44;
      }
      piVar2 = (int *)(lVar45 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_02850550;
    }
  }
LAB_02850858:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


