/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb28c4; name: FUN_01eb28c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01eb28c4(long param_1,ulong *param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  ulong local_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_120;
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
  
  puVar9 = PTR_DAT_0437a668;
  puVar8 = PTR_DAT_0437a660;
  puVar7 = PTR_DAT_043794d0;
  local_cc = 0;
  local_f0 = 0x7f7fffee;
  local_120 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e8 = 0xffffffffffffffff;
  local_d8 = 0xffffffff;
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
  lVar21 = *(long *)(param_1 + 0x210);
  if (lVar21 != 0) {
    fVar22 = *(float *)(param_1 + 0x694);
    if (*(int *)(lVar21 + 0xc) != 0) {
      fVar23 = (float)*param_2 + (float)_DAT_03889960 * fVar22;
      fVar27 = (float)(*param_2 >> 0x20) + (float)((ulong)_DAT_03889960 >> 0x20) * fVar22;
      fVar29 = (float)param_2[1] + (float)_UNK_03889968 * fVar22;
      fVar22 = (float)(param_2[1] >> 0x20) + (float)((ulong)_UNK_03889968 >> 0x20) * fVar22;
      piVar1 = (int *)(lVar21 + 0xc);
      iVar12 = *(int *)(lVar21 + 0xc);
      do {
        plVar13 = *(long **)(lVar21 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01eb2954;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar21 = *(long *)(lVar21 + 0x18);
            if (lVar21 != 0) {
              uVar10 = FUN_01e4311c();
              puVar7 = PTR_DAT_04379660;
              if (((*PTR_DAT_04379660 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
              puVar9 = PTR_DAT_04379670;
              puVar8 = PTR_DAT_04379668;
              lVar15 = *(long *)PTR_DAT_04379668;
              *(long *)PTR_DAT_04379670 = lVar15;
              uVar16 = *(ulong *)(lVar15 + 0x60);
              fVar24 = 0.0;
              if (uVar16 == 0) goto LAB_01eb2cd8;
              uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
              uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar17 < 2) {
                uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
              }
              else {
                uVar18 = 0xd65830cac3e925da;
                if (uVar16 < 0xd65830cac3e925db) {
                  uVar18 = 0;
                  if (uVar16 != 0) {
                    uVar18 = 0xd65830cac3e925da / uVar16;
                  }
                  uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
                }
              }
              plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar18 * 8);
              if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
              goto LAB_01eb2cd8;
              if (1 < uVar17) goto LAB_01eb2b5c;
              goto LAB_01eb3370;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        param_3 = param_3 & 0xffffffff;
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
  }
  goto LAB_01eb2954;
LAB_01eb2b5c:
  do {
    uVar17 = plVar13[1];
    if (uVar17 == 0xd65830cac3e925da) {
      if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb2b74;
    }
    else {
      if (uVar16 <= uVar17) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar17 / uVar16;
        }
        uVar17 = uVar17 - uVar6 * uVar16;
      }
      if (uVar17 != uVar18) break;
    }
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
  goto LAB_01eb2cd8;
LAB_01eb2b74:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar16 = plVar13[0x21];
    fVar24 = 0.0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0xb88d6e9422f3651f;
      }
      else if (uVar16 < 0xb88d6e9422f36520) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xb88d6e9422f3651f / uVar16;
        }
        uVar18 = 0xb88d6e9422f3651f - uVar18 * uVar16;
      }
      else {
        uVar18 = 0xb88d6e9422f3651f;
      }
      plVar19 = *(long **)(plVar13[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0xb88d6e9422f3651f) {
              if (plVar19[2] == -0x4772916bdd0c9ae1) goto LAB_01eb2cbc;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0xb88d6e9422f3651f) {
              if (plVar19[2] == -0x4772916bdd0c9ae1) goto LAB_01eb2cbc;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar6 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01eb2cc4;
  }
  goto LAB_01eb2cd8;
LAB_01eb2cbc:
  fVar24 = *(float *)(plVar19 + 6);
LAB_01eb2cc4:
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01eb2cd8;
LAB_01eb2d98:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar16 = plVar13[0x21];
    local_180 = 0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x51ced2fe4c888970;
      }
      else if (uVar16 < 0x51ced2fe4c888971) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x51ced2fe4c888970 / uVar16;
        }
        uVar18 = 0x51ced2fe4c888970 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x51ced2fe4c888970;
      }
      plVar19 = *(long **)(plVar13[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x51ced2fe4c888970) {
              if (plVar19[2] == 0x51ced2fe4c888970) goto LAB_01eb2ee0;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x51ced2fe4c888970) {
              if (plVar19[2] == 0x51ced2fe4c888970) goto LAB_01eb2ee0;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar6 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01eb2ee8;
  }
  goto LAB_01eb2efc;
LAB_01eb2ee0:
  local_180 = (ulong)*(uint *)(plVar19 + 6);
LAB_01eb2ee8:
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_01eb2efc;
LAB_01eb3008:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar16 = plVar13[0x21];
    fVar23 = 0.0;
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar16 - 1 & 0x652ff2750649ab18;
      }
      else if (uVar16 < 0x652ff2750649ab19) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x652ff2750649ab18 / uVar16;
        }
        uVar18 = 0x652ff2750649ab18 - uVar18 * uVar16;
      }
      else {
        uVar18 = 0x652ff2750649ab18;
      }
      plVar19 = *(long **)(plVar13[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x652ff2750649ab18) {
              if (plVar19[2] == 0x652ff2750649ab18) goto LAB_01eb3158;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x652ff2750649ab18) {
              if (plVar19[2] == 0x652ff2750649ab18) goto LAB_01eb3158;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar6 = 0;
                if (uVar16 != 0) {
                  uVar6 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar6 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_01eb315c;
  }
  goto LAB_01eb31f0;
LAB_01eb3158:
  fVar23 = *(float *)(plVar19 + 6);
LAB_01eb315c:
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  if (fVar23 <= ABS(fVar22 - fVar27)) goto LAB_01eb31f0;
  goto LAB_01eb3178;
  while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
LAB_01eb3370:
    if (plVar13[1] == 0xd65830cac3e925da) {
      if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb2b74;
    }
    else if ((plVar13[1] & uVar16 - 1) != uVar18) break;
  }
LAB_01eb2cd8:
  fVar25 = (float)DAT_0388a140;
  fVar28 = (float)((ulong)DAT_0388a140 >> 0x20);
  fVar30 = (float)DAT_0388a148;
  fVar31 = (float)((ulong)DAT_0388a148 >> 0x20);
  local_160 = CONCAT44(fVar27 + fVar28 * fVar24,fVar23 + fVar25 * fVar24);
  uStack_158 = CONCAT44(fVar22 + fVar31 * fVar24,fVar29 + fVar30 * fVar24);
  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar15 = *(long *)puVar8;
  *(long *)puVar9 = lVar15;
  uVar16 = *(ulong *)(lVar15 + 0x60);
  local_180 = 0;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
    }
    else {
      uVar18 = 0xd65830cac3e925da;
      if (uVar16 < 0xd65830cac3e925db) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0xd65830cac3e925da / uVar16;
        }
        uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar18 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar13[1] == 0xd65830cac3e925da) {
            if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb2d98;
          }
          else if ((plVar13[1] & uVar16 - 1) != uVar18) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar13[1];
          if (uVar17 == 0xd65830cac3e925da) {
            if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb2d98;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_01eb2efc:
  uStack_178 = 0;
  fVar24 = (float)local_180;
  local_170 = CONCAT44(fVar27 + fVar28 * fVar24,fVar23 + fVar25 * fVar24);
  uStack_168 = CONCAT44(fVar22 + fVar31 * fVar24,fVar29 + fVar30 * fVar24);
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar15 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar15;
  uVar16 = FUN_02bf3d70(*(undefined8 *)(lVar15 + 0x230),&local_160,&local_170,uVar10,&local_150,1);
  if ((uVar16 & 1) == 0) {
    bVar5 = false;
  }
  else {
    fVar22 = (float)(local_150 >> 0x20);
    uStack_178 = uStack_148;
    local_180 = local_150;
    if ((param_3 & 1) == 0) {
LAB_01eb3178:
      local_180 = CONCAT44(fVar22 + *(float *)(param_1 + 0x694),(int)local_150);
      bVar5 = true;
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar15 = *(long *)puVar8;
      *(long *)puVar9 = lVar15;
      uVar16 = *(ulong *)(lVar15 + 0x60);
      if (uVar16 != 0) {
        uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          uVar18 = uVar16 - 1 & 0xd65830cac3e925da;
        }
        else {
          uVar18 = 0xd65830cac3e925da;
          if (uVar16 < 0xd65830cac3e925db) {
            uVar18 = 0;
            if (uVar16 != 0) {
              uVar18 = 0xd65830cac3e925da / uVar16;
            }
            uVar18 = 0xd65830cac3e925da - uVar18 * uVar16;
          }
        }
        plVar13 = *(long **)(*(long *)(lVar15 + 0x58) + uVar18 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if (uVar17 < 2) {
            do {
              if (plVar13[1] == 0xd65830cac3e925da) {
                if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb3008;
              }
              else if ((plVar13[1] & uVar16 - 1) != uVar18) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar13[1];
              if (uVar17 == 0xd65830cac3e925da) {
                if (plVar13[2] == -0x29a7cf353c16da26) goto LAB_01eb3008;
              }
              else {
                if (uVar16 <= uVar17) {
                  uVar6 = 0;
                  if (uVar16 != 0) {
                    uVar6 = uVar17 / uVar16;
                  }
                  uVar17 = uVar17 - uVar6 * uVar16;
                }
                if (uVar17 != uVar18) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
LAB_01eb31f0:
      bVar5 = false;
      *(undefined1 *)(param_1 + 0x4d8) = 1;
    }
  }
  lVar15 = *(long *)(lVar21 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar21 + -0x50) + 0x20))((long *)(lVar21 + -0x50));
  }
  if (!bVar5) {
LAB_01eb2954:
    uStack_178 = param_2[1];
    local_180 = *param_2;
  }
  uVar16 = local_120;
  if ((local_120 & 1) != 0) {
    lVar21 = tpidr_el0;
    lVar15 = *(long *)(lVar21 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar21 + 0x38d490) = lVar15;
    }
    plVar13 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
    puVar20 = (undefined8 *)(uVar16 - 0x11);
    *puVar20 = 0;
    (**(code **)(*plVar13 + 0x18))(plVar13,puVar20,(long)*(int *)(uVar16 - 9) + 0x10);
  }
  auVar26._8_8_ = uStack_178;
  auVar26._0_8_ = local_180;
  return auVar26;
}


