/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1e0b4; name: FUN_01f1e0b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f1e0b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  float extraout_s0;
  double dVar22;
  undefined8 extraout_d0;
  double dVar23;
  float extraout_var;
  undefined1 auVar24 [16];
  undefined8 extraout_var_00;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long local_98;
  
  puVar8 = PTR_DAT_04379d88;
  puVar7 = PTR_DAT_04379d80;
  lVar16 = *(long *)(param_1 + 0x88);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar10 = *(int *)(lVar16 + 0xc);
    do {
      plVar20 = *(long **)(lVar16 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar15;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) {
          return;
        }
        if (plVar20 == (long *)puVar8) break;
        plVar20 = (long *)*plVar20;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar20 = (long *)(lVar16 + -0x50);
          if ((((*(char *)(param_1 + 0x1009b8) != '\0') || (*(char *)(param_1 + 0x6118) == '\0')) ||
              (*(char *)(param_1 + 0x5e651) != '\0')) || (*(char *)(param_1 + 0x1008c8) == '\0'))
          goto LAB_01f1e36c;
          FUN_025acc5c(plVar20,&local_c0,&local_e0,&local_98);
          auVar24 = FUN_025acf84(plVar20);
          puVar9 = PTR_PTR_0437a4c8;
          puVar6 = PTR_FloatPi_04372cf0;
          puVar5 = PTR_SinCosSampleTable_04372ce8;
          puVar4 = PTR_AngleIndexHalfRound_04372cd8;
          dVar30 = auVar24._0_8_;
          if ((int)local_c0 - 5U < 0x10) {
            auVar24 = FUN_025ac72c(0x10,0,0);
            dVar22 = (double)FUN_025ac72c(5,0,0);
            if (auVar24._0_8_ <= 0.0) {
              dVar30 = 0.0;
            }
            else {
              dVar30 = (dVar30 - dVar22) / auVar24._0_8_;
            }
            fVar28 = *(float *)puVar6;
            fVar25 = (float)NEON_ucvtf(*(undefined4 *)puVar4);
            fVar25 = (fVar25 / fVar28) * (float)(dVar30 * 3.1415927410125732);
            fVar31 = *(float *)(param_1 + 0x1008cc);
            fVar32 = *(float *)(param_1 + 0x1008d0);
            fVar29 = *(float *)(param_1 + 0x1008d4);
            fVar33 = *(float *)(param_1 + 0x1008d8);
          }
          else {
            auVar24 = FUN_025ac72c(8,0,0);
            dVar22 = auVar24._0_8_;
            if ((int)local_c0 < 5) {
              dVar23 = (double)FUN_025ac72c(3,0,0);
              dVar30 = dVar30 + dVar23;
              if (0.0 < dVar22) goto LAB_01f1e3dc;
LAB_01f1e434:
              dVar30 = 0.0;
            }
            else {
              dVar23 = (double)FUN_025ac72c(0x15,0,0);
              dVar30 = dVar30 - dVar23;
              if (dVar22 <= 0.0) goto LAB_01f1e434;
LAB_01f1e3dc:
              dVar30 = dVar30 / dVar22;
            }
            fVar28 = *(float *)puVar6;
            fVar25 = (float)NEON_ucvtf(*(undefined4 *)puVar4);
            fVar25 = (fVar25 / fVar28) * (float)(dVar30 * 3.1415927410125732);
            fVar31 = *(float *)(param_1 + 0x1008e8);
            fVar32 = *(float *)(param_1 + 0x1008ec);
            fVar29 = *(float *)(param_1 + 0x1008f0);
            fVar33 = *(float *)(param_1 + 0x1008f4);
          }
          uVar13 = (ulong)(long)fVar25 >> 0x18 & 0xff;
          fVar27 = *(float *)(puVar5 + uVar13 * 0x10 + 0xc);
          fVar26 = *(float *)(puVar5 + uVar13 * 0x10 + 4);
          fVar25 = fVar27 * (float)((uint)(long)fVar25 & 0xffffff) * 5.9604645e-08;
          fVar25 = (float)(**(code **)puVar9)(fVar26 + fVar25,fVar26,fVar27,fVar25);
          fVar26 = (float)(**(code **)puVar9)();
          fVar28 = fVar28 / *(float *)PTR_FloatDegree180_04372ce0;
          FUN_009a7ff4((fVar29 + (fVar33 - fVar29) * fVar26) * 180.0 * fVar28,
                       (fVar31 + (fVar32 - fVar31) * fVar25) * 90.0 * fVar28,0);
          *(undefined8 *)(param_1 + 0x100918) = extraout_var_00;
          *(undefined8 *)(param_1 + 0x100910) = extraout_d0;
          auVar24 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x100920),ZEXT816(0),8,1);
          auVar24 = NEON_ext(auVar24,auVar24,8,1);
          *(long *)(param_1 + 0x100928) = auVar24._8_8_;
          *(long *)(param_1 + 0x100920) = auVar24._0_8_;
          lVar17 = *(long *)(param_1 + 0x88);
          if ((lVar17 == 0) || (*(int *)(lVar17 + 0xc) == 0)) goto LAB_01f1e360;
          piVar1 = (int *)(lVar17 + 0xc);
          iVar10 = *(int *)(lVar17 + 0xc);
          goto LAB_01f1e4d4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar12;
    } while (iVar12 != 0);
  }
  return;
LAB_01f1e4d4:
  plVar21 = *(long **)(lVar17 + 0x10);
  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
      uVar15 = FUN_0087f8f0();
      *(undefined8 *)PTR_DAT_043794d8 = uVar15;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)puVar8 = PTR_DAT_043794d8;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar21 == (long *)0x0) goto LAB_01f1e360;
    if (plVar21 == (long *)puVar8) break;
    plVar21 = (long *)*plVar21;
  }
  iVar12 = *piVar1;
  if (iVar12 == iVar10) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar17 = *(long *)(lVar17 + 0x18);
      if (lVar17 == 0) goto LAB_01f1e360;
      plVar21 = (long *)(lVar17 + -0x50);
      iVar10 = FUN_025acbdc(plVar21);
      if (iVar10 == 3) {
        uVar11 = FUN_025acf24(plVar21);
        if (7 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f22c10();
        }
        auVar24 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x100920),
                           *(undefined1 (*) [16])(param_1 + (long)(int)uVar11 * 0x10 + 0x100930),8,1
                          );
        auVar24 = NEON_ext(auVar24,auVar24,8,1);
        *(long *)(param_1 + 0x100928) = auVar24._8_8_;
        *(long *)(param_1 + 0x100920) = auVar24._0_8_;
      }
      lVar17 = *(long *)(lVar17 + 8);
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
        lVar17 = *(long *)(param_1 + 0x68);
      }
      else {
LAB_01f1e360:
        lVar17 = *(long *)(param_1 + 0x68);
      }
      if (lVar17 == 0) {
        local_a0 = (long *)0x0;
      }
      else {
        FUN_019bf828(&local_a0);
        if (local_a0 != (long *)0x0) {
          FUN_00cb8d18(param_1 + 0x100910);
          fVar29 = fVar28 * 90.0;
          fVar25 = fVar29;
          if (extraout_s0 <= fVar29) {
            fVar25 = extraout_s0;
          }
          fVar31 = fVar28 * -90.0;
          if (fVar28 * -90.0 <= extraout_s0) {
            fVar31 = fVar25;
          }
          fVar32 = fVar28 * 180.0;
          for (fVar25 = extraout_var; fVar32 < fVar25; fVar25 = fVar25 + fVar28 * -360.0) {
          }
          for (; fVar25 < -fVar32; fVar25 = fVar28 * 360.0 + fVar25) {
          }
          auVar24 = *(undefined1 (*) [16])(param_1 + 0x100920);
          local_c0 = 0x52a14e26d97220f6;
          puStack_b8 = &DAT_03a82b48;
          local_b0 = 0x1f;
          uStack_a8 = 0;
          local_e0 = 0x521c897f23005ab3;
          pcStack_d8 = "SunMoonDir";
          local_d0 = 0x1f;
          local_c8 = (long *)0x0;
          lVar17 = FUN_02b1f8b0(DAT_043ef5b0,&local_c0);
          local_98 = lVar17;
          uVar13 = FUN_02b21278(DAT_043ef5b0,&local_98);
          if ((uVar13 & 1) != 0) {
            uVar13 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
            lVar18 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar13 / 0x12) * 8);
            lVar19 = (uVar13 % 0x12) * 0xd8;
            lVar17 = (lVar17 >> 0x20) * 0x1b0;
            puVar14 = (undefined8 *)
                      FUN_00aefbe4(*(long *)(lVar18 + lVar19) + lVar17 + 0xd8,&local_e0);
            puVar14[1] = auVar24._0_8_;
            *puVar14 = CONCAT44(fVar25 / fVar32,fVar31 / fVar29);
            *(undefined1 *)(*(long *)(lVar18 + lVar19) + lVar17 + 0x1a9) = 1;
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
          }
          if (local_a0 != (long *)0x0) {
            lVar17 = local_a0[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_a0 + 0x20))();
            }
          }
        }
      }
LAB_01f1e36c:
      lVar16 = *(long *)(lVar16 + 8);
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar10 = iVar12;
  if (iVar12 == 0) goto LAB_01f1e360;
  goto LAB_01f1e4d4;
}


