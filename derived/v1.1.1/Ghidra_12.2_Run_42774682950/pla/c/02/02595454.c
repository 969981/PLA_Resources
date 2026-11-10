/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02595454; name: FUN_02595454
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02595454(long param_1,long param_2)

{
  long **pplVar1;
  long *plVar2;
  long **pplVar3;
  int *piVar4;
  uint *puVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long **pplVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long *plVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  uint *puVar24;
  long *plVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined1 *puVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  long lVar38;
  undefined *puVar39;
  float fVar40;
  undefined1 *local_170;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long **local_120;
  code *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  if (*(long *)(param_2 + 0x40) == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_009cd8d4(&local_78);
  }
  local_120 = (long **)0x0;
  local_118 = (code *)0x0;
  FUN_008802f0(&local_120,local_78 + 0xb);
  local_98 = (long *)0x0;
  pcStack_90 = (char *)0x0;
  FUN_00880560(&local_98,&local_120);
  pplVar12 = local_120;
  if (local_120 != (long **)0x0) {
    pplVar1 = local_120 + 1;
    do {
      iVar14 = *(int *)pplVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar9) {
        *(int *)pplVar1 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      local_120[2] = (long *)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_70[0] = *pplVar12;
      FUN_02a44274(lVar18 + 0xd8,local_70);
    }
  }
  local_120 = (long **)0x0;
  local_118 = (code *)0x0;
  FUN_0198bb48(&local_120,&local_98);
  plVar37 = local_98;
  if (local_98 != (long *)0x0) {
    plVar25 = local_98 + 1;
    do {
      iVar14 = (int)*plVar25 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar9) {
        *(int *)plVar25 = iVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_70[0] = (long *)*plVar37;
      FUN_02a44274(lVar18 + 0xd8,local_70);
    }
  }
  FUN_0198d7c0((long *)(param_1 + 0x68),&local_120);
  pplVar12 = local_120;
  if (local_120 != (long **)0x0) {
    pplVar1 = local_120 + 1;
    do {
      iVar14 = *(int *)pplVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar9) {
        *(int *)pplVar1 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      local_120[2] = (long *)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_98 = *pplVar12;
      FUN_02a44274(lVar18 + 0xd8,&local_98);
    }
  }
  (**(code **)(**(long **)(param_2 + 0x50) + 0x18))(&local_120);
  local_98 = (long *)0x0;
  pcStack_90 = (char *)0x0;
  FUN_0196c274(&local_98,&local_120);
  pplVar12 = local_120;
  if (local_120 != (long **)0x0) {
    pplVar1 = local_120 + 1;
    do {
      iVar14 = *(int *)pplVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar9) {
        *(int *)pplVar1 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      local_120[2] = (long *)0x0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_70[0] = *pplVar12;
      FUN_02a44274(lVar18 + 0xd8,local_70);
    }
  }
  FUN_0193efe4(param_1 + 0x78,&local_98);
  plVar37 = local_98;
  if (local_98 != (long *)0x0) {
    plVar25 = local_98 + 1;
    do {
      iVar14 = (int)*plVar25 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar9) {
        *(int *)plVar25 = iVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_120 = (long **)*plVar37;
      FUN_02a44274(lVar18 + 0xd8,&local_120);
    }
  }
  pbVar22 = *(byte **)(param_2 + 8);
  bVar6 = *pbVar22;
  puVar26 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar26 = &DAT_cbf29ce484222645;
    do {
      pbVar22 = pbVar22 + 1;
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar22;
    } while (bVar6 != 0);
  }
  *(undefined1 **)(param_1 + 0x90) = puVar26;
  plVar25 = (long *)PTR_DAT_0437a790;
  plVar37 = (long *)PTR_DAT_0437a788;
  pbVar22 = PTR_DAT_0437a780;
  puVar17 = PTR_LAB_04379530;
  pbVar27 = *(byte **)(param_2 + 0x28);
  bVar6 = *pbVar27;
  puVar26 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar26 = &DAT_cbf29ce484222645;
    do {
      pbVar27 = pbVar27 + 1;
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar27;
    } while (bVar6 != 0);
  }
  puVar39 = (undefined *)0x425df78;
  plVar33 = (long *)(param_1 + 0x100);
  plVar2 = (long *)(param_1 + 0x130);
  *(undefined1 **)(param_1 + 0x98) = puVar26;
  *(undefined1 *)(param_1 + 200) = 0;
LAB_025957f0:
  pbVar27 = *(byte **)(puVar39 + 8);
  puVar26 = &DAT_cbf29ce484222645;
  bVar6 = *pbVar27;
  if (bVar6 != 0) {
    puVar26 = &DAT_cbf29ce484222645;
    do {
      pbVar27 = pbVar27 + 1;
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar27;
    } while (bVar6 != 0);
  }
  puVar23 = *(undefined1 **)(param_1 + 0x108);
  if (puVar23 != (undefined1 *)0x0) {
    uVar19 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      puVar20 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar26);
    }
    else {
      puVar20 = puVar26;
      if (puVar23 <= puVar26) {
        uVar31 = 0;
        if (puVar23 != (undefined1 *)0x0) {
          uVar31 = (ulong)puVar26 / (ulong)puVar23;
        }
        puVar20 = puVar26 + -(uVar31 * (long)puVar23);
      }
    }
    puVar28 = *(undefined8 **)(*plVar33 + (long)puVar20 * 8);
    if ((puVar28 != (undefined8 *)0x0) && (plVar29 = (long *)*puVar28, plVar29 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if ((undefined1 *)plVar29[1] == puVar26) {
            if ((undefined1 *)plVar29[2] == puVar26) goto LAB_02596120;
          }
          else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) != puVar20) break;
          plVar29 = (long *)*plVar29;
        } while (plVar29 != (long *)0x0);
      }
      else {
        do {
          puVar30 = (undefined1 *)plVar29[1];
          if (puVar30 == puVar26) {
            if ((undefined1 *)plVar29[2] == puVar26) goto LAB_02596120;
          }
          else {
            if (puVar23 <= puVar30) {
              uVar19 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar19 = (ulong)puVar30 / (ulong)puVar23;
              }
              puVar30 = puVar30 + -(uVar19 * (long)puVar23);
            }
            if (puVar30 != puVar20) break;
          }
          plVar29 = (long *)*plVar29;
        } while (plVar29 != (long *)0x0);
      }
    }
  }
  if ((*pbVar22 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(pbVar22,0x58,plVar2,puVar17);
    puVar17 = PTR_LAB_04379530;
    plVar37 = (long *)PTR_DAT_0437a788;
    plVar25 = (long *)PTR_DAT_0437a790;
    if (iVar14 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(pbVar22);
      puVar17 = PTR_LAB_04379530;
      plVar37 = (long *)PTR_DAT_0437a788;
      plVar25 = (long *)PTR_DAT_0437a790;
    }
  }
  lVar18 = *plVar37;
  *plVar25 = lVar18;
  puVar24 = *(uint **)(*(long *)(*(long *)(lVar18 + 0x78) + 0x250) + 0x250);
  piVar4 = (int *)((long)puVar24 + (ulong)*puVar24);
  uVar31 = (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4));
  puVar5 = (uint *)((long)piVar4 + uVar31);
  uVar34 = (ulong)*puVar5;
  uVar19 = (ulong)*(uint *)((long)puVar5 + uVar34);
  if (uVar19 != 0) {
    lVar38 = *puVar24 + uVar34 + uVar31;
    lVar18 = 0;
    do {
      uVar31 = (ulong)*(uint *)((long)puVar24 + lVar18 + lVar38 + 4);
      lVar11 = lVar18 + (uVar31 - (long)*(int *)((long)puVar24 + lVar18 + uVar31 + lVar38 + 4)) +
                        lVar38;
      uVar7 = *(ushort *)((long)puVar24 + lVar11 + 4);
      if (uVar7 < 5) {
        if (puVar26 == (undefined1 *)0x0) goto LAB_0259597c;
      }
      else {
        uVar34 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 8);
        puVar23 = (undefined1 *)0x0;
        if (uVar34 != 0) {
          puVar23 = *(undefined1 **)((long)puVar24 + lVar18 + uVar31 + uVar34 + lVar38 + 4);
        }
        if (puVar26 == puVar23) goto LAB_0259597c;
      }
      lVar18 = lVar18 + 4;
      if (uVar19 * 4 == lVar18) break;
    } while( true );
  }
  goto LAB_02596eb4;
LAB_025960d0:
  *(uint *)(plVar29 + 3) = local_140._4_4_;
  *(undefined4 *)((long)plVar29 + 0x1c) = (undefined4)local_140;
  *(uint *)(plVar29 + 4) = local_148._4_4_;
  *(undefined4 *)((long)plVar29 + 0x24) = (undefined4)local_148;
  *(uint *)(plVar29 + 5) = local_150._4_4_;
  *(undefined4 *)((long)plVar29 + 0x2c) = (undefined4)local_150;
  *(uint *)(plVar29 + 6) = local_158._4_4_;
  *(undefined4 *)((long)plVar29 + 0x34) = (undefined4)local_158;
  *(undefined4 *)(plVar29 + 7) = uStack_15c;
  *(undefined4 *)((long)plVar29 + 0x3c) = local_160;
LAB_02596120:
  puVar39 = puVar39 + 0x18;
  if (puVar39 == &DAT_0425e020) goto LAB_025962b8;
  goto LAB_025957f0;
LAB_025962b8:
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_009cd8d4(&local_120);
    pplVar12 = local_120;
    if (local_120 != (long **)0x0) {
      FUN_01f07da0(&local_120,local_120,0);
      pplVar1 = local_120;
      if (local_120 == (long **)0x0) {
        local_70[0] = (long *)0x0;
      }
      else {
        if (*(int *)((long)local_120 + 0xc) != 0) {
          piVar4 = (int *)((long)local_120 + 0xc);
          iVar14 = *(int *)((long)local_120 + 0xc);
          do {
            plVar37 = pplVar1[2];
            if (((*PTR_DAT_0437a740 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a740), iVar15 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_0437a748 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a740);
            }
            while( true ) {
              if (plVar37 == (long *)0x0) goto LAB_02597394;
              if (plVar37 == (long *)PTR_DAT_0437a748) break;
              plVar37 = (long *)*plVar37;
            }
            iVar15 = *piVar4;
            if (iVar15 == iVar14) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') {
                plVar37 = pplVar1[3];
                local_70[0] = (long *)0x0;
                pplVar1 = local_120;
                if (plVar37 != (long *)0x0) {
                  local_70[0] = plVar37 + -10;
                }
                goto joined_r0x02597178;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar14 = iVar15;
          } while (iVar15 != 0);
        }
LAB_02597394:
        local_70[0] = (long *)0x0;
        pplVar1 = local_120;
joined_r0x02597178:
        local_120 = pplVar1;
        if (pplVar1 != (long **)0x0) {
          pplVar3 = pplVar1 + 1;
          do {
            iVar14 = *(int *)pplVar3;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
            if (bVar9) {
              *(int *)pplVar3 = iVar14 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 + -1 == 0) {
            pplVar1[2] = (long *)0x0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar18 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar18;
            local_98 = *pplVar1;
            FUN_02a44274(lVar18 + 0xd8,&local_98);
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar18 = FUN_009ae864(&local_120,*(undefined8 *)(param_1 + 8));
          if (lVar18 != 0) {
            lVar38 = *(long *)(lVar18 + 0x58);
            if (*(undefined8 **)(lVar38 + 0x18) == (undefined8 *)0x0) goto LAB_02596eb4;
            if (*(long *)(lVar38 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar38 + 0x18))();
              *(undefined8 *)(lVar38 + 0x10) = uVar16;
            }
            piVar4 = (int *)(lVar38 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar37 = *(long **)(param_1 + 0xa0);
          *(undefined8 *)(param_1 + 0xa0) = 0;
          if (plVar37 != (long *)0x0) {
            lVar38 = plVar37[0xb];
            piVar4 = (int *)(lVar38 + 0xc);
            do {
              iVar14 = *piVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar38 + 0x18) = 0;
              (**(code **)(*plVar37 + 0x20))();
            }
          }
          *(long *)(param_1 + 0xa0) = lVar18;
          lVar18 = FUN_017d3d24(lVar18,*(undefined8 *)(param_1 + 8),local_70);
          if (lVar18 != 0) {
            lVar38 = *(long *)(lVar18 + 0x58);
            if (*(undefined8 **)(lVar38 + 0x18) == (undefined8 *)0x0) goto LAB_02596eb4;
            if (*(long *)(lVar38 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar38 + 0x18))();
              *(undefined8 *)(lVar38 + 0x10) = uVar16;
            }
            piVar4 = (int *)(lVar38 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          plVar37 = *(long **)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar18;
          if (plVar37 == (long *)0x0) {
LAB_025972cc:
            plVar37 = *(long **)(param_1 + 0xa0);
            if (plVar37 != (long *)0x0) goto LAB_025972d4;
LAB_025973f4:
            FUN_00da99e0(0,param_2 + 0x68);
          }
          else {
            lVar18 = plVar37[0xb];
            piVar4 = (int *)(lVar18 + 0xc);
            do {
              iVar14 = *piVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 + -1 != 0) goto LAB_025972cc;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar37 + 0x20))();
            plVar37 = *(long **)(param_1 + 0xa0);
            if (plVar37 == (long *)0x0) goto LAB_025973f4;
LAB_025972d4:
            lVar18 = plVar37[0xb];
            if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02596eb4;
            if (*(long *)(lVar18 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
              *(undefined8 *)(lVar18 + 0x10) = uVar16;
            }
            piVar4 = (int *)(lVar18 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            FUN_00da99e0(plVar37,param_2 + 0x68);
            lVar18 = plVar37[0xb];
            piVar4 = (int *)(lVar18 + 0xc);
            do {
              iVar14 = *piVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*plVar37 + 0x20))(plVar37);
            }
          }
          if (local_70[0] != (long *)0x0) {
            lVar18 = local_70[0][0xb];
            piVar4 = (int *)(lVar18 + 0xc);
            do {
              iVar14 = *piVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_70[0] + 0x20))();
            }
          }
        }
      }
      plVar37 = pplVar12[0xb];
      piVar4 = (int *)((long)plVar37 + 0xc);
      do {
        iVar14 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = iVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar14 + -1 == 0) {
        plVar37[3] = 0;
        (*(code *)(*pplVar12)[4])(pplVar12);
      }
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar17 = PTR_DAT_04379568;
  lVar18 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar18;
  plVar37 = *(long **)(lVar18 + 0x278);
  if (plVar37 != (long *)0x0) {
    lVar18 = plVar37[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_02596eb4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar16;
    }
    piVar4 = (int *)(lVar18 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar9) {
        *piVar4 = *piVar4 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *(int *)(param_1 + 0xbc) = (int)plVar37[0x2c];
  lVar18 = 0;
  puVar39 = (undefined *)0x425df78;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((long)plVar37 + 0x164);
LAB_0259638c:
  pbVar22 = *(byte **)(puVar39 + 8);
  puVar26 = &DAT_cbf29ce484222645;
  bVar6 = *pbVar22;
  if (bVar6 != 0) {
    puVar26 = &DAT_cbf29ce484222645;
    do {
      pbVar22 = pbVar22 + 1;
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar22;
    } while (bVar6 != 0);
  }
  puVar23 = *(undefined1 **)(param_1 + 0x108);
  if (puVar23 != (undefined1 *)0x0) {
    uVar19 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      puVar20 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar26);
    }
    else {
      puVar20 = puVar26;
      if (puVar23 <= puVar26) {
        uVar31 = 0;
        if (puVar23 != (undefined1 *)0x0) {
          uVar31 = (ulong)puVar26 / (ulong)puVar23;
        }
        puVar20 = puVar26 + -(uVar31 * (long)puVar23);
      }
    }
    puVar28 = *(undefined8 **)(*(long *)(param_1 + 0x100) + (long)puVar20 * 8);
    if ((puVar28 != (undefined8 *)0x0) && (plVar25 = (long *)*puVar28, plVar25 != (long *)0x0)) {
      if (1 < uVar19) {
        do {
          puVar30 = (undefined1 *)plVar25[1];
          if (puVar30 == puVar26) {
            if ((undefined1 *)plVar25[2] == puVar26) goto LAB_0259645c;
          }
          else {
            if (puVar23 <= puVar30) {
              uVar19 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar19 = (ulong)puVar30 / (ulong)puVar23;
              }
              puVar30 = puVar30 + -(uVar19 * (long)puVar23);
            }
            if (puVar30 != puVar20) goto LAB_02596eb4;
          }
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) goto LAB_02596eb4;
        } while( true );
      }
      do {
        if ((undefined1 *)plVar25[1] == puVar26) {
          if ((undefined1 *)plVar25[2] == puVar26) goto LAB_0259645c;
        }
        else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar23 + -1)) != puVar20) break;
        plVar25 = (long *)*plVar25;
        if (plVar25 == (long *)0x0) break;
      } while( true );
    }
  }
  goto LAB_02596eb4;
LAB_0259645c:
  if ((int)plVar37[lVar18 * 2 + 0x1e] < 0) {
    FUN_0259744c(param_1,plVar25 + 3,0);
  }
  else {
    *(int *)(plVar25 + 8) = (int)plVar37[lVar18 * 2 + 0x1e];
    *(undefined4 *)((long)plVar25 + 0x44) = *(undefined4 *)((long)plVar37 + lVar18 * 0x10 + 0xf4);
    *(int *)(plVar25 + 9) = (int)plVar37[lVar18 * 2 + 0x1f];
    *(undefined4 *)((long)plVar25 + 0x4c) = *(undefined4 *)((long)plVar37 + lVar18 * 0x10 + 0xfc);
  }
  puVar39 = puVar39 + 0x18;
  lVar18 = lVar18 + 1;
  if (puVar39 == &DAT_0425e020) goto LAB_025964b8;
  goto LAB_0259638c;
LAB_025964b8:
  lVar18 = plVar37[0xb];
  piVar4 = (int *)(lVar18 + 0xc);
  do {
    iVar14 = *piVar4;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar9) {
      *piVar4 = iVar14 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar14 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
    iVar14 = *(int *)(param_1 + 0xbc);
    pbVar22 = PTR_DAT_043794d0;
    pbVar27 = PTR_DAT_0437a0e8;
    puVar28 = (undefined8 *)PTR_DAT_0437a0f0;
  }
  else {
    iVar14 = *(int *)(param_1 + 0xbc);
    pbVar22 = PTR_DAT_043794d0;
    pbVar27 = PTR_DAT_0437a0e8;
    puVar28 = (undefined8 *)PTR_DAT_0437a0f0;
  }
  PTR_DAT_043794d0 = pbVar22;
  PTR_DAT_0437a0e8 = pbVar27;
  PTR_DAT_0437a0f0 = (undefined *)puVar28;
  if (((iVar14 != 0) && (lVar18 = *(long *)(param_2 + 0x58), lVar18 != 0)) &&
     (*(int *)(lVar18 + 0xc) != 0)) {
    piVar4 = (int *)(lVar18 + 0xc);
    iVar14 = *(int *)(lVar18 + 0xc);
    do {
      plVar37 = *(long **)(lVar18 + 0x10);
      if (((*pbVar27 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar27), iVar15 != 0)) {
        if (((*pbVar22 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar22), iVar15 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar16;
          __cxa_guard_release(pbVar22);
        }
        *puVar28 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar27);
      }
      while( true ) {
        if (plVar37 == (long *)0x0) goto LAB_025964e8;
        if (plVar37 == puVar28) break;
        plVar37 = (long *)*plVar37;
      }
      iVar15 = *piVar4;
      if (iVar15 == iVar14) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = iVar14 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02596f08;
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          local_98 = (long *)((ulong)local_98 & 0xffffffffffffff00);
          plVar37 = *(long **)(lVar18 + 0x1d8);
          if (plVar37 == (long *)0x0) goto LAB_02596ff4;
          lVar38 = plVar37[0xb];
          if (*(undefined8 **)(lVar38 + 0x18) != (undefined8 *)0x0) {
            if (*(long *)(lVar38 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar38 + 0x18))();
              *(undefined8 *)(lVar38 + 0x10) = uVar16;
            }
            piVar4 = (int *)(lVar38 + 0xc);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = *piVar4 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
LAB_02596ff4:
            local_120 = &local_98;
            local_118 = (code *)param_1;
            FUN_02598128(plVar37,&local_120);
            if ((char)local_98 == '\0') {
              *(undefined4 *)(param_1 + 0xbc) = 0;
            }
            if (plVar37 != (long *)0x0) {
              lVar38 = plVar37[0xb];
              piVar4 = (int *)(lVar38 + 0xc);
              do {
                iVar14 = *piVar4;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar9) {
                  *piVar4 = iVar14 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar38 + 0x18) = 0;
                (**(code **)(*plVar37 + 0x20))(plVar37);
              }
            }
            lVar38 = *(long *)(lVar18 + 8);
            piVar4 = (int *)(lVar38 + 0xc);
            do {
              iVar14 = *piVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar9) {
                *piVar4 = iVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar38 + 0x18) = 0;
              (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))((long *)(lVar18 + -0x50));
            }
            break;
          }
          goto LAB_02596eb4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_02596f08:
      iVar14 = iVar15;
    } while (iVar15 != 0);
  }
LAB_025964e8:
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar18 = *(long *)PTR_DAT_04379560;
  *(long *)puVar17 = lVar18;
  plVar37 = *(long **)(lVar18 + 0x228);
  if (plVar37 != (long *)0x0) {
    lVar18 = plVar37[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_02596eb4;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar16;
    }
    piVar4 = (int *)(lVar18 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar9) {
        *piVar4 = *piVar4 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  uVar19 = ((long *)plVar37[0x37])[1];
  if (uVar19 != 0) {
    uVar31 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar34 = 0;
    if (uVar19 != 0) {
      uVar34 = 0xbd3260733a0bac88 / uVar19;
    }
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      uVar35 = uVar19 - 1 & 0xbd3260733a0bac88;
    }
    else {
      uVar35 = 0xbd3260733a0bac88;
      if (uVar19 < 0xbd3260733a0bac89) {
        uVar35 = 0xbd3260733a0bac88 - uVar34 * uVar19;
      }
    }
    lVar18 = *(long *)plVar37[0x37];
    plVar25 = *(long **)(lVar18 + uVar35 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      uVar32 = uVar19 - 1;
      if (uVar31 < 2) {
        do {
          if (plVar25[1] == 0xbd3260733a0bac88) {
            if (plVar25[2] == -0x42cd9f8cc5f45378) goto LAB_025966d8;
          }
          else if ((plVar25[1] & uVar32) != uVar35) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar36 = plVar25[1];
          if (uVar36 == 0xbd3260733a0bac88) {
            if (plVar25[2] == -0x42cd9f8cc5f45378) goto LAB_025966d8;
          }
          else {
            if (uVar19 <= uVar36) {
              uVar10 = 0;
              if (uVar19 != 0) {
                uVar10 = uVar36 / uVar19;
              }
              uVar36 = uVar36 - uVar10 * uVar19;
            }
            if (uVar36 != uVar35) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
  goto LAB_02596890;
LAB_025966d8:
  if (uVar31 < 2) {
    uVar35 = uVar32 & 0xbd3260733a0bac88;
    plVar25 = *(long **)(lVar18 + uVar35 * 8);
  }
  else {
    uVar35 = 0xbd3260733a0bac88;
    if (uVar19 < 0xbd3260733a0bac89) {
      uVar35 = 0xbd3260733a0bac88 - uVar34 * uVar19;
    }
    plVar25 = *(long **)(lVar18 + uVar35 * 8);
  }
  if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
    if (uVar31 < 2) {
      do {
        if (plVar25[1] == 0xbd3260733a0bac88) {
          if (plVar25[2] == -0x42cd9f8cc5f45378) goto LAB_02596784;
        }
        else if ((plVar25[1] & uVar32) != uVar35) break;
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
    else {
      do {
        uVar31 = plVar25[1];
        if (uVar31 == 0xbd3260733a0bac88) {
          if (plVar25[2] == -0x42cd9f8cc5f45378) goto LAB_02596784;
        }
        else {
          if (uVar19 <= uVar31) {
            uVar34 = 0;
            if (uVar19 != 0) {
              uVar34 = uVar31 / uVar19;
            }
            uVar31 = uVar31 - uVar34 * uVar19;
          }
          if (uVar31 != uVar35) break;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
    }
  }
  goto LAB_02596890;
LAB_02596880:
  FUN_0259744c(param_1,plVar25 + 3,1);
  goto LAB_02596890;
LAB_0259597c:
  if (uVar7 < 7) {
    local_160 = 0;
    uStack_15c = 0;
    local_158 = 0;
    local_140 = 0;
    local_150 = 0;
    local_148 = 0;
  }
  else {
    uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 10);
    if (uVar19 == 0) {
      local_140._4_4_ = 0;
    }
    else {
      local_140._4_4_ = *(uint *)((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4);
    }
    if (uVar7 < 9) {
      local_160 = 0;
      uStack_15c = 0;
      local_158 = 0;
      local_140 = (ulong)local_140._4_4_ << 0x20;
      local_150 = 0;
      local_148 = 0;
    }
    else {
      uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0xc);
      if (uVar19 == 0) {
        local_140 = (ulong)local_140._4_4_ << 0x20;
      }
      else {
        local_140 = CONCAT44(local_140._4_4_,
                             *(undefined4 *)((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4))
        ;
      }
      if (uVar7 < 0xb) {
        local_160 = 0;
        uStack_15c = 0;
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
      }
      else {
        uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0xe);
        if (uVar19 == 0) {
          local_148._4_4_ = 0;
        }
        else {
          local_148._4_4_ = *(uint *)((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4);
        }
        if (uVar7 < 0xd) {
          local_160 = 0;
          uStack_15c = 0;
          local_158 = 0;
          local_150 = 0;
          local_148 = (ulong)local_148._4_4_ << 0x20;
        }
        else {
          uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x10);
          if (uVar19 == 0) {
            local_148 = (ulong)local_148._4_4_ << 0x20;
          }
          else {
            local_148 = CONCAT44(local_148._4_4_,
                                 *(undefined4 *)
                                  ((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4));
          }
          if (uVar7 < 0xf) {
            local_160 = 0;
            uStack_15c = 0;
            local_158 = 0;
            local_150 = 0;
          }
          else {
            uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x12);
            if (uVar19 == 0) {
              local_150._4_4_ = 0;
            }
            else {
              local_150._4_4_ = *(uint *)((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4);
            }
            if (uVar7 < 0x11) {
              local_160 = 0;
              uStack_15c = 0;
              local_158 = 0;
              local_150 = (ulong)local_150._4_4_ << 0x20;
            }
            else {
              uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x14);
              if (uVar19 == 0) {
                local_150 = (ulong)local_150._4_4_ << 0x20;
              }
              else {
                local_150 = CONCAT44(local_150._4_4_,
                                     *(undefined4 *)
                                      ((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4));
              }
              if (uVar7 < 0x13) {
                local_160 = 0;
                uStack_15c = 0;
                local_158 = 0;
              }
              else {
                uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x16);
                if (uVar19 == 0) {
                  local_158._4_4_ = 0;
                }
                else {
                  local_158._4_4_ = *(uint *)((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4)
                  ;
                }
                if (uVar7 < 0x15) {
                  local_160 = 0;
                  uStack_15c = 0;
                  local_158 = (ulong)local_158._4_4_ << 0x20;
                }
                else {
                  uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x18);
                  if (uVar19 == 0) {
                    local_158 = (ulong)local_158._4_4_ << 0x20;
                  }
                  else {
                    local_158 = CONCAT44(local_158._4_4_,
                                         *(undefined4 *)
                                          ((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4));
                  }
                  if (uVar7 < 0x17) {
                    local_160 = 0;
                    uStack_15c = 0;
                  }
                  else {
                    uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x1a);
                    if (uVar19 == 0) {
                      uStack_15c = 0;
                    }
                    else {
                      uStack_15c = *(undefined4 *)
                                    ((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4);
                    }
                    if ((uVar7 < 0x19) ||
                       (uVar19 = (ulong)*(ushort *)((long)puVar24 + lVar11 + 0x1c), uVar19 == 0)) {
                      local_160 = 0;
                    }
                    else {
                      local_160 = *(undefined4 *)
                                   ((long)puVar24 + lVar18 + uVar19 + uVar31 + lVar38 + 4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_e8 = local_e8 & 0xffffffff00000000;
  local_120 = (long **)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_100 = 0;
  local_118 = (code *)0x0;
  local_110 = 0;
  puVar23 = *(undefined1 **)(param_1 + 0x108);
  if (puVar23 != (undefined1 *)0x0) {
    uVar19 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      local_170 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar26);
    }
    else {
      local_170 = puVar26;
      if (puVar23 <= puVar26) {
        uVar31 = 0;
        if (puVar23 != (undefined1 *)0x0) {
          uVar31 = (ulong)puVar26 / (ulong)puVar23;
        }
        local_170 = puVar26 + -(uVar31 * (long)puVar23);
      }
    }
    plVar29 = *(long **)(*plVar33 + (long)local_170 * 8);
    if (plVar29 != (long *)0x0) {
      if (uVar19 < 2) {
        do {
          plVar29 = (long *)*plVar29;
          if ((plVar29 == (long *)0x0) ||
             ((undefined1 *)plVar29[1] != puVar26 &&
              (undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) != local_170))
          goto LAB_02595cf4;
        } while ((undefined1 *)plVar29[2] != puVar26);
      }
      else {
        do {
          plVar29 = (long *)*plVar29;
          if (plVar29 == (long *)0x0) goto LAB_02595cf4;
          puVar20 = (undefined1 *)plVar29[1];
          if (puVar20 != puVar26) {
            if (puVar23 <= puVar20) {
              uVar19 = 0;
              if (puVar23 != (undefined1 *)0x0) {
                uVar19 = (ulong)puVar20 / (ulong)puVar23;
              }
              puVar20 = puVar20 + -(uVar19 * (long)puVar23);
            }
            if (puVar20 != local_170) goto LAB_02595cf4;
          }
        } while ((undefined1 *)plVar29[2] != puVar26);
      }
      goto joined_r0x02595f18;
    }
  }
LAB_02595cf4:
  plVar29 = (long *)(**(code **)(**(long **)(param_1 + 0x138) + 0x10))
                              (*(long **)(param_1 + 0x138),0x58,8);
  if (plVar29 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0xb8))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x138);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379520), iVar14 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar25 = (long *)PTR_DAT_0437a790;
  plVar37 = (long *)PTR_DAT_0437a788;
  puVar17 = PTR_LAB_04379530;
  if (lVar18 == 0) {
    plVar29[2] = (long)puVar26;
    plVar29[5] = local_110;
    plVar29[6] = local_108;
    plVar29[3] = (long)local_120;
    plVar29[4] = (long)local_118;
    *(undefined4 *)(plVar29 + 10) = (undefined4)local_e8;
    plVar29[8] = local_f8;
    plVar29[9] = local_f0;
    plVar29[7] = local_100;
    puVar17 = PTR_LAB_04379530;
    plVar37 = (long *)PTR_DAT_0437a788;
    plVar25 = (long *)PTR_DAT_0437a790;
  }
  else {
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar16;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar29[2] = (long)puVar26;
    plVar29[5] = local_110;
    plVar29[6] = local_108;
    plVar29[3] = (long)local_120;
    plVar29[4] = (long)local_118;
    *(undefined4 *)(plVar29 + 10) = (undefined4)local_e8;
    plVar29[8] = local_f8;
    plVar29[9] = local_f0;
    plVar29[7] = local_100;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  *plVar29 = 0;
  plVar29[1] = (long)puVar26;
  fVar40 = (float)(*(long *)(param_1 + 0x158) + 1);
  if (puVar23 == (undefined1 *)0x0) {
LAB_02595df4:
    uVar19 = (ulong)(puVar23 < (undefined1 *)0x3 || ((ulong)puVar23 & (ulong)(puVar23 + -1)) != 0) |
             (long)puVar23 << 1;
    uVar31 = (ulong)(fVar40 / *(float *)(param_1 + 0x160));
    if (uVar31 <= uVar19) {
      uVar31 = uVar19;
    }
    if (uVar31 - 1 == 0) {
      uVar31 = 2;
    }
    else if ((uVar31 & uVar31 - 1) != 0) {
      uVar31 = std::__next_prime(uVar31);
    }
    uVar19 = *(ulong *)(param_1 + 0x108);
    if (uVar19 < uVar31) {
LAB_02595e50:
      FUN_0259adf8(plVar33);
    }
    else if (uVar31 < uVar19) {
      uVar34 = (ulong)((float)*(ulong *)(param_1 + 0x158) / *(float *)(param_1 + 0x160));
      if ((uVar19 < 3) ||
         (uVar35 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
         uVar35 = (uVar35 & 0x3333333333333333) + (uVar35 >> 2 & 0x3333333333333333),
         1 < (uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar34 = std::__next_prime(uVar34);
      }
      else if (1 < uVar34) {
        uVar34 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar34 - 1) & 0x3f);
      }
      if (uVar34 <= uVar31) {
        uVar34 = uVar31;
      }
      if (uVar34 < uVar19) goto LAB_02595e50;
    }
    puVar23 = *(undefined1 **)(param_1 + 0x108);
    puVar17 = PTR_LAB_04379530;
    plVar37 = (long *)PTR_DAT_0437a788;
    plVar25 = (long *)PTR_DAT_0437a790;
    if (((ulong)puVar23 & (ulong)(puVar23 + -1)) == 0) {
      puVar20 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar26);
    }
    else if (puVar26 < puVar23) {
      puVar20 = puVar26;
    }
    else {
      uVar19 = 0;
      if (puVar23 != (undefined1 *)0x0) {
        uVar19 = (ulong)puVar26 / (ulong)puVar23;
      }
      puVar20 = puVar26 + -(uVar19 * (long)puVar23);
    }
  }
  else {
    puVar20 = local_170;
    if (*(float *)(param_1 + 0x160) * (float)puVar23 < fVar40) goto LAB_02595df4;
  }
  pbVar22 = PTR_DAT_0437a780;
  plVar21 = *(long **)(*plVar33 + (long)puVar20 * 8);
  if (plVar21 == (long *)0x0) {
    *plVar29 = *plVar2;
    *plVar2 = (long)plVar29;
    *(long **)(*plVar33 + (long)puVar20 * 8) = plVar2;
    if (*plVar29 != 0) {
      puVar20 = *(undefined1 **)(*plVar29 + 8);
      if (((ulong)puVar23 & (ulong)(puVar23 + -1)) == 0) {
        puVar20 = (undefined1 *)((ulong)puVar20 & (ulong)(puVar23 + -1));
      }
      else if (puVar23 <= puVar20) {
        uVar19 = 0;
        if (puVar23 != (undefined1 *)0x0) {
          uVar19 = (ulong)puVar20 / (ulong)puVar23;
        }
        puVar20 = puVar20 + -(uVar19 * (long)puVar23);
      }
      plVar21 = (long *)(*plVar33 + (long)puVar20 * 8);
      goto LAB_02595f04;
    }
  }
  else {
    *plVar29 = *plVar21;
LAB_02595f04:
    *plVar21 = (long)plVar29;
  }
  puVar23 = *(undefined1 **)(param_1 + 0x108);
  *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 1;
joined_r0x02595f18:
  if (puVar23 != (undefined1 *)0x0) {
    uVar19 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      puVar20 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar26);
    }
    else {
      puVar20 = puVar26;
      if (puVar23 <= puVar26) {
        uVar31 = 0;
        if (puVar23 != (undefined1 *)0x0) {
          uVar31 = (ulong)puVar26 / (ulong)puVar23;
        }
        puVar20 = puVar26 + -(uVar31 * (long)puVar23);
      }
    }
    plVar29 = *(long **)(*plVar33 + (long)puVar20 * 8);
    if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if ((undefined1 *)plVar29[1] == puVar26) {
            if ((undefined1 *)plVar29[2] == puVar26) goto LAB_025960d0;
          }
          else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) != puVar20)
          goto LAB_02597078;
          plVar29 = (long *)*plVar29;
          if (plVar29 == (long *)0x0) goto LAB_02597078;
        } while( true );
      }
      do {
        puVar30 = (undefined1 *)plVar29[1];
        if (puVar30 == puVar26) {
          if ((undefined1 *)plVar29[2] == puVar26) goto LAB_025960d0;
        }
        else {
          if (puVar23 <= puVar30) {
            uVar19 = 0;
            if (puVar23 != (undefined1 *)0x0) {
              uVar19 = (ulong)puVar30 / (ulong)puVar23;
            }
            puVar30 = puVar30 + -(uVar19 * (long)puVar23);
          }
          if (puVar30 != puVar20) break;
        }
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) break;
      } while( true );
    }
  }
LAB_02597078:
                    /* WARNING: Subroutine does not return */
  FUN_0259a940();
LAB_02596784:
  if (((char)plVar25[3] != '\0') && (uVar19 = *(ulong *)(param_1 + 0x108), uVar19 != 0)) {
    uVar31 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar34 = *(ulong *)(param_1 + 0x90);
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      uVar35 = uVar19 - 1 & uVar34;
    }
    else if (uVar34 < uVar19) {
      uVar35 = uVar34;
    }
    else {
      uVar35 = 0;
      if (uVar19 != 0) {
        uVar35 = uVar34 / uVar19;
      }
      uVar35 = uVar34 - uVar35 * uVar19;
    }
    plVar25 = *(long **)(*(long *)(param_1 + 0x100) + uVar35 * 8);
    if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
      if (uVar31 < 2) {
        do {
          if (plVar25[1] == uVar34) {
            if (plVar25[2] == uVar34) goto LAB_02596880;
          }
          else if ((plVar25[1] & uVar19 - 1) != uVar35) break;
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar31 = plVar25[1];
          if (uVar31 == uVar34) {
            if (plVar25[2] == uVar34) goto LAB_02596880;
          }
          else {
            if (uVar19 <= uVar31) {
              uVar32 = 0;
              if (uVar19 != 0) {
                uVar32 = uVar31 / uVar19;
              }
              uVar31 = uVar31 - uVar32 * uVar19;
            }
            if (uVar31 != uVar35) break;
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
      }
    }
  }
LAB_02596890:
  if (plVar37 == (long *)0x0) {
LAB_025968b0:
    uVar19 = *(ulong *)(param_1 + 0x108);
    if (uVar19 != 0) goto LAB_025968b8;
LAB_02596980:
    bVar9 = false;
    iVar14 = 1;
    uVar19 = FUN_0259830c();
    if ((uVar19 & 1) != 0) goto LAB_02596a94;
LAB_02596b18:
    if (*(char *)(param_1 + 200) == '\0') goto LAB_02596b74;
    if (((((*(int *)(param_1 + 0xb4) == iVar14) || (*(char *)(param_1 + 0x168) != '\0')) ||
         (*(int *)(param_1 + 0xb4) = iVar14, iVar14 == 0)) ||
        ((*(int *)(param_1 + 0xb8) != 0 || (*(int *)(param_1 + 0xbc) != 0)))) ||
       (*(int *)(param_1 + 0xc0) != 0)) goto LAB_02596c2c;
    *(undefined4 *)(param_1 + 0x16c) = 1;
    FUN_025985e0(param_1);
    lVar18 = *(long *)(param_1 + 0x88);
    if (lVar18 == 0) goto LAB_02596c2c;
  }
  else {
    lVar18 = plVar37[0xb];
    piVar4 = (int *)(lVar18 + 0xc);
    do {
      iVar14 = *piVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar9) {
        *piVar4 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 != 0) goto LAB_025968b0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
    uVar19 = *(ulong *)(param_1 + 0x108);
    if (uVar19 == 0) goto LAB_02596980;
LAB_025968b8:
    uVar31 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
    uVar34 = *(ulong *)(param_1 + 0x90);
    uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar31 < 2) {
      uVar35 = uVar19 - 1 & uVar34;
    }
    else if (uVar34 < uVar19) {
      uVar35 = uVar34;
    }
    else {
      uVar35 = 0;
      if (uVar19 != 0) {
        uVar35 = uVar34 / uVar19;
      }
      uVar35 = uVar34 - uVar35 * uVar19;
    }
    lVar18 = *plVar33;
    plVar25 = *(long **)(lVar18 + uVar35 * 8);
    plVar37 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) {
LAB_02596ca8:
        plVar37 = (long *)0x0;
      }
      else if (uVar31 < 2) {
        do {
          if (plVar25[1] == uVar34) {
            plVar37 = plVar25;
            if (plVar25[2] == uVar34) break;
          }
          else if ((plVar25[1] & uVar19 - 1) != uVar35) goto LAB_02596ca8;
          plVar25 = (long *)*plVar25;
          plVar37 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar32 = plVar25[1];
          if (uVar32 == uVar34) {
            plVar37 = plVar25;
            if (plVar25[2] == uVar34) break;
          }
          else {
            if (uVar19 <= uVar32) {
              uVar36 = 0;
              if (uVar19 != 0) {
                uVar36 = uVar32 / uVar19;
              }
              uVar32 = uVar32 - uVar36 * uVar19;
            }
            if (uVar32 != uVar35) goto LAB_02596ca8;
          }
          plVar25 = (long *)*plVar25;
          plVar37 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
    }
    uVar35 = *(ulong *)(param_1 + 0x98);
    if (uVar31 < 2) {
      uVar32 = uVar35 & uVar19 - 1;
      plVar25 = *(long **)(lVar18 + uVar32 * 8);
joined_r0x02596a64:
      if (plVar25 == (long *)0x0) goto LAB_02596a68;
LAB_02596a04:
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) goto LAB_02596a68;
      if (uVar31 < 2) {
        do {
          if (plVar25[1] == uVar35) {
            plVar33 = plVar25;
            if (plVar25[2] == uVar35) break;
          }
          else if ((plVar25[1] & uVar19 - 1) != uVar32) goto LAB_02596a68;
          plVar25 = (long *)*plVar25;
          plVar33 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
      else {
        do {
          uVar31 = plVar25[1];
          if (uVar31 == uVar35) {
            plVar33 = plVar25;
            if (plVar25[2] == uVar35) break;
          }
          else {
            if (uVar19 <= uVar31) {
              uVar36 = 0;
              if (uVar19 != 0) {
                uVar36 = uVar31 / uVar19;
              }
              uVar31 = uVar31 - uVar36 * uVar19;
            }
            if (uVar31 != uVar32) goto LAB_02596a68;
          }
          plVar25 = (long *)*plVar25;
          plVar33 = (long *)0x0;
        } while (plVar25 != (long *)0x0);
      }
      if (plVar37 == (long *)0x0) goto LAB_02596a70;
LAB_02596b00:
      iVar14 = (int)plVar37[8];
      bVar9 = true;
      *(undefined1 *)(plVar37 + 10) = 1;
      *(undefined1 *)(param_1 + 200) = 1;
      uVar19 = FUN_0259830c();
    }
    else {
      if (uVar35 < uVar19) {
        plVar25 = *(long **)(lVar18 + uVar35 * 8);
        uVar32 = uVar35;
        goto joined_r0x02596a64;
      }
      uVar32 = 0;
      if (uVar19 != 0) {
        uVar32 = uVar35 / uVar19;
      }
      uVar32 = uVar35 - uVar32 * uVar19;
      plVar25 = *(long **)(lVar18 + uVar32 * 8);
      if (plVar25 != (long *)0x0) goto LAB_02596a04;
LAB_02596a68:
      plVar33 = (long *)0x0;
      if (plVar37 != (long *)0x0) goto LAB_02596b00;
LAB_02596a70:
      iVar14 = 1;
      if ((uVar34 != uVar35) && (plVar33 != (long *)0x0)) {
        iVar14 = (int)plVar33[8];
      }
      bVar9 = false;
      uVar19 = FUN_0259830c();
    }
    if ((uVar19 & 1) == 0) goto LAB_02596b18;
LAB_02596a94:
    *(undefined1 *)(param_1 + 0x168) = 1;
    plVar37 = *(long **)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0xbc) = 0;
    for (; plVar37 != (long *)0x0; plVar37 = (long *)*plVar37) {
    }
    iVar14 = 1;
    *(undefined1 *)(param_1 + 200) = 0;
LAB_02596b74:
    *(int *)(param_1 + 0xb4) = iVar14;
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar14 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_88 = 0x19;
    local_80 = (long *)0x0;
    local_98 = (long *)0x1859059e13fd9496;
    pcStack_90 = "SET_STATE_WEATHER_SILENCE";
    uVar16 = *(undefined8 *)PTR_DAT_04379c30;
    local_b0 = 0;
    uStack_a8 = 0;
    *(undefined8 *)PTR_DAT_04379c38 = uVar16;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_110 = 0;
    local_108 = 0;
    local_120 = (long **)0x0;
    local_118 = (code *)0x0;
    FUN_02913338(uVar16,&local_98,&local_120,0,0,0);
    pcVar13 = local_118;
    if (local_118 == (code *)0x0) {
      local_118 = (code *)0x0;
    }
    else {
      local_110 = 0;
      local_108 = 0;
      local_120 = (long **)0x0;
      local_118 = (code *)0x0;
      (*pcVar13)(&local_100);
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    lVar18 = *(long *)(param_1 + 0x88);
    if (lVar18 == 0) goto LAB_02596c2c;
    iVar14 = *(int *)(param_1 + 0xb4);
  }
  FUN_01b976e4(lVar18,iVar14);
LAB_02596c2c:
  if ((bVar9) && (*(int *)(param_1 + 0xc0) != 0)) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
    FUN_025985e0(param_1);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if (local_78 != (long *)0x0) {
    lVar18 = local_78[0xb];
    piVar4 = (int *)(lVar18 + 0xc);
    do {
      iVar14 = *piVar4;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar9) {
        *piVar4 = iVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


