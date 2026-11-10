/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c624dc; name: FUN_01c624dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c624dc(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 in_q3 [16];
  undefined8 uVar20;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  long *local_160 [13];
  long *local_f8;
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  long *local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  
  uVar20 = in_q3._8_8_;
  uVar19 = in_q3._0_8_;
  if ((*(long *)(param_1 + 0x340) != 0) &&
     (FUN_018e4ba0(&local_e0), plVar9 = local_e0, uVar8 = _UNK_03888fc8, uVar7 = _DAT_03888fc0,
     local_e0 != (long *)0x0)) {
    lVar14 = *(long *)(param_1 + 0x2c0);
    lVar15 = *(long *)(param_1 + 0x2c8);
    if (lVar14 != lVar15) {
      do {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_01c66fe8(&local_78,lVar14);
        if (local_78 != (undefined8 *)0x0) {
          FUN_01c67260(&local_80);
          if (local_80 != (long *)0x0) {
            FUN_009c69bc(&local_e0);
            (**(code **)(*local_e0 + 0x40))();
            local_90 = uVar19;
            uStack_88 = uVar20;
            if (local_e0 != (long *)0x0) {
              lVar13 = local_e0[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_e0 + 0x20))();
              }
            }
            plVar6 = local_80;
            fVar16 = (float)*param_2 - (float)local_90;
            fVar17 = (float)((ulong)*param_2 >> 0x20) - local_90._4_4_;
            uStack_88._0_4_ = (float)param_2[1] - (float)uStack_88;
            uStack_88._4_4_ = (float)((ulong)param_2[1] >> 0x20) - uStack_88._4_4_;
            fVar16 = fVar16 * fVar16;
            fVar17 = fVar17 * fVar17;
            uStack_88._0_4_ = (float)uStack_88 * (float)uStack_88;
            uStack_88._4_4_ = uStack_88._4_4_ * uStack_88._4_4_;
            auVar18._4_4_ = fVar17;
            auVar18._0_4_ = fVar16;
            auVar18._8_4_ = (float)uStack_88;
            auVar18._12_4_ = uStack_88._4_4_;
            auVar4._4_4_ = fVar17;
            auVar4._0_4_ = fVar16;
            auVar4._8_4_ = (float)uStack_88;
            auVar4._12_4_ = uStack_88._4_4_;
            auVar18 = NEON_ext(auVar18,auVar4,8,1);
            if (2500.0 <= auVar18._0_4_ + fVar16 + auVar18._4_4_ + fVar17) {
              FUN_01c4d1d8(local_80);
            }
            else {
              local_98 = (long *)0x0;
              local_d8 = "PLAY_STDISTORTION_CONTENTS_DISAPPEAR";
              local_e0 = (long *)0x9ff6f72ca6a1d24d;
              local_d0 = 0x24;
              local_c8 = (long *)0x0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_e4[0] = 1;
              local_e8[0] = 1;
              local_ec[0] = 1;
              uStack_b8 = uVar8;
              local_c0 = uVar7;
              FUN_01c63778(&local_a0,*(undefined8 *)(param_1 + 8),&local_90,&local_b0,&local_c0,
                           &local_e0,local_e4,local_e8,local_ec);
              plVar6 = local_98;
              local_98 = (long *)0x0;
              if (plVar6 != (long *)0x0) {
                lVar13 = plVar6[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar6 + 0x20))();
                }
              }
              local_98 = local_a0;
              local_a0 = (long *)0x0;
              if (local_c8 != (long *)0x0) {
                (**(code **)(*local_c8 + 0x20))();
              }
              plVar6 = local_80;
              if (local_80 != (long *)0x0) {
                lVar13 = local_80[0xb];
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                }
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              local_180 = &LAB_01c675a0;
              local_160[0] = plVar6;
              local_170 = &LAB_01c6763c;
              puStack_168 = &LAB_01c676b0;
              local_178 = FUN_01c67604;
              FUN_00bdc73c(&local_f8,plVar9,0xc,&local_98,&local_180,0);
              pcVar5 = local_178;
              if (local_f8 != (long *)0x0) {
                lVar13 = local_f8[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_f8 + 0x20))();
                  pcVar5 = local_178;
                  local_178 = (code *)0x0;
                }
              }
              if (pcVar5 != (code *)0x0) {
                local_170 = (undefined1 *)0x0;
                puStack_168 = (undefined1 *)0x0;
                local_180 = (undefined1 *)0x0;
                local_178 = (code *)0x0;
                (*pcVar5)(local_160);
              }
              plVar6 = local_80;
              if (local_98 != (long *)0x0) {
                lVar13 = local_98[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*local_98 + 0x20))();
                  plVar6 = local_80;
                }
              }
            }
            if (plVar6 != (long *)0x0) {
              lVar13 = plVar6[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar6 + 0x20))(plVar6);
              }
            }
          }
          puVar10 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_e0 = (long *)*puVar10;
              FUN_02a44274(lVar13 + 0xd8,&local_e0);
            }
          }
        }
        lVar14 = lVar14 + 0x10;
      } while (lVar14 != lVar15);
    }
    lVar14 = plVar9[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
}


