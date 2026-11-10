/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019f2bb4; name: FUN_019f2bb4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_019f2bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  byte *pbVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  undefined1 uVar31;
  undefined8 *puVar32;
  uint *puVar33;
  size_t local_1b0;
  long *local_1a0;
  long *local_178;
  undefined8 uStack_170;
  long *local_168;
  long *local_160;
  undefined8 local_158;
  long *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined1 *local_130;
  byte *local_128;
  size_t local_120;
  long *local_118;
  undefined1 local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  lVar26 = *(long *)PTR_DAT_0437a710;
  *(long *)PTR_DAT_0437a718 = lVar26;
  lVar12 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x248) + 0x98));
  uVar13 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x248) + 0x98));
  uVar18 = *(ulong *)(lVar26 + 0x4d08);
  if (uVar18 != 0) {
    uVar17 = lVar12 << 0x20 | (uVar13 & 0xffff) << 0x10;
    uVar13 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar20 = uVar17 & uVar18 - 1;
    }
    else if (uVar17 < uVar18) {
      uVar20 = uVar17;
    }
    else {
      uVar20 = 0;
      if (uVar18 != 0) {
        uVar20 = uVar17 / uVar18;
      }
      uVar20 = uVar17 - uVar20 * uVar18;
    }
    plVar24 = *(long **)(*(long *)(lVar26 + 0x4d00) + uVar20 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar24[1] == uVar17) {
            if (plVar24[2] == uVar17) goto LAB_019f2d28;
          }
          else if ((plVar24[1] & uVar18 - 1) != uVar20) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar24[1];
          if (uVar13 == uVar17) {
            if (plVar24[2] == uVar17) goto LAB_019f2d28;
          }
          else {
            if (uVar18 <= uVar13) {
              uVar9 = 0;
              if (uVar18 != 0) {
                uVar9 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar9 * uVar18;
            }
            if (uVar13 != uVar20) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  plVar24 = *(long **)(lVar26 + 0x4d30);
LAB_019f2d28:
  piVar21 = (int *)plVar24[3];
  uVar18 = (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21));
  puVar3 = (uint *)((long)piVar21 + uVar18);
  uVar17 = (ulong)*puVar3;
  puVar3 = (uint *)((long)puVar3 + uVar17);
  puVar33 = puVar3 + 1;
  uVar13 = (ulong)*puVar3;
  if (uVar13 != 0) {
    puVar3 = puVar33 + uVar13;
    lVar12 = (long)piVar21 + uVar17 + uVar18 + 9;
    pbVar22 = PTR_DAT_0437a0e8;
    do {
      puVar14 = &DAT_cbf29ce484222645;
      uVar5 = *puVar33;
      piVar21 = (int *)((long)puVar33 + (ulong)uVar5);
      if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0x11) {
        lVar26 = 0;
        bVar6 = DAT_00000004;
      }
      else {
        uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[8];
        lVar26 = 0;
        if (uVar13 != 0) {
          puVar4 = (uint *)((long)piVar21 + uVar13);
          lVar26 = (long)puVar4 + (ulong)*puVar4;
        }
        bVar6 = *(byte *)(lVar26 + 4);
      }
      if (bVar6 != 0) {
        pbVar16 = (byte *)(lVar26 + 5);
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar6 != 0);
        if ((long)puVar14 < 0x94ed70272cac328) {
          if (puVar14 == (undefined1 *)0x556483e7a1ceb2 ||
              puVar14 == (undefined1 *)0xf89b746ec44e683e) {
LAB_019f2e4c:
            lVar26 = *(long *)(param_1 + 0x238);
            if ((lVar26 != 0) && (*(int *)(lVar26 + 0xc) != 0)) {
              piVar1 = (int *)(lVar26 + 0xc);
              iVar11 = *(int *)(lVar26 + 0xc);
              while( true ) {
                puVar32 = *(undefined8 **)(lVar26 + 0x10);
                if (((*pbVar22 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar10 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                    uVar28 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar28;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                while( true ) {
                  pbVar22 = PTR_DAT_0437a0e8;
                  if (puVar32 == (undefined8 *)0x0) goto LAB_019f2e54;
                  if (puVar32 == (undefined8 *)PTR_DAT_0437a0f0) break;
                  puVar32 = (undefined8 *)*puVar32;
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) break;
                ClearExclusiveLocal();
LAB_019f2f14:
                pbVar22 = PTR_DAT_0437a0e8;
                iVar11 = iVar10;
                if (iVar10 == 0) goto LAB_019f2e54;
              }
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar11 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 != '\0') goto LAB_019f2f14;
              lVar26 = *(long *)(lVar26 + 0x18);
              pbVar22 = PTR_DAT_0437a0e8;
              if (lVar26 == 0) goto LAB_019f2e54;
              uVar28 = *(undefined8 *)(param_1 + 8);
              local_158 = 0x17;
              local_168 = (long *)0x4cba5000d3cf4b0a;
              local_160 = (long *)0x389bf9f;
              FUN_02a4754c(auStack_a8,&local_168);
              FUN_01845684(&local_88,(long *)(lVar26 + -0x50),uVar28,auStack_a8);
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x20))();
              }
              local_168 = *(long **)(lVar26 + 0x40);
              local_160 = *(long **)(lVar26 + 0x48);
              plVar15 = (long *)FUN_00bd8988(local_88,local_88[1],&local_168);
              FUN_009c69bc(&local_178,param_1);
              (**(code **)(*local_178 + 0x18))(&local_168);
              local_b8 = (undefined8 *)0x0;
              uStack_b0 = 0;
              FUN_0087f944(&local_b8,&local_168);
              plVar24 = local_168;
              if (local_168 != (long *)0x0) {
                plVar29 = local_168 + 1;
                do {
                  iVar11 = (int)*plVar29 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar8) {
                    *(int *)plVar29 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_168[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              FUN_00d804f8(plVar15,&local_b8,1);
              puVar32 = local_b8;
              if (local_b8 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_b8 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  local_b8[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_168 = (long *)*puVar32;
                  FUN_02a44274(lVar19 + 0xd8,&local_168);
                }
              }
              if (local_178 != (long *)0x0) {
                lVar19 = local_178[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_178 + 0x20))();
                }
              }
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 7) {
                lVar19 = 0;
                bVar6 = DAT_00000004;
                if (DAT_00000004 != 0) goto LAB_019f32ec;
LAB_019f40bc:
                FUN_009c69bc(&local_c0,param_1);
                plVar24 = local_88;
                local_c8 = local_88;
                if (local_88 == (long *)0x0) {
                  FUN_019f48bc(&local_168,piVar21,&local_c0,&local_c8,param_2,8);
                  local_1a0 = local_168;
joined_r0x019f43bc:
                  local_168 = (long *)0x0;
                }
                else {
                  lVar19 = local_88[0xb];
                  if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                  if (*(long *)(lVar19 + 0x10) == 0) {
                    uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                    *(undefined8 *)(lVar19 + 0x10) = uVar28;
                  }
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = *piVar1 + 1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  FUN_019f48bc(&local_168,piVar21,&local_c0,&local_c8,param_2,8);
                  local_1a0 = local_168;
                  local_168 = (long *)0x0;
                  lVar19 = plVar24[0xb];
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    iVar11 = *piVar1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = iVar11 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar11 + -1 != 0) goto joined_r0x019f43bc;
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*plVar24 + 0x20))(plVar24);
                }
                if (local_c0 != (long *)0x0) {
                  lVar19 = local_c0[0xb];
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    iVar11 = *piVar1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = iVar11 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar11 == 1) {
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*local_c0 + 0x20))();
                    uVar31 = 1;
                    goto LAB_019f34c4;
                  }
                }
                uVar31 = 1;
              }
              else {
                uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
                lVar19 = 0;
                if (uVar13 != 0) {
                  puVar4 = (uint *)((long)piVar21 + uVar13);
                  lVar19 = (long)puVar4 + (ulong)*puVar4;
                }
                bVar6 = *(byte *)(lVar19 + 4);
                if (*(byte *)(lVar19 + 4) == 0) goto LAB_019f40bc;
LAB_019f32ec:
                puVar14 = &DAT_cbf29ce484222645;
                pbVar22 = (byte *)(lVar19 + 5);
                do {
                  puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar6 != 0);
                if (puVar14 == (undefined1 *)0xd0abee268fd3cd32) {
                  FUN_009c69bc(&local_d0,param_1);
                  plVar24 = local_88;
                  local_d8 = local_88;
                  if (local_88 == (long *)0x0) {
                    FUN_019f4c68(&local_168,piVar21,&local_d0,&local_d8,param_3,8);
                    local_1a0 = local_168;
joined_r0x019f4424:
                    local_168 = (long *)0x0;
                    plVar24 = local_d0;
                  }
                  else {
                    lVar19 = local_88[0xb];
                    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                    if (*(long *)(lVar19 + 0x10) == 0) {
                      uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                      *(undefined8 *)(lVar19 + 0x10) = uVar28;
                    }
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = *piVar1 + 1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    FUN_019f4c68(&local_168,piVar21,&local_d0,&local_d8,param_3,8);
                    local_1a0 = local_168;
                    local_168 = (long *)0x0;
                    lVar19 = plVar24[0xb];
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = iVar11 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar11 + -1 != 0) goto joined_r0x019f4424;
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar24 + 0x20))(plVar24);
                    plVar24 = local_d0;
                  }
                  local_d0 = plVar24;
                  if (plVar24 != (long *)0x0) {
                    lVar19 = plVar24[0xb];
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = iVar11 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_019f34b8:
                    if (iVar11 == 1) {
                      *(undefined8 *)(lVar19 + 0x18) = 0;
                      (**(code **)(*plVar24 + 0x20))();
                    }
                  }
                }
                else {
                  if (puVar14 != (undefined1 *)0x59d4a0f41d231dac) goto LAB_019f40bc;
                  FUN_009c69bc(&local_e0,param_1);
                  plVar24 = local_88;
                  local_e8 = local_88;
                  if (local_88 == (long *)0x0) {
                    FUN_019f5160(&local_168,piVar21,&local_e0,&local_e8,param_4,8);
                    local_1a0 = local_168;
joined_r0x019f43f0:
                    local_168 = (long *)0x0;
                    plVar24 = local_e0;
                  }
                  else {
                    lVar19 = local_88[0xb];
                    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                    if (*(long *)(lVar19 + 0x10) == 0) {
                      uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                      *(undefined8 *)(lVar19 + 0x10) = uVar28;
                    }
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = *piVar1 + 1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    FUN_019f5160(&local_168,piVar21,&local_e0,&local_e8,param_4,8);
                    local_1a0 = local_168;
                    local_168 = (long *)0x0;
                    lVar19 = plVar24[0xb];
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = iVar11 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar11 + -1 != 0) goto joined_r0x019f43f0;
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar24 + 0x20))(plVar24);
                    plVar24 = local_e0;
                  }
                  local_e0 = plVar24;
                  if (plVar24 != (long *)0x0) {
                    lVar19 = plVar24[0xb];
                    piVar1 = (int *)(lVar19 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar8) {
                        *piVar1 = iVar11 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    goto LAB_019f34b8;
                  }
                }
                uVar31 = 0;
              }
LAB_019f34c4:
              plVar24 = local_88;
              local_f8 = local_88;
              if (local_88 != (long *)0x0) {
                lVar19 = local_88[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar28;
                }
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              local_100 = local_1a0;
              if (local_1a0 != (long *)0x0) {
                lVar19 = local_1a0[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar28;
                }
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              local_108 = plVar15;
              if (plVar15 == (long *)0x0) {
                FUN_019f56c8(&local_f0,param_1,piVar21,&local_f8,&local_100,&local_108);
              }
              else {
                lVar19 = plVar15[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_019f41cc;
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar28;
                }
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                FUN_019f56c8(&local_f0,param_1,piVar21,&local_f8,&local_100,&local_108);
                lVar19 = plVar15[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*plVar15 + 0x20))(plVar15);
                }
              }
              if (local_1a0 != (long *)0x0) {
                lVar19 = local_1a0[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_1a0 + 0x20))();
                }
              }
              if (plVar24 != (long *)0x0) {
                lVar19 = plVar24[0xb];
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*plVar24 + 0x20))(plVar24);
                }
              }
              plVar24 = local_88;
              local_128 = &DAT_03996322;
              local_168 = (long *)0x0;
              local_140 = (long *)0x0;
              uStack_138 = 0;
              local_130 = &DAT_cbf29ce484222645;
              local_150 = (long *)0x0;
              uStack_148 = 0;
              local_160 = (long *)0x0;
              local_158 = 0;
              local_110 = 0;
              local_120 = 0;
              local_118 = (long *)0x0;
              if (local_88 == (long *)0x0) {
                local_168 = local_88;
              }
              else {
                lVar19 = local_88[0xb];
                if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_019f41cc:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar19 + 0x10) == 0) {
                  uVar28 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
                  *(undefined8 *)(lVar19 + 0x10) = uVar28;
                }
                plVar29 = local_168;
                piVar1 = (int *)(lVar19 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                local_168 = plVar24;
                if (plVar29 != (long *)0x0) {
                  lVar19 = plVar29[0xb];
                  piVar1 = (int *)(lVar19 + 0xc);
                  do {
                    iVar11 = *piVar1;
                    cVar7 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = iVar11 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar11 + -1 == 0) {
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))();
                  }
                }
              }
              (**(code **)(*local_f0 + 0x18))(local_80);
              local_178 = (long *)0x0;
              uStack_170 = 0;
              FUN_019f8740(&local_178,local_80);
              puVar32 = local_80[0];
              if (local_80[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_80[0] + 1);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  local_80[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_70[0] = *puVar32;
                  FUN_02a44274(lVar19 + 0xd8,local_70);
                }
              }
              FUN_019f8a40(&local_160,&local_178);
              plVar24 = local_178;
              if (local_178 != (long *)0x0) {
                plVar29 = local_178 + 1;
                do {
                  iVar11 = (int)*plVar29 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar8) {
                    *(int *)plVar29 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_178[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              (**(code **)(*local_1a0 + 0x18))(local_80);
              local_178 = (long *)0x0;
              uStack_170 = 0;
              FUN_018fed88(&local_178,local_80);
              puVar32 = local_80[0];
              if (local_80[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_80[0] + 1);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  local_80[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_70[0] = *puVar32;
                  FUN_02a44274(lVar19 + 0xd8,local_70);
                }
              }
              FUN_019fa21c(&local_150,&local_178);
              plVar24 = local_178;
              if (local_178 != (long *)0x0) {
                plVar29 = local_178 + 1;
                do {
                  iVar11 = (int)*plVar29 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar8) {
                    *(int *)plVar29 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_178[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              (**(code **)(*plVar15 + 0x10))(local_80,plVar15);
              local_178 = (long *)0x0;
              uStack_170 = 0;
              FUN_00bd84b0(&local_178,local_80);
              puVar32 = local_80[0];
              if (local_80[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_80[0] + 1);
                do {
                  iVar11 = *piVar1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  local_80[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_70[0] = *puVar32;
                  FUN_02a44274(lVar19 + 0xd8,local_70);
                }
              }
              FUN_00bd8d00(&local_140,&local_178);
              plVar24 = local_178;
              if (local_178 != (long *)0x0) {
                plVar15 = local_178 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *(int *)plVar15 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_178[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar13 == 0)) {
LAB_019f3920:
                if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
                  FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_0437a0d0);
                }
                puVar14 = *(undefined1 **)PTR_DAT_0437a0d8;
                pbVar22 = *(byte **)(PTR_DAT_0437a0d8 + 8);
                local_1b0 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
                plVar24 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
                if (plVar24 != (long *)0x0) {
                  (**(code **)(*plVar24 + 0x18))(plVar24);
                }
              }
              else {
                uVar18 = (ulong)*(uint *)((long)piVar21 + uVar13);
                lVar19 = (long)((long)piVar21 + uVar13) + uVar18;
                pbVar22 = (byte *)(lVar19 + 4);
                if (lVar19 == 0) goto LAB_019f3920;
                local_1b0 = strlen((char *)pbVar22);
                bVar6 = *pbVar22;
                if (bVar6 == 0) {
                  plVar24 = (long *)0x0;
                  puVar14 = &DAT_cbf29ce484222645;
                }
                else {
                  puVar14 = &DAT_cbf29ce484222645;
                  pbVar16 = (byte *)(lVar12 + uVar18 + uVar13 + (ulong)uVar5);
                  do {
                    puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
                    bVar6 = *pbVar16;
                    pbVar16 = pbVar16 + 1;
                  } while (bVar6 != 0);
                  plVar24 = (long *)0x0;
                }
              }
              plVar15 = local_118;
              local_120 = local_1b0;
              local_118 = (long *)0x0;
              local_130 = puVar14;
              local_128 = pbVar22;
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x20))();
              }
              puVar32 = (undefined8 *)(param_1 + 0x268);
              lVar19 = *(long *)(param_1 + 600);
              local_118 = plVar24;
              local_110 = uVar31;
              if (lVar19 == *(long *)(param_1 + 0x260)) {
                lVar19 = lVar19 - *(long *)(param_1 + 0x250) >> 5;
                uVar13 = *(ulong *)(param_1 + 0x270);
                if (0x7ffffffffffffffe < uVar13) {
                  uVar13 = 0x7fffffffffffffff;
                }
                uVar18 = lVar19 * -0x5555555555555555 + 1;
                if (uVar13 < uVar18) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar23 = *(long *)(param_1 + 0x260) - *(long *)(param_1 + 0x250) >> 5;
                uVar17 = lVar23 * 0x5555555555555556;
                if (uVar18 <= uVar17) {
                  uVar18 = uVar17;
                }
                if ((ulong)(lVar23 * -0x5555555555555555) < uVar13 >> 1) {
                  uVar13 = uVar18;
                }
                if (uVar13 == 0) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = (**(code **)(*(long *)*puVar32 + 0x10))((long *)*puVar32,uVar13 * 0x60,8)
                  ;
                  if (lVar23 == 0) {
                    (**(code **)(*(long *)*puVar32 + 0xb8))();
                  }
                }
                lVar27 = lVar23 + lVar19 * 0x20;
                FUN_019fa51c(puVar32,lVar27,&local_168);
                lVar19 = lVar27 + 0x60;
                plVar24 = *(long **)(param_1 + 0x250);
                plVar15 = *(long **)(param_1 + 600);
                if (plVar15 == plVar24) {
                  plVar15 = plVar24;
                }
                else {
                  lVar27 = lVar27 + -0x60;
                  FUN_019fa51c(puVar32,lVar27,plVar15 + -0xc);
                  if (plVar15 + -0xc != plVar24) {
                    do {
                      lVar27 = lVar27 + -0x60;
                      FUN_019fa51c(puVar32,lVar27,plVar15 + -0x18);
                      plVar15 = plVar15 + -0xc;
                    } while (plVar24 + 0xc != plVar15);
                  }
                  plVar15 = *(long **)(param_1 + 0x250);
                  plVar24 = *(long **)(param_1 + 600);
                }
                lVar25 = *(long *)(param_1 + 0x260);
                *(long *)(param_1 + 0x250) = lVar27;
                *(long *)(param_1 + 600) = lVar19;
                *(ulong *)(param_1 + 0x260) = lVar23 + uVar13 * 0x60;
joined_r0x019f3a5c:
                plVar29 = plVar24;
                if (plVar24 != plVar15) {
                  while( true ) {
                    if ((long *)plVar29[-2] != (long *)0x0) {
                      (**(code **)(*(long *)plVar29[-2] + 0x20))();
                    }
                    plVar24 = (long *)plVar29[-7];
                    if (plVar24 != (long *)0x0) {
                      plVar30 = plVar24 + 1;
                      do {
                        iVar11 = (int)*plVar30 + -1;
                        cVar7 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                        if (bVar8) {
                          *(int *)plVar30 = iVar11;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (iVar11 == 0) {
                        plVar24[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar19 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar19;
                        local_80[0] = (undefined8 *)*plVar24;
                        FUN_02a44274(lVar19 + 0xd8,local_80);
                      }
                    }
                    plVar30 = (long *)plVar29[-9];
                    plVar24 = plVar29 + -0xc;
                    if (plVar30 != (long *)0x0) {
                      plVar2 = plVar30 + 1;
                      do {
                        iVar11 = (int)*plVar2 + -1;
                        cVar7 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar8) {
                          *(int *)plVar2 = iVar11;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (iVar11 == 0) {
                        plVar30[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar19 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar19;
                        local_80[0] = (undefined8 *)*plVar30;
                        FUN_02a44274(lVar19 + 0xd8,local_80);
                      }
                    }
                    plVar29 = (long *)plVar29[-0xb];
                    if (plVar29 != (long *)0x0) {
                      plVar30 = plVar29 + 1;
                      do {
                        iVar11 = (int)*plVar30 + -1;
                        cVar7 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                        if (bVar8) {
                          *(int *)plVar30 = iVar11;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (iVar11 == 0) {
                        plVar29[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar19 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar19;
                        local_80[0] = (undefined8 *)*plVar29;
                        FUN_02a44274(lVar19 + 0xd8,local_80);
                      }
                    }
                    plVar29 = (long *)*plVar24;
                    if (plVar29 == (long *)0x0) break;
                    lVar19 = plVar29[0xb];
                    piVar21 = (int *)(lVar19 + 0xc);
                    do {
                      iVar11 = *piVar21;
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                      if (bVar8) {
                        *piVar21 = iVar11 + -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar11 + -1 != 0) break;
                    *(undefined8 *)(lVar19 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))();
                    plVar29 = plVar24;
                    if (plVar24 == plVar15) goto LAB_019f3bc8;
                  }
                  goto joined_r0x019f3a5c;
                }
LAB_019f3bc8:
                if (plVar15 != (long *)0x0) {
                  lVar25 = lVar25 - (long)plVar15;
                  plVar24 = (long *)*puVar32;
                  uVar13 = (**(code **)(*plVar24 + 0xc0))(plVar24);
                  if ((uVar13 & 1) != 0) {
                    lVar19 = tpidr_el0;
                    if (*(char *)(lVar19 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar19 + 0x38d488) = 1;
                      *(undefined8 *)(lVar19 + 0x38d478) = 0;
                      *(undefined8 *)(lVar19 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar19 + 0x38d480)) {
                      FUN_02bcc824(plVar24,plVar15,lVar25,8);
                      goto joined_r0x019f419c;
                    }
                  }
                  (**(code **)(*plVar24 + 0x18))(plVar24,plVar15,lVar25,8);
                }
              }
              else {
                FUN_019fa51c(puVar32,lVar19,&local_168);
                *(long *)(param_1 + 600) = *(long *)(param_1 + 600) + 0x60;
              }
joined_r0x019f419c:
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              plVar24 = local_140;
              if (local_140 != (long *)0x0) {
                plVar15 = local_140 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *(int *)plVar15 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_140[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              plVar24 = local_150;
              if (local_150 != (long *)0x0) {
                plVar15 = local_150 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *(int *)plVar15 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_150[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              plVar24 = local_160;
              if (local_160 != (long *)0x0) {
                plVar15 = local_160 + 1;
                do {
                  iVar11 = (int)*plVar15 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar8) {
                    *(int *)plVar15 = iVar11;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 == 0) {
                  local_160[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar19 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar19;
                  local_80[0] = (undefined8 *)*plVar24;
                  FUN_02a44274(lVar19 + 0xd8,local_80);
                }
              }
              if (local_168 != (long *)0x0) {
                lVar19 = local_168[0xb];
                piVar21 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar21;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar8) {
                    *piVar21 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_168 + 0x20))();
                }
              }
              if (local_f0 != (long *)0x0) {
                lVar19 = local_f0[0xb];
                piVar21 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar21;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar8) {
                    *piVar21 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_f0 + 0x20))();
                }
              }
              if (local_1a0 != (long *)0x0) {
                lVar19 = local_1a0[0xb];
                piVar21 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar21;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar8) {
                    *piVar21 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_1a0 + 0x20))();
                }
              }
              if (local_88 != (long *)0x0) {
                lVar19 = local_88[0xb];
                piVar21 = (int *)(lVar19 + 0xc);
                do {
                  iVar11 = *piVar21;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar8) {
                    *piVar21 = iVar11 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  (**(code **)(*local_88 + 0x20))();
                }
              }
              lVar19 = *(long *)(lVar26 + 8);
              piVar21 = (int *)(lVar19 + 0xc);
              do {
                iVar11 = *piVar21;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                if (bVar8) {
                  *piVar21 = iVar11 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              pbVar22 = PTR_DAT_0437a0e8;
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*(long *)(lVar26 + -0x50) + 0x20))();
                pbVar22 = PTR_DAT_0437a0e8;
              }
            }
          }
        }
        else if ((puVar14 == (undefined1 *)0x4c64c492c7569fc0 ||
                 puVar14 == (undefined1 *)0x78f3618104baba20) ||
                 puVar14 == (undefined1 *)0x94ed70272cac328) goto LAB_019f2e4c;
      }
LAB_019f2e54:
      puVar33 = puVar33 + 1;
      lVar12 = lVar12 + 4;
    } while (puVar33 != puVar3);
  }
  return;
}


