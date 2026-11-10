/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbe470; name: FUN_01bbe470
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01bbe470(long param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *local_230;
  undefined8 *local_228;
  char *pcStack_220;
  undefined8 local_218;
  uint local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  long *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined2 local_190;
  undefined8 local_18e;
  undefined4 local_186;
  undefined8 local_182;
  undefined8 local_17a;
  undefined8 local_172;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_162;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined2 local_120;
  undefined8 local_11e;
  undefined4 local_116;
  undefined8 local_112;
  undefined8 local_10a;
  undefined8 local_102;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f2;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_ae;
  undefined4 local_a6;
  undefined8 local_a2;
  undefined8 local_9a;
  undefined8 local_92;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_82;
  undefined8 local_60;
  long *local_58;
  
  if ((*(uint *)(param_1 + 0x1f0) & 0xfffffffe) == 2) {
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x350);
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x531) = 0;
  uVar16 = *(ulong *)(param_1 + 0x358);
  uVar17 = uVar16 ^ uVar14;
  *(ulong *)(param_1 + 0x350) = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
  *(ulong *)(param_1 + 0x358) = uVar17 >> 0x1b | uVar17 << 0x25;
  *(ulong *)(param_1 + 0x1f8) = uVar16 + uVar14;
  *(undefined8 *)(param_1 + 0x534) = 1;
  local_60 = *(undefined8 *)(param_1 + 0x200);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar18 = *(long **)(lVar15 + 0x270);
  if (plVar18 != (long *)0x0) {
    lVar15 = plVar18[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_010fae78(plVar18,&DAT_03a78e98,&local_60,0);
      if ((ulong)plVar18[0xae3] < 500) {
        uVar12 = *(undefined8 *)(param_1 + 0x1f8);
        puVar13 = (undefined8 *)FUN_010fb1b4(plVar18 + 0xad8,&local_60);
        *puVar13 = uVar12;
      }
      lVar15 = plVar18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
      local_1f0 = *(long **)(param_1 + 8);
      local_210 = local_210 & 0xffffff00;
      uStack_20c = 0;
      uStack_208 = 0;
      local_1fc = 0;
      uStack_1f8 = 0;
      local_228 = (undefined8 *)&DAT_f4b17a579f18960;
      pcStack_220 = (char *)0x82a2b175229d6a5b;
      local_1e8 = 0x3fffffffffffffff;
      uStack_1e0 = 0;
      local_218 = 0;
      uStack_204 = 0;
      uStack_200 = 0;
      local_1f4 = 0;
      local_1d0[0] = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1a8 = 0xffffffffffffffff;
      local_1a0 = 0x38a;
      local_1b8 = 0xffffffffffffffff;
      uStack_1b0 = 0x3ffffffff;
      local_19c = 0xff000100000000;
      local_194 = 0xffffffff;
      local_190 = 0x1ff;
      local_168 = 0xffff;
      local_164 = 0;
      local_162 = 0xffff01000100;
      local_186 = 0xffffffff;
      local_18e = 0xffffffffffffffff;
      local_182 = 0;
      local_17a = 0;
      local_172 = 0;
      local_158 = 0;
      local_150 = 0;
      local_138 = 0xffffffffffffffff;
      local_130 = 0x38a;
      local_148 = 0xffffffffffffffff;
      uStack_140 = 0x3ffffffff;
      local_12c = 0xff000100000000;
      local_124 = 0xffffffff;
      local_120 = 0x1ff;
      local_f8 = 0xffff;
      local_f4 = 0;
      local_f2 = 0xffff01000100;
      local_11e = 0xffffffffffffffff;
      local_116 = 0xffffffff;
      local_102 = 0;
      local_10a = 0;
      local_112 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_c8 = 0xffffffffffffffff;
      local_c0 = 0x38a;
      local_d8 = 0xffffffffffffffff;
      uStack_d0 = 0x3ffffffff;
      local_bc = 0xff000100000000;
      local_b4 = 0xffffffff;
      local_b0 = 0x1ff;
      local_88 = 0xffff;
      local_84 = 0;
      local_82 = 0xffff01000100;
      local_a6 = 0xffffffff;
      local_ae = 0xffffffffffffffff;
      local_92 = 0;
      local_9a = 0;
      local_a2 = 0;
      *(undefined1 **)(param_1 + 0x350) = &DAT_f4b17a579f18960;
      *(undefined8 *)(param_1 + 0x358) = 0x82a2b175229d6a5b;
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(ulong *)(param_1 + 0x368) = (ulong)local_210;
      FUN_01bbf418(param_1 + 0x370,&uStack_208);
      memcpy((void *)(param_1 + 0x3a8),local_1d0,0x170);
      plVar18 = local_1f0;
      lVar15 = CONCAT44(uStack_204,uStack_208);
      if (lVar15 != 0) {
        uStack_200 = uStack_208;
        local_1fc = uStack_204;
        lVar20 = CONCAT44(local_1f4,uStack_1f8) - lVar15;
        uVar14 = (**(code **)(*local_1f0 + 0xc0))(local_1f0);
        if ((uVar14 & 1) != 0) {
          lVar6 = tpidr_el0;
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar15,lVar20,4);
            goto LAB_01bbe7bc;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,lVar20,4);
      }
LAB_01bbe7bc:
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 *)(param_1 + 0x358) = 0x82a2b175229d6a5b;
      FUN_01bb3778(param_1);
      puVar9 = PTR_DAT_04379e80;
      puVar8 = PTR_DAT_04379e78;
      if ((param_2 & 1) != 0) {
        lVar15 = *(long *)(param_1 + 0x208);
        if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
          piVar1 = (int *)(lVar15 + 0xc);
          iVar11 = *(int *)(lVar15 + 0xc);
          do {
            plVar18 = *(long **)(lVar15 + 0x10);
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              uVar12 = FUN_0095a420();
              *(undefined8 *)puVar9 = uVar12;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar18 == (long *)0x0) goto LAB_01bbe7e0;
              if (plVar18 == (long *)puVar9) break;
              plVar18 = (long *)*plVar18;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01bbeaf8;
              lVar15 = *(long *)(lVar15 + 0x18);
              if (lVar15 != 0) {
                plVar18 = (long *)(lVar15 + -0x50);
                uVar3 = *(uint *)(lVar15 + 0x1c4);
                uVar2 = uVar3 & 0xfffffffb;
                bVar5 = (uVar3 != 0) == ((uVar3 & 0xfffffffb) != 0);
                if ((((uVar2 == uVar3) || (uVar2 != 0)) || (*(int *)(lVar15 + 0x1cc) == 0)) ||
                   (*(int *)(lVar15 + 0x1d4) == 0)) {
                  if (bVar5) goto LAB_01bbeb78;
LAB_01bbebec:
                  FUN_01bdbf3c(plVar18,uVar2);
                  *(uint *)(lVar15 + 0x1c4) = uVar2;
                }
                else {
                  if (!bVar5 || *(int *)(lVar15 + 0x1cc) == 1) goto LAB_01bbebec;
LAB_01bbeb78:
                  *(uint *)(lVar15 + 0x1c4) = uVar2;
                  if ((*(uint *)(lVar15 + 0x1c0) != uVar2) && (*(int *)(lVar15 + 0x1cc) == 0)) {
                    *(uint *)(lVar15 + 0x1c0) = uVar2;
                  }
                }
                lVar15 = *(long *)(lVar15 + 8);
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))(plVar18);
                }
              }
              break;
            }
            ClearExclusiveLocal();
LAB_01bbeaf8:
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_01bbe7e0:
        *(undefined1 *)(param_1 + 0x528) = 0;
        FUN_01bb5868(&local_228,param_1);
        FUN_00b08e00(&local_230,&local_228);
        puVar13 = local_228;
        if (local_228 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_228 + 1);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            local_228[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_58 = (long *)*puVar13;
            FUN_02a44274(lVar15 + 0xd8,&local_58);
          }
        }
        if (local_230 != (long *)0x0) {
          local_228 = (undefined8 *)&DAT_afc4d6c05abef19e;
          pcStack_220 = "default";
          local_218 = 7;
          local_210 = 0;
          uStack_20c = 0;
          FUN_028a0124(local_230,1,&local_228);
          if ((long *)CONCAT44(uStack_20c,local_210) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(uStack_20c,local_210) + 0x20))();
          }
        }
        FUN_016c24d0(&local_58,param_1 + 0x540);
        plVar18 = local_58;
        if (local_58 != (long *)0x0) {
          pbVar7 = PTR_DAT_0437a6d8;
          puVar13 = (undefined8 *)PTR_DAT_0437a6e0;
          for (plVar19 = (long *)local_58[0x58]; PTR_DAT_0437a6d8 = pbVar7,
              PTR_DAT_0437a6e0 = (undefined *)puVar13, plVar19 != (long *)0x0;
              plVar19 = (long *)*plVar19) {
            *(uint *)(plVar19 + 3) = *(uint *)(plVar19 + 3) & 0xffffffef;
            FUN_01839500(plVar18);
            pbVar7 = PTR_DAT_0437a6d8;
            puVar13 = (undefined8 *)PTR_DAT_0437a6e0;
          }
          lVar15 = *(long *)(param_1 + 0x570);
          if (lVar15 == 0) {
            *(undefined8 *)(param_1 + 0x570) = 0;
          }
          else {
            if (*(int *)(lVar15 + 0xc) != 0) {
              piVar1 = (int *)(lVar15 + 0xc);
              iVar11 = *(int *)(lVar15 + 0xc);
              do {
                plVar18 = *(long **)(lVar15 + 0x10);
                if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar7), iVar10 != 0)) {
                  uVar12 = FUN_00ad3750();
                  *puVar13 = uVar12;
                  __cxa_guard_release(pbVar7);
                }
                while( true ) {
                  if (plVar18 == (long *)0x0) goto LAB_01bbeca0;
                  if (plVar18 == puVar13) break;
                  plVar18 = (long *)*plVar18;
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar15 = *(long *)(lVar15 + 0x18);
                    if (lVar15 != 0) {
                      plVar18 = (long *)(lVar15 + -0x50);
                      FUN_02c90d40(plVar18);
                      lVar15 = *(long *)(lVar15 + 8);
                      piVar1 = (int *)(lVar15 + 0xc);
                      do {
                        iVar11 = *piVar1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar5) {
                          *piVar1 = iVar11 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar11 + -1 == 0) {
                        *(undefined8 *)(lVar15 + 0x18) = 0;
                        (**(code **)(*plVar18 + 0x20))(plVar18);
                      }
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar10;
              } while (iVar10 != 0);
            }
LAB_01bbeca0:
            puVar13 = *(undefined8 **)(param_1 + 0x570);
            *(undefined8 *)(param_1 + 0x570) = 0;
            if (puVar13 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar13 + 1);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                puVar13[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_228 = (undefined8 *)*puVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_228);
              }
            }
          }
          *(undefined8 *)(param_1 + 0x578) = 0;
          *(undefined1 *)(param_1 + 0x5b8) = 0;
          if (local_58 != (long *)0x0) {
            lVar15 = local_58[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
        if (local_230 != (long *)0x0) {
          lVar15 = local_230[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_230 + 0x20))();
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


