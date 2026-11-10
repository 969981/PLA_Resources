/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02619b40; name: FUN_02619b40
 */


void FUN_02619b40(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *local_58;
  
  puVar7 = PTR_DAT_04379660;
  if (*(char *)param_1[0x48] == '\0') goto LAB_02619b6c;
  lVar18 = param_1[0x184];
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  uVar15 = *(ulong *)(lVar16 + 0x60);
  if (uVar15 == 0) {
LAB_02619d80:
    iVar10 = 0;
  }
  else {
    uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar15 - 1 & 0x7b1672169b2cf48f;
    }
    else {
      uVar14 = 0x7b1672169b2cf48f;
      if (uVar15 < 0x7b1672169b2cf490) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = 0x7b1672169b2cf48f / uVar15;
        }
        uVar14 = 0x7b1672169b2cf48f - uVar14 * uVar15;
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + uVar14 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_02619d80;
    if (1 < uVar13) {
      do {
        uVar13 = plVar17[1];
        if (uVar13 == 0x7b1672169b2cf48f) {
          if (plVar17[2] == 0x7b1672169b2cf48f) goto LAB_02619c84;
        }
        else {
          if (uVar15 <= uVar13) {
            uVar6 = 0;
            if (uVar15 != 0) {
              uVar6 = uVar13 / uVar15;
            }
            uVar13 = uVar13 - uVar6 * uVar15;
          }
          if (uVar13 != uVar14) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      goto LAB_02619d80;
    }
    do {
      if (plVar17[1] == 0x7b1672169b2cf48f) {
        if (plVar17[2] == 0x7b1672169b2cf48f) goto LAB_02619c84;
      }
      else if ((plVar17[1] & uVar15 - 1) != uVar14) goto LAB_02619d80;
      plVar17 = (long *)*plVar17;
      iVar10 = 0;
    } while (plVar17 != (long *)0x0);
  }
  goto LAB_02619de8;
LAB_02619c84:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_02619d80;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar15 = plVar17[0x14];
  if (uVar15 == 0) {
    iVar10 = 0;
  }
  else {
    uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar15 - 1 & 0xde6f26480c54e433;
    }
    else if (uVar15 < 0xde6f26480c54e434) {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = 0xde6f26480c54e433 / uVar15;
      }
      uVar14 = 0xde6f26480c54e433 - uVar14 * uVar15;
    }
    else {
      uVar14 = 0xde6f26480c54e433;
    }
    plVar19 = *(long **)(plVar17[0x13] + uVar14 * 8);
    if (plVar19 == (long *)0x0) {
      iVar10 = 0;
    }
    else {
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) {
        iVar10 = 0;
      }
      else if (uVar13 < 2) {
        do {
          if (plVar19[1] == 0xde6f26480c54e433) {
            if (plVar19[2] == -0x2190d9b7f3ab1bcd) goto LAB_02619dd0;
          }
          else if ((plVar19[1] & uVar15 - 1) != uVar14) {
            iVar10 = 0;
            break;
          }
          plVar19 = (long *)*plVar19;
          iVar10 = 0;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar19[1];
          if (uVar13 == 0xde6f26480c54e433) {
            if (plVar19[2] == -0x2190d9b7f3ab1bcd) goto LAB_02619dd0;
          }
          else {
            if (uVar15 <= uVar13) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar13 / uVar15;
              }
              uVar13 = uVar13 - uVar6 * uVar15;
            }
            if (uVar13 != uVar14) {
              iVar10 = 0;
              goto LAB_02619dd4;
            }
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        iVar10 = 0;
      }
    }
  }
  goto LAB_02619dd4;
LAB_02619eb0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar15 = plVar17[0x14];
    if (uVar15 == 0) {
      iVar11 = 0;
    }
    else {
      uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar15 - 1 & 0x6874afd73a3b64b9;
      }
      else if (uVar15 < 0x6874afd73a3b64ba) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = 0x6874afd73a3b64b9 / uVar15;
        }
        uVar14 = 0x6874afd73a3b64b9 - uVar14 * uVar15;
      }
      else {
        uVar14 = 0x6874afd73a3b64b9;
      }
      plVar19 = *(long **)(plVar17[0x13] + uVar14 * 8);
      if (plVar19 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          iVar11 = 0;
        }
        else if (uVar13 < 2) {
          do {
            if (plVar19[1] == 0x6874afd73a3b64b9) {
              if (plVar19[2] == 0x6874afd73a3b64b9) goto LAB_0261a04c;
            }
            else if ((plVar19[1] & uVar15 - 1) != uVar14) {
              iVar11 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            iVar11 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar19[1];
            if (uVar13 == 0x6874afd73a3b64b9) {
              if (plVar19[2] == 0x6874afd73a3b64b9) goto LAB_0261a04c;
            }
            else {
              if (uVar15 <= uVar13) {
                uVar6 = 0;
                if (uVar15 != 0) {
                  uVar6 = uVar13 / uVar15;
                }
                uVar13 = uVar13 - uVar6 * uVar15;
              }
              if (uVar13 != uVar14) {
                iVar11 = 0;
                goto LAB_0261a050;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          iVar11 = 0;
        }
      }
    }
    goto LAB_0261a050;
  }
  goto LAB_02619ffc;
LAB_0261a04c:
  iVar11 = (int)plVar19[6];
LAB_0261a050:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
  goto LAB_0261a064;
LAB_02619dd0:
  iVar10 = (int)plVar19[6];
LAB_02619dd4:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_02619de8:
  plVar17 = param_1 + 0x47;
  if ((int)lVar18 < iVar10) {
    FUN_01a4f4d4(param_1,plVar17,0);
    if (param_1[0x17e] != 0) {
      FUN_009cf990(&local_58);
      if ((local_58 == (long *)0x0) || (FUN_01a4f4d4(local_58,plVar17,0), local_58 == (long *)0x0))
      goto LAB_02619b6c;
      lVar18 = local_58[0xb];
      piVar2 = (int *)(lVar18 + 0xc);
      do {
        iVar10 = *piVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_0261a250;
    }
  }
  else {
    FUN_01a4f4d4(param_1,plVar17,1);
    if (param_1[0x17e] == 0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_009cf990(&local_58);
      if ((local_58 != (long *)0x0) && (FUN_01a4f4d4(local_58,plVar17,1), local_58 != (long *)0x0))
      {
        lVar18 = local_58[0xb];
        piVar2 = (int *)(lVar18 + 0xc);
        do {
          iVar10 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
    iVar10 = *(int *)((long)param_1 + 0xc24);
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)puVar8;
    *(long *)puVar9 = lVar18;
    uVar15 = *(ulong *)(lVar18 + 0x60);
    if (uVar15 == 0) {
LAB_02619ffc:
      iVar11 = 0;
    }
    else {
      uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar15 - 1 & 0x7b1672169b2cf48f;
      }
      else {
        uVar14 = 0x7b1672169b2cf48f;
        if (uVar15 < 0x7b1672169b2cf490) {
          uVar14 = 0;
          if (uVar15 != 0) {
            uVar14 = 0x7b1672169b2cf48f / uVar15;
          }
          uVar14 = 0x7b1672169b2cf48f - uVar14 * uVar15;
        }
      }
      plVar17 = *(long **)(*(long *)(lVar18 + 0x58) + uVar14 * 8);
      if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
      goto LAB_02619ffc;
      if (1 < uVar13) {
        do {
          uVar13 = plVar17[1];
          if (uVar13 == 0x7b1672169b2cf48f) {
            if (plVar17[2] == 0x7b1672169b2cf48f) goto LAB_02619eb0;
          }
          else {
            if (uVar15 <= uVar13) {
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = uVar13 / uVar15;
              }
              uVar13 = uVar13 - uVar6 * uVar15;
            }
            if (uVar13 != uVar14) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
        goto LAB_02619ffc;
      }
      do {
        if (plVar17[1] == 0x7b1672169b2cf48f) {
          if (plVar17[2] == 0x7b1672169b2cf48f) goto LAB_02619eb0;
        }
        else if ((plVar17[1] & uVar15 - 1) != uVar14) goto LAB_02619ffc;
        plVar17 = (long *)*plVar17;
        iVar11 = 0;
      } while (plVar17 != (long *)0x0);
    }
LAB_0261a064:
    uVar12 = 1;
    if (iVar11 <= iVar10) {
      uVar12 = 2;
    }
    FUN_01a51334(param_1,param_1 + 0x4a,uVar12);
    if (param_1[0x17e] != 0) {
      FUN_009cf990(&local_58);
      if ((local_58 == (long *)0x0) ||
         (FUN_01a51334(local_58,param_1 + 0x4a,uVar12), local_58 == (long *)0x0)) goto LAB_02619b6c;
      lVar18 = local_58[0xb];
      piVar2 = (int *)(lVar18 + 0xc);
      do {
        iVar10 = *piVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0261a250:
      if (iVar10 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
      goto LAB_02619b6c;
    }
  }
  local_58 = (long *)0x0;
LAB_02619b6c:
  *(int *)(param_1 + 0x42) = (int)param_1[0x3f];
  *(undefined4 *)((long)param_1 + 0x214) = *(undefined4 *)((long)param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  (**(code **)(*param_1 + 0x198))(0,param_1);
  FUN_026192c8(param_1);
  param_1[0x184] = 0;
  return;
}


