/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e8b418; name: FUN_01e8b418
 */


void FUN_01e8b418(long *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  ushort uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  size_t sVar18;
  long *plVar19;
  bool bVar20;
  int *piVar21;
  ushort *puVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  uint *puVar31;
  undefined8 *puVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long *local_1c0;
  undefined1 *local_1b8 [3];
  long *local_1a0;
  long *local_198;
  long *local_190;
  undefined8 uStack_188;
  long *local_180;
  char *local_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  long *local_128;
  char *local_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long local_e8;
  char *local_e0;
  long local_d8;
  long *local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0 [2];
  long local_88;
  
  puVar9 = PTR_DAT_0437a708;
  if (((*PTR_DAT_0437a708 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  puVar32 = (undefined8 *)PTR_DAT_0437a718;
  puVar10 = PTR_DAT_0437a710;
  lVar29 = *(long *)PTR_DAT_0437a710;
  *(long *)PTR_DAT_0437a718 = lVar29;
  (**(code **)(*param_1 + 0x188))(local_1b8,param_1);
  FUN_01ea188c(&local_1c0,param_1);
  if (local_1c0 == (long *)0x0) goto joined_r0x01e8c500;
  plVar30 = (long *)local_1c0[0xbd];
  if (plVar30 != (long *)0x0) {
    plVar28 = plVar30 + 10;
    do {
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar20) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar13 = FUN_02c6849c(plVar30[0x13]);
  *(undefined4 *)(param_1 + 0xc9) = uVar13;
  uVar12 = FUN_02c6f924(plVar30[0x13]);
  *(ushort *)((long)param_1 + 0x64c) = uVar12;
  uVar23 = *(ulong *)(lVar29 + 0x4d08);
  if (uVar23 != 0) {
    uVar4 = (ulong)uVar12 << 0x10 | (ulong)*(uint *)(param_1 + 0xc9) << 0x20;
    uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar26 = uVar4 & uVar23 - 1;
    }
    else if (uVar4 < uVar23) {
      uVar26 = uVar4;
    }
    else {
      uVar26 = 0;
      if (uVar23 != 0) {
        uVar26 = uVar4 / uVar23;
      }
      uVar26 = uVar4 - uVar26 * uVar23;
    }
    plVar28 = *(long **)(*(long *)(lVar29 + 0x4d00) + uVar26 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar25 < 2) {
        do {
          if (plVar28[1] == uVar4) {
            if (plVar28[2] == uVar4) goto LAB_01e8b5d0;
          }
          else if ((plVar28[1] & uVar23 - 1) != uVar26) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar28[1];
          if (uVar25 == uVar4) {
            if (plVar28[2] == uVar4) goto LAB_01e8b5d0;
          }
          else {
            if (uVar23 <= uVar25) {
              uVar8 = 0;
              if (uVar23 != 0) {
                uVar8 = uVar25 / uVar23;
              }
              uVar25 = uVar25 - uVar8 * uVar23;
            }
            if (uVar25 != uVar26) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  plVar28 = *(long **)(lVar29 + 0x4d30);
LAB_01e8b5d0:
  piVar21 = (int *)plVar28[3];
  puVar2 = (uint *)((long)piVar21 + (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar31 = puVar2 + 1;
  uVar23 = (ulong)*puVar2;
  if (uVar23 == 0) {
LAB_01e8c53c:
    if (*(char *)((long)param_1 + 0x4df) == '\0') {
      FUN_01e8cc8c(param_1);
    }
  }
  else {
    puVar2 = puVar31 + uVar23;
    fVar36 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
    bVar20 = false;
    do {
      puVar27 = &DAT_cbf29ce484222645;
      piVar21 = (int *)((long)puVar31 + (ulong)*puVar31);
      if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0x11) ||
         (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[8], uVar23 == 0)) {
        lVar29 = 0;
      }
      else {
        puVar3 = (uint *)((long)piVar21 + uVar23);
        lVar29 = (long)puVar3 + (ulong)*puVar3;
      }
      bVar6 = *(byte *)(lVar29 + 4);
      if (bVar6 != 0) {
        pbVar24 = (byte *)(lVar29 + 5);
        do {
          puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (bVar6 != 0);
      }
      if (puVar27 == local_1b8[0]) {
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_0437a778,puVar10,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar9);
        }
        *puVar32 = *(undefined8 *)puVar10;
        FUN_01e9e530(local_a0,param_1);
        if (local_a0[0] != (long *)0x0) {
          local_c0 = "ObstructionWaza::ChargeAttackObject";
          local_c8 = 0x1317397d33b37ba7;
          local_b8 = 0x23;
          local_b0 = (long *)0x0;
          FUN_01845684(&local_a8,local_a0[0],param_1[1],&local_c8);
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x20))();
          }
          plVar28 = local_a8;
          if (local_a8 != (long *)0x0) {
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 5) {
              lVar29 = 0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
              lVar29 = 0;
              if (uVar23 != 0) {
                puVar3 = (uint *)((long)piVar21 + uVar23);
                lVar29 = (long)puVar3 + (ulong)*puVar3;
              }
            }
            FUN_00947cf8(&local_180,lVar29 + 4);
            plVar19 = local_180;
            if (local_180 == (long *)0x0) {
              local_e8 = *(long *)PTR_DAT_04379c88;
LAB_01e8cc30:
              local_e0 = *(char **)PTR_PTR_04379d00;
              if (local_180 != (long *)0x0) goto LAB_01e8b7b8;
LAB_01e8cc40:
              local_d8 = 0;
              local_d0 = plVar19;
            }
            else {
              local_e8 = local_180[0xb];
              if (local_180 == (long *)0x0) goto LAB_01e8cc30;
              local_e0 = (char *)local_180[0xc];
              if (local_180 == (long *)0x0) goto LAB_01e8cc40;
LAB_01e8b7b8:
              local_d8 = local_180[0xd];
              local_d0 = (long *)0x0;
              (**(code **)(*local_180 + 0x18))(local_180);
              plVar16 = local_d0;
              local_d0 = plVar19;
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x20))();
              }
            }
            if (local_180 != (long *)0x0) {
              (**(code **)(*local_180 + 0x20))();
            }
            if ((*local_e0 != '\0') && (FUN_01e98c2c(&local_f0,param_1), local_f0 != (long *)0x0)) {
              FUN_01ea188c(&local_f8,param_1);
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 7) {
                lVar29 = 0;
                bVar6 = DAT_00000004;
                if (DAT_00000004 != 0) goto LAB_01e8b85c;
LAB_01e8b95c:
                FUN_00956dac(&local_100,local_f8 + 0x35);
                local_108 = plVar28;
                lVar29 = plVar28[0xb];
                if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01e8cc54;
                if (*(long *)(lVar29 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                  *(undefined8 *)(lVar29 + 0x10) = uVar15;
                }
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                FUN_019f48bc(&local_180,piVar21,&local_100,&local_108,param_1 + 0x60,10);
                plVar28 = local_180;
                local_180 = (long *)0x0;
                if (local_108 == (long *)0x0) {
LAB_01e8b9f0:
                  if (local_100 == (long *)0x0) goto LAB_01e8ba14;
LAB_01e8b9f8:
                  lVar29 = local_100[0xb];
                  piVar1 = (int *)(lVar29 + 0xc);
                  do {
                    iVar14 = *piVar1;
                    cVar7 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar20) {
                      *piVar1 = iVar14 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar14 + -1 != 0) goto LAB_01e8ba14;
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*local_100 + 0x20))();
                  cVar7 = *(char *)((long)param_1 + 0x4df);
                }
                else {
                  lVar29 = local_108[0xb];
                  piVar1 = (int *)(lVar29 + 0xc);
                  do {
                    iVar14 = *piVar1;
                    cVar7 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar20) {
                      *piVar1 = iVar14 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar14 + -1 != 0) goto LAB_01e8b9f0;
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*local_108 + 0x20))();
                  if (local_100 != (long *)0x0) goto LAB_01e8b9f8;
LAB_01e8ba14:
                  cVar7 = *(char *)((long)param_1 + 0x4df);
                }
                if ((cVar7 == '\0') && (*(char *)((long)param_1 + 0x6cc) != '\0')) {
                  puVar3 = (uint *)((long)piVar21 +
                                   (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21)));
                  fVar37 = *(float *)((long)puVar3 + (ulong)*puVar3 + 4);
                  local_178 = "field_obstruction_waza";
                  local_180 = (long *)0xd65830cac3e925da;
                  local_170 = 0x16;
                  local_168 = (long *)0x0;
                  local_120 = "chargeatttack_default_collision_size_m";
                  local_128 = (long *)0xbc3aef037616e5c0;
                  local_118 = 0x26;
                  local_110 = (long *)0x0;
                  if (((*PTR_DAT_04379660 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379660);
                  }
                  uVar15 = *(undefined8 *)PTR_DAT_04379668;
                  *(undefined8 *)PTR_DAT_04379670 = uVar15;
                  FUN_00d7d9e4(&local_190,uVar15,&local_180);
                  fVar35 = 0.0;
                  if ((local_190 != (long *)0x0) &&
                     (fVar35 = (float)FUN_00d7905c(local_190,&local_128), local_190 != (long *)0x0))
                  {
                    plVar19 = local_190 + 10;
                    do {
                      iVar14 = (int)*plVar19 + -1;
                      cVar7 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                      if (bVar20) {
                        *(int *)plVar19 = iVar14;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar14 == 0) {
                      (**(code **)(*local_190 + 0x10))();
                    }
                  }
                  *(float *)((long)param_1 + 0x4e4) = fVar37 / fVar35;
                  if (local_110 != (long *)0x0) {
                    (**(code **)(*local_110 + 0x20))();
                  }
                  plVar19 = local_168;
                  if (local_168 != (long *)0x0) {
LAB_01e8c688:
                    (**(code **)(*plVar19 + 0x20))();
                  }
                }
              }
              else {
                uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
                lVar29 = 0;
                if (uVar23 != 0) {
                  puVar3 = (uint *)((long)piVar21 + uVar23);
                  lVar29 = (long)puVar3 + (ulong)*puVar3;
                }
                bVar6 = *(byte *)(lVar29 + 4);
                if (*(byte *)(lVar29 + 4) == 0) goto LAB_01e8b95c;
LAB_01e8b85c:
                puVar27 = &DAT_cbf29ce484222645;
                pbVar24 = (byte *)(lVar29 + 5);
                do {
                  puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar24;
                  pbVar24 = pbVar24 + 1;
                } while (bVar6 != 0);
                if (puVar27 != (undefined1 *)0xd0abee268fd3cd32) {
                  if (puVar27 == (undefined1 *)0x59d4a0f41d231dac) {
                    FUN_00956dac(&local_100,local_f8 + 0x35);
                    local_108 = plVar28;
                    lVar29 = plVar28[0xb];
                    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01e8cc54;
                    if (*(long *)(lVar29 + 0x10) == 0) {
                      uVar15 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                      *(undefined8 *)(lVar29 + 0x10) = uVar15;
                    }
                    piVar1 = (int *)(lVar29 + 0xc);
                    do {
                      cVar7 = '\x01';
                      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar20) {
                        *piVar1 = *piVar1 + 1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    FUN_019f5160(&local_180,piVar21,&local_100,&local_108,param_1 + 0x80,10);
                    plVar28 = local_180;
                    local_180 = (long *)0x0;
                    if (local_108 != (long *)0x0) {
                      lVar29 = local_108[0xb];
                      piVar1 = (int *)(lVar29 + 0xc);
                      do {
                        iVar14 = *piVar1;
                        cVar7 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar20) {
                          *piVar1 = iVar14 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (iVar14 + -1 == 0) {
                        *(undefined8 *)(lVar29 + 0x18) = 0;
                        (**(code **)(*local_108 + 0x20))();
                      }
                    }
                    if (local_100 != (long *)0x0) {
                      lVar29 = local_100[0xb];
                      piVar1 = (int *)(lVar29 + 0xc);
                      do {
                        iVar14 = *piVar1 + -1;
                        cVar7 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar20) {
                          *piVar1 = iVar14;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      goto LAB_01e8bacc;
                    }
                    goto LAB_01e8bad0;
                  }
                  goto LAB_01e8b95c;
                }
                FUN_00956dac(&local_100,local_f8 + 0x35);
                local_108 = plVar28;
                lVar29 = plVar28[0xb];
                if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01e8cc54;
                if (*(long *)(lVar29 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                  *(undefined8 *)(lVar29 + 0x10) = uVar15;
                }
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                FUN_019f4c68(&local_180,piVar21,&local_100,&local_108,param_1 + 0x70,10);
                plVar28 = local_180;
                local_180 = (long *)0x0;
                if (local_108 != (long *)0x0) {
                  lVar29 = local_108[0xb];
                  piVar1 = (int *)(lVar29 + 0xc);
                  do {
                    iVar14 = *piVar1;
                    cVar7 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar20) {
                      *piVar1 = iVar14 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar14 + -1 == 0) {
                    *(undefined8 *)(lVar29 + 0x18) = 0;
                    (**(code **)(*local_108 + 0x20))();
                  }
                }
                if (local_100 != (long *)0x0) {
                  lVar29 = local_100[0xb];
                  piVar1 = (int *)(lVar29 + 0xc);
                  do {
                    iVar14 = *piVar1 + -1;
                    cVar7 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar20) {
                      *piVar1 = iVar14;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
LAB_01e8bacc:
                  if (iVar14 != 0) goto LAB_01e8bad0;
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  plVar19 = local_100;
                  goto LAB_01e8c688;
                }
              }
LAB_01e8bad0:
              local_130 = 0;
              local_178 = (char *)0x0;
              local_140 = (undefined8 *)0x0;
              uStack_138 = 0;
              local_150 = 0;
              uStack_148 = 0;
              local_160 = 0;
              local_158 = (undefined8 *)0x0;
              local_170 = 0;
              local_168 = (long *)0x0;
              local_180 = (long *)CONCAT44(local_180._4_4_,0x11);
              (**(code **)(*param_1 + 0x18))(&local_128,param_1);
              local_190 = (long *)0x0;
              uStack_188 = 0;
              FUN_01e8f368(&local_190,&local_128);
              plVar19 = local_128;
              if (local_128 != (long *)0x0) {
                plVar16 = local_128 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_128[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_88 = *plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_88);
                }
              }
              FUN_01e8f668(&local_168,&local_190);
              plVar19 = local_190;
              if (local_190 != (long *)0x0) {
                plVar16 = local_190 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_190[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_128 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_128);
                }
              }
              local_198 = plVar28;
              if (plVar28 != (long *)0x0) {
                lVar29 = plVar28[0xb];
                if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_01e8cc54;
                if (*(long *)(lVar29 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                  *(undefined8 *)(lVar29 + 0x10) = uVar15;
                }
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              FUN_01e4b6a0(&local_198,&local_180);
              puVar32 = local_140;
              if (local_198 != (long *)0x0) {
                lVar29 = local_198[0xb];
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*local_198 + 0x20))();
                  puVar32 = local_140;
                }
              }
              if (puVar32 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar32 + 1);
                do {
                  iVar14 = *piVar1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  puVar32[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_128 = (long *)*puVar32;
                  FUN_02a44274(lVar29 + 0xd8,&local_128);
                }
              }
              if (local_158 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_158 + 1);
                do {
                  iVar14 = *piVar1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  local_158[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_128 = (long *)*local_158;
                  FUN_02a44274(lVar29 + 0xd8,&local_128);
                }
              }
              plVar19 = local_168;
              if (local_168 != (long *)0x0) {
                plVar16 = local_168 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_168[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_128 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_128);
                }
              }
              pcVar11 = local_178;
              if (local_178 != (char *)0x0) {
                piVar1 = (int *)(local_178 + 8);
                do {
                  iVar14 = *piVar1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  local_178[0x10] = '\0';
                  local_178[0x11] = '\0';
                  local_178[0x12] = '\0';
                  local_178[0x13] = '\0';
                  local_178[0x14] = '\0';
                  local_178[0x15] = '\0';
                  local_178[0x16] = '\0';
                  local_178[0x17] = '\0';
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_128 = *(long **)pcVar11;
                  FUN_02a44274(lVar29 + 0xd8,&local_128);
                }
              }
              (**(code **)(*plVar28 + 0x10))(&local_180,plVar28);
              local_128 = (long *)0x0;
              local_120 = (char *)0x0;
              FUN_018fed88(&local_128,&local_180);
              plVar19 = local_180;
              if (local_180 != (long *)0x0) {
                plVar16 = local_180 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_180[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_190 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_190);
                }
              }
              FUN_019fa21c(param_1 + 0x4c,&local_128);
              plVar19 = local_128;
              if (local_128 != (long *)0x0) {
                plVar16 = local_128 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_128[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_180 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_180);
                }
              }
              local_180 = (long *)local_a0[0][0x12];
              local_178 = (char *)local_a0[0][0x13];
              plVar16 = (long *)FUN_00bd8988(local_a8,local_a8[1],&local_180);
              (**(code **)(*plVar16 + 0x10))(&local_180);
              local_128 = (long *)0x0;
              local_120 = (char *)0x0;
              FUN_00bd84b0(&local_128,&local_180);
              plVar19 = local_180;
              if (local_180 != (long *)0x0) {
                plVar17 = local_180 + 1;
                do {
                  iVar14 = (int)*plVar17 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar20) {
                    *(int *)plVar17 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_180[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_190 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_190);
                }
              }
              FUN_01e8e15c(param_1 + 0x56,&local_128);
              plVar19 = local_128;
              if (local_128 != (long *)0x0) {
                plVar17 = local_128 + 1;
                do {
                  iVar14 = (int)*plVar17 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar20) {
                    *(int *)plVar17 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_128[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_180 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_180);
                }
              }
              (**(code **)(*local_f0 + 0x18))(&local_180);
              local_128 = (long *)0x0;
              local_120 = (char *)0x0;
              FUN_0087f944(&local_128,&local_180);
              plVar19 = local_180;
              if (local_180 != (long *)0x0) {
                plVar17 = local_180 + 1;
                do {
                  iVar14 = (int)*plVar17 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar20) {
                    *(int *)plVar17 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_180[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_190 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_190);
                }
              }
              FUN_00d81464(plVar16,&local_128,&local_e8,0);
              plVar19 = local_128;
              if (local_128 != (long *)0x0) {
                plVar17 = local_128 + 1;
                do {
                  iVar14 = (int)*plVar17 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar20) {
                    *(int *)plVar17 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_128[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_180 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_180);
                }
              }
              plVar19 = local_a8;
              puVar22 = (ushort *)((long)piVar21 - (long)*piVar21);
              uVar12 = *puVar22;
              uVar34 = 0;
              uVar13 = 0;
              uVar23 = 0;
              if (10 < uVar12) {
                uVar13 = 0;
                if ((ulong)puVar22[5] != 0) {
                  uVar13 = *(undefined4 *)((long)piVar21 + (ulong)puVar22[5]);
                }
                if (uVar12 < 0xd) {
                  uVar34 = 0;
                }
                else {
                  uVar34 = 0;
                  if ((ulong)puVar22[6] != 0) {
                    uVar34 = *(undefined4 *)((long)piVar21 + (ulong)puVar22[6]);
                  }
                  if ((0xe < uVar12) && ((ulong)puVar22[7] != 0)) {
                    uVar23 = (ulong)*(uint *)((long)piVar21 + (ulong)puVar22[7]);
                    goto LAB_01e8c120;
                  }
                }
                uVar23 = 0;
              }
LAB_01e8c120:
              fVar37 = 0.0;
              fVar35 = 0.0;
              param_1[0xd1] = uVar23;
              param_1[0xd0] = CONCAT44(uVar34,uVar13);
              puVar3 = (uint *)((long)piVar21 +
                               (ulong)*(ushort *)((long)piVar21 + (8 - (long)*piVar21)));
              puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
              uVar5 = *puVar3;
              fVar38 = 0.0;
              if (3 < uVar5) {
                fVar35 = (float)puVar3[4];
                if (uVar5 == 4) {
                  fVar37 = 0.0;
                }
                else {
                  fVar37 = (float)puVar3[5];
                  if (5 < uVar5) {
                    fVar38 = (float)puVar3[6];
                    goto joined_r0x01e8c180;
                  }
                }
                fVar38 = 0.0;
              }
joined_r0x01e8c180:
              if (local_a8 != (long *)0x0) {
                lVar29 = local_a8[0xb];
                if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
LAB_01e8cc54:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar29 + 0x10) == 0) {
                  uVar15 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
                  *(undefined8 *)(lVar29 + 0x10) = uVar15;
                }
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = *piVar1 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              plVar17 = (long *)param_1[0xd8];
              param_1[0xd8] = (long)plVar19;
              if (plVar17 != (long *)0x0) {
                lVar29 = plVar17[0xb];
                piVar1 = (int *)(lVar29 + 0xc);
                do {
                  iVar14 = *piVar1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar20) {
                    *piVar1 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))();
                }
              }
              auVar33 = FUN_009a7ff4(fVar37 * fVar36,fVar35 * fVar36,fVar38 * fVar36);
              *(undefined1 (*) [16])(param_1 + 0xd2) = auVar33;
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                lVar29 = 0;
              }
              else {
                puVar3 = (uint *)((long)piVar21 + uVar23);
                lVar29 = (long)puVar3 + (ulong)*puVar3;
              }
              sVar18 = strlen((char *)(lVar29 + 4));
              bVar6 = *(byte *)(lVar29 + 4);
              puVar27 = &DAT_cbf29ce484222645;
              if (bVar6 != 0) {
                puVar27 = &DAT_cbf29ce484222645;
                pbVar24 = (byte *)(lVar29 + 5);
                do {
                  puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar24;
                  pbVar24 = pbVar24 + 1;
                } while (bVar6 != 0);
              }
              param_1[0xd6] = sVar18;
              plVar19 = (long *)param_1[0xd7];
              param_1[0xd4] = (long)puVar27;
              param_1[0xd5] = lVar29 + 4;
              param_1[0xd7] = 0;
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 0x20))();
              }
              param_1[0xd7] = 0;
              (**(code **)(*param_1 + 0x128))(param_1);
              (**(code **)(*plVar16 + 0x18))(&local_180,plVar16);
              local_190 = (long *)0x0;
              uStack_188 = 0;
              FUN_00bd84b0(&local_190,&local_180);
              plVar19 = local_180;
              puVar32 = (undefined8 *)PTR_DAT_0437a718;
              if (local_180 != (long *)0x0) {
                plVar16 = local_180 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_180[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_88 = *plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_88);
                }
              }
              FUN_00bd8d00(param_1 + 0xce,&local_190);
              plVar19 = local_190;
              if (local_190 != (long *)0x0) {
                plVar16 = local_190 + 1;
                do {
                  iVar14 = (int)*plVar16 + -1;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar20) {
                    *(int *)plVar16 = iVar14;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 == 0) {
                  local_190[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379498), iVar14 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar29 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar29;
                  local_180 = (long *)*plVar19;
                  FUN_02a44274(lVar29 + 0xd8,&local_180);
                }
              }
              if (plVar28 != (long *)0x0) {
                lVar29 = plVar28[0xb];
                piVar21 = (int *)(lVar29 + 0xc);
                do {
                  iVar14 = *piVar21;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar20) {
                    *piVar21 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*plVar28 + 0x20))(plVar28);
                }
              }
              if (local_f8 != (long *)0x0) {
                lVar29 = local_f8[0xb];
                piVar21 = (int *)(lVar29 + 0xc);
                do {
                  iVar14 = *piVar21;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar20) {
                    *piVar21 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*local_f8 + 0x20))();
                }
              }
              if (local_f0 != (long *)0x0) {
                lVar29 = local_f0[0xb];
                piVar21 = (int *)(lVar29 + 0xc);
                do {
                  iVar14 = *piVar21;
                  cVar7 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                  if (bVar20) {
                    *piVar21 = iVar14 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 + -1 == 0) {
                  *(undefined8 *)(lVar29 + 0x18) = 0;
                  (**(code **)(*local_f0 + 0x20))();
                }
              }
            }
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 0x20))();
            }
            if (local_a8 != (long *)0x0) {
              lVar29 = local_a8[0xb];
              piVar21 = (int *)(lVar29 + 0xc);
              do {
                iVar14 = *piVar21;
                cVar7 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
                if (bVar20) {
                  *piVar21 = iVar14 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar14 + -1 == 0) {
                *(undefined8 *)(lVar29 + 0x18) = 0;
                (**(code **)(*local_a8 + 0x20))();
              }
            }
          }
          if (local_a0[0] != (long *)0x0) {
            lVar29 = local_a0[0][0xb];
            piVar21 = (int *)(lVar29 + 0xc);
            do {
              iVar14 = *piVar21;
              cVar7 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar20) {
                *piVar21 = iVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar29 + 0x18) = 0;
              (**(code **)(*local_a0[0] + 0x20))();
            }
          }
        }
        bVar20 = true;
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != puVar2);
    if (!bVar20) goto LAB_01e8c53c;
  }
  if (plVar30 != (long *)0x0) {
    plVar28 = plVar30 + 10;
    do {
      iVar14 = (int)*plVar28 + -1;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar20) {
        *(int *)plVar28 = iVar14;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
    }
  }
  if (local_1c0 != (long *)0x0) {
    lVar29 = local_1c0[0xb];
    piVar21 = (int *)(lVar29 + 0xc);
    do {
      iVar14 = *piVar21;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar20) {
        *piVar21 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*local_1c0 + 0x20))();
    }
  }
joined_r0x01e8c500:
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  return;
}


