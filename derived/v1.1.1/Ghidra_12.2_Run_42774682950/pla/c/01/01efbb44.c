/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01efbb44; name: FUN_01efbb44
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_01efbb44(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long *unaff_x22;
  long lVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  int iVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  int iVar52;
  undefined1 in_q3 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float local_200;
  undefined8 local_1f0;
  long *plStack_1e8;
  long *local_1d8;
  long *local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined1 local_1b0;
  long *local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  long *local_180;
  char *pcStack_178;
  undefined8 local_170;
  long *plStack_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_120;
  undefined4 local_118;
  long *local_110 [2];
  long *local_100 [2];
  long *local_f0 [2];
  undefined8 local_e0;
  long *local_d8 [2];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [8];
  long *plStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88 [3];
  
  uVar23 = (uint)unaff_x22;
  if (*(long *)(param_1 + 0xa8) == 0) {
    uVar20 = 0;
    local_1a0 = (long *)0x0;
    local_1f0 = 0;
    plStack_1e8 = (long *)0x0;
    uVar34 = 0;
    lVar28 = *(long *)(param_1 + 0x80);
    pbVar14 = PTR_DAT_043794d0;
    puVar31 = (undefined8 *)PTR_DAT_043794d8;
    pbVar15 = PTR_DAT_043796e0;
    puVar16 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    FUN_009b3e90(&local_1a0,*(long *)(param_1 + 0xa8));
    if (local_1a0 == (long *)0x0) {
      uVar20 = 0;
      local_1f0 = 0;
      plStack_1e8 = (long *)0x0;
      uVar34 = 0;
      lVar28 = *(long *)(param_1 + 0x80);
      pbVar14 = PTR_DAT_043794d0;
      puVar31 = (undefined8 *)PTR_DAT_043794d8;
      pbVar15 = PTR_DAT_043796e0;
      puVar16 = (undefined8 *)PTR_DAT_043796e8;
    }
    else {
      local_180 = (long *)0x0;
      pcStack_178 = (char *)0x0;
      FUN_009ab200(&local_180,local_1a0 + 0x68);
      plVar25 = local_180;
      if (local_180 == (long *)0x0) {
LAB_01efbbf0:
        uVar34 = 0;
        uVar20 = 0;
        plStack_1e8 = (long *)0x0;
        local_1f0 = 0;
      }
      else {
        if (*(int *)((long)local_180 + 0xc) != 0) {
          piVar1 = (int *)((long)local_180 + 0xc);
          iVar22 = *(int *)((long)local_180 + 0xc);
          do {
            unaff_x22 = (long *)plVar25[2];
            lVar28 = FUN_009ccde4();
            while( true ) {
              if (unaff_x22 == (long *)0x0) goto LAB_01efbe04;
              if (unaff_x22 == (long *)lVar28) break;
              unaff_x22 = (long *)*unaff_x22;
            }
            iVar21 = *piVar1;
            if (iVar21 == iVar22) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar22 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar28 = plVar25[3];
                plVar25 = (long *)0x0;
                plVar26 = local_180;
                if (lVar28 != 0) {
                  plVar25 = (long *)(lVar28 + -0x50);
                }
                goto joined_r0x01efbcfc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar22 = iVar21;
          } while (iVar21 != 0);
        }
LAB_01efbe04:
        plVar25 = (long *)0x0;
        plVar26 = local_180;
joined_r0x01efbcfc:
        local_180 = plVar26;
        if (plVar26 != (long *)0x0) {
          plVar2 = plVar26 + 1;
          do {
            iVar22 = (int)*plVar2 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar22;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar22 == 0) {
            plVar26[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar28 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar28;
            local_1d0 = (long *)*plVar26;
            FUN_02a44274(lVar28 + 0xd8,&local_1d0);
          }
        }
        if (plVar25 == (long *)0x0) goto LAB_01efbbf0;
        FUN_009c69bc(&local_180,plVar25);
        (**(code **)(*local_180 + 0x40))();
        plStack_1e8 = in_q3._8_8_;
        local_1f0 = in_q3._0_8_;
        if (local_180 != (long *)0x0) {
          lVar28 = local_180[0xb];
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar22 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar22 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*local_180 + 0x20))();
          }
        }
        uVar34 = FUN_01a75574(plVar25);
        local_180 = (long *)0x0;
        pcStack_178 = (char *)0x0;
        FUN_00ac3fa4(&local_180,plVar25 + 0x49);
        plVar26 = local_180;
        puVar19 = PTR_DAT_04379e90;
        puVar18 = PTR_DAT_04379e88;
        puVar17 = PTR_DAT_043794d0;
        if (local_180 == (long *)0x0) {
LAB_01efbdc4:
          uVar20 = 0;
        }
        else {
          if (*(int *)((long)local_180 + 0xc) != 0) {
            piVar1 = (int *)((long)local_180 + 0xc);
            iVar22 = *(int *)((long)local_180 + 0xc);
            do {
              puVar31 = (undefined8 *)plVar26[2];
              if (((*puVar18 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar18), iVar21 != 0)) {
                if (((*PTR_DAT_043795d8 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar21 != 0)) {
                  if (((*puVar17 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar17), iVar21 != 0))
                  {
                    uVar24 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar24;
                    __cxa_guard_release(puVar17);
                  }
                  *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043795d8);
                }
                *(undefined **)puVar19 = PTR_DAT_043795e0;
                __cxa_guard_release(puVar18);
              }
              plVar2 = (long *)0x0;
              unaff_x22 = (long *)puVar17;
              plVar29 = local_180;
              if (puVar31 == (undefined8 *)0x0) goto joined_r0x01efbfb0;
              while (puVar31 != (undefined8 *)puVar19) {
                puVar31 = (undefined8 *)*puVar31;
                if (puVar31 == (undefined8 *)0x0) {
                  plVar2 = (long *)0x0;
                  goto joined_r0x01efbfb0;
                }
              }
              iVar21 = *piVar1;
              if (iVar21 == iVar22) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar22 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  lVar28 = plVar26[3];
                  plVar2 = (long *)0x0;
                  if (lVar28 != 0) {
                    plVar2 = (long *)(lVar28 + -0x50);
                  }
                  goto joined_r0x01efbfb0;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar22 = iVar21;
            } while (iVar21 != 0);
          }
          plVar2 = (long *)0x0;
          plVar29 = local_180;
joined_r0x01efbfb0:
          local_180 = plVar29;
          if (plVar29 != (long *)0x0) {
            plVar26 = plVar29 + 1;
            do {
              iVar22 = (int)*plVar26 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *(int *)plVar26 = iVar22;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar22 == 0) {
              plVar29[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar28 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar28;
              local_1d0 = (long *)*plVar29;
              FUN_02a44274(lVar28 + 0xd8,&local_1d0);
            }
          }
          if (plVar2 == (long *)0x0) goto LAB_01efbdc4;
          uVar20 = (**(code **)(*plVar2 + 0x218))(plVar2);
          lVar28 = plVar2[0xb];
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar22 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar22 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
        }
        lVar28 = plVar25[0xb];
        piVar1 = (int *)(lVar28 + 0xc);
        do {
          iVar22 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar22 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*plVar25 + 0x20))(plVar25);
        }
      }
      if (local_1a0 != (long *)0x0) {
        lVar28 = local_1a0[0xb];
        piVar1 = (int *)(lVar28 + 0xc);
        do {
          iVar22 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar22 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*local_1a0 + 0x20))();
        }
      }
      uVar23 = (uint)unaff_x22;
      lVar28 = *(long *)(param_1 + 0x80);
      pbVar14 = PTR_DAT_043794d0;
      puVar31 = (undefined8 *)PTR_DAT_043794d8;
      pbVar15 = PTR_DAT_043796e0;
      puVar16 = (undefined8 *)PTR_DAT_043796e8;
    }
  }
  PTR_DAT_043794d0 = pbVar14;
  PTR_DAT_043794d8 = (undefined *)puVar31;
  PTR_DAT_043796e0 = pbVar15;
  PTR_DAT_043796e8 = (undefined *)puVar16;
  if (lVar28 != 0) {
    uVar23 = (uint)unaff_x22;
    if (*(int *)(lVar28 + 0xc) != 0) {
      piVar1 = (int *)(lVar28 + 0xc);
      iVar22 = *(int *)(lVar28 + 0xc);
      do {
        puVar30 = *(undefined8 **)(lVar28 + 0x10);
        if (((*pbVar15 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar15), iVar21 != 0)) {
          if (((*pbVar14 & 1) == 0) && (iVar21 = __cxa_guard_acquire(pbVar14), iVar21 != 0)) {
            uVar24 = FUN_0087f8f0();
            *puVar31 = uVar24;
            __cxa_guard_release(pbVar14);
          }
          *puVar16 = puVar31;
          __cxa_guard_release(pbVar15);
        }
        if (puVar30 == (undefined8 *)0x0) goto LAB_01efbb88;
        while (puVar30 != puVar16) {
          puVar30 = (undefined8 *)*puVar30;
          bVar13 = 0;
          if (puVar30 == (undefined8 *)0x0) goto LAB_01efbb8c;
        }
        iVar21 = *piVar1;
        if (iVar21 == iVar22) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar28 = *(long *)(lVar28 + 0x18);
            if (lVar28 == 0) goto LAB_01efbb88;
            plVar25 = (long *)(lVar28 + -0x50);
            FUN_0199c138(&local_90,plVar25);
            puVar18 = PTR_DAT_04382138;
            puVar17 = PTR_DAT_04382130;
            if (local_90 == (long *)0x0) goto LAB_01efc184;
            lVar27 = *(long *)(param_1 + 0x98);
            if ((lVar27 == 0) || (*(int *)(lVar27 + 0xc) == 0)) goto LAB_01efc0fc;
            piVar1 = (int *)(lVar27 + 0xc);
            iVar22 = *(int *)(lVar27 + 0xc);
            goto LAB_01efc208;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        bVar13 = 0;
        iVar22 = iVar21;
      } while (iVar21 != 0);
      goto LAB_01efbb8c;
    }
  }
LAB_01efbb88:
  bVar13 = 0;
LAB_01efbb8c:
  return uVar23 & bVar13;
LAB_01efc208:
  puVar31 = *(undefined8 **)(lVar27 + 0x10);
  if (((*puVar17 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar17), iVar21 != 0)) {
    uVar24 = FUN_01913b5c();
    *(undefined8 *)puVar18 = uVar24;
    __cxa_guard_release(puVar17);
  }
  if (puVar31 == (undefined8 *)0x0) goto LAB_01efc0fc;
  while( true ) {
    auVar48._8_8_ = plStack_a8;
    auVar48._0_8_ = local_b0;
    if (puVar31 == (undefined8 *)puVar18) break;
    puVar31 = (undefined8 *)*puVar31;
    plVar26 = (long *)0x0;
    _local_b0 = auVar48;
    if (puVar31 == (undefined8 *)0x0) goto LAB_01efc22c;
  }
  iVar21 = *piVar1;
  if (iVar21 == iVar22) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar22 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01efc2e8;
    plVar26 = (long *)(*(long *)(lVar27 + 0x18) + -0x50);
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_01efc0fc;
    FUN_01ad257c(&local_180,plVar26);
    if (local_180 == (long *)0x0) {
      local_98 = (long *)0x0;
    }
    else {
      FUN_009b3e90(&local_98);
      plVar2 = local_180;
      if (local_180 != (long *)0x0) {
        plVar29 = local_180 + 1;
        do {
          iVar22 = (int)*plVar29 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = iVar22;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar22 == 0) {
          local_180[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar27 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar27;
          local_1d0 = (long *)*plVar2;
          FUN_02a44274(lVar27 + 0xd8,&local_1d0);
          if (local_98 == (long *)0x0) goto LAB_01efc2ac;
LAB_01efc294:
          local_180 = (long *)0x0;
          pcStack_178 = (char *)0x0;
          FUN_009ab200(&local_180,local_98 + 0x68);
          plVar2 = local_180;
          puVar18 = PTR_DAT_0437a2c8;
          puVar17 = PTR_DAT_0437a2c0;
          if (local_180 == (long *)0x0) goto LAB_01efc2ac;
          if (*(int *)((long)local_180 + 0xc) == 0) {
LAB_01efc484:
            plVar2 = (long *)0x0;
            puVar17 = (undefined *)unaff_x22;
            plVar29 = local_180;
          }
          else {
            piVar1 = (int *)((long)local_180 + 0xc);
            iVar22 = *(int *)((long)local_180 + 0xc);
            while( true ) {
              plVar29 = (long *)plVar2[2];
              if (((*puVar17 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar17), iVar21 != 0)) {
                uVar24 = FUN_009ccde4();
                *(undefined8 *)puVar18 = uVar24;
                __cxa_guard_release(puVar17);
              }
              while( true ) {
                unaff_x22 = (long *)puVar17;
                if (plVar29 == (long *)0x0) goto LAB_01efc484;
                if (plVar29 == (long *)puVar18) break;
                plVar29 = (long *)*plVar29;
              }
              iVar21 = *piVar1;
              if (iVar21 == iVar22) break;
              ClearExclusiveLocal();
LAB_01efc47c:
              iVar22 = iVar21;
              if (iVar21 == 0) goto LAB_01efc484;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar22 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01efc47c;
            lVar27 = plVar2[3];
            plVar2 = (long *)0x0;
            plVar29 = local_180;
            if (lVar27 != 0) {
              plVar2 = (long *)(lVar27 + -0x50);
            }
          }
          local_180 = plVar29;
          if (plVar29 != (long *)0x0) {
            plVar3 = plVar29 + 1;
            do {
              iVar22 = (int)*plVar3 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar22;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar22 == 0) {
              plVar29[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar27 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar27;
              local_1d0 = (long *)*plVar29;
              FUN_02a44274(lVar27 + 0xd8,&local_1d0);
            }
          }
          uVar23 = (uint)puVar17;
          if (plVar2 == (long *)0x0) goto LAB_01efc2ac;
          local_180 = (long *)0x0;
          pcStack_178 = (char *)0x0;
          FUN_00ac3fa4(&local_180,plVar2 + 0x49);
          if (local_180 == (long *)0x0) {
            local_a0 = (long *)0x0;
LAB_01efc794:
            bVar6 = false;
          }
          else {
            FUN_00bd915c(&local_a0);
            plVar29 = local_180;
            if (local_180 != (long *)0x0) {
              plVar3 = local_180 + 1;
              do {
                iVar22 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar22;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar22 == 0) {
                local_180[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar27 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar27;
                local_1d0 = (long *)*plVar29;
                FUN_02a44274(lVar27 + 0xd8,&local_1d0);
              }
            }
            puVar18 = PTR_DAT_04379668;
            puVar17 = PTR_DAT_04379660;
            if (local_a0 == (long *)0x0) goto LAB_01efc794;
            local_b0 = (undefined1  [8])0x0;
            plStack_a8 = (long *)0x0;
            fVar36 = (float)local_1f0;
            fVar38 = SUB84(plStack_1e8,0);
            fVar40 = (float)((ulong)plStack_1e8 >> 0x20);
            if ((param_2 & 1) == 0) {
              FUN_01792e28(&local_180);
              pcStack_178 = *(char **)(param_1 + 200);
              local_180 = *(long **)(param_1 + 0xc0);
              local_c0 = 1;
              local_120 = 1;
              local_118 = *(undefined4 *)(param_1 + 0xd8);
              local_170 = local_1f0;
              plStack_168 = plStack_1e8;
              local_15c = uVar34;
              FUN_00b63974(local_110,param_1 + 0xe0);
              FUN_00cfa028(local_100,param_1 + 0xf0);
              FUN_0095aa3c(local_f0,param_1 + 0x100);
              local_e0 = *(undefined8 *)(param_1 + 0x110);
              FUN_00bd10a0(local_d8,param_1 + 0x118);
              local_c8 = *(undefined1 *)(param_1 + 0x128);
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_1a0 = (long *)0x32c06e5ba5fa9d59;
              pcStack_198 = "ball_out_base_distance";
              local_190 = 0x16;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_158 = 0;
              }
              else {
                local_158 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0x7a304f1f4324ac1e;
              pcStack_198 = "ball_out_check_distance";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x17;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_154 = 0;
              }
              else {
                local_154 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0x37f0472aeb07c98;
              pcStack_198 = "ball_out_check_count";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x14;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_150 = 0;
              }
              else {
                local_150 = FUN_00d78f50(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0x99e5a61f80bc3f47;
              pcStack_198 = "ball_out_division_count";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x17;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_14c = 0;
              }
              else {
                local_14c = FUN_00d78f50(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0x1cf1f28d4ac73ee5;
              pcStack_198 = "ball_out_check_range_upper";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1a;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_148 = 0;
              }
              else {
                local_148 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0xb963c082ad634f90;
              pcStack_198 = "ball_out_check_range_lower";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1a;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_144 = 0;
              }
              else {
                local_144 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0xb2f97a1a5ea42845;
              pcStack_198 = "ball_out_player_to_buddy_distance_rate";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x26;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_140 = 0;
              }
              else {
                local_140 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0xa2a82d13a8460dc;
              pcStack_198 = "ball_out_check_start_angle_min";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1e;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_13c = 0;
              }
              else {
                local_13c = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0xa0f70d13a6d7a8e;
              pcStack_198 = "ball_out_check_start_angle_max";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1e;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_138 = 0;
              }
              else {
                local_138 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)0xde68744204b71aee;
              pcStack_198 = "ball_out_behind_player_ng_angle";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1f;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_130 = 0;
              }
              else {
                local_130 = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              local_1c0 = 0xc;
              local_1b8 = (long *)0x0;
              local_1a0 = (long *)&DAT_c3da4c07d449d422;
              pcStack_198 = "ball_out_behind_player_geta";
              local_1d0 = (long *)0x3fcacef0ae21359e;
              pcStack_1c8 = "buddy_battle";
              local_190 = 0x1b;
              local_188 = (long *)0x0;
              if (((*puVar17 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(local_88,uVar24,&local_1d0);
              if (local_88[0] == (long *)0x0) {
                local_12c = 0;
              }
              else {
                local_12c = FUN_00d7905c(local_88[0],&local_1a0);
                if (local_88[0] != (long *)0x0) {
                  plVar29 = local_88[0] + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_88[0] + 0x10))();
                  }
                }
              }
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              bVar6 = true;
              local_160 = 1;
              if ((uVar20 & 1) != 0) {
                local_160 = 2;
              }
              FUN_018d49c8(&local_1d0,plVar2,&local_180);
              if ((char)local_1d0 != '\0') {
                FUN_01a74a30(&local_1a0,plVar2);
                if (local_1a0 == (long *)0x0) {
                  local_1d8 = (long *)0x0;
                }
                else {
                  FUN_00ac64cc(&local_1d8);
                  plVar29 = local_1a0;
                  if (local_1a0 != (long *)0x0) {
                    plVar3 = local_1a0 + 1;
                    do {
                      iVar22 = (int)*plVar3 + -1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar6) {
                        *(int *)plVar3 = iVar22;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar22 == 0) {
                      local_1a0[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar27 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar27;
                      local_88[0] = (long *)*plVar29;
                      FUN_02a44274(lVar27 + 0xd8,local_88);
                    }
                  }
                  if ((local_1d8 != (long *)0x0) &&
                     (FUN_01819ccc(local_1d8,local_1b0), local_1d8 != (long *)0x0)) {
                    lVar27 = local_1d8[0xb];
                    piVar1 = (int *)(lVar27 + 0xc);
                    do {
                      iVar22 = *piVar1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar22 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar22 + -1 == 0) {
                      *(undefined8 *)(lVar27 + 0x18) = 0;
                      (**(code **)(*local_1d8 + 0x20))();
                    }
                  }
                }
                bVar6 = false;
                local_b0 = (undefined1  [8])local_1c0;
                plStack_a8 = local_1b8;
              }
              if (local_d8[0] != (long *)0x0) {
                plVar29 = local_d8[0] + 1;
                do {
                  iVar22 = (int)*plVar29 + -1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar22;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 == 0) {
                  local_d8[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar27 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar27;
                  local_1d0 = (long *)*local_d8[0];
                  FUN_02a44274(lVar27 + 0xd8,&local_1d0);
                }
              }
              if (local_f0[0] != (long *)0x0) {
                plVar29 = local_f0[0] + 1;
                do {
                  iVar22 = (int)*plVar29 + -1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar22;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 == 0) {
                  local_f0[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar27 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar27;
                  local_1d0 = (long *)*local_f0[0];
                  FUN_02a44274(lVar27 + 0xd8,&local_1d0);
                }
              }
              if (local_100[0] != (long *)0x0) {
                plVar29 = local_100[0] + 1;
                do {
                  iVar22 = (int)*plVar29 + -1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar22;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 == 0) {
                  local_100[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar27 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar27;
                  local_1d0 = (long *)*local_100[0];
                  FUN_02a44274(lVar27 + 0xd8,&local_1d0);
                }
              }
              if (local_110[0] != (long *)0x0) {
                plVar29 = local_110[0] + 1;
                do {
                  iVar22 = (int)*plVar29 + -1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar4) {
                    *(int *)plVar29 = iVar22;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 == 0) {
                  local_110[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar22 = __cxa_guard_acquire(PTR_DAT_04379498), iVar22 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar27 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar27;
                  local_1d0 = (long *)*local_110[0];
                  FUN_02a44274(lVar27 + 0xd8,&local_1d0);
                }
              }
              if (!bVar6) goto LAB_01efd7c0;
              uVar23 = 0;
            }
            else {
              local_180 = (long *)&DAT_8013c350d279d9f9;
              pcStack_178 = "battle_view";
              local_170 = 0xb;
              plStack_168 = (long *)0x0;
              local_1d0 = (long *)&DAT_aca2d85b0599b0c4;
              pcStack_1c8 = "KurebesuBattleDistance";
              local_1c0 = 0x16;
              local_1b8 = (long *)0x0;
              if (((*PTR_DAT_04379660 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(PTR_DAT_04379660), iVar22 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              uVar24 = *(undefined8 *)puVar18;
              *(undefined8 *)PTR_DAT_04379670 = uVar24;
              FUN_00d7d9e4(&local_1a0,uVar24,&local_180);
              if (local_1a0 == (long *)0x0) {
                local_200 = 0.0;
              }
              else {
                local_200 = (float)FUN_00d7905c(local_1a0,&local_1d0);
                if (local_1a0 != (long *)0x0) {
                  plVar29 = local_1a0 + 10;
                  do {
                    iVar22 = (int)*plVar29 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                    if (bVar6) {
                      *(int *)plVar29 = iVar22;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 == 0) {
                    (**(code **)(*local_1a0 + 0x10))();
                  }
                }
              }
              if (local_1b8 != (long *)0x0) {
                (**(code **)(*local_1b8 + 0x20))();
              }
              if (plStack_168 != (long *)0x0) {
                (**(code **)(*plStack_168 + 0x20))();
              }
              FUN_0199c138(&local_1d0,plVar25);
              FUN_009c69bc(&local_180,local_1d0);
              (**(code **)(*local_180 + 0x40))();
              if (local_180 != (long *)0x0) {
                lVar27 = local_180[0xb];
                piVar1 = (int *)(lVar27 + 0xc);
                do {
                  iVar22 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar22 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 + -1 == 0) {
                  *(undefined8 *)(lVar27 + 0x18) = 0;
                  (**(code **)(*local_180 + 0x20))();
                }
              }
              if (local_1d0 != (long *)0x0) {
                lVar27 = local_1d0[0xb];
                piVar1 = (int *)(lVar27 + 0xc);
                do {
                  iVar22 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar22 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar22 + -1 == 0) {
                  *(undefined8 *)(lVar27 + 0x18) = 0;
                  (**(code **)(*local_1d0 + 0x20))();
                }
              }
              fVar35 = in_q3._0_4_ - fVar36;
              fVar37 = in_q3._8_4_ - fVar38;
              fVar39 = in_q3._12_4_ - fVar40;
              fVar33 = fVar35 * fVar35;
              fVar51 = fVar37 * fVar37;
              uVar41 = (undefined1)((uint)fVar51 >> 8);
              uVar42 = (undefined1)((uint)fVar51 >> 0x10);
              uVar43 = (undefined1)((uint)fVar51 >> 0x18);
              fVar32 = fVar39 * fVar39;
              uVar44 = (undefined1)((uint)fVar32 >> 8);
              uVar45 = (undefined1)((uint)fVar32 >> 0x10);
              uVar46 = (undefined1)((uint)fVar32 >> 0x18);
              auVar57._4_4_ = 0;
              auVar57._0_4_ = fVar33;
              auVar57[8] = SUB41(fVar51,0);
              auVar57[9] = uVar41;
              auVar57[10] = uVar42;
              auVar57[0xb] = uVar43;
              auVar57[0xc] = SUB41(fVar32,0);
              auVar57[0xd] = uVar44;
              auVar57[0xe] = uVar45;
              auVar57[0xf] = uVar46;
              auVar10._4_4_ = 0;
              auVar10._0_4_ = fVar33;
              auVar10[8] = SUB41(fVar51,0);
              auVar10[9] = uVar41;
              auVar10[10] = uVar42;
              auVar10[0xb] = uVar43;
              auVar10[0xc] = SUB41(fVar32,0);
              auVar10[0xd] = uVar44;
              auVar10[0xe] = uVar45;
              auVar10[0xf] = uVar46;
              auVar48 = NEON_ext(auVar57,auVar10,8,1);
              fVar33 = auVar48._0_4_ + fVar33;
              fVar51 = auVar48._4_4_ + 0.0;
              fVar32 = fVar33 + fVar51;
              fVar33 = fVar33 + fVar51;
              uVar41 = SUB41(fVar33,0);
              uVar42 = (undefined1)((uint)fVar33 >> 8);
              uVar43 = (undefined1)((uint)fVar33 >> 0x10);
              uVar44 = (undefined1)((uint)fVar33 >> 0x18);
              auVar11[4] = uVar41;
              auVar11._0_4_ = fVar32;
              auVar11[5] = uVar42;
              auVar11[6] = uVar43;
              auVar11[7] = uVar44;
              auVar11[8] = SUB41(fVar32,0);
              auVar11[9] = (char)((uint)fVar32 >> 8);
              auVar11[10] = (char)((uint)fVar32 >> 0x10);
              auVar11[0xb] = (char)((uint)fVar32 >> 0x18);
              auVar11[0xc] = uVar41;
              auVar11[0xd] = uVar42;
              auVar11[0xe] = uVar43;
              auVar11[0xf] = uVar44;
              auVar48 = NEON_frsqrte(auVar11,4);
              auVar53._0_4_ = auVar48._0_4_ * fVar32;
              auVar53._4_4_ = auVar48._4_4_ * fVar33;
              auVar53._8_4_ = auVar48._8_4_ * fVar32;
              uVar12 = (undefined2)(CONCAT15(uVar42,CONCAT14(uVar41,fVar32)) >> 0x20);
              auVar53._12_4_ = auVar48._12_4_ * (float)CONCAT13(uVar44,CONCAT12(uVar43,uVar12));
              auVar57 = NEON_frsqrts(auVar48,auVar53,4);
              auVar47._0_4_ = auVar48._0_4_ * auVar57._0_4_;
              auVar47._4_4_ = auVar48._4_4_ * auVar57._4_4_;
              auVar47._8_4_ = auVar48._8_4_ * auVar57._8_4_;
              auVar47._12_4_ = auVar48._12_4_ * auVar57._12_4_;
              auVar54._0_4_ = fVar32 * auVar47._0_4_;
              auVar54._4_4_ = fVar33 * auVar47._4_4_;
              auVar54._8_4_ = fVar32 * auVar47._8_4_;
              auVar54._12_4_ = (float)CONCAT13(uVar44,CONCAT12(uVar43,uVar12)) * auVar47._12_4_;
              iVar22 = -(uint)(fVar32 == 0.0);
              iVar21 = -(uint)(fVar32 == 0.0);
              iVar50 = -(uint)((float)CONCAT13(uVar44,CONCAT12(uVar43,uVar12)) == 0.0);
              auVar48 = NEON_frsqrts(auVar47,auVar54,4);
              fVar35 = fVar35 * auVar47._0_4_ * auVar48._0_4_;
              fVar37 = fVar37 * auVar47._8_4_ * auVar48._8_4_;
              fVar39 = fVar39 * auVar47._12_4_ * auVar48._12_4_;
              fVar33 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                       CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                                ~(byte)((uint)iVar21 >> 0x10),
                                                CONCAT11((byte)((uint)fVar37 >> 8) &
                                                         ~(byte)((uint)iVar21 >> 8),
                                                         SUB41(fVar37,0) & ~(byte)iVar21)));
              plStack_a8 = (long *)CONCAT44(fVar40 + (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) &
                                                                      ~(byte)((uint)iVar50 >> 0x18),
                                                                      CONCAT16((byte)((uint)fVar39
                                                                                     >> 0x10) &
                                                                               ~(byte)((uint)iVar50
                                                                                      >> 0x10),
                                                                               CONCAT15((byte)((uint
                                                  )fVar39 >> 8) & ~(byte)((uint)iVar50 >> 8),
                                                  CONCAT14(SUB41(fVar39,0) & ~(byte)iVar50,fVar33)))
                                                  ) >> 0x20) * local_200,fVar38 + fVar33 * local_200
                                           );
              local_b0 = (undefined1  [8])
                         CONCAT44(in_q3._4_4_,
                                  fVar36 + (float)CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                           ~(byte)((uint)iVar22 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                                    ~(byte)((uint)iVar22 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar35 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar22 >>
                                                                                    8),
                                                                             SUB41(fVar35,0) &
                                                                             ~(byte)iVar22))) *
                                           local_200);
              _local_b0 = FUN_01a8afd4(0x40000000,local_a0,local_b0);
LAB_01efd7c0:
              fVar36 = fVar36 - local_b0._0_4_;
              fVar38 = fVar38 - local_b0._8_4_;
              fVar40 = fVar40 - local_b0._12_4_;
              fVar33 = fVar36 * fVar36;
              fVar51 = fVar38 * fVar38;
              uVar41 = (undefined1)((uint)fVar51 >> 8);
              uVar42 = (undefined1)((uint)fVar51 >> 0x10);
              uVar43 = (undefined1)((uint)fVar51 >> 0x18);
              fVar32 = fVar40 * fVar40;
              uVar44 = (undefined1)((uint)fVar32 >> 8);
              uVar45 = (undefined1)((uint)fVar32 >> 0x10);
              uVar46 = (undefined1)((uint)fVar32 >> 0x18);
              auVar8._4_4_ = 0;
              auVar8._0_4_ = fVar33;
              auVar8[8] = SUB41(fVar51,0);
              auVar8[9] = uVar41;
              auVar8[10] = uVar42;
              auVar8[0xb] = uVar43;
              auVar8[0xc] = SUB41(fVar32,0);
              auVar8[0xd] = uVar44;
              auVar8[0xe] = uVar45;
              auVar8[0xf] = uVar46;
              auVar9._4_4_ = 0;
              auVar9._0_4_ = fVar33;
              auVar9[8] = SUB41(fVar51,0);
              auVar9[9] = uVar41;
              auVar9[10] = uVar42;
              auVar9[0xb] = uVar43;
              auVar9[0xc] = SUB41(fVar32,0);
              auVar9[0xd] = uVar44;
              auVar9[0xe] = uVar45;
              auVar9[0xf] = uVar46;
              auVar48 = NEON_ext(auVar8,auVar9,8,1);
              fVar33 = auVar48._0_4_ + fVar33;
              fVar51 = auVar48._4_4_ + 0.0;
              fVar32 = fVar33 + fVar51;
              fVar33 = fVar33 + fVar51;
              uVar41 = (undefined1)((uint)fVar33 >> 8);
              uVar42 = (undefined1)((uint)fVar33 >> 0x10);
              uVar43 = (undefined1)((uint)fVar33 >> 0x18);
              uVar7 = CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(SUB41(fVar33,0),
                                                                               fVar32))));
              uVar24 = CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(SUB41(fVar33,0),
                                                                                fVar32))));
              auVar49._8_8_ = uVar24;
              auVar49._0_8_ = uVar7;
              auVar48 = NEON_frsqrte(auVar49,4);
              auVar56._0_4_ = auVar48._0_4_ * fVar32;
              fVar33 = (float)((ulong)uVar7 >> 0x20);
              auVar56._4_4_ = auVar48._4_4_ * fVar33;
              auVar56._8_4_ = auVar48._8_4_ * fVar32;
              fVar51 = (float)((ulong)uVar24 >> 0x20);
              auVar56._12_4_ = auVar48._12_4_ * fVar51;
              auVar57 = NEON_frsqrts(auVar48,auVar56,4);
              auVar55._0_4_ = auVar48._0_4_ * auVar57._0_4_;
              auVar55._4_4_ = auVar48._4_4_ * auVar57._4_4_;
              auVar55._8_4_ = auVar48._8_4_ * auVar57._8_4_;
              auVar55._12_4_ = auVar48._12_4_ * auVar57._12_4_;
              auVar58._0_4_ = fVar32 * auVar55._0_4_;
              auVar58._4_4_ = fVar33 * auVar55._4_4_;
              auVar58._8_4_ = fVar32 * auVar55._8_4_;
              auVar58._12_4_ = fVar51 * auVar55._12_4_;
              iVar22 = -(uint)(fVar32 == 0.0);
              iVar21 = -(uint)(fVar33 == 0.0);
              iVar50 = -(uint)(fVar32 == 0.0);
              iVar52 = -(uint)(fVar51 == 0.0);
              auVar48 = NEON_frsqrts(auVar55,auVar58,4);
              fVar36 = fVar36 * auVar55._0_4_ * auVar48._0_4_;
              fVar33 = auVar55._4_4_ * auVar48._4_4_ * 0.0;
              fVar38 = fVar38 * auVar55._8_4_ * auVar48._8_4_;
              fVar40 = fVar40 * auVar55._12_4_ * auVar48._12_4_;
              local_180 = (long *)CONCAT17((byte)((uint)fVar33 >> 0x18) &
                                           ~(byte)((uint)iVar21 >> 0x18),
                                           CONCAT16((byte)((uint)fVar33 >> 0x10) &
                                                    ~(byte)((uint)iVar21 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar33 >> 8) &
                                                             ~(byte)((uint)iVar21 >> 8),
                                                             CONCAT14(SUB41(fVar33,0) &
                                                                      ~(byte)iVar21,
                                                                      CONCAT13((byte)((uint)fVar36
                                                                                     >> 0x18) &
                                                                               ~(byte)((uint)iVar22
                                                                                      >> 0x18),
                                                                               CONCAT12((byte)((uint
                                                  )fVar36 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar36 >> 8) &
                                                           ~(byte)((uint)iVar22 >> 8),
                                                           SUB41(fVar36,0) & ~(byte)iVar22)))))));
              pcStack_178 = (char *)CONCAT17((byte)((uint)fVar40 >> 0x18) &
                                             ~(byte)((uint)iVar52 >> 0x18),
                                             CONCAT16((byte)((uint)fVar40 >> 0x10) &
                                                      ~(byte)((uint)iVar52 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar40 >> 8) &
                                                               ~(byte)((uint)iVar52 >> 8),
                                                               CONCAT14(SUB41(fVar40,0) &
                                                                        ~(byte)iVar52,
                                                                        CONCAT13((byte)((uint)fVar38
                                                                                       >> 0x18) &
                                                                                 ~(byte)((uint)
                                                  iVar50 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                           ~(byte)((uint)iVar50 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar38 >> 8) &
                                                                    ~(byte)((uint)iVar50 >> 8),
                                                                    SUB41(fVar38,0) & ~(byte)iVar50)
                                                          ))))));
              if (fVar32 != 0.0) {
                FUN_009c69bc(&local_1d0,local_a0);
                plVar29 = local_1d0;
                auVar48 = FUN_01efe364(&local_180);
                *(undefined1 *)(plVar29 + 0x1c) = 1;
                *(undefined1 (*) [16])(plVar29 + 0x18) = auVar48;
                if (local_1d0 != (long *)0x0) {
                  lVar27 = local_1d0[0xb];
                  piVar1 = (int *)(lVar27 + 0xc);
                  do {
                    iVar22 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar22 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar22 + -1 == 0) {
                    *(undefined8 *)(lVar27 + 0x18) = 0;
                    (**(code **)(*local_1d0 + 0x20))();
                  }
                }
              }
              uVar23 = FUN_018dadac(plVar2,param_1 + 0xc0,local_b0,0,1,1);
            }
            if (local_a0 != (long *)0x0) {
              lVar27 = local_a0[0xb];
              piVar1 = (int *)(lVar27 + 0xc);
              do {
                iVar22 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar22 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar22 == 1) {
                *(undefined8 *)(lVar27 + 0x18) = 0;
                (**(code **)(*local_a0 + 0x20))();
              }
            }
            bVar6 = true;
          }
          lVar27 = plVar2[0xb];
          piVar1 = (int *)(lVar27 + 0xc);
          do {
            iVar22 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar22 + -1 == 0) {
            *(undefined8 *)(lVar27 + 0x18) = 0;
            (**(code **)(*plVar2 + 0x20))(plVar2);
          }
          if (!bVar6) goto LAB_01efc2ac;
          bVar6 = true;
          if (local_98 != (long *)0x0) goto LAB_01efc2b8;
LAB_01efc2d4:
          if (!bVar6) goto LAB_01efc22c;
LAB_01efc2d8:
          bVar6 = true;
          if (plVar26 != (long *)0x0) goto LAB_01efc108;
          goto LAB_01efc124;
        }
      }
    }
    if (local_98 != (long *)0x0) goto LAB_01efc294;
LAB_01efc2ac:
    bVar6 = false;
    if (local_98 == (long *)0x0) goto LAB_01efc2d4;
LAB_01efc2b8:
    lVar27 = local_98[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar22 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar22 + -1 != 0) goto LAB_01efc2d4;
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*local_98 + 0x20))();
    if (bVar6) goto LAB_01efc2d8;
LAB_01efc22c:
    bVar6 = false;
    if (plVar26 == (long *)0x0) goto LAB_01efc124;
LAB_01efc108:
    lVar27 = plVar26[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar22 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar22 + -1 != 0) goto LAB_01efc124;
    *(undefined8 *)(lVar27 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
    if (bVar6) goto LAB_01efc128;
    goto LAB_01efc184;
  }
  ClearExclusiveLocal();
LAB_01efc2e8:
  plVar26 = (long *)0x0;
  iVar22 = iVar21;
  if (iVar21 == 0) goto LAB_01efc22c;
  goto LAB_01efc208;
LAB_01efc0fc:
  bVar6 = false;
LAB_01efc124:
  if (bVar6) {
LAB_01efc128:
    bVar13 = 1;
  }
  else {
LAB_01efc184:
    bVar13 = 0;
  }
  if (local_90 != (long *)0x0) {
    lVar27 = local_90[0xb];
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar22 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar22 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  lVar28 = *(long *)(lVar28 + 8);
  piVar1 = (int *)(lVar28 + 0xc);
  do {
    iVar22 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar22 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar22 + -1 == 0) {
    *(undefined8 *)(lVar28 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  goto LAB_01efbb8c;
}


