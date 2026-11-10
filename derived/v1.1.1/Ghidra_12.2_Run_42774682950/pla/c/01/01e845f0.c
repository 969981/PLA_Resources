/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e845f0; name: FUN_01e845f0
 */


void FUN_01e845f0(float param_1,float param_2,float param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6,uint param_7,int param_8,long param_9,byte param_10,
                 long *param_11)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
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
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int *piVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  long *plVar27;
  byte bVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((param_10 & 1) == 0) {
    fVar38 = (float)param_5[1];
    fVar40 = (float)((ulong)param_5[1] >> 0x20);
    fVar30 = (float)*param_5;
    fVar36 = (float)((ulong)*param_5 >> 0x20);
    fVar33 = (float)param_6[1];
    fVar34 = (float)((ulong)param_6[1] >> 0x20);
    fVar31 = (float)*param_6;
    fVar32 = (float)((ulong)*param_6 >> 0x20);
    bVar16 = fVar31 < fVar30 + param_1;
    bVar17 = fVar38 + param_2 <= fVar33;
    uVar1 = *(uint *)(param_4 + 0xf0);
    if ((!bVar16 || fVar30 > fVar31) || (bVar17 || fVar33 < fVar38)) {
      if (bVar16 && fVar30 <= fVar31) {
        fVar35 = ABS((fVar33 - fVar38) - param_2);
        if (ABS(fVar33 - fVar38) <= fVar35) {
          fVar35 = ABS(fVar33 - fVar38);
        }
      }
      else {
        if (bVar17 || fVar33 < fVar38) {
          fVar35 = (fVar30 - fVar31) * (fVar30 - fVar31);
          fVar37 = (fVar36 - fVar32) * (fVar36 - fVar32);
          fVar39 = (fVar38 - fVar33) * (fVar38 - fVar33);
          fVar41 = (fVar40 - fVar34) * (fVar40 - fVar34);
          auVar47._4_4_ = fVar37;
          auVar47._0_4_ = fVar35;
          auVar47._8_4_ = fVar39;
          auVar47._12_4_ = fVar41;
          auVar8._4_4_ = fVar37;
          auVar8._0_4_ = fVar35;
          auVar8._8_4_ = fVar39;
          auVar8._12_4_ = fVar41;
          auVar45 = NEON_ext(auVar47,auVar8,8,1);
          fVar39 = (fVar30 + 0.0) - fVar31;
          fVar41 = (fVar36 + 0.0) - fVar32;
          fVar42 = (param_2 + fVar38) - fVar33;
          fVar43 = (fVar40 + 0.0) - fVar34;
          fVar44 = (param_1 + fVar30) - fVar31;
          fVar49 = (fVar36 + 0.0) - fVar32;
          fVar50 = (fVar38 + 0.0) - fVar33;
          fVar51 = (fVar40 + 0.0) - fVar34;
          fVar35 = auVar45._0_4_ + fVar35 + auVar45._4_4_ + fVar37;
          auVar46._0_4_ = fVar44 * fVar44;
          auVar46._4_4_ = fVar49 * fVar49;
          auVar46._8_4_ = fVar50 * fVar50;
          auVar46._12_4_ = fVar51 * fVar51;
          auVar45 = NEON_ext(auVar46,auVar46,8,1);
          fVar31 = (param_1 + fVar30 + 0.0) - fVar31;
          fVar32 = (fVar36 + 0.0 + 0.0) - fVar32;
          fVar33 = (param_2 + fVar38 + 0.0) - fVar33;
          fVar34 = (fVar40 + 0.0 + 0.0) - fVar34;
          auVar52._0_4_ = fVar39 * fVar39;
          auVar52._4_4_ = fVar41 * fVar41;
          auVar52._8_4_ = fVar42 * fVar42;
          auVar52._12_4_ = fVar43 * fVar43;
          fVar30 = auVar45._0_4_ + auVar46._0_4_ + auVar45._4_4_ + auVar46._4_4_;
          fVar31 = fVar31 * fVar31;
          fVar32 = fVar32 * fVar32;
          fVar33 = fVar33 * fVar33;
          fVar34 = fVar34 * fVar34;
          auVar47 = NEON_ext(auVar52,auVar52,8,1);
          auVar45._4_4_ = fVar32;
          auVar45._0_4_ = fVar31;
          auVar45._8_4_ = fVar33;
          auVar45._12_4_ = fVar34;
          auVar55._4_4_ = fVar32;
          auVar55._0_4_ = fVar31;
          auVar55._8_4_ = fVar33;
          auVar55._12_4_ = fVar34;
          auVar45 = NEON_ext(auVar45,auVar55,8,1);
          fVar33 = auVar47._0_4_ + auVar52._0_4_ + auVar47._4_4_ + auVar52._4_4_;
          fVar31 = auVar45._0_4_ + fVar31 + auVar45._4_4_ + fVar32;
          if (param_7 < uVar1) {
            fVar32 = fVar30;
            if (fVar30 <= fVar35) {
              fVar32 = fVar35;
            }
            fVar34 = fVar33;
            if (fVar33 <= fVar32) {
              fVar34 = fVar32;
            }
            fVar32 = fVar31;
            if (fVar31 <= fVar34) {
              fVar32 = fVar34;
            }
            bVar16 = fVar32 <= param_3 * param_3;
          }
          else {
            bVar16 = false;
          }
          if (fVar35 <= fVar30) {
            fVar30 = fVar35;
          }
          if (fVar30 <= fVar33) {
            fVar33 = fVar30;
          }
          if (fVar33 <= fVar31) {
            fVar31 = fVar33;
          }
          if (param_3 * param_3 < fVar31) {
            return;
          }
          goto LAB_01e84738;
        }
        fVar35 = ABS((fVar31 - fVar30) - param_1);
        if (ABS(fVar31 - fVar30) <= fVar35) {
          fVar35 = ABS(fVar31 - fVar30);
        }
      }
      if ((param_7 < uVar1) && (fVar35 <= param_3)) {
        fVar43 = (param_1 + fVar30) - fVar31;
        fVar44 = (fVar36 + 0.0) - fVar32;
        fVar49 = (fVar38 + 0.0) - fVar33;
        fVar50 = (fVar40 + 0.0) - fVar34;
        fVar37 = (fVar30 - fVar31) * (fVar30 - fVar31);
        fVar39 = (fVar36 - fVar32) * (fVar36 - fVar32);
        fVar41 = (fVar38 - fVar33) * (fVar38 - fVar33);
        fVar42 = (fVar40 - fVar34) * (fVar40 - fVar34);
        auVar9._4_4_ = fVar39;
        auVar9._0_4_ = fVar37;
        auVar9._8_4_ = fVar41;
        auVar9._12_4_ = fVar42;
        auVar10._4_4_ = fVar39;
        auVar10._0_4_ = fVar37;
        auVar10._8_4_ = fVar41;
        auVar10._12_4_ = fVar42;
        auVar45 = NEON_ext(auVar9,auVar10,8,1);
        auVar54._0_4_ = fVar43 * fVar43;
        auVar54._4_4_ = fVar44 * fVar44;
        auVar54._8_4_ = fVar49 * fVar49;
        auVar54._12_4_ = fVar50 * fVar50;
        auVar55 = NEON_ext(auVar54,auVar54,8,1);
        fVar41 = (fVar30 + 0.0) - fVar31;
        fVar42 = (fVar36 + 0.0) - fVar32;
        fVar43 = (param_2 + fVar38) - fVar33;
        fVar44 = (fVar40 + 0.0) - fVar34;
        auVar48._0_4_ = fVar41 * fVar41;
        auVar48._4_4_ = fVar42 * fVar42;
        auVar48._8_4_ = fVar43 * fVar43;
        auVar48._12_4_ = fVar44 * fVar44;
        auVar47 = NEON_ext(auVar48,auVar48,8,1);
        fVar31 = (param_1 + fVar30 + 0.0) - fVar31;
        fVar32 = (fVar36 + 0.0 + 0.0) - fVar32;
        fVar33 = (param_2 + fVar38 + 0.0) - fVar33;
        fVar34 = (fVar40 + 0.0 + 0.0) - fVar34;
        fVar30 = auVar45._0_4_ + fVar37 + auVar45._4_4_ + fVar39;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        auVar4._4_4_ = fVar32;
        auVar4._0_4_ = fVar31;
        auVar4._8_4_ = fVar33;
        auVar4._12_4_ = fVar34;
        auVar5._4_4_ = fVar32;
        auVar5._0_4_ = fVar31;
        auVar5._8_4_ = fVar33;
        auVar5._12_4_ = fVar34;
        auVar45 = NEON_ext(auVar4,auVar5,8,1);
        fVar34 = auVar55._0_4_ + auVar54._0_4_ + auVar55._4_4_ + auVar54._4_4_;
        fVar33 = auVar47._0_4_ + auVar48._0_4_ + auVar47._4_4_ + auVar48._4_4_;
        fVar31 = auVar45._0_4_ + fVar31 + auVar45._4_4_ + fVar32;
        if (fVar34 <= fVar30) {
          fVar34 = fVar30;
        }
        if (fVar33 <= fVar34) {
          fVar33 = fVar34;
        }
        if (fVar31 <= fVar33) {
          fVar31 = fVar33;
        }
        bVar16 = fVar31 <= param_3 * param_3;
        if (param_3 < fVar35) {
          return;
        }
        goto LAB_01e84738;
      }
      if (param_3 < fVar35) {
        return;
      }
    }
    else if (param_7 < uVar1) {
      if (param_1 < param_3) {
        bVar16 = true;
      }
      else {
        fVar42 = (param_1 + fVar30) - fVar31;
        fVar43 = (fVar36 + 0.0) - fVar32;
        fVar44 = (fVar38 + 0.0) - fVar33;
        fVar49 = (fVar40 + 0.0) - fVar34;
        fVar35 = (fVar30 - fVar31) * (fVar30 - fVar31);
        fVar37 = (fVar36 - fVar32) * (fVar36 - fVar32);
        fVar39 = (fVar38 - fVar33) * (fVar38 - fVar33);
        fVar41 = (fVar40 - fVar34) * (fVar40 - fVar34);
        auVar11._4_4_ = fVar37;
        auVar11._0_4_ = fVar35;
        auVar11._8_4_ = fVar39;
        auVar11._12_4_ = fVar41;
        auVar12._4_4_ = fVar37;
        auVar12._0_4_ = fVar35;
        auVar12._8_4_ = fVar39;
        auVar12._12_4_ = fVar41;
        auVar45 = NEON_ext(auVar11,auVar12,8,1);
        auVar53._0_4_ = fVar42 * fVar42;
        auVar53._4_4_ = fVar43 * fVar43;
        auVar53._8_4_ = fVar44 * fVar44;
        auVar53._12_4_ = fVar49 * fVar49;
        auVar55 = NEON_ext(auVar53,auVar53,8,1);
        fVar39 = (fVar30 + 0.0) - fVar31;
        fVar41 = (fVar36 + 0.0) - fVar32;
        fVar42 = (param_2 + fVar38) - fVar33;
        fVar43 = (fVar40 + 0.0) - fVar34;
        fVar39 = fVar39 * fVar39;
        fVar41 = fVar41 * fVar41;
        fVar42 = fVar42 * fVar42;
        fVar43 = fVar43 * fVar43;
        auVar13._4_4_ = fVar41;
        auVar13._0_4_ = fVar39;
        auVar13._8_4_ = fVar42;
        auVar13._12_4_ = fVar43;
        auVar14._4_4_ = fVar41;
        auVar14._0_4_ = fVar39;
        auVar14._8_4_ = fVar42;
        auVar14._12_4_ = fVar43;
        auVar47 = NEON_ext(auVar13,auVar14,8,1);
        fVar31 = (param_1 + fVar30 + 0.0) - fVar31;
        fVar32 = (fVar36 + 0.0 + 0.0) - fVar32;
        fVar33 = (param_2 + fVar38 + 0.0) - fVar33;
        fVar34 = (fVar40 + 0.0 + 0.0) - fVar34;
        fVar30 = auVar45._0_4_ + fVar35 + auVar45._4_4_ + fVar37;
        fVar31 = fVar31 * fVar31;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        auVar6._4_4_ = fVar32;
        auVar6._0_4_ = fVar31;
        auVar6._8_4_ = fVar33;
        auVar6._12_4_ = fVar34;
        auVar7._4_4_ = fVar32;
        auVar7._0_4_ = fVar31;
        auVar7._8_4_ = fVar33;
        auVar7._12_4_ = fVar34;
        auVar45 = NEON_ext(auVar6,auVar7,8,1);
        fVar34 = auVar55._0_4_ + auVar53._0_4_ + auVar55._4_4_ + auVar53._4_4_;
        fVar33 = auVar47._0_4_ + fVar39 + auVar47._4_4_ + fVar41;
        fVar31 = auVar45._0_4_ + fVar31 + auVar45._4_4_ + fVar32;
        if (fVar34 <= fVar30) {
          fVar34 = fVar30;
        }
        if (fVar33 <= fVar34) {
          fVar33 = fVar34;
        }
        if (fVar31 <= fVar33) {
          fVar31 = fVar33;
        }
        bVar16 = fVar31 <= param_3 * param_3;
      }
      goto LAB_01e84738;
    }
  }
  bVar16 = false;
LAB_01e84738:
  iVar29 = (*(int *)(param_4 + (ulong)param_7 * 4 + 0xb0) - 1U) / 3 + param_8;
  if (((-1 < iVar29) &&
      (lVar21 = *(long *)(*(long *)(param_4 + 0x78) + (long)iVar29 * 8), lVar21 != 0)) &&
     (plVar27 = *(long **)(lVar21 + 0x68), plVar27 != (long *)0x0)) {
    lVar21 = plVar27[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar18;
    }
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar17) {
        *piVar20 = *piVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar21 = plVar27[0xb];
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      iVar29 = *piVar20;
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar17) {
        *piVar20 = iVar29 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar29 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar27 + 0x20))(plVar27);
    }
    pbVar22 = PTR_DAT_0437a250;
    do {
      while (lVar21 = plVar27[0xe], lVar21 != 0) {
        lVar23 = *param_11;
        if (*(int *)(lVar21 + 0xc) == 0) break;
        piVar20 = (int *)(lVar21 + 0xc);
        iVar29 = *(int *)(lVar21 + 0xc);
        while( true ) {
          plVar26 = *(long **)(lVar21 + 0x10);
          if (((*pbVar22 & 1) == 0) && (iVar25 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar25 != 0)
             ) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar25 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar25 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar25 != 0)) {
                uVar18 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar18;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_0437a258 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a250);
          }
          while( true ) {
            pbVar22 = PTR_DAT_0437a250;
            if (plVar26 == (long *)0x0) goto LAB_01e84824;
            if (plVar26 == (long *)PTR_DAT_0437a258) break;
            plVar26 = (long *)*plVar26;
          }
          iVar25 = *piVar20;
          if (iVar25 == iVar29) break;
          ClearExclusiveLocal();
LAB_01e84c18:
          pbVar22 = PTR_DAT_0437a250;
          iVar29 = iVar25;
          if (iVar25 == 0) goto LAB_01e84824;
        }
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar17) {
          *piVar20 = iVar29 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01e84c18;
        lVar21 = *(long *)(lVar21 + 0x18);
        pbVar22 = PTR_DAT_0437a250;
        if (lVar21 == 0) break;
        plVar26 = (long *)(lVar21 + -0x50);
        if (*(char *)(lVar21 + 0x1b0) == '\0') {
          *(undefined1 *)(param_11[1] + 0x141) = *(undefined1 *)(lVar21 + 0x1b2);
          puVar19 = (undefined8 *)FUN_0183b964(plVar26);
          fVar31 = (float)*puVar19 - (float)*(undefined8 *)(lVar23 + 0x110);
          fVar32 = (float)puVar19[1] - (float)*(undefined8 *)(lVar23 + 0x118);
          local_90 = CONCAT44(local_90._4_4_,fVar32 * fVar32 + fVar31 * fVar31 + 0.0);
          FUN_0183b958(plVar26,&local_90);
          piVar20 = (int *)FUN_0183d4a8(plVar26);
          iVar29 = *piVar20;
          if (iVar29 < 1) {
            iVar24 = (int)*(float *)(lVar23 + 0x6c);
            iVar29 = (int)*(float *)(lVar23 + 0x68);
            iVar25 = (int)*(float *)(lVar23 + 0x70);
          }
          else {
            iVar25 = piVar20[1];
            iVar24 = piVar20[2];
          }
          fVar31 = (float)FUN_0183d12c(plVar26);
          if ((float)local_90 <= (fVar31 + (float)iVar29) * (fVar31 + (float)iVar29)) {
            *(int *)(lVar23 + 0x160) = *(int *)(lVar23 + 0x160) + 1;
            FUN_01836bfc(plVar26,param_11[1]);
            if (*(char *)(param_11[1] + 0x141) == '\0') {
              fVar31 = (float)FUN_0183d12c(plVar26);
              if ((fVar31 + (float)iVar25) * (fVar31 + (float)iVar25) < (float)local_90) {
                FUN_01838390(plVar26);
              }
              else {
                FUN_0183740c(plVar26,param_11[1]);
              }
            }
          }
          fVar31 = (float)FUN_0183d12c(plVar26);
          fVar31 = fVar31 + (float)iVar24;
          if (fVar31 * fVar31 <= (float)local_90) {
            bVar17 = false;
          }
          else {
            *(int *)(lVar23 + 0x164) = *(int *)(lVar23 + 0x164) + 1;
            FUN_01839dec(plVar26);
            if (*(char *)(param_11[1] + 0x141) == '\0') {
              if ((fVar31 + -6.0) * (fVar31 + -6.0) <= (float)local_90) {
                FUN_01838628(plVar26);
              }
              else {
                FUN_018383d4();
              }
            }
            bVar17 = true;
          }
          bVar28 = 0;
        }
        else {
          bVar17 = true;
          bVar28 = 1;
        }
        lVar21 = *(long *)(lVar21 + 8);
        piVar20 = (int *)(lVar21 + 0xc);
        do {
          iVar29 = *piVar20;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar3) {
            *piVar20 = iVar29 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar29 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar26 + 0x20))(plVar26);
        }
        pbVar22 = PTR_DAT_0437a250;
        if ((bool)(!bVar17 | bVar28)) break;
        local_90 = 0;
        if ((undefined8 *)plVar27[0xe] != (undefined8 *)0x0) {
          local_90 = *(undefined8 *)plVar27[0xe];
        }
        puVar19 = *(undefined8 **)(param_9 + 8);
        if (puVar19 < *(undefined8 **)(param_9 + 0x10)) {
          uVar18 = *(undefined8 *)(param_9 + 0x18);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar29 = __cxa_guard_acquire(PTR_DAT_04379520), puVar15 = PTR_DAT_04379528,
             iVar29 != 0)) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar21 == 0) {
            *puVar19 = local_90;
          }
          else {
            if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar18;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
            *puVar19 = local_90;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
          }
          *(long *)(param_9 + 8) = *(long *)(param_9 + 8) + 8;
        }
        else {
          FUN_01e8512c(param_9,&local_90);
        }
        plVar27 = (long *)plVar27[0x11];
        pbVar22 = PTR_DAT_0437a250;
        if (plVar27 == (long *)0x0) goto LAB_01e8482c;
      }
LAB_01e84824:
      plVar27 = (long *)plVar27[0x11];
    } while (plVar27 != (long *)0x0);
  }
LAB_01e8482c:
  if (param_7 < *(uint *)(param_4 + 0xf0)) {
    param_1 = param_1 * 0.5;
    param_2 = param_2 * 0.5;
    uStack_88 = param_5[1];
    local_90 = *param_5;
    fVar36 = (float)((ulong)uStack_88 >> 0x20);
    fVar30 = (float)((ulong)local_90 >> 0x20);
    fVar31 = (float)local_90 + 0.0;
    fVar32 = fVar30 + 0.0;
    fVar33 = param_2 + (float)uStack_88;
    fVar34 = fVar36 + 0.0;
    iVar29 = param_7 + 1;
    uStack_a8 = CONCAT44(fVar34,fVar33);
    local_b0 = CONCAT44(fVar32,fVar31);
    uStack_98 = CONCAT44(fVar36 + 0.0,(float)uStack_88 + 0.0);
    uStack_a0 = CONCAT44(fVar30 + 0.0,param_1 + (float)local_90);
    uStack_b8 = CONCAT44(fVar34 + 0.0,fVar33 + 0.0);
    local_c0 = CONCAT44(fVar32 + 0.0,param_1 + fVar31);
    bVar28 = bVar16 | param_10 & 1;
    FUN_01e845f0(param_1,param_2,param_3,param_4,&local_90,param_6,iVar29,param_8 << 2,param_9,
                 bVar28,param_11);
    FUN_01e845f0(param_1,param_2,param_3,param_4,&uStack_a0,param_6,iVar29,param_8 << 2 | 1,param_9,
                 bVar28,param_11);
    FUN_01e845f0(param_1,param_2,param_3,param_4,&local_b0,param_6,iVar29,param_8 << 2 | 2,param_9,
                 bVar28,param_11);
    FUN_01e845f0(param_1,param_2,param_3,param_4,&local_c0,param_6,iVar29,param_8 << 2 | 3,param_9,
                 bVar28,param_11);
  }
  return;
}


