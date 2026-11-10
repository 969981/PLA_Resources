/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0adc4; name: FUN_01f0adc4
 */


long * FUN_01f0adc4(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x25;
  undefined8 uVar20;
  float fVar21;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar7 = PTR_DAT_0437f2d8;
  uVar18 = *(ulong *)(param_2 + 8);
  plVar10 = (long *)(param_1 + 0x88);
  uVar17 = *(ulong *)(param_1 + 0x90);
  if (uVar17 != 0) {
    uVar12 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar19 = uVar17 - 1 & uVar18;
    }
    else {
      uVar19 = uVar18;
      if (uVar17 <= uVar18) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar18 / uVar17;
        }
        uVar19 = uVar18 - uVar19 * uVar17;
      }
    }
    lVar15 = *plVar10;
    plVar13 = *(long **)(lVar15 + uVar19 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      uVar14 = uVar17 - 1;
      if (uVar12 < 2) {
        do {
          if (plVar13[1] == uVar18) {
            if (plVar13[2] == uVar18) goto LAB_01f0b2cc;
          }
          else if ((plVar13[1] & uVar14) != uVar19) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar13[1];
          if (uVar16 == uVar18) {
            if (plVar13[2] == uVar18) goto LAB_01f0b2cc;
          }
          else {
            if (uVar17 <= uVar16) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar16 / uVar17;
              }
              uVar16 = uVar16 - uVar5 * uVar17;
            }
            if (uVar16 != uVar19) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = PTR_DAT_0437f2d8 + 0x10;
  uStack_88 = 0;
  if (uVar17 == 0) {
LAB_01f0aef0:
    plVar13 = (long *)(**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                                (*(long **)(param_1 + 0xc0),0x48,8);
    if (plVar13 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xc0) + 0xb8))();
    }
    uVar20 = *(undefined8 *)(param_1 + 0xc0);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar15 == 0) {
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[8] = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[2] = uVar18;
      plVar13[3] = (long)(puVar7 + 0x10);
    }
    else {
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar20;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[8] = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[2] = uVar18;
      plVar13[3] = (long)(puVar7 + 0x10);
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    *plVar13 = 0;
    plVar13[1] = uVar18;
    fVar21 = (float)(*(long *)(param_1 + 0xe0) + 1);
    if ((uVar17 == 0) || (*(float *)(param_1 + 0xe8) * (float)uVar17 < fVar21)) {
      uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
      uVar12 = (ulong)(fVar21 / *(float *)(param_1 + 0xe8));
      if (uVar12 <= uVar17) {
        uVar12 = uVar17;
      }
      FUN_01f0be50(plVar10,uVar12);
      uVar17 = *(ulong *)(param_1 + 0x90);
      if ((uVar17 & uVar17 - 1) == 0) {
        unaff_x25 = uVar17 - 1 & uVar18;
      }
      else if (uVar18 < uVar17) {
        unaff_x25 = uVar18;
      }
      else {
        uVar12 = 0;
        if (uVar17 != 0) {
          uVar12 = uVar18 / uVar17;
        }
        unaff_x25 = uVar18 - uVar12 * uVar17;
      }
    }
    plVar9 = *(long **)(*plVar10 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)(param_1 + 0xb8);
      *plVar13 = *plVar9;
      *plVar9 = (long)plVar13;
      *(long **)(*(long *)(param_1 + 0x88) + unaff_x25 * 8) = plVar9;
      if (*plVar13 != 0) {
        uVar12 = *(ulong *)(*plVar13 + 8);
        if ((uVar17 & uVar17 - 1) == 0) {
          uVar12 = uVar12 & uVar17 - 1;
        }
        else if (uVar17 <= uVar12) {
          uVar19 = 0;
          if (uVar17 != 0) {
            uVar19 = uVar12 / uVar17;
          }
          uVar12 = uVar12 - uVar19 * uVar17;
        }
        plVar9 = (long *)(*plVar10 + uVar12 * 8);
        goto LAB_01f0aff0;
      }
    }
    else {
      *plVar13 = *plVar9;
LAB_01f0aff0:
      *plVar9 = (long)plVar13;
    }
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
  }
  else {
    uVar12 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      unaff_x25 = uVar17 - 1 & uVar18;
    }
    else {
      unaff_x25 = uVar18;
      if (uVar17 <= uVar18) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar18 / uVar17;
        }
        unaff_x25 = uVar18 - uVar19 * uVar17;
      }
    }
    plVar13 = *(long **)(*plVar10 + unaff_x25 * 8);
    if (plVar13 == (long *)0x0) goto LAB_01f0aef0;
    if (uVar12 < 2) {
      do {
        plVar13 = (long *)*plVar13;
        if ((plVar13 == (long *)0x0) ||
           (plVar13[1] != uVar18 && (plVar13[1] & uVar17 - 1) != unaff_x25)) goto LAB_01f0aef0;
      } while (plVar13[2] != uVar18);
    }
    else {
      do {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_01f0aef0;
        uVar12 = plVar13[1];
        if (uVar12 != uVar18) {
          if (uVar17 <= uVar12) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = uVar12 / uVar17;
            }
            uVar12 = uVar12 - uVar19 * uVar17;
          }
          if (uVar12 != unaff_x25) goto LAB_01f0aef0;
        }
      } while (plVar13[2] != uVar18);
    }
  }
  FUN_01f0bbec(plVar13 + 4,&uStack_88);
  plVar9 = (long *)plVar13[6];
  plVar13[6] = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar15 = local_78;
  local_78 = 0;
  plVar9 = (long *)plVar13[7];
  plVar13[6] = lVar15;
  plVar13[7] = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar15 = local_70;
  local_70 = 0;
  plVar9 = (long *)plVar13[8];
  plVar13[7] = lVar15;
  plVar13[8] = 0;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  lVar15 = local_68;
  local_68 = 0;
  plVar13[8] = lVar15;
  FUN_009848d0(&local_90);
  uVar17 = *(ulong *)(param_1 + 0x90);
  if (uVar17 != 0) {
    uVar12 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar19 = uVar17 - 1 & uVar18;
    }
    else {
      uVar19 = uVar18;
      if (uVar17 <= uVar18) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar18 / uVar17;
        }
        uVar19 = uVar18 - uVar19 * uVar17;
      }
    }
    plVar10 = *(long **)(*plVar10 + uVar19 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar10[1] == uVar18) {
            if (plVar10[2] == uVar18) {
LAB_01f0b380:
              return plVar10 + 3;
            }
          }
          else if ((plVar10[1] & uVar17 - 1) != uVar19) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar10[1];
          if (uVar12 == uVar18) {
            if (plVar10[2] == uVar18) goto LAB_01f0b380;
          }
          else {
            if (uVar17 <= uVar12) {
              uVar14 = 0;
              if (uVar17 != 0) {
                uVar14 = uVar12 / uVar17;
              }
              uVar12 = uVar12 - uVar14 * uVar17;
            }
            if (uVar12 != uVar19) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_01f0b468:
                    /* WARNING: Subroutine does not return */
  FUN_01f0bbe0();
LAB_01f0b2cc:
  if (uVar12 < 2) {
    uVar19 = uVar14 & uVar18;
LAB_01f0b2d8:
    puVar11 = *(undefined8 **)(lVar15 + uVar19 * 8);
  }
  else {
    uVar19 = uVar18;
    if (uVar18 < uVar17) goto LAB_01f0b2d8;
    uVar19 = 0;
    if (uVar17 != 0) {
      uVar19 = uVar18 / uVar17;
    }
    uVar19 = uVar18 - uVar19 * uVar17;
    puVar11 = *(undefined8 **)(lVar15 + uVar19 * 8);
  }
  if ((puVar11 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar11, plVar10 != (long *)0x0)) {
    if (uVar12 < 2) {
      do {
        if (plVar10[1] == uVar18) {
          if (plVar10[2] == uVar18) goto LAB_01f0b380;
        }
        else if ((plVar10[1] & uVar14) != uVar19) break;
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar10[1];
        if (uVar12 == uVar18) {
          if (plVar10[2] == uVar18) goto LAB_01f0b380;
        }
        else {
          if (uVar17 <= uVar12) {
            uVar14 = 0;
            if (uVar17 != 0) {
              uVar14 = uVar12 / uVar17;
            }
            uVar12 = uVar12 - uVar14 * uVar17;
          }
          if (uVar12 != uVar19) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  goto LAB_01f0b468;
}


