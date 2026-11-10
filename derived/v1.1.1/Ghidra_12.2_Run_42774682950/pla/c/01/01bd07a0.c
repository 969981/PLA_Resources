/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bd07a0; name: FUN_01bd07a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd07a0(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long *local_390 [41];
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined4 local_214;
  long *local_210 [2];
  long *local_200;
  long *local_1f8 [3];
  long *local_1e0;
  long *local_68;
  
  if (*(long *)(param_1 + 0x200) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x200) + 0xc) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x200) == 0) {
    local_68 = (long *)0x0;
LAB_01bd07e8:
    auVar21 = ZEXT816(0);
  }
  else {
    FUN_00cfac20(&local_68);
    if (local_68 == (long *)0x0) goto LAB_01bd07e8;
    uVar15 = FUN_01aeda38();
    if (((uVar15 & 1) == 0) || (FUN_01aeda18(local_390,local_68), local_390[0] == (long *)0x0)) {
LAB_01bd0a44:
      FUN_01aebaa8(local_1f8,local_68);
      if (local_1f8[0] != (long *)0x0) {
        FUN_009d0e68(local_390);
        plVar19 = local_1f8[0];
        plVar20 = local_390[0];
        if (local_1f8[0] != (long *)0x0) {
          plVar2 = local_1f8[0] + 1;
          do {
            iVar13 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_1f8[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_390[0] = (long *)*plVar19;
            FUN_02a44274(lVar17 + 0xd8,local_390);
          }
        }
        if (plVar20 != (long *)0x0) {
          local_214 = 0;
          local_224 = 0;
          uStack_21c = 0;
          local_234 = 0;
          uStack_22c = 0;
          local_244 = 0;
          uStack_23c = 0;
          memset(local_390,0,0x149);
          if (plVar20[0x3e] == 0) {
LAB_01bd0c78:
            local_210[0] = (long *)0x0;
LAB_01bd0c7c:
            auVar21 = ZEXT816(0);
          }
          else {
            FUN_01b014c0(local_1f8,plVar20[0x3e] + 0xd0);
            FUN_01b0138c(local_390,local_1f8);
            FUN_01aebac0(local_1f8);
            if (local_390[0] == (long *)0x0) goto LAB_01bd0c78;
            FUN_0095dafc(local_210);
            plVar19 = local_210[0];
            if (local_210[0] == (long *)0x0) goto LAB_01bd0c7c;
            FUN_02a4754c(local_1f8,&DAT_04245748);
            auVar21 = FUN_01a9a884(plVar19,local_1f8);
            if (local_1e0 != (long *)0x0) {
              (**(code **)(*local_1e0 + 0x20))();
            }
            if (local_210[0] != (long *)0x0) {
              lVar17 = local_210[0][0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_210[0] + 0x20))();
              }
            }
          }
          FUN_01aebac0(local_390);
          lVar17 = plVar20[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          goto joined_r0x01bd0cc0;
        }
      }
      auVar21 = ZEXT816(0);
    }
    else {
      FUN_00959eac(&local_200);
      plVar20 = local_390[0];
      if (local_200 == (long *)0x0) {
joined_r0x01bd0b04:
        local_390[0] = plVar20;
        if (plVar20 != (long *)0x0) {
          plVar19 = plVar20 + 1;
          do {
            iVar13 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            plVar20[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_1f8[0] = (long *)*plVar20;
            FUN_02a44274(lVar17 + 0xd8,local_1f8);
          }
        }
        goto LAB_01bd0a44;
      }
      iVar13 = FUN_0267081c();
      if (iVar13 != 1) {
        plVar20 = local_390[0];
        if (local_200 != (long *)0x0) {
          lVar17 = local_200[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_200 + 0x20))();
            plVar20 = local_390[0];
          }
        }
        goto joined_r0x01bd0b04;
      }
      FUN_01a73640(local_210,local_200);
      plVar20 = local_210[0];
      puVar12 = PTR_DAT_04379e90;
      puVar11 = PTR_DAT_04379e88;
      puVar10 = PTR_DAT_043795e0;
      puVar9 = PTR_DAT_043795d8;
      puVar8 = PTR_DAT_043794d0;
      if (local_210[0] == (long *)0x0) {
        auVar21 = ZEXT816(0);
      }
      else {
        auVar21 = ZEXT816(0);
        if (*(int *)((long)local_210[0] + 0xc) != 0) {
          piVar1 = (int *)((long)local_210[0] + 0xc);
          iVar13 = *(int *)((long)local_210[0] + 0xc);
          do {
            plVar19 = (long *)plVar20[2];
            if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                  uVar16 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                  __cxa_guard_release(puVar8);
                }
                *(undefined **)puVar10 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)puVar12 = puVar10;
              __cxa_guard_release(puVar11);
            }
            while( true ) {
              auVar21 = ZEXT816(0);
              if (plVar19 == (long *)0x0) goto LAB_01bd0f2c;
              if (plVar19 == (long *)puVar12) break;
              plVar19 = (long *)*plVar19;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar13) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar17 = plVar20[3];
                auVar21 = ZEXT816(0);
                if (lVar17 != 0) {
                  plVar20 = (long *)(lVar17 + -0x50);
                  FUN_02a4754c(local_1f8,&DAT_04245748);
                  auVar21 = FUN_01a9a884(plVar20,local_1f8);
                  if (local_1e0 != (long *)0x0) {
                    (**(code **)(*local_1e0 + 0x20))();
                  }
                  lVar17 = *(long *)(lVar17 + 8);
                  piVar1 = (int *)(lVar17 + 0xc);
                  do {
                    iVar13 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar13 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar13 + -1 == 0) {
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*plVar20 + 0x20))(plVar20);
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = iVar14;
            auVar21 = ZEXT816(0);
          } while (iVar14 != 0);
        }
LAB_01bd0f2c:
        plVar20 = local_210[0];
        if (local_210[0] != (long *)0x0) {
          plVar19 = local_210[0] + 1;
          do {
            iVar13 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_210[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_1f8[0] = (long *)*plVar20;
            FUN_02a44274(lVar17 + 0xd8,local_1f8);
          }
        }
      }
      if (local_200 != (long *)0x0) {
        lVar17 = local_200[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_200 + 0x20))();
        }
      }
      plVar20 = local_390[0];
      if (local_390[0] != (long *)0x0) {
        plVar19 = local_390[0] + 1;
        do {
          iVar13 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          local_390[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_1f8[0] = (long *)*plVar20;
          FUN_02a44274(lVar17 + 0xd8,local_1f8);
        }
      }
    }
joined_r0x01bd0cc0:
    if (local_68 != (long *)0x0) {
      lVar17 = local_68[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  iVar14 = *(int *)(param_1 + 0x280);
  iVar13 = iVar14 + 1;
  *(int *)(param_1 + 0x280) = iVar13;
  iVar3 = *(int *)(param_1 + 0x284);
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else {
    piVar1 = (int *)(param_1 + 0x280);
    if (iVar3 <= iVar14) {
      piVar1 = (int *)(param_1 + 0x284);
    }
    iVar13 = *piVar1;
  }
  *(int *)(param_1 + 0x280) = iVar13;
  if ((0 < iVar3) && (fVar22 = (float)iVar13 / (float)iVar3, fVar22 < 1.0)) {
    fVar23 = (float)*(undefined8 *)(param_1 + 0x290);
    fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x290) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x298);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x298) >> 0x20);
    FUN_009c69bc(local_1f8,param_1);
    *(undefined1 *)(local_1f8[0] + 0x1c) = 1;
    local_1f8[0][0x1b] =
         CONCAT44(fVar26 + (auVar21._12_4_ - fVar26) * fVar22,
                  fVar25 + (auVar21._8_4_ - fVar25) * fVar22);
    local_1f8[0][0x1a] =
         CONCAT44(fVar24 + (auVar21._4_4_ - fVar24) * fVar22,
                  fVar23 + (auVar21._0_4_ - fVar23) * fVar22);
    if (local_1f8[0] != (long *)0x0) {
      lVar17 = local_1f8[0][0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_1f8[0] + 0x20))();
      }
    }
    fVar22 = 1.0 - fVar22;
    FUN_009c69bc(local_1f8,param_1);
    fVar23 = (float)_DAT_03888fc0;
    uVar15 = (ulong)_DAT_03888fc0 >> 0x20;
    local_1f8[0][0x17] =
         CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar22,(float)_UNK_03888fc8 * fVar22);
    local_1f8[0][0x16] = CONCAT44((float)uVar15 * fVar22,fVar23 * fVar22);
    *(undefined1 *)(local_1f8[0] + 0x1c) = 1;
    if (local_1f8[0] == (long *)0x0) {
      return;
    }
    lVar17 = local_1f8[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_1f8[0] + 0x20))();
      return;
    }
    return;
  }
  FUN_009c69bc(local_1f8,param_1);
  *(undefined1 *)(local_1f8[0] + 0x1c) = 1;
  *(undefined1 (*) [16])(local_1f8[0] + 0x1a) = auVar21;
  if (local_1f8[0] != (long *)0x0) {
    lVar17 = local_1f8[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_1f8[0] + 0x20))();
    }
  }
  FUN_009c69bc(local_1f8,param_1);
  local_1f8[0][0x16] = 0;
  local_1f8[0][0x17] = 0;
  *(undefined1 *)(local_1f8[0] + 0x1c) = 1;
  if (local_1f8[0] == (long *)0x0) {
LAB_01bd0984:
    lVar17 = *(long *)(param_1 + 0x220);
    pbVar6 = PTR_DAT_0437a6d8;
    puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
  }
  else {
    lVar17 = local_1f8[0][0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 != 0) goto LAB_01bd0984;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*local_1f8[0] + 0x20))();
    lVar17 = *(long *)(param_1 + 0x220);
    pbVar6 = PTR_DAT_0437a6d8;
    puVar7 = (undefined8 *)PTR_DAT_0437a6e0;
  }
  PTR_DAT_0437a6d8 = pbVar6;
  PTR_DAT_0437a6e0 = (undefined *)puVar7;
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar13 = *(int *)(lVar17 + 0xc);
    do {
      plVar20 = *(long **)(lVar17 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar6), iVar14 != 0)) {
        uVar16 = FUN_00ad3750();
        *puVar7 = uVar16;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_01bd098c;
        if (plVar20 == puVar7) break;
        plVar20 = (long *)*plVar20;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar20 = (long *)(lVar17 + -0x50);
            FUN_02c90d40(plVar20);
            *(undefined1 *)(param_1 + 0x278) = 0;
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar14;
    } while (iVar14 != 0);
  }
LAB_01bd098c:
  uVar15 = FUN_01bd144c(param_1,1);
  puVar9 = PTR_DAT_0437a6e0;
  puVar8 = PTR_DAT_0437a6d8;
  if ((((uVar15 & 1) == 0) && (lVar17 = *(long *)(param_1 + 0x230), lVar17 != 0)) &&
     (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar13 = *(int *)(lVar17 + 0xc);
    do {
      plVar20 = *(long **)(lVar17 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
        uVar16 = FUN_00ad3750();
        *(undefined8 *)puVar9 = uVar16;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_01bd09a4;
        if (plVar20 == (long *)puVar9) break;
        plVar20 = (long *)*plVar20;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar17 != 0) {
            plVar20 = (long *)(lVar17 + -0x50);
            FUN_02c90b50(plVar20,1);
            lVar18 = *(long *)(param_1 + 0x240);
            if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_01bd11c4;
            piVar1 = (int *)(lVar18 + 0xc);
            iVar13 = *(int *)(lVar18 + 0xc);
            goto LAB_01bd1238;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar14;
    } while (iVar14 != 0);
  }
LAB_01bd09a4:
  *(undefined4 *)(param_1 + 0x274) = 2;
  return;
  while( true ) {
    iVar14 = *piVar1;
    if (iVar14 == iVar13) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + -0x50);
          FUN_02a4754c(local_1f8,&DAT_04245760);
          FUN_0290b66c(plVar19,local_1f8,0);
          if (local_1e0 != (long *)0x0) {
            (**(code **)(*local_1e0 + 0x20))();
          }
          lVar18 = *(long *)(lVar18 + 8);
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar14;
    if (iVar14 == 0) break;
LAB_01bd1238:
    uVar15 = FUN_01bd1cd8(*(undefined8 *)(lVar18 + 0x10));
    if ((uVar15 & 1) == 0) break;
  }
LAB_01bd11c4:
  lVar17 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  goto LAB_01bd09a4;
}


