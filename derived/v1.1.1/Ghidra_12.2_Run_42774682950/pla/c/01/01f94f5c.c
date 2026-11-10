/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f94f5c; name: FUN_01f94f5c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f94f5c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  long *local_178;
  long local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  long *local_150;
  char *local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_120 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined2 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_68;
  
  puVar10 = PTR_DAT_0437a0f0;
  puVar9 = PTR_DAT_0437a0e8;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  if (*(char *)(param_2 + 0x46) != '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x47) != '\0') {
    if ((((float)*(undefined8 *)(param_1 + 0x228) == 0.0) &&
        ((float)*(undefined8 *)(param_1 + 0x220) == 0.0)) &&
       ((float)((ulong)*(undefined8 *)(param_1 + 0x220) >> 0x20) == 0.0)) {
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0x7f7fffee;
      local_a0 = 0;
      uStack_98 = 0;
      fVar24 = (float)*(undefined8 *)(param_1 + 0x210);
      fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20);
      local_170 = CONCAT44(fVar23 + (float)((ulong)_DAT_03889d10 >> 0x20),
                           fVar24 + (float)_DAT_03889d10);
      fVar25 = (float)*(undefined8 *)(param_1 + 0x218);
      fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20);
      pcStack_168 = (char *)CONCAT44(fVar27 + (float)((ulong)_UNK_03889d18 >> 0x20),
                                     fVar25 + (float)_UNK_03889d18);
      local_90 = (long *)CONCAT44(fVar23 + (float)((ulong)_DAT_03889480 >> 0x20),
                                  fVar24 + (float)_DAT_03889480);
      uStack_88 = CONCAT44(fVar27 + (float)((ulong)_UNK_03889488 >> 0x20),
                           fVar25 + (float)_UNK_03889488);
      local_120[0] = 0;
      local_e8 = 0xffffffffffffffff;
      local_110 = 0;
      uStack_108 = 0;
      local_d8 = 0xffffffff;
      local_e0 = 0xffffff;
      local_d4 = 0xf;
      local_d0 = 0xffff;
      local_cc = 0;
      local_b0 = 0xffffffff;
      local_b8 = 0xffffff;
      local_ac = 0xf;
      local_a8 = 0xffff;
      local_a4 = 0;
      local_c8 = 0;
      uStack_c0 = 0xffffffffffffffff;
      uVar14 = FUN_01f9691c(param_1,&local_170,&local_90,&local_150);
      if ((uVar14 & 1) != 0) {
        *(char **)(param_1 + 0x228) = local_148;
        *(long **)(param_1 + 0x220) = local_150;
      }
      FUN_032c7b9c(local_120);
    }
    local_150 = (long *)0x7ef945cdc4edf54a;
    local_148 = "quest_destination";
    local_140 = 0x11;
    local_138 = (long *)0x0;
    local_170 = -0x599235292c177964;
    pcStack_168 = "PinHeightOffset";
    local_160 = 0xf;
    local_158 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar16 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar16;
    FUN_00d7d9e4(&local_90,uVar16,&local_150);
    if (local_90 == (long *)0x0) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = (float)FUN_00d7905c(local_90,&local_170);
      if (local_90 != (long *)0x0) {
        plVar22 = local_90 + 10;
        do {
          iVar12 = (int)*plVar22 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    fVar23 = (float)*(undefined8 *)(param_1 + 0x220) - (float)*(undefined8 *)(param_1 + 0x210);
    fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x220) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20);
    uVar16 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x228) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20),
                      (float)*(undefined8 *)(param_1 + 0x228) -
                      (float)*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_2 + 0x38) = uVar16;
    *(ulong *)(param_2 + 0x30) = CONCAT44(fVar25,fVar23);
    fVar24 = fVar24 + *(float *)(param_1 + 0x194);
    if (fVar25 + *(float *)(param_1 + 0x214) <= fVar24) {
      return;
    }
    *(undefined8 *)(param_2 + 0x38) = uVar16;
    *(ulong *)(param_2 + 0x30) = CONCAT44(fVar24,fVar23);
    return;
  }
  if ((float)*(undefined8 *)(param_2 + 0x38) != 0.0) {
    return;
  }
  if ((float)*(undefined8 *)(param_2 + 0x30) != 0.0) {
    return;
  }
  if ((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) != 0.0) {
    return;
  }
  lVar19 = *(long *)(param_1 + 0x98);
  if (lVar19 == 0) {
    return;
  }
  if (*(int *)(lVar19 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar19 + 0xc);
  iVar12 = *(int *)(lVar19 + 0xc);
  while( true ) {
    plVar22 = *(long **)(lVar19 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        uVar16 = FUN_0087f8f0();
        *(undefined8 *)puVar8 = uVar16;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar10 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar10) break;
      plVar22 = (long *)*plVar22;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar12) break;
    ClearExclusiveLocal();
LAB_01f95270:
    iVar12 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar4) {
    *piVar1 = iVar12 + 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_01f95270;
  lVar19 = *(long *)(lVar19 + 0x18);
  if (lVar19 == 0) {
    return;
  }
  plVar22 = (long *)(lVar19 + -0x50);
  FUN_01847290(&local_68,plVar22);
  if (local_68 == (long *)0x0) goto LAB_01f953cc;
  iVar12 = *(int *)(param_2 + 0x40);
  if (iVar12 == 0x17) {
    FUN_01f96c64(&local_150,local_68,0x17,*(undefined8 *)(param_2 + 0x18));
    if (local_150 == (long *)0x0) {
      iVar12 = *(int *)(param_2 + 0x40);
      local_150 = (long *)0x0;
      goto joined_r0x01f95464;
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_2 + 0x46) = 1;
    lVar17 = local_150[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_150 + 0x20))();
    }
  }
  else {
joined_r0x01f95464:
    if (iVar12 == 1) {
      FUN_00bf702c(&local_90,local_68,1,*(undefined8 *)(param_2 + 0x18));
      if (local_90 != (long *)0x0) {
        *(undefined1 *)(param_2 + 0x45) = 1;
        pfVar13 = (float *)FUN_01a7555c();
        if (0.0 < *pfVar13) {
          puVar15 = (uint *)FUN_01a7555c(local_90);
          uVar26 = *puVar15;
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(ulong *)(param_2 + 0x30) = (ulong)uVar26 << 0x20;
        }
        else {
          FUN_01a73640(&local_150,local_90);
          plVar18 = local_150;
          if (local_150 == (long *)0x0) {
            plVar18 = (long *)0x0;
          }
          else {
            if (*(int *)((long)local_150 + 0xc) != 0) {
              piVar1 = (int *)((long)local_150 + 0xc);
              iVar12 = *(int *)((long)local_150 + 0xc);
              do {
                plVar20 = (long *)plVar18[2];
                if (((*PTR_DAT_04379e88 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar11 != 0)) {
                  if (((*PTR_DAT_043795d8 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
                    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0))
                    {
                      uVar16 = FUN_0087f8f0();
                      *(undefined8 *)puVar8 = uVar16;
                      __cxa_guard_release(puVar7);
                    }
                    *(undefined **)PTR_DAT_043795e0 = puVar8;
                    __cxa_guard_release(PTR_DAT_043795d8);
                  }
                  *(undefined **)PTR_DAT_04379e90 = PTR_DAT_043795e0;
                  __cxa_guard_release(PTR_DAT_04379e88);
                }
                while( true ) {
                  if (plVar20 == (long *)0x0) goto LAB_01f95aa0;
                  if (plVar20 == (long *)PTR_DAT_04379e90) break;
                  plVar20 = (long *)*plVar20;
                }
                iVar11 = *piVar1;
                if (iVar11 == iVar12) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar12 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar17 = plVar18[3];
                    plVar18 = (long *)0x0;
                    plVar20 = local_150;
                    if (lVar17 != 0) {
                      plVar18 = (long *)(lVar17 + -0x50);
                    }
                    goto joined_r0x01f95a08;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar12 = iVar11;
              } while (iVar11 != 0);
            }
LAB_01f95aa0:
            plVar18 = (long *)0x0;
            plVar20 = local_150;
joined_r0x01f95a08:
            local_150 = plVar20;
            if (plVar20 != (long *)0x0) {
              plVar21 = plVar20 + 1;
              do {
                iVar12 = (int)*plVar21 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar4) {
                  *(int *)plVar21 = iVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 == 0) {
                plVar20[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_170 = *plVar20;
                FUN_02a44274(lVar17 + 0xd8,&local_170);
              }
            }
          }
          FUN_01a8b908(&local_150,plVar18);
          plVar20 = local_150;
          puVar7 = PTR_DAT_04379e80;
          if (local_150 != (long *)0x0) {
            if (*(int *)((long)local_150 + 0xc) != 0) {
              piVar1 = (int *)((long)local_150 + 0xc);
              iVar12 = *(int *)((long)local_150 + 0xc);
              do {
                plVar21 = (long *)plVar20[2];
                if (((*PTR_DAT_04379e78 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379e78), iVar11 != 0)) {
                  uVar16 = FUN_0095a420();
                  *(undefined8 *)puVar7 = uVar16;
                  __cxa_guard_release(PTR_DAT_04379e78);
                }
                plVar5 = (long *)0x0;
                plVar2 = local_150;
                if (plVar21 == (long *)0x0) goto joined_r0x01f95bac;
                while (plVar21 != (long *)puVar7) {
                  plVar21 = (long *)*plVar21;
                  if (plVar21 == (long *)0x0) {
                    plVar5 = (long *)0x0;
                    goto joined_r0x01f95bac;
                  }
                }
                iVar11 = *piVar1;
                if (iVar11 == iVar12) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar12 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar17 = plVar20[3];
                    plVar5 = (long *)0x0;
                    if (lVar17 != 0) {
                      plVar5 = (long *)(lVar17 + -0x50);
                    }
                    goto joined_r0x01f95bac;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar12 = iVar11;
              } while (iVar11 != 0);
            }
            plVar5 = (long *)0x0;
            plVar2 = local_150;
joined_r0x01f95bac:
            local_150 = plVar2;
            if (plVar2 != (long *)0x0) {
              plVar20 = plVar2 + 1;
              do {
                iVar12 = (int)*plVar20 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar4) {
                  *(int *)plVar20 = iVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 == 0) {
                plVar2[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_170 = *plVar2;
                FUN_02a44274(lVar17 + 0xd8,&local_170);
              }
            }
            if (plVar5 != (long *)0x0) {
              FUN_00aae1c0(&local_150,plVar5);
              plVar20 = local_150;
              if (local_150 != (long *)0x0) {
                if (*(int *)((long)local_150 + 0xc) != 0) {
                  piVar1 = (int *)((long)local_150 + 0xc);
                  iVar12 = *(int *)((long)local_150 + 0xc);
                  do {
                    plVar21 = (long *)plVar20[2];
                    lVar17 = FUN_00a3edb8();
                    while( true ) {
                      if (plVar21 == (long *)0x0) goto LAB_01f95d24;
                      if (plVar21 == (long *)lVar17) break;
                      plVar21 = (long *)*plVar21;
                    }
                    iVar11 = *piVar1;
                    if (iVar11 == iVar12) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar12 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') {
                        lVar17 = plVar20[3];
                        plVar20 = (long *)0x0;
                        plVar21 = local_150;
                        if (lVar17 != 0) {
                          plVar20 = (long *)(lVar17 + -0x50);
                        }
                        goto joined_r0x01f95d48;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar12 = iVar11;
                  } while (iVar11 != 0);
                }
LAB_01f95d24:
                plVar20 = (long *)0x0;
                plVar21 = local_150;
joined_r0x01f95d48:
                local_150 = plVar21;
                if (plVar21 != (long *)0x0) {
                  plVar2 = plVar21 + 1;
                  do {
                    iVar12 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *(int *)plVar2 = iVar12;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 == 0) {
                    plVar21[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_170 = *plVar21;
                    FUN_02a44274(lVar17 + 0xd8,&local_170);
                  }
                }
                if (plVar20 != (long *)0x0) {
                  fVar24 = *(float *)((long)plVar20 + 0x29c) + -0.1;
                  *(undefined8 *)(param_2 + 0x38) = 0;
                  *(ulong *)(param_2 + 0x30) = (ulong)(uint)(fVar24 + fVar24) << 0x20;
                  lVar17 = plVar20[0xb];
                  piVar1 = (int *)(lVar17 + 0xc);
                  do {
                    iVar12 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar12 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar12 + -1 == 0) {
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    (**(code **)(*plVar20 + 0x20))(plVar20);
                  }
                }
              }
              lVar17 = plVar5[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar5 + 0x20))(plVar5);
              }
            }
          }
          if (plVar18 != (long *)0x0) {
            lVar17 = plVar18[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
          }
        }
        if (local_90 != (long *)0x0) {
          lVar17 = local_90[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
      }
      iVar12 = *(int *)(param_2 + 0x40);
    }
    if (iVar12 == 0x16) {
      FUN_019c7bd4(&local_178,local_68,0x16,*(undefined8 *)(param_2 + 0x18));
      if (local_178 != (long *)0x0) {
        FUN_009c69bc(&local_150);
        local_170 = CONCAT44((float)((ulong)local_150[0x1a] >> 0x20) +
                             (float)((ulong)_DAT_03889790 >> 0x20),
                             (float)local_150[0x1a] + (float)_DAT_03889790);
        pcStack_168 = (char *)CONCAT44((float)((ulong)local_150[0x1b] >> 0x20) +
                                       (float)((ulong)_UNK_03889798 >> 0x20),
                                       (float)local_150[0x1b] + (float)_UNK_03889798);
        if (local_150 != (long *)0x0) {
          lVar17 = local_150[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        FUN_009c69bc(&local_150,local_178);
        local_90 = (long *)CONCAT44((float)((ulong)local_150[0x1a] >> 0x20) +
                                    (float)((ulong)_DAT_03889900 >> 0x20),
                                    (float)local_150[0x1a] + (float)_DAT_03889900);
        uStack_88 = CONCAT44((float)((ulong)local_150[0x1b] >> 0x20) +
                             (float)((ulong)_UNK_03889908 >> 0x20),
                             (float)local_150[0x1b] + (float)_UNK_03889908);
        if (local_150 != (long *)0x0) {
          lVar17 = local_150[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        local_cc = 0;
        local_f0 = 0x7f7fffee;
        local_120[0] = 0;
        local_e8 = 0xffffffffffffffff;
        local_d8 = 0xffffffff;
        local_110 = 0;
        uStack_108 = 0;
        local_e0 = 0xffffff;
        local_d4 = 0xf;
        local_d0 = 0xffff;
        local_b0 = 0xffffffff;
        local_b8 = 0xffffff;
        local_ac = 0xf;
        local_a8 = 0xffff;
        local_a4 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_c8 = 0;
        uStack_c0 = 0xffffffffffffffff;
        local_a0 = 0;
        uStack_98 = 0;
        uVar14 = FUN_01f9691c(param_1,&local_170,&local_90,&local_150);
        if ((uVar14 & 1) != 0) {
          *(char **)(param_2 + 0x28) = local_148;
          uVar16 = _DAT_03889970;
          *(undefined8 *)(param_2 + 0x38) = _UNK_03889978;
          *(undefined8 *)(param_2 + 0x30) = uVar16;
          *(long **)(param_2 + 0x20) = local_150;
        }
        FUN_032c7b9c(local_120);
        if (local_178 != (long *)0x0) {
          lVar17 = local_178[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_178 + 0x20))();
          }
        }
      }
      iVar12 = *(int *)(param_2 + 0x40);
    }
    if (iVar12 == 0x15) {
      FUN_01f96f98(&local_178,local_68,0x15,*(undefined8 *)(param_2 + 0x18));
      if (local_178 != (long *)0x0) {
        FUN_009c69bc(&local_150);
        local_170 = CONCAT44((float)((ulong)local_150[0x1a] >> 0x20) +
                             (float)((ulong)_DAT_03889790 >> 0x20),
                             (float)local_150[0x1a] + (float)_DAT_03889790);
        pcStack_168 = (char *)CONCAT44((float)((ulong)local_150[0x1b] >> 0x20) +
                                       (float)((ulong)_UNK_03889798 >> 0x20),
                                       (float)local_150[0x1b] + (float)_UNK_03889798);
        if (local_150 != (long *)0x0) {
          lVar17 = local_150[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        FUN_009c69bc(&local_150,local_178);
        local_90 = (long *)CONCAT44((float)((ulong)local_150[0x1a] >> 0x20) +
                                    (float)((ulong)_DAT_03889900 >> 0x20),
                                    (float)local_150[0x1a] + (float)_DAT_03889900);
        uStack_88 = CONCAT44((float)((ulong)local_150[0x1b] >> 0x20) +
                             (float)((ulong)_UNK_03889908 >> 0x20),
                             (float)local_150[0x1b] + (float)_UNK_03889908);
        if (local_150 != (long *)0x0) {
          lVar17 = local_150[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_150 + 0x20))();
          }
        }
        local_cc = 0;
        local_f0 = 0x7f7fffee;
        local_120[0] = 0;
        local_e8 = 0xffffffffffffffff;
        local_d8 = 0xffffffff;
        local_110 = 0;
        uStack_108 = 0;
        local_e0 = 0xffffff;
        local_d4 = 0xf;
        local_d0 = 0xffff;
        local_b0 = 0xffffffff;
        local_b8 = 0xffffff;
        local_ac = 0xf;
        local_a8 = 0xffff;
        local_a4 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_c8 = 0;
        uStack_c0 = 0xffffffffffffffff;
        local_a0 = 0;
        uStack_98 = 0;
        uVar14 = FUN_01f9691c(param_1,&local_170,&local_90,&local_150);
        if ((uVar14 & 1) != 0) {
          *(char **)(param_2 + 0x28) = local_148;
          uVar16 = _DAT_03889970;
          *(undefined8 *)(param_2 + 0x38) = _UNK_03889978;
          *(undefined8 *)(param_2 + 0x30) = uVar16;
          *(long **)(param_2 + 0x20) = local_150;
        }
        FUN_032c7b9c(local_120);
        if (local_178 != (long *)0x0) {
          lVar17 = local_178[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_178 + 0x20))();
            iVar12 = *(int *)(param_2 + 0x40);
            goto joined_r0x01f953a4;
          }
        }
      }
      iVar12 = *(int *)(param_2 + 0x40);
    }
joined_r0x01f953a4:
    if ((iVar12 == 0) && (*(long *)(param_2 + 8) != *(long *)(param_1 + 0x68))) {
      lVar17 = *(long *)(param_2 + 0x20);
      local_f0 = 0x7f7fffee;
      fVar24 = (float)lVar17;
      fVar23 = (float)((ulong)lVar17 >> 0x20);
      local_170 = CONCAT44(fVar23 + (float)((ulong)_DAT_03889790 >> 0x20),
                           fVar24 + (float)_DAT_03889790);
      fVar25 = (float)*(undefined8 *)(param_2 + 0x28);
      fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      pcStack_168 = (char *)CONCAT44(fVar27 + (float)((ulong)_UNK_03889798 >> 0x20),
                                     fVar25 + (float)_UNK_03889798);
      local_90 = (long *)CONCAT44(fVar23 + (float)((ulong)_DAT_03889900 >> 0x20),
                                  fVar24 + (float)_DAT_03889900);
      uStack_88 = CONCAT44(fVar27 + (float)((ulong)_UNK_03889908 >> 0x20),
                           fVar25 + (float)_UNK_03889908);
      local_120[0] = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_e8 = 0xffffffffffffffff;
      local_100 = 0;
      uStack_f8 = 0;
      local_d8 = 0xffffffff;
      local_e0 = 0xffffff;
      local_d4 = 0xf;
      local_d0 = 0xffff;
      local_cc = 0;
      local_b0 = 0xffffffff;
      local_b8 = 0xffffff;
      local_ac = 0xf;
      local_a8 = 0xffff;
      local_a4 = 0;
      local_c8 = 0;
      uStack_c0 = 0xffffffffffffffff;
      local_a0 = 0;
      uStack_98 = 0;
      uVar14 = FUN_01f9691c(param_1,&local_170,&local_90,&local_150);
      if ((uVar14 & 1) != 0) {
        *(char **)(param_2 + 0x28) = local_148;
        uVar6 = _UNK_03889978;
        uVar16 = _DAT_03889970;
        *(long *)(param_2 + 0x20) = (long)local_150;
        *(undefined8 *)(param_2 + 0x38) = uVar6;
        *(undefined8 *)(param_2 + 0x30) = uVar16;
      }
      FUN_032c7b9c(local_120);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_01f953cc:
  lVar19 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar19 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
}


