/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2f58c; name: FUN_02b2f58c
 */


void FUN_02b2f58c(long param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined8 uVar15;
  float fVar16;
  
  uVar13 = *param_2;
  uVar14 = *(ulong *)(param_1 + 0xd0);
  if (uVar14 != 0) {
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar14 - 1 & uVar13;
    }
    else {
      uVar8 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        uVar8 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 200) + uVar8 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar12[1] == uVar13) {
            if (plVar12[2] == uVar13) goto LAB_02b2f6a4;
          }
          else if ((plVar12[1] & uVar14 - 1) != uVar8) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar12[1];
          if (uVar7 == uVar13) {
            if (plVar12[2] == uVar13) goto LAB_02b2f6a4;
          }
          else {
            if (uVar14 <= uVar7) {
              uVar10 = 0;
              if (uVar14 != 0) {
                uVar10 = uVar7 / uVar14;
              }
              uVar7 = uVar7 - uVar10 * uVar14;
            }
            if (uVar7 != uVar8) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_02b2f6dc:
  plVar12 = (long *)*param_3;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar13 = *param_2;
    uVar14 = *(ulong *)(param_1 + 0xd0);
  }
  plVar1 = (long *)(param_1 + 200);
  if (uVar14 == 0) {
LAB_02b2f7e4:
    plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x100) + 0x10))
                               (*(long **)(param_1 + 0x100),0x38,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x100) + 0xb8))();
    }
    uVar15 = *(undefined8 *)(param_1 + 0x100);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar5 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    plVar9[2] = *param_2;
    plVar9[3] = param_2[1];
    plVar9[4] = param_2[2];
    plVar6 = (long *)param_2[3];
    plVar9[5] = (long)plVar6;
    if (plVar6 == (long *)0x0) {
      plVar9[6] = (long)plVar12;
    }
    else {
      (**(code **)(*plVar6 + 0x18))();
      plVar9[6] = (long)plVar12;
    }
    if (plVar12 != (long *)0x0) {
      plVar6 = plVar12 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)*plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *plVar9 = 0;
    plVar9[1] = uVar13;
    fVar16 = (float)(*(long *)(param_1 + 0x120) + 1);
    if ((uVar14 == 0) || (*(float *)(param_1 + 0x128) * (float)uVar14 < fVar16)) {
      uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
      uVar7 = (ulong)(fVar16 / *(float *)(param_1 + 0x128));
      if (uVar7 <= uVar14) {
        uVar7 = uVar14;
      }
      if (uVar7 - 1 == 0) {
        uVar7 = 2;
      }
      else if ((uVar7 & uVar7 - 1) != 0) {
        uVar7 = std::__next_prime(uVar7);
      }
      uVar14 = *(ulong *)(param_1 + 0xd0);
      if (uVar14 < uVar7) {
        uVar8 = uVar7;
LAB_02b2f938:
        FUN_02b34864(plVar1,uVar8);
      }
      else if (uVar7 < uVar14) {
        uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x120) / *(float *)(param_1 + 0x128));
        if ((uVar14 < 3) ||
           (uVar10 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
           1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar8 = std::__next_prime(uVar8);
        }
        else if (1 < uVar8) {
          uVar8 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar8 - 1) & 0x3f);
        }
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (uVar8 < uVar14) goto LAB_02b2f938;
      }
      uVar14 = *(ulong *)(param_1 + 0xd0);
      if ((uVar14 & uVar14 - 1) == 0) {
        unaff_x27 = uVar14 - 1 & uVar13;
      }
      else if (uVar13 < uVar14) {
        unaff_x27 = uVar13;
      }
      else {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar13 / uVar14;
        }
        unaff_x27 = uVar13 - uVar7 * uVar14;
      }
    }
    plVar6 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)(param_1 + 0xf8);
      *plVar9 = *plVar6;
      *plVar6 = (long)plVar9;
      *(long **)(*(long *)(param_1 + 200) + unaff_x27 * 8) = plVar6;
      if (*plVar9 != 0) {
        uVar13 = *(ulong *)(*plVar9 + 8);
        if ((uVar14 & uVar14 - 1) == 0) {
          uVar13 = uVar13 & uVar14 - 1;
        }
        else if (uVar14 <= uVar13) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar13 / uVar14;
          }
          uVar13 = uVar13 - uVar7 * uVar14;
        }
        plVar6 = (long *)(*plVar1 + uVar13 * 8);
        goto LAB_02b2fa6c;
      }
    }
    else {
      *plVar9 = *plVar6;
LAB_02b2fa6c:
      *plVar6 = (long)plVar9;
    }
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  }
  else {
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      unaff_x27 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x27 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x27 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar9 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar9 == (long *)0x0) goto LAB_02b2f7e4;
    if (uVar7 < 2) {
      do {
        plVar9 = (long *)*plVar9;
        if ((plVar9 == (long *)0x0) ||
           (plVar9[1] != uVar13 && (plVar9[1] & uVar14 - 1) != unaff_x27)) goto LAB_02b2f7e4;
      } while (plVar9[2] != uVar13);
    }
    else {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_02b2f7e4;
        uVar7 = plVar9[1];
        if (uVar7 != uVar13) {
          if (uVar14 <= uVar7) {
            uVar8 = 0;
            if (uVar14 != 0) {
              uVar8 = uVar7 / uVar14;
            }
            uVar7 = uVar7 - uVar8 * uVar14;
          }
          if (uVar7 != unaff_x27) goto LAB_02b2f7e4;
        }
      } while (plVar9[2] != uVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      lVar11 = *plVar12;
LAB_02b2fad4:
                    /* WARNING: Could not recover jumptable at 0x02b2faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 0x10))(plVar12);
      return;
    }
  }
  return;
LAB_02b2f6a4:
  plVar12 = (long *)plVar12[6];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 != 0) {
      return;
    }
    lVar11 = *plVar12;
    goto LAB_02b2fad4;
  }
  goto LAB_02b2f6dc;
}


