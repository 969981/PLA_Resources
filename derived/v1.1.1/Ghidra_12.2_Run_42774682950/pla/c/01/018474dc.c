/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018474dc; name: FUN_018474dc
 */


void FUN_018474dc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x24;
  undefined8 uVar16;
  float fVar17;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x220);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x214));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01847544;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01847544:
  if ((ulong *)*param_2 == (ulong *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(ulong *)*param_2;
  }
  uVar15 = *(ulong *)(param_1 + 0x178);
  plVar1 = (long *)(param_1 + 0x170);
  if (uVar15 != 0) {
    uVar9 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar8 = 0;
    if (uVar15 != 0) {
      uVar8 = uVar14 / uVar15;
    }
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar11 = uVar15 - 1 & uVar14;
    }
    else {
      uVar11 = uVar14;
      if (uVar15 <= uVar14) {
        uVar11 = uVar14 - uVar8 * uVar15;
      }
    }
    lVar7 = *plVar1;
    plVar12 = *(long **)(lVar7 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == uVar14) {
            if (plVar12[2] == uVar14) goto LAB_01847710;
          }
          else if ((plVar12[1] & uVar15 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar14) {
            if (plVar12[2] == uVar14) goto LAB_01847710;
          }
          else {
            if (uVar15 <= uVar13) {
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = uVar13 / uVar15;
              }
              uVar13 = uVar13 - uVar4 * uVar15;
            }
            if (uVar13 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    if (uVar9 < 2) {
      unaff_x24 = uVar15 - 1 & uVar14;
      plVar12 = *(long **)(lVar7 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar15 <= uVar14) {
        unaff_x24 = uVar14 - uVar8 * uVar15;
      }
      plVar12 = *(long **)(lVar7 + unaff_x24 * 8);
    }
    if (plVar12 != (long *)0x0) {
      if (uVar9 < 2) {
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) ||
             (plVar12[1] != uVar14 && (plVar12[1] & uVar15 - 1) != unaff_x24)) goto LAB_01847610;
        } while (plVar12[2] != uVar14);
      }
      else {
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01847610;
          uVar9 = plVar12[1];
          if (uVar9 != uVar14) {
            if (uVar15 <= uVar9) {
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = uVar9 / uVar15;
              }
              uVar9 = uVar9 - uVar8 * uVar15;
            }
            if (uVar9 != unaff_x24) goto LAB_01847610;
          }
        } while (plVar12[2] != uVar14);
      }
      goto LAB_01847710;
    }
  }
LAB_01847610:
  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))
                              (*(long **)(param_1 + 0x1a8),0x20,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0xb8))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x1a8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar6 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    plVar12[2] = uVar14;
    plVar12[3] = uVar14;
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar12[2] = uVar14;
    plVar12[3] = uVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar12 = 0;
  plVar12[1] = uVar14;
  fVar17 = (float)(*(long *)(param_1 + 0x1c8) + 1);
  if ((uVar15 == 0) || (*(float *)(param_1 + 0x1d0) * (float)uVar15 < fVar17)) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar9 = (ulong)(fVar17 / *(float *)(param_1 + 0x1d0));
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
    }
    uVar15 = *(ulong *)(param_1 + 0x178);
    if (uVar15 < uVar9) {
LAB_01847794:
      FUN_0184bdec(plVar1);
    }
    else if (uVar9 < uVar15) {
      uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x1c8) / *(float *)(param_1 + 0x1d0));
      if ((uVar15 < 3) ||
         (uVar11 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
         uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
         1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar8 = std::__next_prime(uVar8);
      }
      else if (1 < uVar8) {
        uVar8 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar8 - 1) & 0x3f);
      }
      if (uVar8 <= uVar9) {
        uVar8 = uVar9;
      }
      if (uVar8 < uVar15) goto LAB_01847794;
    }
    uVar15 = *(ulong *)(param_1 + 0x178);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x24 = uVar15 - 1 & uVar14;
    }
    else if (uVar14 < uVar15) {
      unaff_x24 = uVar14;
    }
    else {
      uVar9 = 0;
      if (uVar15 != 0) {
        uVar9 = uVar14 / uVar15;
      }
      unaff_x24 = uVar14 - uVar9 * uVar15;
    }
  }
  plVar10 = *(long **)(*plVar1 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar12 = *(long *)(param_1 + 0x1a0);
    *(long **)(param_1 + 0x1a0) = plVar12;
    *(long *)(*(long *)(param_1 + 0x170) + unaff_x24 * 8) = param_1 + 0x1a0;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar14 = uVar14 & uVar15 - 1;
      }
      else if (uVar15 <= uVar14) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar9 * uVar15;
      }
      plVar10 = (long *)(*plVar1 + uVar14 * 8);
      goto LAB_01847700;
    }
  }
  else {
    *plVar12 = *plVar10;
LAB_01847700:
    *plVar10 = (long)plVar12;
  }
  *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 1;
LAB_01847710:
  *(undefined8 *)(param_1 + 0x220) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x214));
  return;
}


