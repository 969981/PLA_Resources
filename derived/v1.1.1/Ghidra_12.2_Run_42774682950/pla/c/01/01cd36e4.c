/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd36e4; name: FUN_01cd36e4
 */


void FUN_01cd36e4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,int param_6,int param_7,long *param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  long *local_a8;
  float local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  uVar32 = param_4._8_8_;
  uVar31 = param_4._0_8_;
  local_88 = (long *)0x0;
  local_68 = 0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_78 = 0xfffffffffffffff;
  uStack_70 = 0;
  plVar19 = *(long **)(param_5 + 0xa0);
  lVar6 = tpidr_el0;
  local_80 = param_8;
  if (plVar19 == (long *)0x0) {
    plVar24 = (long *)0x0;
  }
  else {
    plVar24 = (long *)0x0;
    plVar25 = (long *)0x0;
    do {
      if (*(int *)(plVar19[3] + 0xec) == param_6) {
        local_a8 = (long *)0x0;
        local_a0 = 0.0;
        (**(code **)(**(long **)(plVar19[3] + 0x78) + 0x40))();
        plVar24 = (long *)plVar19[3];
        if (plVar24 != (long *)0x0) {
          lVar20 = plVar24[0xb];
          if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_01cd3e40:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar20 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
            *(undefined8 *)(lVar20 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar22 = local_80;
        fVar26 = param_1._0_4_ - (float)uVar31;
        fVar27 = param_1._4_4_ - (float)((ulong)uVar31 >> 0x20);
        fVar28 = param_1._8_4_ - (float)uVar32;
        fVar29 = param_1._12_4_ - (float)((ulong)uVar32 >> 0x20);
        fVar26 = fVar26 * fVar26;
        fVar27 = fVar27 * fVar27;
        fVar28 = fVar28 * fVar28;
        fVar29 = fVar29 * fVar29;
        auVar30._4_4_ = fVar27;
        auVar30._0_4_ = fVar26;
        auVar30._8_4_ = fVar28;
        auVar30._12_4_ = fVar29;
        auVar7._4_4_ = fVar27;
        auVar7._0_4_ = fVar26;
        auVar7._8_4_ = fVar28;
        auVar7._12_4_ = fVar29;
        auVar30 = NEON_ext(auVar30,auVar7,8,1);
        local_a0 = auVar30._0_4_ + fVar26 + auVar30._4_4_ + fVar27;
        local_a8 = plVar24;
        if (plVar25 < local_88) {
          FUN_01cd58a8(local_80,plVar25,&local_a8);
          plVar24 = local_90 + 2;
          local_90 = plVar24;
        }
        else {
          lVar20 = (long)plVar25 - (long)local_98 >> 4;
          uVar21 = lVar20 + 1;
          uVar15 = local_78;
          if (0x7ffffffffffffffe < local_78) {
            uVar15 = 0x7fffffffffffffff;
          }
          if (uVar15 < uVar21) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_88 - (long)local_98 >> 4) < uVar15 >> 1) {
            uVar16 = (long)local_88 - (long)local_98 >> 3;
            uVar15 = uVar21;
            if (uVar21 <= uVar16) {
              uVar15 = uVar16;
            }
          }
          if (uVar15 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (**(code **)(*local_80 + 0x10))(local_80,uVar15 << 4,8);
            if (lVar11 == 0) {
              (**(code **)(*plVar22 + 0xb8))(plVar22);
            }
          }
          plVar24 = (long *)(lVar11 + lVar20 * 0x10);
          FUN_01cd58a8(plVar22,plVar24,&local_a8);
          plVar25 = local_98;
          if (local_90 == local_98) {
            local_90 = local_98;
            local_98 = plVar24;
          }
          else {
            plVar22 = local_90;
            plVar23 = plVar24;
            do {
              plVar12 = local_80;
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar8 = PTR_DAT_04379528;
                if (iVar9 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar20 != 0) {
                if (0xf < *(ulong *)(lVar20 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar12;
                *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
              }
              plVar12 = plVar22 + -2;
              lVar13 = *plVar12;
              plVar23[-2] = lVar13;
              if (lVar13 != 0) {
                lVar13 = *(long *)(lVar13 + 0x58);
                if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01cd3e40;
                if (*(long *)(lVar13 + 0x10) == 0) {
                  uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                  *(undefined8 *)(lVar13 + 0x10) = uVar10;
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
              *(int *)(plVar23 + -1) = (int)plVar22[-1];
              if (lVar20 != 0) {
                *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
              }
              plVar23 = plVar23 + -2;
              plVar22 = plVar12;
            } while (plVar12 != plVar25);
            plVar25 = local_98;
            local_98 = plVar23;
          }
          plVar22 = local_88;
          plVar24 = plVar24 + 2;
          local_88 = (long *)(lVar11 + uVar15 * 0x10);
          plVar23 = local_90;
          local_90 = plVar24;
LAB_01cd39fc:
          if (plVar23 != plVar25) {
            while( true ) {
              plVar23 = plVar23 + -2;
              plVar12 = (long *)*plVar23;
              if (plVar12 == (long *)0x0) break;
              lVar20 = plVar12[0xb];
              piVar1 = (int *)(lVar20 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar9 + -1 != 0) break;
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*plVar12 + 0x20))();
              if (plVar23 == plVar25) goto LAB_01cd3a40;
            }
            goto LAB_01cd39fc;
          }
LAB_01cd3a40:
          plVar23 = local_80;
          if (plVar25 != (long *)0x0) {
            uVar21 = (**(code **)(*local_80 + 0xc0))(local_80);
            if ((uVar21 & 1) != 0) {
              if (*(char *)(lVar6 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar6 + 0x38d488) = 1;
                *(undefined8 *)(lVar6 + 0x38d478) = 0;
                *(undefined8 *)(lVar6 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar6 + 0x38d480)) {
                FUN_02bcc824(plVar23,plVar25,(long)plVar22 - (long)plVar25,8);
                goto joined_r0x01cd3ac4;
              }
            }
            (**(code **)(*plVar23 + 0x18))(plVar23,plVar25,(long)plVar22 - (long)plVar25,8);
          }
        }
joined_r0x01cd3ac4:
        if (local_a8 != (long *)0x0) {
          lVar20 = local_a8[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_a8 + 0x20))();
          }
        }
        plVar25 = plVar24;
      }
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
  plVar19 = local_98;
  FUN_01cd59e0(local_98,plVar24);
  uVar4 = (int)((ulong)((long)plVar24 - (long)plVar19) >> 4) - param_7;
  if ((int)uVar4 < 1) {
LAB_01cd3cc8:
    if (plVar19 != (long *)0x0) {
      plVar24 = plVar19;
      plVar25 = local_90;
      if (local_90 != plVar19) {
        do {
          plVar25 = plVar25 + -2;
          plVar24 = (long *)*plVar25;
          if (plVar24 != (long *)0x0) {
            lVar20 = plVar24[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))();
            }
          }
        } while (plVar25 != plVar19);
        plVar24 = local_98;
      }
      plVar25 = local_80;
      lVar20 = (long)local_88 - (long)plVar24;
      local_90 = plVar19;
      uVar21 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar25,plVar24,lVar20,8);
          return;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,plVar24,lVar20,8);
    }
    return;
  }
  uVar21 = 0;
  uVar15 = *(ulong *)(param_5 + 0x78);
joined_r0x01cd3bb0:
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar14 = *(ulong *)(plVar19[uVar21 * 2] + 0xf0);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & uVar14;
    }
    else if (uVar14 < uVar15) {
      uVar17 = uVar14;
    }
    else {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar14 / uVar15;
      }
      uVar17 = uVar14 - uVar17 * uVar15;
    }
    puVar18 = *(undefined8 **)(*(long *)(param_5 + 0x70) + uVar17 * 8);
    if ((puVar18 != (undefined8 *)0x0) && (plVar24 = (long *)*puVar18, plVar24 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar24[1] == uVar14) {
            if (plVar24[2] == uVar14) goto LAB_01cd3bf4;
          }
          else if ((plVar24[1] & uVar15 - 1) != uVar17) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar24[1];
          if (uVar16 == uVar14) {
            if (plVar24[2] == uVar14) goto LAB_01cd3bf4;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar5 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_01cd3bfc;
LAB_01cd3bf4:
  FUN_01cd71e8((long *)(param_5 + 0x70));
LAB_01cd3bfc:
  uVar21 = uVar21 + 1;
  if (uVar4 <= uVar21) goto LAB_01cd3cc8;
  uVar15 = *(ulong *)(param_5 + 0x78);
  goto joined_r0x01cd3bb0;
}


