/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a45758; name: FUN_01a45758
 */


void FUN_01a45758(long param_1,char *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  bVar4 = false;
  if (*param_2 == '\0') goto LAB_01a45788;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_008c4b3c(&local_b0,param_2 + 0x10);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00b63bec(&local_a0,param_2 + 0x20);
  local_88 = *(undefined8 *)(param_2 + 0x38);
  local_80 = param_2[0x40];
  local_90 = *(undefined8 *)(param_2 + 0x30);
  bVar4 = true;
  if (*(char *)(param_1 + 0xdf60) != '\0') {
    bVar9 = false;
    if ((local_b0 != (undefined8 *)0x0) && (bVar9 = false, *(int *)((long)local_b0 + 0xc) != 0)) {
      bVar9 = local_b0 == *(undefined8 **)(param_1 + 0xdf70);
    }
    bVar10 = local_80 == '\0';
    if ((!bVar9) && (local_80 != '\0')) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar13 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar13;
      puVar16 = *(undefined1 **)(lVar13 + 0x60);
      if (puVar16 == (undefined1 *)0x0) {
LAB_01a45af0:
        iVar12 = 0;
      }
      else {
        uVar14 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          puVar15 = (undefined1 *)((ulong)(puVar16 + -1) & 0xf976cfc5b993016e);
        }
        else {
          puVar15 = &DAT_f976cfc5b993016e;
          if (puVar16 < (undefined1 *)0xf976cfc5b993016f) {
            uVar19 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar19 = 0xf976cfc5b993016e / (ulong)puVar16;
            }
            puVar15 = &DAT_f976cfc5b993016e + -(uVar19 * (long)puVar16);
          }
        }
        plVar17 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar15 * 8);
        if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
        goto LAB_01a45af0;
        if (1 < uVar14) {
          do {
            puVar18 = (undefined1 *)plVar17[1];
            if (puVar18 == &DAT_f976cfc5b993016e) {
              if ((undefined1 *)plVar17[2] == &DAT_f976cfc5b993016e) goto LAB_01a459f4;
            }
            else {
              if (puVar16 <= puVar18) {
                uVar14 = 0;
                if (puVar16 != (undefined1 *)0x0) {
                  uVar14 = (ulong)puVar18 / (ulong)puVar16;
                }
                puVar18 = puVar18 + -(uVar14 * (long)puVar16);
              }
              if (puVar18 != puVar15) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
          goto LAB_01a45af0;
        }
        do {
          if ((undefined1 *)plVar17[1] == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar17[2] == &DAT_f976cfc5b993016e) goto LAB_01a459f4;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar16 + -1)) != puVar15)
          goto LAB_01a45af0;
          plVar17 = (long *)*plVar17;
          iVar12 = 0;
        } while (plVar17 != (long *)0x0);
      }
      goto LAB_01a45b58;
    }
    goto joined_r0x01a45c14;
  }
  goto LAB_01a45864;
LAB_01a459f4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_01a45af0;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar17[0x14];
  if (uVar14 == 0) {
    iVar12 = 0;
  }
  else {
    uVar19 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar14 - 1 & 0x8a111237c84a1792;
    }
    else if (uVar14 < 0x8a111237c84a1793) {
      uVar20 = 0;
      if (uVar14 != 0) {
        uVar20 = 0x8a111237c84a1792 / uVar14;
      }
      uVar20 = 0x8a111237c84a1792 - uVar20 * uVar14;
    }
    else {
      uVar20 = 0x8a111237c84a1792;
    }
    plVar21 = *(long **)(plVar17[0x13] + uVar20 * 8);
    if (plVar21 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) {
        iVar12 = 0;
      }
      else if (uVar19 < 2) {
        do {
          if (plVar21[1] == 0x8a111237c84a1792) {
            if (plVar21[2] == -0x75eeedc837b5e86e) goto LAB_01a45b40;
          }
          else if ((plVar21[1] & uVar14 - 1) != uVar20) {
            iVar12 = 0;
            break;
          }
          plVar21 = (long *)*plVar21;
          iVar12 = 0;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 0x8a111237c84a1792) {
            if (plVar21[2] == -0x75eeedc837b5e86e) goto LAB_01a45b40;
          }
          else {
            if (uVar14 <= uVar19) {
              uVar7 = 0;
              if (uVar14 != 0) {
                uVar7 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar7 * uVar14;
            }
            if (uVar19 != uVar20) {
              iVar12 = 0;
              goto LAB_01a45b44;
            }
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
        iVar12 = 0;
      }
    }
  }
  goto LAB_01a45b44;
LAB_01a45b40:
  iVar12 = (int)plVar21[6];
LAB_01a45b44:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_01a45b58:
  local_40 = 6;
  local_38 = (long *)0x0;
  local_50 = (long *)&DAT_f976cfc5b993016e;
  pcStack_48 = "camera";
  local_70 = 0x3021df4dacb77ffb;
  pcStack_68 = "lockon_target_interpolation_func";
  local_60 = 0x20;
  local_58 = (long *)0x0;
  uVar11 = FUN_00ea3f80(&local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xe0c0) = *(undefined8 *)(param_1 + 0xe0d0);
  *(undefined8 *)(param_1 + 0xe0c8) = *(undefined8 *)(param_1 + 0xe0d8);
  if (iVar12 == 0) {
    iVar12 = 1;
  }
  *(undefined4 *)(param_1 + 0xe0e0) = 0;
  *(int *)(param_1 + 0xe0e4) = iVar12;
  *(undefined4 *)(param_1 + 0xe0e8) = uVar11;
  if (*(long *)(param_1 + 0xe0f0) == 0) {
    local_50 = (long *)0x0;
  }
  else {
    FUN_009b8830(&local_50);
    if (local_50 != (long *)0x0) {
      FUN_01f333e4(local_50,(undefined8 *)(param_1 + 0xdf70));
      FUN_01f32e3c(local_50);
      if (local_50 != (long *)0x0) {
        lVar13 = local_50[0xb];
        piVar2 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar2;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
  }
joined_r0x01a45c14:
  if (bVar10 && !bVar9) {
LAB_01a45788:
    if (*(char *)(param_1 + 0xde00) != '\0') {
      FUN_01a45e78(param_1);
    }
  }
  if (bVar4) {
LAB_01a45864:
    puVar8 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_a0 + 1);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_50 = (long *)*puVar8;
        FUN_02a44274(lVar13 + 0xd8,&local_50);
      }
    }
    puVar8 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_b0 + 1);
      do {
        iVar12 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_50 = (long *)*puVar8;
        FUN_02a44274(lVar13 + 0xd8,&local_50);
      }
    }
  }
  FUN_018ff884(param_1 + 0xdf60,param_2);
  return;
}


