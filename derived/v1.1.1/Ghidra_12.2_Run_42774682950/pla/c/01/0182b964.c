/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0182b964; name: FUN_0182b964
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0182b964(long param_1,undefined8 *param_2)

{
  unkbyte9 *pVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  ulong uVar38;
  undefined8 uVar39;
  long **pplVar40;
  code *pcVar41;
  long *plVar42;
  long lVar43;
  long *plVar44;
  long lVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  long *plVar49;
  long *plVar50;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  byte extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar51;
  undefined1 extraout_var_08;
  undefined1 uVar52;
  undefined1 extraout_var_09;
  undefined1 uVar53;
  undefined1 extraout_var_10;
  undefined1 uVar54;
  undefined1 extraout_var_11;
  undefined1 uVar55;
  undefined1 extraout_var_12;
  undefined1 uVar56;
  undefined1 extraout_var_13;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar63;
  undefined1 auVar62 [16];
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  int local_108;
  long *local_e0;
  long lStack_d8;
  long *local_d0;
  long lStack_c8;
  char local_c0;
  char local_b0;
  undefined1 auStack_a0 [16];
  long local_90;
  byte bStack_88;
  undefined7 uStack_87;
  long *local_80 [2];
  long *local_68;
  
  lVar37 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  puVar34 = PTR_DAT_04379e90;
  puVar33 = PTR_DAT_04379e88;
  puVar32 = PTR_DAT_043795e0;
  puVar31 = PTR_DAT_043795d8;
  puVar30 = PTR_DAT_043794d0;
  lVar45 = *(long *)(param_1 + 0x1f0);
  if (lVar45 == 0) {
    return;
  }
  if (*(int *)(lVar45 + 0xc) == 0) {
    return;
  }
  piVar2 = (int *)(lVar45 + 0xc);
  fVar81 = (float)((double)*(long *)(lVar37 + 8) / 1000000000.0);
  iVar36 = *(int *)(lVar45 + 0xc);
  do {
    plVar49 = *(long **)(lVar45 + 0x10);
    if (((*puVar33 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar33), iVar35 != 0)) {
      if (((*puVar31 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar31), iVar35 != 0)) {
        if (((*puVar30 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar30), iVar35 != 0)) {
          uVar39 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar39;
          __cxa_guard_release(puVar30);
        }
        *(undefined **)puVar32 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar31);
      }
      *(undefined **)puVar34 = puVar32;
      __cxa_guard_release(puVar33);
    }
    while( true ) {
      if (plVar49 == (long *)0x0) {
        return;
      }
      if (plVar49 == (long *)puVar34) break;
      plVar49 = (long *)*plVar49;
    }
    iVar35 = *piVar2;
    if (iVar35 == iVar36) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar36 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar37 = *(long *)(lVar45 + 0x18);
        if (lVar37 == 0) {
          return;
        }
        plVar49 = (long *)(lVar37 + -0x50);
        if (fVar81 < 1.1920929e-07) goto LAB_0182bf90;
        local_d0 = (long *)0x0;
        lStack_c8 = 0;
        FUN_01a2bf84(&local_d0,lVar37 + 0x578);
        plVar46 = local_d0;
        puVar33 = PTR_DAT_0437a3c8;
        plVar50 = (long *)0x0;
        if (local_d0 == (long *)0x0) goto LAB_0182bb20;
        if (*(int *)((long)local_d0 + 0xc) == 0) goto LAB_0182c200;
        piVar2 = (int *)((long)local_d0 + 0xc);
        iVar36 = *(int *)((long)local_d0 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar36 = iVar35;
    if (iVar35 == 0) {
      return;
    }
  } while( true );
  do {
    plVar50 = (long *)plVar46[2];
    if (((*puVar33 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar33), iVar35 != 0)) {
      if (((*puVar31 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar31), iVar35 != 0)) {
        if (((*puVar30 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar30), iVar35 != 0)) {
          uVar39 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar39;
          __cxa_guard_release(puVar30);
        }
        *(undefined **)puVar32 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar31);
      }
      *(undefined **)PTR_DAT_0437a3d0 = puVar32;
      __cxa_guard_release(puVar33);
    }
    while( true ) {
      if (plVar50 == (long *)0x0) goto LAB_0182c200;
      if (plVar50 == (long *)PTR_DAT_0437a3d0) break;
      plVar50 = (long *)*plVar50;
    }
    iVar35 = *piVar2;
    if (iVar35 == iVar36) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar36 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar45 = plVar46[3];
        plVar50 = (long *)0x0;
        plVar46 = local_d0;
        if (lVar45 != 0) {
          plVar50 = (long *)(lVar45 + -0x50);
        }
        goto joined_r0x0182c224;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar36 = iVar35;
  } while (iVar35 != 0);
LAB_0182c200:
  plVar50 = (long *)0x0;
  plVar46 = local_d0;
joined_r0x0182c224:
  local_d0 = plVar46;
  if (plVar46 != (long *)0x0) {
    plVar47 = plVar46 + 1;
    do {
      iVar36 = (int)*plVar47 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar5) {
        *(int *)plVar47 = iVar36;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 == 0) {
      plVar46[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(PTR_DAT_04379498), iVar36 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar45 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar45;
      local_90 = *plVar46;
      FUN_02a44274(lVar45 + 0xd8,&local_90);
    }
  }
LAB_0182bb20:
  FUN_0182ccc4(&local_68,param_1);
  local_d0 = (long *)0x0;
  lStack_c8 = 0;
  FUN_00cf98c8(&local_d0,lVar37 + 0x210);
  plVar47 = local_d0;
  plVar46 = (long *)0x0;
  if (local_d0 != (long *)0x0) {
    if (*(int *)((long)local_d0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_d0 + 0xc);
      iVar36 = *(int *)((long)local_d0 + 0xc);
      do {
        plVar48 = (long *)plVar47[2];
        if (((*PTR_DAT_0437a668 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_0437a668), iVar35 != 0)) {
          if (((*puVar30 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar30), iVar35 != 0)) {
            uVar39 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar39;
            __cxa_guard_release(puVar30);
          }
          *(undefined **)PTR_DAT_0437a660 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a668);
        }
        plVar46 = (long *)0x0;
        plVar44 = local_d0;
        if (plVar48 == (long *)0x0) goto joined_r0x0182c368;
        while (plVar48 != (long *)PTR_DAT_0437a660) {
          plVar48 = (long *)*plVar48;
          if (plVar48 == (long *)0x0) {
            plVar46 = (long *)0x0;
            goto joined_r0x0182c368;
          }
        }
        iVar35 = *piVar2;
        if (iVar35 == iVar36) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar36 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar45 = plVar47[3];
            plVar46 = (long *)0x0;
            if (lVar45 != 0) {
              plVar46 = (long *)(lVar45 + -0x50);
            }
            goto joined_r0x0182c368;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar36 = iVar35;
      } while (iVar35 != 0);
    }
    plVar46 = (long *)0x0;
    plVar44 = local_d0;
joined_r0x0182c368:
    if (plVar44 != (long *)0x0) {
      plVar47 = plVar44 + 1;
      do {
        iVar36 = (int)*plVar47 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar47,0x10);
        if (bVar5) {
          *(int *)plVar47 = iVar36;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 == 0) {
        plVar44[2] = 0;
        local_d0 = plVar44;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(PTR_DAT_04379498), iVar36 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar45 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar45;
        local_90 = *plVar44;
        FUN_02a44274(lVar45 + 0xd8,&local_90);
      }
    }
  }
  local_d0 = (long *)0x0;
  lStack_c8 = 0;
  FUN_01a0703c(&local_d0,lVar37 + 0xa80);
  plVar48 = local_d0;
  plVar47 = (long *)0x0;
  if (local_d0 != (long *)0x0) {
    if (*(int *)((long)local_d0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_d0 + 0xc);
      iVar36 = *(int *)((long)local_d0 + 0xc);
      do {
        plVar47 = (long *)plVar48[2];
        if (((*PTR_DAT_0437a580 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_0437a580), iVar35 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar35 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar35 != 0)) {
            if (((*puVar30 & 1) == 0) && (iVar35 = __cxa_guard_acquire(puVar30), iVar35 != 0)) {
              uVar39 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar39;
              __cxa_guard_release(puVar30);
            }
            *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)PTR_DAT_0437a590 = PTR_DAT_0437a588;
          __cxa_guard_release(PTR_DAT_0437a580);
        }
        while( true ) {
          if (plVar47 == (long *)0x0) goto LAB_0182c6a0;
          if (plVar47 == (long *)PTR_DAT_0437a590) break;
          plVar47 = (long *)*plVar47;
        }
        iVar35 = *piVar2;
        if (iVar35 == iVar36) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar36 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar45 = plVar48[3];
            plVar47 = (long *)0x0;
            plVar48 = local_d0;
            if (lVar45 != 0) {
              plVar47 = (long *)(lVar45 + -0x50);
            }
            goto joined_r0x0182c6c4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar36 = iVar35;
      } while (iVar35 != 0);
    }
LAB_0182c6a0:
    plVar47 = (long *)0x0;
    plVar48 = local_d0;
joined_r0x0182c6c4:
    if (plVar48 != (long *)0x0) {
      plVar44 = plVar48 + 1;
      do {
        iVar36 = (int)*plVar44 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar44,0x10);
        if (bVar5) {
          *(int *)plVar44 = iVar36;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 == 0) {
        plVar48[2] = 0;
        local_d0 = plVar48;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(PTR_DAT_04379498), iVar36 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar45 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar45;
        local_90 = *plVar48;
        FUN_02a44274(lVar45 + 0xd8,&local_90);
      }
    }
  }
  local_d0 = (long *)0x0;
  lStack_c8 = 0;
  FUN_00af7e30(&local_d0,lVar37 + 0x1e0);
  plVar44 = local_d0;
  plVar48 = (long *)0x0;
  if (local_d0 == (long *)0x0) {
LAB_0182bb80:
    if (plVar47 == (long *)0x0) goto joined_r0x0182beec;
LAB_0182bb84:
    plVar44 = local_68;
    if ((plVar46 == (long *)0x0) || (local_68 == (long *)0x0)) goto joined_r0x0182beec;
    if (plVar48 != (long *)0x0) {
      if ((int)local_68[0x2c] == 2) {
        if (*(long *)(param_1 + 0x210) == 0) {
          local_80[0] = (long *)0x0;
LAB_0182bbb0:
          lVar45 = plVar44[0x2f];
          local_90 = plVar44[0x2e];
          bStack_88 = (byte)lVar45;
          uStack_87 = (undefined7)((ulong)lVar45 >> 8);
          FUN_00a9ecd4(&local_d0,plVar48);
          plVar44 = local_d0;
          if (local_d0 != (long *)0x0) {
            if (*(int *)((long)local_d0 + 0xc) != 0) {
              piVar2 = (int *)((long)local_d0 + 0xc);
              local_108 = *(int *)((long)local_d0 + 0xc);
              do {
                plVar42 = (long *)plVar44[2];
                if (((*PTR_DAT_0437a128 & 1) == 0) &&
                   (iVar36 = __cxa_guard_acquire(PTR_DAT_0437a128), iVar36 != 0)) {
                  if (((*puVar31 & 1) == 0) && (iVar36 = __cxa_guard_acquire(puVar31), iVar36 != 0))
                  {
                    if (((*puVar30 & 1) == 0) &&
                       (iVar36 = __cxa_guard_acquire(puVar30), iVar36 != 0)) {
                      uVar39 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar39;
                      __cxa_guard_release(puVar30);
                    }
                    *(undefined **)puVar32 = PTR_DAT_043794d8;
                    __cxa_guard_release(puVar31);
                  }
                  *(undefined **)PTR_DAT_0437a130 = puVar32;
                  __cxa_guard_release(PTR_DAT_0437a128);
                }
                while( true ) {
                  if (plVar42 == (long *)0x0) goto LAB_0182c87c;
                  if (plVar42 == (long *)PTR_DAT_0437a130) break;
                  plVar42 = (long *)*plVar42;
                }
                iVar36 = *piVar2;
                if (iVar36 == local_108) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = local_108 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar45 = plVar44[3];
                    plVar44 = (long *)0x0;
                    plVar42 = local_d0;
                    if (lVar45 != 0) {
                      plVar44 = (long *)(lVar45 + -0x50);
                    }
                    goto joined_r0x0182ca88;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                local_108 = iVar36;
              } while (iVar36 != 0);
            }
LAB_0182c87c:
            plVar44 = (long *)0x0;
            plVar42 = local_d0;
joined_r0x0182ca88:
            local_d0 = plVar42;
            if (plVar42 != (long *)0x0) {
              plVar3 = plVar42 + 1;
              do {
                iVar36 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar36;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar36 == 0) {
                plVar42[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar36 = __cxa_guard_acquire(PTR_DAT_04379498), iVar36 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar45 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar45;
                local_e0 = (long *)*plVar42;
                FUN_02a44274(lVar45 + 0xd8,&local_e0);
              }
            }
            if (plVar44 != (long *)0x0) {
              if (*(uint *)(plVar44 + 0x60) != 0) {
                fVar11 = 1.0 / (float)*(uint *)(plVar44 + 0x60);
                fVar10 = (float)((ulong)local_90 >> 0x20) * fVar11;
                fVar9 = (float)CONCAT71(uStack_87,bStack_88) * fVar11;
                fVar12 = (float)((uint7)uStack_87 >> 0x18) * fVar11;
                bStack_88 = SUB41(fVar9,0);
                uStack_87 = (undefined7)
                            (CONCAT17((char)((uint)fVar12 >> 0x18),
                                      CONCAT16((char)((uint)fVar12 >> 0x10),
                                               CONCAT15((char)((uint)fVar12 >> 8),
                                                        CONCAT14(SUB41(fVar12,0),fVar9)))) >> 8);
                local_90 = CONCAT17((char)((uint)fVar10 >> 0x18),
                                    CONCAT16((char)((uint)fVar10 >> 0x10),
                                             CONCAT15((char)((uint)fVar10 >> 8),
                                                      CONCAT14(SUB41(fVar10,0),
                                                               (float)local_90 * fVar11))));
              }
              lVar45 = plVar44[0xb];
              piVar2 = (int *)(lVar45 + 0xc);
              do {
                iVar36 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar36 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar36 + -1 == 0) {
                *(undefined8 *)(lVar45 + 0x18) = 0;
                (**(code **)(*plVar44 + 0x20))(plVar44);
              }
            }
          }
        }
        else {
          FUN_00ac64cc(local_80);
          if ((((local_80[0] == (long *)0x0) || (local_80[0][0x86] == 0)) ||
              (*(int *)(local_80[0][0x86] + 0xc) == 0)) || ((char)local_80[0][0x8e] != '\0'))
          goto LAB_0182bbb0;
          local_90 = local_80[0][0x84];
          bStack_88 = (byte)local_80[0][0x85];
          uStack_87 = (undefined7)((ulong)local_80[0][0x85] >> 8);
        }
        fVar11 = (float)local_90;
        fVar58 = fVar11 * fVar11;
        fVar10 = (float)((ulong)local_90 >> 0x20);
        fVar59 = fVar10 * fVar10;
        fVar9 = (float)CONCAT71(uStack_87,bStack_88);
        fVar12 = (float)((uint7)uStack_87 >> 0x18);
        auVar62._4_4_ = fVar59;
        auVar62._0_4_ = fVar58;
        auVar62._8_4_ = fVar9 * fVar9;
        auVar62._12_4_ = fVar12 * fVar12;
        auVar13._4_4_ = fVar59;
        auVar13._0_4_ = fVar58;
        auVar13._8_4_ = fVar9 * fVar9;
        auVar13._12_4_ = fVar12 * fVar12;
        auVar62 = NEON_ext(auVar62,auVar13,8,1);
        fVar58 = SQRT(auVar62._0_4_ + fVar58 + auVar62._4_4_ + fVar59);
        if ((*(char *)(param_1 + 0x221) != '\0') &&
           (1.1920929e-07 < fVar58 && *(char *)(param_1 + 0x224) != '\0')) {
          if (*(float *)(param_1 + 0x228) < fVar58 / fVar81) {
            fVar59 = *(float *)(param_1 + 0x228) / (fVar58 / fVar81);
            fVar10 = fVar10 * fVar59;
            fVar12 = fVar12 * fVar59;
            bStack_88 = SUB41(fVar9 * fVar59,0);
            uStack_87 = (undefined7)
                        (CONCAT17((char)((uint)fVar12 >> 0x18),
                                  CONCAT16((char)((uint)fVar12 >> 0x10),
                                           CONCAT15((char)((uint)fVar12 >> 8),
                                                    CONCAT14(SUB41(fVar12,0),fVar9 * fVar59)))) >> 8
                        );
            local_90 = CONCAT17((char)((uint)fVar10 >> 0x18),
                                CONCAT16((char)((uint)fVar10 >> 0x10),
                                         CONCAT15((char)((uint)fVar10 >> 8),
                                                  CONCAT14(SUB41(fVar10,0),fVar11 * fVar59))));
            fVar58 = fVar58 * fVar59;
          }
        }
        if (((*(char *)(lVar37 + 0x974) == '\0') ||
            (uVar38 = (**(code **)(*plVar50 + 0x230))(plVar50), (uVar38 & 1) != 0)) &&
           (*(char *)(param_1 + 0x220) == '\0')) {
          FUN_009c69bc(&local_d0,param_1);
          plVar44 = local_d0;
          FUN_009c69bc(&local_e0,param_1);
          lVar43 = local_e0[0x1b];
          lVar45 = local_e0[0x1a];
          *(undefined1 *)(plVar44 + 0x1c) = 1;
          fVar81 = (float)((ulong)lVar45 >> 0x20) - (float)((ulong)local_90 >> 0x20);
          fVar11 = (float)((ulong)lVar43 >> 0x20) - (float)((uint7)uStack_87 >> 0x18);
          plVar44[0x1b] =
               CONCAT17((char)((uint)fVar11 >> 0x18),
                        CONCAT16((char)((uint)fVar11 >> 0x10),
                                 CONCAT15((char)((uint)fVar11 >> 8),
                                          CONCAT14(SUB41(fVar11,0),
                                                   (float)lVar43 -
                                                   (float)CONCAT71(uStack_87,bStack_88)))));
          plVar44[0x1a] =
               CONCAT17((char)((uint)fVar81 >> 0x18),
                        CONCAT16((char)((uint)fVar81 >> 0x10),
                                 CONCAT15((char)((uint)fVar81 >> 8),
                                          CONCAT14(SUB41(fVar81,0),(float)lVar45 - (float)local_90))
                                ));
          if (local_e0 != (long *)0x0) {
            lVar45 = local_e0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar36 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar36 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar36 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_e0 + 0x20))();
            }
          }
          if (local_d0 != (long *)0x0) {
            lVar45 = local_d0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar36 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar36 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar36 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_d0 + 0x20))();
            }
          }
        }
        else {
          FUN_009c69bc(&local_d0,plVar49);
          if (local_d0 != (long *)0x0) {
            lVar45 = local_d0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar36 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar36 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar36 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_d0 + 0x20))();
            }
          }
          FUN_009c69bc(&local_d0,param_1);
          plVar44 = local_d0;
          FUN_009c69bc(&local_e0,param_1);
          lVar43 = local_e0[0x1b];
          lVar45 = local_e0[0x1a];
          *(undefined1 *)(plVar44 + 0x1c) = 1;
          fVar11 = (float)((ulong)lVar45 >> 0x20) - (float)((ulong)local_90 >> 0x20);
          fVar10 = (float)((ulong)lVar43 >> 0x20) - (float)((uint7)uStack_87 >> 0x18);
          plVar44[0x1b] =
               CONCAT17((char)((uint)fVar10 >> 0x18),
                        CONCAT16((char)((uint)fVar10 >> 0x10),
                                 CONCAT15((char)((uint)fVar10 >> 8),
                                          CONCAT14(SUB41(fVar10,0),
                                                   (float)lVar43 -
                                                   (float)CONCAT71(uStack_87,bStack_88)))));
          plVar44[0x1a] =
               CONCAT17((char)((uint)fVar11 >> 0x18),
                        CONCAT16((char)((uint)fVar11 >> 0x10),
                                 CONCAT15((char)((uint)fVar11 >> 8),
                                          CONCAT14(SUB41(fVar11,0),(float)lVar45 - (float)local_90))
                                ));
          if (local_e0 != (long *)0x0) {
            lVar45 = local_e0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar36 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar36 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar36 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_e0 + 0x20))();
            }
          }
          if (local_d0 != (long *)0x0) {
            lVar45 = local_d0[0xb];
            piVar2 = (int *)(lVar45 + 0xc);
            do {
              iVar36 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar36 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar36 + -1 == 0) {
              *(undefined8 *)(lVar45 + 0x18) = 0;
              (**(code **)(*local_d0 + 0x20))();
            }
          }
          if (1.1920929e-07 < fVar58) {
            uVar38 = FUN_01a57b48(plVar50);
            if ((((uVar38 & 1) == 0) && (*(long *)(lVar37 + 0x5e8) != 0)) &&
               (FUN_0182b7ac(&local_d0), local_d0 != (long *)0x0)) {
              lVar45 = local_d0[0xb];
              piVar2 = (int *)(lVar45 + 0xc);
              do {
                iVar36 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar36 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar36 + -1 == 0) {
                *(undefined8 *)(lVar45 + 0x18) = 0;
                (**(code **)(*local_d0 + 0x20))();
              }
              FUN_009c69bc(&local_e0,param_1);
              lStack_c8 = local_e0[0x19];
              local_d0 = (long *)local_e0[0x18];
              FUN_01a8cd94(plVar49,&local_90,&local_d0);
              uStack_87 = (undefined7)
                          (CONCAT17(extraout_var_13,
                                    CONCAT16(extraout_var_12,
                                             CONCAT15(extraout_var_11,
                                                      CONCAT14(extraout_var_10,
                                                               CONCAT13(extraout_var_09,
                                                                        CONCAT12(extraout_var_08,
                                                                                 CONCAT11(
                                                  extraout_var_07,extraout_var_06))))))) >> 8);
              local_90 = CONCAT17(extraout_var_05,
                                  CONCAT16(extraout_var_04,
                                           CONCAT15(extraout_var_03,
                                                    CONCAT14(extraout_var_02,
                                                             CONCAT13(extraout_var_01,
                                                                      CONCAT12(extraout_var_00,
                                                                               CONCAT11(extraout_var
                                                                                        ,extraout_b0
                                                                                       )))))));
              bStack_88 = extraout_var_06;
              if (local_e0 != (long *)0x0) {
                lVar43 = local_e0[0xb];
                piVar2 = (int *)(lVar43 + 0xc);
                do {
                  iVar36 = *piVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar36;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  plVar44 = local_e0;
                } while (cVar4 != '\0');
LAB_0182ccac:
                if (iVar36 == 0) {
                  *(undefined8 *)(lVar43 + 0x18) = 0;
                  (**(code **)(*plVar44 + 0x20))();
                }
              }
            }
            else {
              lVar45 = *(long *)(param_1 + 0x200);
              if ((lVar45 != 0) && (*(int *)(lVar45 + 0xc) != 0)) {
                piVar2 = (int *)(lVar45 + 0xc);
                iVar36 = *(int *)(lVar45 + 0xc);
                do {
                  plVar44 = *(long **)(lVar45 + 0x10);
                  if (((*PTR_DAT_043794b0 & 1) == 0) &&
                     (iVar35 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar35 != 0)) {
                    if (((*PTR_DAT_043794c0 & 1) == 0) &&
                       (iVar35 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar35 != 0)) {
                      if (((*puVar30 & 1) == 0) &&
                         (iVar35 = __cxa_guard_acquire(puVar30), iVar35 != 0)) {
                        uVar39 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar39;
                        __cxa_guard_release(puVar30);
                      }
                      *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_043794c0);
                    }
                    *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                    __cxa_guard_release(PTR_DAT_043794b0);
                  }
                  while( true ) {
                    if (plVar44 == (long *)0x0) goto LAB_0182bd44;
                    if (plVar44 == (long *)PTR_DAT_043794b8) break;
                    plVar44 = (long *)*plVar44;
                  }
                  iVar35 = *piVar2;
                  if (iVar35 == iVar36) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar36 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 != '\0') goto LAB_0182c8b0;
                    lVar45 = *(long *)(lVar45 + 0x18);
                    if (lVar45 != 0) {
                      pVar1 = (unkbyte9 *)(lVar45 + 0x70);
                      uVar39 = *(undefined8 *)(lVar45 + 0x78);
                      uVar51 = (undefined1)((ulong)uVar39 >> 8);
                      uVar52 = (undefined1)((ulong)uVar39 >> 0x10);
                      uVar53 = (undefined1)((ulong)uVar39 >> 0x18);
                      uVar54 = (undefined1)((ulong)uVar39 >> 0x20);
                      uVar55 = (undefined1)((ulong)uVar39 >> 0x28);
                      uVar56 = (undefined1)((ulong)uVar39 >> 0x30);
                      uVar57 = (undefined1)((ulong)uVar39 >> 0x38);
                      fVar11 = (float)*(undefined8 *)pVar1;
                      fVar59 = fVar11 * (float)_DAT_03889ac0;
                      fVar10 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
                      fVar66 = fVar10 * (float)((ulong)_DAT_03889ac0 >> 0x20);
                      fVar68 = (float)uVar39 * (float)_UNK_03889ac8;
                      fVar70 = (float)((ulong)uVar39 >> 0x20) *
                               (float)((ulong)_UNK_03889ac8 >> 0x20);
                      uVar72 = (undefined1)uStack_87;
                      uVar73 = (undefined1)((uint7)uStack_87 >> 8);
                      uVar74 = (undefined1)((uint7)uStack_87 >> 0x10);
                      uVar75 = (undefined1)((uint7)uStack_87 >> 0x18);
                      uVar76 = (undefined1)((uint7)uStack_87 >> 0x20);
                      uVar77 = (undefined1)((uint7)uStack_87 >> 0x28);
                      uVar78 = (undefined1)((uint7)uStack_87 >> 0x30);
                      auVar28[8] = bStack_88;
                      auVar28._0_8_ = local_90;
                      auVar27[8] = bStack_88;
                      auVar27._0_8_ = local_90;
                      auVar26[8] = bStack_88;
                      auVar26._0_8_ = local_90;
                      auVar26[9] = uVar72;
                      auVar26[10] = uVar73;
                      auVar26[0xb] = uVar74;
                      auVar26[0xc] = uVar75;
                      auVar26[0xd] = uVar76;
                      auVar26[0xe] = uVar77;
                      auVar26[0xf] = uVar78;
                      uVar39 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a580);
                      fVar58 = (float)((ulong)uVar39 >> 0x20);
                      auVar27[9] = uVar72;
                      auVar27[10] = uVar73;
                      auVar27[0xb] = uVar74;
                      auVar27[0xc] = uVar75;
                      auVar27[0xd] = uVar76;
                      auVar27[0xe] = uVar77;
                      auVar27[0xf] = uVar78;
                      uVar79 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
                      auVar20._4_4_ = fVar66;
                      auVar20._0_4_ = fVar59;
                      auVar20._8_4_ = fVar68;
                      auVar20._12_4_ = fVar70;
                      uVar60 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
                      auVar21._4_4_ = fVar66;
                      auVar21._0_4_ = fVar59;
                      auVar21._8_4_ = fVar68;
                      auVar21._12_4_ = fVar70;
                      uVar82 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a6c8);
                      fVar9 = (float)((ulong)local_90 >> 0x20);
                      fVar63 = (float)((ulong)uVar79 >> 0x20);
                      auVar22._4_4_ = fVar66;
                      auVar22._0_4_ = fVar59;
                      auVar22._8_4_ = fVar68;
                      auVar22._12_4_ = fVar70;
                      uVar83 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a680);
                      auVar23._4_4_ = fVar66;
                      auVar23._0_4_ = fVar59;
                      auVar23._8_4_ = fVar68;
                      auVar23._12_4_ = fVar70;
                      uVar84 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a880);
                      auVar24._4_4_ = fVar66;
                      auVar24._0_4_ = fVar59;
                      auVar24._8_4_ = fVar68;
                      auVar24._12_4_ = fVar70;
                      uVar85 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a790);
                      auVar25._4_4_ = fVar66;
                      auVar25._0_4_ = fVar59;
                      auVar25._8_4_ = fVar59;
                      auVar25._12_4_ = fVar66;
                      uVar61 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a648);
                      auVar28[9] = uVar72;
                      auVar28[10] = uVar73;
                      auVar28[0xb] = uVar74;
                      auVar28[0xc] = uVar75;
                      auVar28[0xd] = uVar76;
                      auVar28[0xe] = uVar77;
                      auVar28[0xf] = uVar78;
                      uVar64 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a880);
                      fVar12 = (float)((ulong)uVar64 >> 0x20);
                      auVar6[9] = uVar51;
                      auVar6._0_9_ = *pVar1;
                      auVar6[10] = uVar52;
                      auVar6[0xb] = uVar53;
                      auVar6[0xc] = uVar54;
                      auVar6[0xd] = uVar55;
                      auVar6[0xe] = uVar56;
                      auVar6[0xf] = uVar57;
                      uVar29 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
                      fVar69 = (float)_UNK_03889ad8;
                      fVar71 = (float)((ulong)_UNK_03889ad8 >> 0x20);
                      fVar65 = (float)_DAT_03889ad0;
                      fVar67 = (float)((ulong)_DAT_03889ad0 >> 0x20);
                      fVar59 = (fVar59 * (float)uVar39 + fVar65 * (float)local_90 * (float)uVar60 +
                               fVar65 * (float)uVar64 * (float)uVar83) -
                               (float)uVar79 * (float)uVar84;
                      fVar66 = (fVar66 * fVar58 + fVar67 * fVar9 * (float)((ulong)uVar60 >> 0x20) +
                               fVar67 * fVar12 * (float)((ulong)uVar83 >> 0x20)) -
                               fVar63 * (float)((ulong)uVar84 >> 0x20);
                      fVar68 = (fVar68 * (float)uVar39 + fVar69 * (float)uVar79 * (float)uVar82 +
                               fVar69 * (float)local_90 * (float)uVar61) -
                               (float)uVar64 * (float)uVar85;
                      fVar70 = (fVar70 * fVar58 + fVar71 * fVar63 * (float)((ulong)uVar82 >> 0x20) +
                               fVar71 * fVar9 * (float)((ulong)uVar61 >> 0x20)) -
                               fVar12 * (float)((ulong)uVar85 >> 0x20);
                      auVar7[9] = uVar51;
                      auVar7._0_9_ = *pVar1;
                      auVar7[10] = uVar52;
                      auVar7[0xb] = uVar53;
                      auVar7[0xc] = uVar54;
                      auVar7[0xd] = uVar55;
                      auVar7[0xe] = uVar56;
                      auVar7[0xf] = uVar57;
                      uVar82 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
                      auVar14._4_4_ = fVar66;
                      auVar14._0_4_ = fVar59;
                      auVar14._8_4_ = fVar68;
                      auVar14._12_4_ = fVar70;
                      uVar60 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
                      auVar15._4_4_ = fVar66;
                      auVar15._0_4_ = fVar59;
                      auVar15._8_4_ = fVar68;
                      auVar15._12_4_ = fVar70;
                      uVar83 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a6c8);
                      fVar80 = (float)((ulong)uVar82 >> 0x20);
                      fVar58 = (float)((ulong)uVar29 >> 0x20);
                      auVar16._4_4_ = fVar66;
                      auVar16._0_4_ = fVar59;
                      auVar16._8_4_ = fVar68;
                      auVar16._12_4_ = fVar70;
                      uVar64 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a680);
                      auVar17._4_4_ = fVar66;
                      auVar17._0_4_ = fVar59;
                      auVar17._8_4_ = fVar68;
                      auVar17._12_4_ = fVar70;
                      uVar84 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a790);
                      auVar18._4_4_ = fVar66;
                      auVar18._0_4_ = fVar59;
                      auVar18._8_4_ = fVar68;
                      auVar18._12_4_ = fVar70;
                      uVar79 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
                      auVar8[9] = uVar51;
                      auVar8._0_9_ = *pVar1;
                      auVar8[10] = uVar52;
                      auVar8[0xb] = uVar53;
                      auVar8[0xc] = uVar54;
                      auVar8[0xd] = uVar55;
                      auVar8[0xe] = uVar56;
                      auVar8[0xf] = uVar57;
                      uVar61 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
                      fVar63 = (float)((ulong)uVar61 >> 0x20);
                      auVar19._4_4_ = fVar66;
                      auVar19._0_4_ = fVar59;
                      auVar19._8_4_ = fVar59;
                      auVar19._12_4_ = fVar66;
                      uVar39 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a648);
                      fVar9 = fVar11 * (float)uVar39;
                      fVar12 = fVar10 * (float)((ulong)uVar39 >> 0x20);
                      fVar11 = ((float)uVar29 * fVar59 + fVar65 * fVar11 * (float)uVar60 +
                               fVar65 * (float)uVar61 * (float)uVar64) -
                               (float)uVar82 * (float)uVar79;
                      fVar10 = (fVar58 * fVar66 + fVar67 * fVar10 * (float)((ulong)uVar60 >> 0x20) +
                               fVar67 * fVar63 * (float)((ulong)uVar64 >> 0x20)) -
                               fVar80 * (float)((ulong)uVar79 >> 0x20);
                      fVar59 = ((float)uVar29 * fVar68 + fVar69 * (float)uVar82 * (float)uVar83 +
                               fVar69 * fVar9) - (float)uVar61 * (float)uVar84;
                      fVar9 = (fVar58 * fVar70 + fVar71 * fVar80 * (float)((ulong)uVar83 >> 0x20) +
                              fVar71 * (float)(CONCAT17((char)((uint)fVar12 >> 0x18),
                                                        CONCAT16((char)((uint)fVar12 >> 0x10),
                                                                 CONCAT15((char)((uint)fVar12 >> 8),
                                                                          CONCAT14(SUB41(fVar12,0),
                                                                                   fVar9)))) >> 0x20
                                              )) - fVar63 * (float)((ulong)uVar84 >> 0x20);
                      bStack_88 = SUB41(fVar59,0) & (byte)_UNK_038897c8;
                      uStack_87 = (undefined7)
                                  (CONCAT17((byte)((uint)fVar9 >> 0x18) &
                                            (byte)((ulong)_UNK_038897c8 >> 0x38),
                                            CONCAT16((byte)((uint)fVar9 >> 0x10) &
                                                     (byte)((ulong)_UNK_038897c8 >> 0x30),
                                                     CONCAT15((byte)((uint)fVar9 >> 8) &
                                                              (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                              CONCAT14(SUB41(fVar9,0) &
                                                                       (byte)((ulong)_UNK_038897c8
                                                                             >> 0x20),
                                                                       CONCAT13((byte)((uint)fVar59
                                                                                      >> 0x18) &
                                                                                (byte)((ulong)
                                                  _UNK_038897c8 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                           (byte)((ulong)_UNK_038897c8 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar59 >> 8) &
                                                                    (byte)((ulong)_UNK_038897c8 >> 8
                                                                          ),bStack_88))))))) >> 8);
                      local_90 = CONCAT17((byte)((uint)fVar10 >> 0x18) &
                                          (byte)((ulong)_DAT_038897c0 >> 0x38),
                                          CONCAT16((byte)((uint)fVar10 >> 0x10) &
                                                   (byte)((ulong)_DAT_038897c0 >> 0x30),
                                                   CONCAT15((byte)((uint)fVar10 >> 8) &
                                                            (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                            CONCAT14(SUB41(fVar10,0) &
                                                                     (byte)((ulong)_DAT_038897c0 >>
                                                                           0x20),
                                                                     CONCAT13((byte)((uint)fVar11 >>
                                                                                    0x18) &
                                                                              (byte)((ulong)
                                                  _DAT_038897c0 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar11 >> 8) &
                                                                    (byte)((ulong)_DAT_038897c0 >> 8
                                                                          ),SUB41(fVar11,0) &
                                                                            (byte)_DAT_038897c0)))))
                                                  ));
                      lVar43 = *(long *)(lVar45 + 8);
                      piVar2 = (int *)(lVar43 + 0xc);
                      do {
                        iVar36 = *piVar2 + -1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar5) {
                          *piVar2 = iVar36;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        plVar44 = (long *)(lVar45 + -0x50);
                      } while (cVar4 != '\0');
                      goto LAB_0182ccac;
                    }
                    break;
                  }
                  ClearExclusiveLocal();
LAB_0182c8b0:
                  iVar36 = iVar35;
                } while (iVar35 != 0);
              }
            }
LAB_0182bd44:
            FUN_01a835e0(&local_d0,plVar49,&local_90);
            if ((local_b0 == '\0') || (local_c0 == '\0')) {
              fVar81 = 1.0 / fVar81;
              fVar11 = (float)((ulong)local_d0 >> 0x20) * fVar81;
              fVar10 = (float)((ulong)lStack_c8 >> 0x20) * fVar81;
              lStack_d8 = CONCAT17((char)((uint)fVar10 >> 0x18),
                                   CONCAT16((char)((uint)fVar10 >> 0x10),
                                            CONCAT15((char)((uint)fVar10 >> 8),
                                                     CONCAT14(SUB41(fVar10,0),
                                                              (float)lStack_c8 * fVar81))));
              local_e0 = (long *)CONCAT17((char)((uint)fVar11 >> 0x18),
                                          CONCAT16((char)((uint)fVar11 >> 0x10),
                                                   CONCAT15((char)((uint)fVar11 >> 8),
                                                            CONCAT14(SUB41(fVar11,0),
                                                                     SUB84(local_d0,0) * fVar81))));
              pcVar41 = *(code **)(*plVar49 + 0x100);
              pplVar40 = &local_e0;
            }
            else {
              FUN_009c69bc(&local_e0,plVar49);
              lStack_d8 = local_e0[0x19];
              plVar44 = (long *)local_e0[0x18];
              if (local_e0 != (long *)0x0) {
                lVar45 = local_e0[0xb];
                piVar2 = (int *)(lVar45 + 0xc);
                do {
                  iVar36 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar36 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar36 + -1 == 0) {
                  *(undefined8 *)(lVar45 + 0x18) = 0;
                  (**(code **)(*local_e0 + 0x20))();
                }
              }
              local_e0 = plVar44;
              FUN_01a83770(plVar49,auStack_a0,&local_e0);
              pcVar41 = *(code **)(*plVar49 + 0x100);
              pplVar40 = (long **)PTR_DAT_0437a330;
            }
            (*pcVar41)(plVar49,pplVar40);
            bVar5 = local_b0 != '\0';
            local_b0 = '\0';
            if (bVar5) {
              local_b0 = '\0';
            }
          }
          else {
            (**(code **)(*plVar49 + 0x100))(plVar49,PTR_DAT_0437a330);
          }
        }
        if (local_80[0] != (long *)0x0) {
          lVar45 = local_80[0][0xb];
          piVar2 = (int *)(lVar45 + 0xc);
          do {
            iVar36 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar36 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar36 + -1 == 0) {
            *(undefined8 *)(lVar45 + 0x18) = 0;
            (**(code **)(*local_80[0] + 0x20))();
          }
        }
        goto joined_r0x0182beec;
      }
      goto LAB_0182bef0;
    }
  }
  else {
    if (*(int *)((long)local_d0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_d0 + 0xc);
      iVar36 = *(int *)((long)local_d0 + 0xc);
      do {
        plVar48 = (long *)plVar44[2];
        if (((*PTR_DAT_0437a550 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_0437a550), iVar35 != 0)) {
          uVar39 = FUN_00aa0310();
          *(undefined8 *)PTR_DAT_0437a558 = uVar39;
          __cxa_guard_release(PTR_DAT_0437a550);
        }
        while( true ) {
          if (plVar48 == (long *)0x0) goto LAB_0182c488;
          if (plVar48 == (long *)PTR_DAT_0437a558) break;
          plVar48 = (long *)*plVar48;
        }
        iVar35 = *piVar2;
        if (iVar35 == iVar36) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar36 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar45 = plVar44[3];
            plVar48 = (long *)0x0;
            plVar44 = local_d0;
            if (lVar45 != 0) {
              plVar48 = (long *)(lVar45 + -0x50);
            }
            goto joined_r0x0182c4ac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar36 = iVar35;
      } while (iVar35 != 0);
    }
LAB_0182c488:
    plVar48 = (long *)0x0;
    plVar44 = local_d0;
joined_r0x0182c4ac:
    local_d0 = plVar44;
    if (plVar44 == (long *)0x0) goto LAB_0182bb80;
    plVar42 = plVar44 + 1;
    do {
      iVar36 = (int)*plVar42 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar42,0x10);
      if (bVar5) {
        *(int *)plVar42 = iVar36;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 != 0) goto LAB_0182bb80;
    plVar44[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar36 = __cxa_guard_acquire(PTR_DAT_04379498), iVar36 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar45 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar45;
    local_90 = *plVar44;
    FUN_02a44274(lVar45 + 0xd8,&local_90);
    if (plVar47 != (long *)0x0) goto LAB_0182bb84;
joined_r0x0182beec:
    if (plVar48 != (long *)0x0) {
LAB_0182bef0:
      lVar45 = plVar48[0xb];
      piVar2 = (int *)(lVar45 + 0xc);
      do {
        iVar36 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        *(undefined8 *)(lVar45 + 0x18) = 0;
        (**(code **)(*plVar48 + 0x20))(plVar48);
      }
    }
    if (plVar47 == (long *)0x0) goto joined_r0x0182bf2c;
  }
  lVar45 = plVar47[0xb];
  piVar2 = (int *)(lVar45 + 0xc);
  do {
    iVar36 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar36 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar36 + -1 == 0) {
    *(undefined8 *)(lVar45 + 0x18) = 0;
    (**(code **)(*plVar47 + 0x20))(plVar47);
  }
joined_r0x0182bf2c:
  if (plVar46 != (long *)0x0) {
    lVar45 = plVar46[0xb];
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      iVar36 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      *(undefined8 *)(lVar45 + 0x18) = 0;
      (**(code **)(*plVar46 + 0x20))(plVar46);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar45 = *(long *)((long)local_68 + 0x58);
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      iVar36 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      *(undefined8 *)(lVar45 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (plVar50 != (long *)0x0) {
    lVar45 = plVar50[0xb];
    piVar2 = (int *)(lVar45 + 0xc);
    do {
      iVar36 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      *(undefined8 *)(lVar45 + 0x18) = 0;
      (**(code **)(*plVar50 + 0x20))(plVar50);
    }
  }
LAB_0182bf90:
  lVar37 = *(long *)(lVar37 + 8);
  piVar2 = (int *)(lVar37 + 0xc);
  do {
    iVar36 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar36 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar36 + -1 == 0) {
    *(undefined8 *)(lVar37 + 0x18) = 0;
    (**(code **)(*plVar49 + 0x20))();
  }
  return;
}


