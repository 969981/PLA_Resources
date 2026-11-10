/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00abebb8; name: FUN_00abebb8
 */


undefined8 FUN_00abebb8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 in_q3 [16];
  float fVar26;
  float fVar27;
  long *local_58 [2];
  long *local_48;
  long *local_28;
  
  fVar26 = in_q3._12_4_;
  fVar25 = in_q3._8_4_;
  fVar24 = in_q3._4_4_;
  fVar23 = in_q3._0_4_;
  FUN_00abcc98(local_58);
  if (local_58[0] == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00ac64cc(&local_48);
  }
  uVar8 = FUN_0181bb88(local_48,param_2);
  plVar13 = local_58[0];
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar13 = local_58[0];
    }
  }
  local_58[0] = plVar13;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      plVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = (long *)*plVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  FUN_009c69bc(local_58,param_1);
  (**(code **)(*local_58[0] + 0x40))();
  fVar18 = fVar23 - (float)*param_2;
  fVar19 = fVar24 - (float)((ulong)*param_2 >> 0x20);
  fVar20 = fVar25 - (float)param_2[1];
  fVar21 = fVar26 - (float)((ulong)param_2[1] >> 0x20);
  if (local_58[0] != (long *)0x0) {
    lVar10 = local_58[0][0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  fVar18 = fVar18 * fVar18;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar27 = *(float *)(param_1 + 0x2a4);
  auVar22._4_4_ = fVar19;
  auVar22._0_4_ = fVar18;
  auVar22._8_4_ = fVar20;
  auVar22._12_4_ = fVar21;
  auVar6._4_4_ = fVar19;
  auVar6._0_4_ = fVar18;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = fVar21;
  auVar22 = NEON_ext(auVar22,auVar6,8,1);
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  puVar11 = *(undefined1 **)(lVar10 + 0x60);
  fVar20 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar8 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar11 + -1) & 0x8013c350d279d9f9);
    }
    else if (&DAT_8013c350d279d9f9 < puVar11) {
      puVar12 = &DAT_8013c350d279d9f9;
    }
    else {
      uVar14 = 0;
      if (puVar11 != (undefined1 *)0x0) {
        uVar14 = 0x8013c350d279d9f9 / (ulong)puVar11;
      }
      puVar12 = &DAT_8013c350d279d9f9 + -(uVar14 * (long)puVar11);
    }
    plVar13 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar13[2] == &DAT_8013c350d279d9f9) goto LAB_00abeda0;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar11 + -1)) != puVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar13[1];
          if (puVar16 == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar13[2] == &DAT_8013c350d279d9f9) goto LAB_00abeda0;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar8 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar8 * (long)puVar11);
            }
            if (puVar16 != puVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_00abeefc:
  fVar27 = fVar27 + fVar20;
  FUN_00abcc98(local_58,param_1);
  if (local_58[0] == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00ac64cc(&local_48);
  }
  uVar9 = 2;
  if (auVar22._0_4_ + fVar18 + auVar22._4_4_ + fVar19 < fVar27 * fVar27) {
    uVar9 = 1;
  }
  FUN_0181d458(local_48,uVar9);
  plVar13 = local_58[0];
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar13 = local_58[0];
    }
  }
  local_58[0] = plVar13;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      plVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = (long *)*plVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  FUN_00abddac(param_1);
  FUN_00abca68(local_58,param_1);
  FUN_0099c748(&local_48,local_58);
  plVar13 = local_48;
  if (local_48[0xc5] == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_009b8474(&local_28);
    if (local_28 != (long *)0x0) {
      FUN_018281e0();
      if (local_28 != (long *)0x0) {
        lVar10 = local_28[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
      goto joined_r0x00abf30c;
    }
  }
  *(undefined4 *)(plVar13 + 0x11c) = 0;
  *(undefined4 *)(plVar13 + 0x11d) = 0;
joined_r0x00abf30c:
  plVar13 = local_58[0];
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      plVar13 = local_58[0];
    }
  }
  local_58[0] = plVar13;
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 1;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      plVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = (long *)*plVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  *(undefined4 *)(param_1 + 0x208) = 0xf;
  FUN_009c69bc(local_58,param_1);
  (**(code **)(*local_58[0] + 0x40))();
  *(ulong *)(param_1 + 0x288) = CONCAT44(fVar26,fVar25);
  *(ulong *)(param_1 + 0x280) = CONCAT44(fVar24,fVar23);
  if (local_58[0] != (long *)0x0) {
    lVar10 = local_58[0][0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58[0] + 0x20))();
    }
  }
  return 1;
LAB_00abeda0:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = plVar13[0x21];
    fVar20 = 0.0;
    if (uVar8 != 0) {
      uVar14 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar15 = uVar8 - 1 & 0x86c04bce179d7ef0;
      }
      else if (uVar8 < 0x86c04bce179d7ef1) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = 0x86c04bce179d7ef0 / uVar8;
        }
        uVar15 = 0x86c04bce179d7ef0 - uVar15 * uVar8;
      }
      else {
        uVar15 = 0x86c04bce179d7ef0;
      }
      plVar17 = *(long **)(plVar13[0x20] + uVar15 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar14 < 2) {
          do {
            if (plVar17[1] == 0x86c04bce179d7ef0) {
              if (plVar17[2] == -0x793fb431e8628110) goto LAB_00abeee4;
            }
            else if ((plVar17[1] & uVar8 - 1) != uVar15) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar17[1];
            if (uVar14 == 0x86c04bce179d7ef0) {
              if (plVar17[2] == -0x793fb431e8628110) goto LAB_00abeee4;
            }
            else {
              if (uVar8 <= uVar14) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar14 / uVar8;
                }
                uVar14 = uVar14 - uVar5 * uVar8;
              }
              if (uVar14 != uVar15) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_00abeee8;
  }
  goto LAB_00abeefc;
LAB_00abeee4:
  fVar20 = *(float *)(plVar17 + 6);
LAB_00abeee8:
  do {
    iVar7 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_00abeefc;
}


