/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a7bd4; name: FUN_031a7bd4
 */


/* WARNING: Removing unreachable block (ram,0x031a86f4) */

void FUN_031a7bd4(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  undefined4 *puVar26;
  long *plVar27;
  char cVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar41;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar62 [16];
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined **local_fd0;
  undefined8 local_fc8;
  long *local_fc0;
  undefined8 uStack_fb8;
  uint local_dc0 [2];
  undefined1 local_db8 [4];
  int local_db4;
  undefined1 auStack_db0 [12];
  float local_da4;
  float local_da0;
  undefined1 auStack_d9c [12];
  undefined8 local_d90;
  undefined8 uStack_d88;
  ulong local_d80;
  undefined4 local_d78;
  undefined1 local_d74;
  undefined8 local_d70;
  undefined8 local_d68;
  long local_d60;
  undefined8 local_d58;
  float local_d50;
  undefined4 local_d4c;
  undefined8 local_d48;
  undefined4 local_d40 [816];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  lVar16 = *(long *)(param_1 + 0x220);
  if (lVar16 == 0) {
    *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
    if (*(int *)(param_1 + 0x40) != 1) goto LAB_031a7c18;
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x30);
    lVar16 = *(long *)(param_1 + 0x210);
  }
  else {
    if (*(int *)(param_1 + 0x40) != 1) {
      return;
    }
    lVar25 = param_1 + 0x230;
    if (*(char *)(param_1 + 0x198) == '\0') {
      iVar15 = *(int *)(param_1 + 0x238);
      lVar30 = (long)iVar15;
      if ((*(int *)(param_1 + 0x194) == 8) && (*(int *)(lVar16 + 0x20) != 0)) {
        lVar23 = *(long *)(lVar16 + 0x18) + (long)*(int *)(lVar16 + 0x20) * 0x90;
        fVar36 = *(float *)(lVar23 + -0x90);
        fVar40 = *(float *)(lVar23 + -0x8c);
        fVar43 = *(float *)(lVar23 + -0x88);
        if (*(float *)(lVar23 + -0x84) == *(float *)(lVar23 + -0x74) &&
            (fVar43 == *(float *)(lVar23 + -0x78) &&
            (fVar36 == *(float *)(lVar23 + -0x80) && fVar40 == *(float *)(lVar23 + -0x7c)))) {
          uVar22 = *(uint *)(lVar23 + -0x20);
          if (uVar22 != 0xffffffff) {
            uVar22 = uVar22 >> 0x16;
          }
          lVar23 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x180) + 0x130) + 0x38) +
                            (long)(int)uVar22 * 0xf0);
          fVar44 = *(float *)(lVar23 + 0x60);
          fVar33 = *(float *)(lVar23 + 100);
          fVar34 = *(float *)(lVar23 + 0x6c);
          uVar7 = *(undefined8 *)(lVar23 + 0x78);
          uVar68 = *(undefined8 *)(lVar23 + 0x70);
          auVar47 = *(undefined1 (*) [16])(lVar23 + 0x80);
          auVar62 = *(undefined1 (*) [16])(lVar23 + 0x90);
          *(float *)(param_1 + 0x1b8) =
               auVar62._8_4_ +
               auVar47._8_4_ * fVar43 + *(float *)(lVar23 + 0x68) * fVar36 + (float)uVar7 * fVar40;
          *(float *)(param_1 + 0x1bc) =
               auVar62._12_4_ +
               auVar47._12_4_ * fVar43 + fVar34 * fVar36 + (float)((ulong)uVar7 >> 0x20) * fVar40;
          *(float *)(param_1 + 0x1b0) =
               auVar62._0_4_ + auVar47._0_4_ * fVar43 + fVar44 * fVar36 + (float)uVar68 * fVar40;
          *(float *)(param_1 + 0x1b4) =
               auVar62._4_4_ +
               auVar47._4_4_ * fVar43 + fVar33 * fVar36 + (float)((ulong)uVar68 >> 0x20) * fVar40;
        }
      }
      fStack_78 = (float)*(undefined8 *)(param_1 + 0x38);
      fStack_74 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      local_80 = (float)*(undefined8 *)(param_1 + 0x30);
      fStack_7c = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      iVar14 = FUN_031548ec(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
                            (char)*(undefined4 *)(param_1 + 0x168),lVar16,lVar25,&local_80,
                            *(long *)(param_1 + 0x180) + 0x120,
                            *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_fc0,
                            &local_da0);
      if (iVar14 != 0) {
        if (iVar14 != 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar16 = *(long *)(param_1 + 0x228);
        if (lVar16 != 0) {
          pcVar2 = (char *)(lVar16 + 100);
          do {
            cVar28 = *pcVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar4) {
              *pcVar2 = '\x04';
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (cVar28 == '\x01') {
            *(undefined1 *)(*(long *)(lVar16 + 0x68) + 0x20) = 3;
            plVar18 = *(long **)(lVar16 + 0x68);
            *(undefined8 *)(lVar16 + 0x68) = 0;
            if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
              plVar27 = plVar18 + 2;
              do {
                lVar16 = *plVar27;
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar4) {
                  *plVar27 = lVar16 + -1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
              if (lVar16 + -1 == 0) {
                (**(code **)(*plVar18 + 0x18))();
              }
            }
          }
          plVar18 = *(long **)(param_1 + 0x228);
          *(undefined8 *)(param_1 + 0x228) = 0;
          if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
            plVar27 = plVar18 + 2;
            do {
              lVar16 = *plVar27;
              cVar28 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar4) {
                *plVar27 = lVar16 + -1;
                cVar28 = ExclusiveMonitorsStatus();
              }
            } while (cVar28 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar18 + 0x18))();
            }
          }
        }
        local_d70 = 0x3a83126f3a83126f;
        local_d90 = CONCAT44(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x158));
        local_d74 = 0;
        local_d78 = 0x3f800000;
        local_d80 = CONCAT44(*(float *)(param_1 + 0xc0) * 0.5,(int)local_d80) & 0xffffffffffffff00;
        local_d68 = CONCAT44(*(undefined4 *)(param_1 + 0xa0),0xffffffff);
        local_d60 = *(long *)(param_1 + 0xe8);
        local_d40[0] = *(undefined4 *)(param_1 + 0xc4);
        local_d58 = *(undefined8 *)(param_1 + 0xf0);
        local_d50 = *(float *)(param_1 + 0xf8);
        local_d48 = *(undefined8 *)(param_1 + 0x100);
        uStack_d88 = local_d90;
        local_da0 = (float)FUN_03159198(*(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),
                                        &local_80,param_1 + 0x90,&local_d90,&local_fc0);
        if (local_da0 == -NAN) {
          local_fc0 = (long *)CONCAT44(fStack_7c,local_80);
          auVar47._8_4_ = fStack_78;
          auVar47._0_8_ = local_fc0;
          auVar47._12_4_ = fStack_74;
          uVar68 = 1;
          local_da0 = -NAN;
          uStack_fb8 = auVar47._8_8_;
        }
        else {
          uVar68 = 2;
        }
        FUN_031a88b8(param_1,uVar68,param_2);
      }
      *(float *)(param_1 + 0x19c) = local_da0;
      *(undefined8 *)(param_1 + 0x1a8) = uStack_fb8;
      *(long **)(param_1 + 0x1a0) = local_fc0;
      if ((*(char *)(param_1 + 0x198) == '\0') &&
         (iVar14 = *(int *)(param_1 + 0x238), iVar15 < iVar14)) {
        lVar16 = lVar30 * 0x90 + 0x110;
        do {
          iVar15 = iVar15 + 1;
          lVar30 = lVar30 + 1;
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x220) + 0x18) + lVar16) >> 4 & 1) != 0) {
            FUN_031a8a2c(param_1,iVar15);
            *(undefined4 *)(param_1 + 0x40) = 2;
            *(undefined1 *)(*(long *)(param_1 + 0x228) + 0x30) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x228) + 0x60) = *(undefined4 *)(param_1 + 0x234);
            iVar14 = *(int *)(param_1 + 0x238);
          }
          lVar16 = lVar16 + 0x90;
        } while (lVar30 < iVar14);
      }
    }
    if (*(int *)(param_1 + 0x40) != 1) {
      return;
    }
    if (*(char *)(param_1 + 0x198) == '\0') {
      lVar16 = *(long *)(param_1 + 0x180);
      uVar22 = *(uint *)(param_1 + 0x19c) >> 0x16;
      local_d60 = *(long *)(lVar16 + 0x130);
      lVar30 = *(long *)(*(long *)(local_d60 + 0x38) + (ulong)uVar22 * 0xf0);
      auVar38 = *(undefined1 (*) [16])(lVar30 + 0x60);
      auVar47 = *(undefined1 (*) [16])(lVar30 + 0x70);
      pauVar1 = (undefined1 (*) [12])(lVar30 + 0x80);
      uVar68 = *(undefined8 *)(lVar30 + 0x88);
      fVar71 = (float)((ulong)uVar68 >> 0x20);
      fVar69 = (float)*(undefined8 *)*pauVar1;
      fVar70 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar46 = NEON_ext(auVar47,auVar47,8,1);
      auVar37 = NEON_ext(auVar38,auVar38,8,1);
      auVar62._12_4_ = fVar71;
      auVar62._0_12_ = *pauVar1;
      auVar8._12_4_ = fVar71;
      auVar8._0_12_ = *pauVar1;
      auVar62 = NEON_ext(auVar62,auVar8,8,1);
      fVar36 = auVar37._0_4_;
      fVar44 = auVar46._0_4_;
      fVar40 = auVar38._0_4_;
      fVar33 = auVar47._0_4_;
      fVar43 = auVar38._4_4_;
      fVar34 = auVar47._4_4_;
      fVar35 = *(float *)(param_1 + 0x1a0) - (float)*(undefined8 *)(lVar30 + 0x90);
      fVar39 = *(float *)(param_1 + 0x1a4) - (float)((ulong)*(undefined8 *)(lVar30 + 0x90) >> 0x20);
      fVar41 = *(float *)(param_1 + 0x1a8) - (float)*(undefined8 *)(lVar30 + 0x98);
      fVar59 = auVar62._4_4_;
      fVar72 = auVar62._0_4_;
      local_80 = fVar36 * fVar41 + fVar40 * fVar35 + fVar43 * fVar39;
      fStack_7c = fVar44 * fVar41 + fVar33 * fVar35 + fVar34 * fVar39;
      fStack_78 = fVar72 * fVar41 + fVar69 * fVar35 + fVar70 * fVar39;
      fStack_74 = fVar59 * fVar41 + fVar70 * fVar35 + fVar59 * fVar39;
      uVar7 = *(undefined8 *)(lVar30 + 0xa0);
      uVar9 = *(undefined8 *)(lVar30 + 0xa8);
      uVar10 = *(undefined8 *)(lVar30 + 0xb0);
      uVar11 = *(undefined8 *)(lVar30 + 0xb8);
      local_d90 = *(undefined8 *)(lVar16 + 0x120);
      uStack_d88 = *(undefined8 *)(lVar16 + 0x128);
      local_d4c = *(undefined4 *)(param_1 + 0xc4);
      local_d68 = *(undefined8 *)(param_1 + 0xe8);
      local_d80 = *(ulong *)(param_1 + 0xf0);
      local_d78 = *(undefined4 *)(param_1 + 0xf8);
      uVar31 = *(undefined8 *)(param_1 + 0x100);
      local_d70 = 0;
      local_d50 = 0.001;
      local_d58 = CONCAT44(*(float *)(param_1 + 0xc0) * 0.5,*(undefined4 *)(param_1 + 0xa0));
      local_d48 = 0;
      FUN_0316017c(local_d40);
      if (*(float *)(local_d60 + (long)(int)local_d58 * 4 + 0x60) + local_d50 < local_d58._4_4_) {
        if (-1 < (long)local_d80) {
          uVar31 = *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(local_d60 + 0x58) + 0x18) +
                              (long)(int)local_d80 * 0x18) + ((long)local_d80 >> 0x20) * 0x18);
        }
        local_d70 = uVar31;
      }
      lVar16 = tpidr_el0;
      if (*(char *)(param_1 + 0x198) == '\0') {
        uVar32 = 0;
        do {
          local_dc0[0] = uVar22;
          iVar15 = FUN_03157e98(*(undefined8 *)(param_1 + 0x220),lVar25,&local_80,local_dc0,
                                *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_da0,
                                auStack_db0,&local_db4,local_db8);
          if (iVar15 - 2U < 3) {
            FUN_0331fefc(&local_fd0,&local_fc0,0x200);
            FUN_033243f0(local_fc8,
                         "Unexpected calcForwardVector output; going to stale path. (This is unexpected and weird.)"
                        );
            iVar15 = FUN_03320a10(3,0x23ae872e,&local_fc0,
                                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/Navigator/hkaiNavigator.cpp"
                                  ,0x3b1);
            if (iVar15 != 0) {
              CallSupervisor(0x26);
            }
            local_fd0 = &PTR_FUN_0434fca8;
            local_fc8 = 0;
            FUN_03324278(&local_fd0);
            FUN_031a88b8(param_1,0,param_2);
            cVar28 = *(char *)(param_1 + 0x198);
            goto joined_r0x031a81c8;
          }
          if ((((iVar15 != 0) || (*(char *)(param_1 + 0xbb) == '\0')) || (local_da4 != 0.0)) ||
             (3 < uVar32)) break;
          pfVar24 = (float *)(*(long *)(*(long *)(param_1 + 0x220) + 0x18) + (long)local_db4 * 0x90)
          ;
          auVar62 = *(undefined1 (*) [16])(pfVar24 + 4);
          if (pfVar24[3] == auVar62._12_4_ &&
              (pfVar24[2] == auVar62._8_4_ &&
              (*pfVar24 == auVar62._0_4_ && pfVar24[1] == auVar62._4_4_))) break;
          local_fc0 = (long *)CONCAT44(*(undefined4 *)(param_1 + 0xbc),
                                       *(undefined4 *)(param_1 + 0xbc));
          iVar15 = FUN_03155314(*(long *)(param_1 + 0x220),(long)local_db4,local_db8[0],lVar25,
                                *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x130),&local_d90,
                                &local_fc0);
          lVar30 = *(long *)(param_1 + 0x228);
          if (lVar30 != 0) {
            bVar63 = *(byte *)(lVar30 + 100);
            pcVar2 = (char *)(lVar30 + 100);
            do {
              cVar28 = *pcVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
              if (bVar4) {
                *pcVar2 = '\x04';
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (cVar28 == '\x01') {
              *(undefined1 *)(*(long *)(lVar30 + 0x68) + 0x20) = 3;
              plVar18 = *(long **)(lVar30 + 0x68);
              *(undefined8 *)(lVar30 + 0x68) = 0;
              if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
                plVar27 = plVar18 + 2;
                do {
                  lVar30 = *plVar27;
                  cVar28 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar4) {
                    *plVar27 = lVar30 + -1;
                    cVar28 = ExclusiveMonitorsStatus();
                  }
                } while (cVar28 != '\0');
                if (lVar30 + -1 == 0) {
                  (**(code **)(*plVar18 + 0x18))();
                }
              }
            }
            plVar18 = *(long **)(param_1 + 0x228);
            *(undefined8 *)(param_1 + 0x228) = 0;
            if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
              plVar27 = plVar18 + 2;
              do {
                lVar30 = *plVar27;
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar4) {
                  *plVar27 = lVar30 + -1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
              if (lVar30 + -1 == 0) {
                (**(code **)(*plVar18 + 0x18))();
              }
            }
            uVar31 = *(undefined8 *)(param_1 + 0x220);
            lVar30 = *(long *)(lVar16 + 0x38d490);
            if (lVar30 == 0) {
              lVar30 = FUN_0333d16c(0,1);
              *(long *)(lVar16 + 0x38d490) = lVar30;
            }
            plVar18 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
            plVar18 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x110,0);
            plVar18[1] = 0xffffffff;
            plVar27 = plVar18 + 2;
            *plVar27 = 1;
            *plVar18 = (long)&PTR_LAB_0430b3b0;
            memcpy(plVar18 + 4,(void *)(param_1 + 0x90),0xa8);
            lVar30 = *(long *)(param_1 + 0x140);
            plVar18[0x1a] = lVar30;
            if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
              plVar19 = (long *)(lVar30 + 0x10);
              do {
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar4) {
                  *plVar19 = *plVar19 + 1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
            }
            lVar30 = *(long *)(param_1 + 0x148);
            plVar18[0x1b] = lVar30;
            if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
              plVar19 = (long *)(lVar30 + 0x10);
              do {
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar4) {
                  *plVar19 = *plVar19 + 1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
            }
            lVar30 = *(long *)(param_1 + 0x150);
            plVar18[0x1c] = lVar30;
            if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
              plVar19 = (long *)(lVar30 + 0x10);
              do {
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar4) {
                  *plVar19 = *plVar19 + 1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
            }
            lVar30 = *(long *)(param_1 + 0x158);
            lVar23 = *(long *)(param_1 + 0x160);
            lVar29 = *(long *)(param_1 + 0x168);
            *(undefined4 *)(plVar18 + 0x20) = *(undefined4 *)(param_1 + 0x170);
            plVar18[0x1e] = lVar23;
            plVar18[0x1f] = lVar29;
            plVar18[0x1d] = lVar30;
            lVar30 = *(long *)(lVar16 + 0x38d490);
            if (lVar30 == 0) {
              lVar30 = FUN_0333d16c(0,1);
              *(long *)(lVar16 + 0x38d490) = lVar30;
            }
            plVar19 = *(long **)(*(long *)(lVar30 + 8) + 0x58);
            uVar20 = (**(code **)(*plVar19 + 0x10))(plVar19,0x80,0);
            local_fc0 = plVar18;
            FUN_031ab9a0(uVar20,uVar31,param_1,param_1 + 0x30,*(long *)(param_1 + 0x20),
                         *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 0x20,
                         &local_fc0);
            if (plVar18[1] != 0) {
              do {
                lVar30 = *plVar27;
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar4) {
                  *plVar27 = lVar30 + -1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
              if (lVar30 + -1 == 0) {
                (**(code **)(*plVar18 + 0x18))();
              }
            }
            plVar18 = *(long **)(param_1 + 0x228);
            *(undefined8 *)(param_1 + 0x228) = uVar20;
            if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
              plVar27 = plVar18 + 2;
              do {
                lVar30 = *plVar27;
                cVar28 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar4) {
                  *plVar27 = lVar30 + -1;
                  cVar28 = ExclusiveMonitorsStatus();
                }
              } while (cVar28 != '\0');
              if (lVar30 + -1 == 0) {
                (**(code **)(*plVar18 + 0x18))();
              }
            }
            if ((bVar63 | 1) == 3) {
              lVar30 = *(long *)(param_1 + 0x228);
              pcVar2 = (char *)(lVar30 + 100);
              cVar28 = *(char *)(lVar30 + 100);
              do {
                while( true ) {
                  while (cVar28 == '\0') {
                    cVar28 = *pcVar2;
                    if (cVar28 == '\0') {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                      if (bVar4) {
                        *pcVar2 = '\x02';
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') goto LAB_031a8608;
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                  }
                  if (cVar28 != '\x01') goto LAB_031a8608;
                  cVar28 = *pcVar2;
                  if (cVar28 == '\x01') break;
                  ClearExclusiveLocal();
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar4) {
                  *pcVar2 = '\x03';
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              *(undefined1 *)(*(long *)(lVar30 + 0x68) + 0x20) = 3;
              plVar18 = *(long **)(lVar30 + 0x68);
              *(undefined8 *)(lVar30 + 0x68) = 0;
              if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
                plVar27 = plVar18 + 2;
                do {
                  lVar30 = *plVar27;
                  cVar28 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar4) {
                    *plVar27 = lVar30 + -1;
                    cVar28 = ExclusiveMonitorsStatus();
                  }
                } while (cVar28 != '\0');
                if (lVar30 + -1 == 0) {
                  (**(code **)(*plVar18 + 0x18))();
                }
              }
            }
          }
LAB_031a8608:
          uVar32 = uVar32 + 1;
        } while (iVar15 == 0);
        cVar28 = *(char *)(param_1 + 0x198);
joined_r0x031a81c8:
        if (cVar28 == '\0') {
          auVar12._4_12_ = auStack_d9c;
          auVar12._0_4_ = local_da0;
          fVar58 = auStack_d9c._0_4_;
          fVar42 = auStack_d9c._4_4_;
          fVar73 = (float)uVar68;
          uVar31 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x128);
          fVar41 = (float)uVar31;
          uVar68 = *(undefined8 *)(*(long *)(param_1 + 0x180) + 0x120);
          fVar74 = (float)uVar10;
          fVar45 = fVar69 * fVar42 + fVar40 * local_da0 + fVar33 * fVar58;
          fVar48 = fVar70 * fVar42 + fVar43 * local_da0 + fVar34 * fVar58;
          fVar49 = fVar73 * fVar42 + auVar38._8_4_ * local_da0 + auVar47._8_4_ * fVar58;
          fVar35 = (float)uVar68;
          fVar60 = fVar35 * fVar45;
          fVar39 = (float)((ulong)uVar68 >> 0x20);
          fVar66 = fVar39 * fVar48;
          fVar67 = fVar41 * fVar49;
          fVar61 = fVar60 + fVar66 + fVar67;
          fVar67 = fVar60 + fVar66 + fVar67;
          fVar45 = fVar45 - fVar35 * fVar61;
          fVar48 = fVar48 - fVar39 * fVar67;
          fVar49 = fVar49 - fVar41 * fVar61;
          fVar35 = fVar45 * fVar45 + fVar48 * fVar48 + fVar49 * fVar49;
          fVar41 = fVar45 * fVar45 + fVar48 * fVar48 + fVar49 * fVar49;
          uVar50 = SUB41(fVar41,0);
          uVar51 = (undefined1)((uint)fVar41 >> 8);
          uVar52 = (undefined1)((uint)fVar41 >> 0x10);
          uVar53 = (undefined1)((uint)fVar41 >> 0x18);
          uVar68 = NEON_frsqrte(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,
                                                  fVar35)))),4);
          fVar39 = (float)uVar68;
          fVar60 = (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frsqrts(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,
                                                  fVar35)))),
                                CONCAT44(fVar60 * fVar60,fVar39 * fVar39),4);
          fVar39 = fVar39 * (float)uVar68;
          fVar60 = fVar60 * (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frsqrts(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,
                                                  fVar35)))),
                                CONCAT44(fVar60 * fVar60,fVar39 * fVar39),4);
          iVar15 = -(uint)(fVar35 <= 0.0);
          iVar14 = -(uint)(fVar41 <= 0.0);
          fVar39 = (float)uVar68 * fVar39;
          fVar60 = (float)((ulong)uVar68 >> 0x20) * fVar60;
          bVar63 = (byte)((uint)iVar15 >> 8);
          bVar64 = (byte)((uint)iVar15 >> 0x10);
          bVar65 = (byte)((uint)iVar15 >> 0x18);
          fVar66 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~bVar65,
                                   CONCAT12((byte)((uint)fVar39 >> 0x10) & ~bVar64,
                                            CONCAT11((byte)((uint)fVar39 >> 8) & ~bVar63,
                                                     SUB41(fVar39,0) & ~(byte)iVar15)));
          fVar39 = fVar39 * fVar35;
          fVar75 = (float)uVar11;
          *(uint *)(param_1 + 0x1e0) =
               CONCAT13((byte)((uint)fVar39 >> 0x18) & ~bVar65,
                        CONCAT12((byte)((uint)fVar39 >> 0x10) & ~bVar64,
                                 CONCAT11((byte)((uint)fVar39 >> 8) & ~bVar63,
                                          SUB41(fVar39,0) & ~(byte)iVar15)));
          fVar45 = fVar45 * fVar66;
          fVar60 = (float)(CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                    CONCAT16((byte)((uint)fVar60 >> 0x10) &
                                             ~(byte)((uint)iVar14 >> 0x10),
                                             CONCAT15((byte)((uint)fVar60 >> 8) &
                                                      ~(byte)((uint)iVar14 >> 8),
                                                      CONCAT14(SUB41(fVar60,0) & ~(byte)iVar14,
                                                               fVar66)))) >> 0x20);
          fVar48 = fVar48 * fVar60;
          fVar60 = ((fVar71 * fVar42 + auVar38._12_4_ * local_da0 + auVar47._12_4_ * fVar58) -
                   (float)((ulong)uVar31 >> 0x20) * fVar67) * fVar60;
          fVar67 = (float)((ulong)uVar10 >> 0x20);
          *(float *)(param_1 + 0x1c8) = fVar49 * fVar66;
          *(float *)(param_1 + 0x1cc) = fVar60;
          *(float *)(param_1 + 0x1c0) = fVar45;
          *(float *)(param_1 + 0x1c4) = fVar48;
          fVar77 = (float)uVar9;
          fVar35 = fVar36 * fVar75 + fVar40 * fVar74 + fVar43 * fVar67;
          fVar41 = fVar44 * fVar75 + fVar33 * fVar74 + fVar34 * fVar67;
          uVar50 = SUB41(fVar41,0);
          uVar51 = (undefined1)((uint)fVar41 >> 8);
          uVar53 = (undefined1)((uint)fVar41 >> 0x10);
          uVar55 = (undefined1)((uint)fVar41 >> 0x18);
          fVar58 = fVar72 * fVar75 + fVar69 * fVar74 + fVar70 * fVar67;
          fVar61 = fVar59 * fVar75 + fVar70 * fVar74 + fVar59 * fVar67;
          auVar13._8_4_ = fStack_78;
          auVar13._0_8_ = CONCAT44(fStack_7c,local_80);
          auVar13._12_4_ = fStack_74;
          fVar76 = (float)((ulong)uVar7 >> 0x20);
          auVar62 = NEON_ext(auVar13,auVar13,8,1);
          uVar68 = NEON_ext(CONCAT44(fStack_7c,local_80),auVar62._0_8_,4,1);
          auVar37[4] = uVar50;
          auVar37._0_4_ = fVar35;
          auVar37[5] = uVar51;
          auVar37[6] = uVar53;
          auVar37[7] = uVar55;
          auVar37._8_4_ = fVar58;
          auVar37._12_4_ = fVar61;
          auVar46[4] = uVar50;
          auVar46._0_4_ = fVar35;
          auVar46[5] = uVar51;
          auVar46[6] = uVar53;
          auVar46[7] = uVar55;
          auVar46._8_4_ = fVar58;
          auVar46._12_4_ = fVar61;
          auVar62 = NEON_ext(auVar37,auVar46,4,1);
          fVar39 = fVar35 * (float)uVar68 - auVar62._0_4_ * local_80;
          fVar41 = fVar41 * (float)((ulong)uVar68 >> 0x20) - auVar62._4_4_ * fStack_7c;
          uVar52 = (undefined1)((uint)fVar41 >> 8);
          uVar54 = (undefined1)((uint)fVar41 >> 0x10);
          uVar56 = (undefined1)((uint)fVar41 >> 0x18);
          fVar59 = fVar58 * local_80 - fVar35 * fStack_78;
          fVar35 = fVar61 * fStack_7c -
                   (float)(CONCAT17(uVar55,CONCAT16(uVar53,CONCAT15(uVar51,CONCAT14(uVar50,fVar35)))
                                   ) >> 0x20) * fStack_74;
          fVar58 = (float)uVar7;
          auVar5[4] = SUB41(fVar41,0);
          auVar5._0_4_ = fVar39;
          auVar5[5] = uVar52;
          auVar5[6] = uVar54;
          auVar5[7] = uVar56;
          auVar5._8_4_ = fVar59;
          auVar5._12_4_ = fVar35;
          auVar6[4] = SUB41(fVar41,0);
          auVar6._0_4_ = fVar39;
          auVar6[5] = uVar52;
          auVar6[6] = uVar54;
          auVar6[7] = uVar56;
          auVar6._8_4_ = fVar59;
          auVar6._12_4_ = fVar35;
          auVar62 = NEON_ext(auVar5,auVar6,4,1);
          fVar36 = fVar36 * fVar77 + fVar40 * fVar58 + fVar43 * fVar76 + auVar62._0_4_ + 0.0;
          fVar44 = fVar44 * fVar77 + fVar33 * fVar58 + fVar34 * fVar76 + auVar62._4_4_ + 0.0;
          fVar35 = fVar72 * fVar77 + fVar69 * fVar58 + fVar70 * fVar76 + fVar39 + 0.0;
          fVar43 = fVar70 * fVar35 + fVar43 * fVar36 + fVar34 * fVar44;
          *(ulong *)(param_1 + 0x1d8) =
               CONCAT44(fVar71 * fVar35 + auVar38._12_4_ * fVar36 + auVar47._12_4_ * fVar44,
                        fVar73 * fVar35 + auVar38._8_4_ * fVar36 + auVar47._8_4_ * fVar44);
          *(ulong *)(param_1 + 0x1d0) =
               CONCAT17((char)((uint)fVar43 >> 0x18),
                        CONCAT16((char)((uint)fVar43 >> 0x10),
                                 CONCAT15((char)((uint)fVar43 >> 8),
                                          CONCAT14(SUB41(fVar43,0),
                                                   fVar69 * fVar35 +
                                                   fVar40 * fVar36 + fVar33 * fVar44))));
          uVar50 = SUB41(local_da0,0);
          uVar51 = (undefined1)((uint)local_da0 >> 8);
          uVar52 = (undefined1)((uint)local_da0 >> 0x10);
          uVar53 = (undefined1)((uint)local_da0 >> 0x18);
          uVar54 = auStack_d9c[0];
          uVar55 = auStack_d9c[1];
          uVar56 = auStack_d9c[2];
          uVar57 = auStack_d9c[3];
          fVar36 = auStack_d9c._8_4_;
          if (ABS(fVar75) <= 1.1920929e-07 &&
              (ABS(fVar74) <= 1.1920929e-07 && ABS(fVar67) <= 1.1920929e-07)) {
            uVar50 = SUB41(fVar45,0);
            uVar51 = (undefined1)((uint)fVar45 >> 8);
            uVar52 = (undefined1)((uint)fVar45 >> 0x10);
            uVar53 = (undefined1)((uint)fVar45 >> 0x18);
            uVar54 = SUB41(fVar48,0);
            uVar55 = (undefined1)((uint)fVar48 >> 8);
            uVar56 = (undefined1)((uint)fVar48 >> 0x10);
            uVar57 = (undefined1)((uint)fVar48 >> 0x18);
            *(undefined1 *)(param_1 + 0x60) = 0;
            fVar42 = fVar49 * fVar66;
            fVar36 = fVar60;
          }
          *(ulong *)(param_1 + 0x58) = CONCAT44(fVar36,fVar42);
          *(ulong *)(param_1 + 0x50) =
               CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(uVar53,
                                                  CONCAT12(uVar52,CONCAT11(uVar51,uVar50)))))));
          *(long *)(param_1 + 0x1f8) = auStack_d9c._4_8_;
          *(long *)(param_1 + 0x1f0) = auVar12._0_8_;
          *(int *)(param_1 + 0x200) = local_db4;
          *(undefined1 *)(param_1 + 0x204) = local_db8[0];
          *(undefined1 *)(param_1 + 0x61) = 1;
          *(undefined4 *)(param_1 + 400) = 0;
        }
      }
      lVar25 = *(long *)(lVar16 + 0x38d490);
      if (lVar25 == 0) {
        lVar25 = FUN_0333d16c(0,1);
        *(long *)(lVar16 + 0x38d490) = lVar25;
      }
      FUN_03166d64(local_d40,*(undefined8 *)(lVar25 + 0x10));
      if (((*(char *)(param_1 + 0x198) != '\0') || (*(int *)(param_1 + 0x194) != 8)) ||
         (fVar36 = *(float *)(param_1 + 0x1a0) - *(float *)(param_1 + 0x1b0),
         fVar40 = *(float *)(param_1 + 0x1a4) - *(float *)(param_1 + 0x1b4),
         fVar43 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1b8),
         fVar44 = *(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1bc),
         auVar38._0_4_ = fVar36 * fVar36, auVar38._4_4_ = fVar40 * fVar40,
         auVar38._8_4_ = fVar43 * fVar43, auVar38._12_4_ = fVar44 * fVar44,
         auVar47 = NEON_ext(auVar38,auVar38,8,1),
         *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x164) <=
         auVar38._0_4_ + auVar38._4_4_ + auVar47._0_4_)) goto LAB_031a8140;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1e0) = 0x7f7fffee;
      if (*(char *)(param_1 + 0x218) != '\0') goto LAB_031a8140;
      iVar14 = *(int *)(param_1 + 0x250);
      iVar15 = iVar14 + 1;
      lVar16 = *(long *)(param_1 + 0x248);
      if ((int)(*(uint *)(param_1 + 0x254) & 0x3fffffff) <= iVar14) {
        lVar16 = FUN_031aaf24(PTR_PTR_0434a080,iVar15);
        iVar14 = *(int *)(param_1 + 0x250);
        *(long *)(param_1 + 0x248) = lVar16;
      }
      puVar26 = (undefined4 *)(lVar16 + (long)iVar14 * 0xa0);
      *(int *)(param_1 + 0x250) = iVar15;
      *puVar26 = 6;
      *(undefined8 *)(puVar26 + 0x24) = 0;
      *(undefined8 *)(puVar26 + 0x26) = 0x8000000000000000;
      *(undefined1 *)(param_1 + 0x218) = 1;
      cVar28 = *(char *)(param_1 + 0x218);
    }
    else {
LAB_031a8140:
      cVar28 = *(char *)(param_1 + 0x218);
    }
    if (cVar28 != '\0') {
      uVar21 = 3;
      goto LAB_031a7c24;
    }
    if ((*(char *)(param_1 + 0x198) == '\0') ||
       (uVar17 = FUN_031a79f8(param_1,param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x19c),
                              param_1 + 0x1c0,param_1 + 0x1d0), (uVar17 & 1) != 0)) {
      *(undefined4 *)(param_1 + 400) = 0;
      return;
    }
LAB_031a7c18:
    lVar16 = *(long *)(param_1 + 0x210);
  }
  if (lVar16 == 0) {
    uVar21 = 1;
  }
  else {
    uVar21 = 2;
  }
LAB_031a7c24:
  *(undefined4 *)(param_1 + 400) = uVar21;
  return;
}


