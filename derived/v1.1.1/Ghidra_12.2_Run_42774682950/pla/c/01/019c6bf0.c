/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c6bf0; name: FUN_019c6bf0
 */


void FUN_019c6bf0(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  char *pcVar22;
  char *pcVar23;
  undefined1 *local_350 [22];
  undefined8 local_2a0;
  int local_298;
  undefined8 auStack_290 [3];
  undefined1 local_278 [4];
  undefined4 local_274;
  undefined4 auStack_270 [8];
  undefined8 local_250;
  undefined1 local_248;
  undefined4 local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined8 local_220;
  undefined1 local_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  char local_200 [16];
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1d0;
  undefined4 local_1cc;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  char local_1a0;
  undefined4 local_19c;
  undefined1 *local_190;
  undefined1 *local_188;
  char local_170;
  undefined4 local_16c;
  char local_150 [176];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined4 local_74;
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar20 = *(long **)(lVar11 + 0x100);
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar5) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar21 = (long *)plVar20[0x20];
  if (plVar21 != (long *)0x0) {
    plVar10 = plVar21 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar21[0xe];
  if (plVar10 != (long *)0x0) {
    plVar19 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = (int)*plVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar19 = (long *)plVar10[0xb];
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  plVar10 = plVar21 + 10;
  do {
    iVar9 = (int)*plVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  plVar21 = plVar20 + 10;
  do {
    iVar9 = (int)*plVar21 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar5) {
      *(int *)plVar21 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if (1 < (ulong)plVar19[0x1e]) {
    uVar12 = 1;
    do {
      local_350[0] = &DAT_cbf29ce484222645;
      if (uVar12 < (ulong)(plVar19[0x21] - plVar19[0x20] >> 3)) {
        local_350[0] = *(undefined1 **)(plVar19[0x20] + uVar12 * 8);
      }
      FUN_016a9bac(local_150,plVar19,local_350);
      local_350[0] = &DAT_cbf29ce484222645;
      if (uVar12 < (ulong)(plVar19[0x21] - plVar19[0x20] >> 3)) {
        local_350[0] = *(undefined1 **)(plVar19[0x20] + uVar12 * 8);
      }
      FUN_016a9bac(local_200,plVar19,local_350);
      if (local_200[0] != '\0') {
        bVar5 = false;
        local_350[0] = (undefined1 *)((ulong)local_350[0] & 0xffffffffffffff00);
        local_2a0 = 0;
        local_298 = 0;
        auStack_290[2] = 0;
        local_278[0] = 0;
        auStack_270[3] = 0;
        local_274 = 0;
        auStack_270[0] = 0;
        auStack_270[1] = 0;
        auStack_270[2] = 0;
        local_250 = 0;
        local_248 = 0;
        local_234 = 0;
        local_244 = 0;
        uStack_240 = 0;
        uStack_23c = 0;
        uStack_238 = 0;
        local_220 = 0;
        local_218 = 0;
        local_204 = 0;
        local_214 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        uStack_208 = 0;
        if (local_1d0 == '\0') {
LAB_019c6e80:
          if (local_1a0 == '\0') goto LAB_019c6e88;
LAB_019c7090:
          if (((local_1c0 == &DAT_cbf29ce484222645) || (local_1b8 == &DAT_cbf29ce484222645)) ||
             (local_1c0 != *(undefined1 **)(param_1 + 0x68))) goto LAB_019c6e88;
          local_90 = 0;
          local_88 = local_88 & 0xffffff00;
          local_74 = 0;
          uStack_84 = 0;
          puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffff00000000);
          uVar15 = FUN_019c6488(param_1,local_1b8,&local_a0);
          uVar8 = local_90;
          uVar7 = local_98;
          if ((uVar15 & 1) != 0) {
            uStack_84 = local_19c;
            lVar11 = (long)local_298;
            auStack_290[lVar11 * 6] = local_a0;
            auStack_290[lVar11 * 6 + 1] = uVar7;
            uVar7 = CONCAT44(uStack_84,local_88);
            auStack_290[lVar11 * 6 + 2] = uVar8;
            *(undefined8 *)(local_278 + lVar11 * 0x30) = uVar7;
            FUN_019c86bc(auStack_270 + lVar11 * 0xc,&puStack_80);
            local_298 = local_298 + 1;
            bVar5 = true;
          }
          puVar18 = puStack_80;
          if (puStack_80 == (undefined8 *)0x0) goto LAB_019c6e88;
          piVar2 = (int *)(puStack_80 + 1);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 != 0) goto LAB_019c6e88;
          puStack_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_70[0] = *puVar18;
          FUN_02a44274(lVar11 + 0xd8,local_70);
          if (local_170 != '\0') goto LAB_019c7144;
joined_r0x019c71f4:
          if (!bVar5) goto LAB_019c6e94;
LAB_019c71f8:
          lVar11 = param_2[1];
          plVar20 = param_2 + 3;
          if (lVar11 == param_2[2]) {
            lVar11 = lVar11 - *param_2 >> 4;
            uVar15 = param_2[4];
            if (0x7ffffffffffffffe < uVar15) {
              uVar15 = 0x7fffffffffffffff;
            }
            uVar3 = lVar11 * -0x30c30c30c30c30c3 + 1;
            if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar13 = param_2[2] - *param_2 >> 4;
            uVar14 = lVar13 * -0x6186186186186186;
            if (uVar3 <= uVar14) {
              uVar3 = uVar14;
            }
            if ((ulong)(lVar13 * -0x30c30c30c30c30c3) < uVar15 >> 1) {
              uVar15 = uVar3;
            }
            if (uVar15 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (**(code **)(*(long *)*plVar20 + 0x10))((long *)*plVar20,uVar15 * 0x150,0x10)
              ;
              if (lVar13 == 0) {
                (**(code **)(*(long *)*plVar20 + 0xb8))();
              }
            }
            lVar17 = lVar13 + lVar11 * 0x10;
            FUN_019c9384(plVar20,lVar17,local_350);
            lVar11 = lVar17 + 0x150;
            pcVar16 = (char *)*param_2;
            pcVar22 = (char *)param_2[1];
            if (pcVar22 == pcVar16) {
              pcVar22 = pcVar16;
            }
            else {
              do {
                lVar17 = lVar17 + -0x150;
                pcVar22 = pcVar22 + -0x150;
                FUN_019c9384(plVar20,lVar17,pcVar22);
              } while (pcVar16 != pcVar22);
              pcVar22 = (char *)*param_2;
              pcVar16 = (char *)param_2[1];
            }
            *param_2 = lVar17;
            param_2[1] = lVar11;
            lVar11 = param_2[2];
            param_2[2] = lVar13 + uVar15 * 0x150;
            while (pcVar16 != pcVar22) {
              puVar18 = *(undefined8 **)(pcVar16 + -0x10);
              if (puVar18 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar18 + 1);
                do {
                  iVar9 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar18[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_a0 = *puVar18;
                  FUN_02a44274(lVar13 + 0xd8,&local_a0);
                }
              }
              puVar18 = *(undefined8 **)(pcVar16 + -0x40);
              pcVar23 = pcVar16 + -0x150;
              if (puVar18 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar18 + 1);
                do {
                  iVar9 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar18[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_a0 = *puVar18;
                  FUN_02a44274(lVar13 + 0xd8,&local_a0);
                }
              }
              puVar18 = *(undefined8 **)(pcVar16 + -0x70);
              if (puVar18 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar18 + 1);
                do {
                  iVar9 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar18[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_a0 = *puVar18;
                  FUN_02a44274(lVar13 + 0xd8,&local_a0);
                }
              }
              pcVar16 = pcVar23;
              if (*pcVar23 != '\0') {
                *pcVar23 = '\0';
              }
            }
            if (pcVar22 == (char *)0x0) goto LAB_019c6e94;
            plVar20 = (long *)*plVar20;
            uVar15 = (**(code **)(*plVar20 + 0xc0))();
            if ((uVar15 & 1) != 0) {
              lVar13 = tpidr_el0;
              if (*(char *)(lVar13 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar13 + 0x38d488) = 1;
                *(undefined8 *)(lVar13 + 0x38d478) = 0;
                *(undefined8 *)(lVar13 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar13 + 0x38d480)) {
                FUN_02bcc824(plVar20,pcVar22,lVar11 - (long)pcVar22,0x10);
                puVar18 = (undefined8 *)CONCAT44(uStack_20c,uStack_210);
                goto joined_r0x019c74c8;
              }
            }
            (**(code **)(*plVar20 + 0x18))(plVar20,pcVar22,lVar11 - (long)pcVar22,0x10);
            puVar18 = (undefined8 *)CONCAT44(uStack_20c,uStack_210);
          }
          else {
            FUN_019c9384(plVar20,lVar11,local_350);
            param_2[1] = param_2[1] + 0x150;
            puVar18 = (undefined8 *)CONCAT44(uStack_20c,uStack_210);
          }
        }
        else {
          if (((local_1f0 != &DAT_cbf29ce484222645) && (local_1e8 != &DAT_cbf29ce484222645)) &&
             (local_1f0 == *(undefined1 **)(param_1 + 0x68))) {
            local_90 = 0;
            local_88 = local_88 & 0xffffff00;
            local_74 = 0;
            uStack_84 = 0;
            puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffff00000000);
            uVar15 = FUN_019c6488(param_1,local_1e8,&local_a0);
            uVar8 = local_90;
            uVar7 = local_98;
            bVar5 = (uVar15 & 1) != 0;
            puVar18 = puStack_80;
            if (bVar5) {
              uStack_84 = local_1cc;
              lVar11 = (long)local_298;
              auStack_290[lVar11 * 6] = local_a0;
              auStack_290[lVar11 * 6 + 1] = uVar7;
              uVar7 = CONCAT44(uStack_84,local_88);
              auStack_290[lVar11 * 6 + 2] = uVar8;
              *(undefined8 *)(local_278 + lVar11 * 0x30) = uVar7;
              FUN_019c86bc(auStack_270 + lVar11 * 0xc,&puStack_80);
              local_298 = local_298 + 1;
              puVar18 = puStack_80;
            }
            puStack_80 = puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar18 + 1);
              do {
                iVar9 = *piVar2;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 + -1 == 0) {
                puVar18[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_70[0] = *puVar18;
                FUN_02a44274(lVar11 + 0xd8,local_70);
                goto joined_r0x019c7494;
              }
            }
            goto LAB_019c6e80;
          }
          bVar5 = false;
joined_r0x019c7494:
          if (local_1a0 != '\0') goto LAB_019c7090;
LAB_019c6e88:
          if (local_170 == '\0') goto joined_r0x019c71f4;
LAB_019c7144:
          if (((local_190 == &DAT_cbf29ce484222645) || (local_188 == &DAT_cbf29ce484222645)) ||
             (local_190 != *(undefined1 **)(param_1 + 0x68))) goto joined_r0x019c71f4;
          local_90 = 0;
          local_88 = local_88 & 0xffffff00;
          local_74 = 0;
          uStack_84 = 0;
          puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffff00000000);
          uVar15 = FUN_019c6488(param_1,local_188,&local_a0);
          uVar8 = local_90;
          uVar7 = local_98;
          if ((uVar15 & 1) != 0) {
            uStack_84 = local_16c;
            lVar11 = (long)local_298;
            auStack_290[lVar11 * 6] = local_a0;
            auStack_290[lVar11 * 6 + 1] = uVar7;
            uVar7 = CONCAT44(uStack_84,local_88);
            auStack_290[lVar11 * 6 + 2] = uVar8;
            *(undefined8 *)(local_278 + lVar11 * 0x30) = uVar7;
            FUN_019c86bc(auStack_270 + lVar11 * 0xc,&puStack_80);
            local_298 = local_298 + 1;
            bVar5 = true;
          }
          puVar18 = puStack_80;
          if (puStack_80 == (undefined8 *)0x0) goto joined_r0x019c71f4;
          piVar2 = (int *)(puStack_80 + 1);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 != 0) goto joined_r0x019c71f4;
          puStack_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_70[0] = *puVar18;
          FUN_02a44274(lVar11 + 0xd8,local_70);
          if (bVar5) goto LAB_019c71f8;
LAB_019c6e94:
          puVar18 = (undefined8 *)CONCAT44(uStack_20c,uStack_210);
        }
joined_r0x019c74c8:
        if (puVar18 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar18 + 1);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_a0 = *puVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_a0);
          }
        }
        puVar18 = (undefined8 *)CONCAT44(uStack_23c,uStack_240);
        if (puVar18 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar18 + 1);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_a0 = *puVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_a0);
          }
        }
        puVar18 = (undefined8 *)CONCAT44(auStack_270[1],auStack_270[0]);
        if (puVar18 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar18 + 1);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 + -1 == 0) {
            puVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_a0 = *puVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_a0);
          }
        }
        if ((char)local_350[0] != '\0') {
          local_350[0] = (undefined1 *)((ulong)local_350[0] & 0xffffffffffffff00);
        }
        if (local_200[0] != '\0') {
          local_200[0] = '\0';
        }
      }
      if (local_150[0] != '\0') {
        local_150[0] = '\0';
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)plVar19[0x1e]);
  }
  plVar20 = plVar19 + 10;
  do {
    iVar9 = (int)*plVar20 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *(int *)plVar20 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  return;
}


