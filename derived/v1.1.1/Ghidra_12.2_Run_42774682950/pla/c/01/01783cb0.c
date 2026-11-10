/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01783cb0; name: FUN_01783cb0
 */


uint FUN_01783cb0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  undefined8 uVar15;
  float fVar16;
  
  if ((*(long *)(param_1 + 0x11d8) == 0) &&
     (*(uint *)(param_1 + 0x22c) < *(uint *)(param_1 + 0x230))) {
    return 0;
  }
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x1270);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1264));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01783d2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01783d2c:
  if (*(long *)(param_1 + 0x11d8) == 0) {
    uVar12 = *(uint *)(param_1 + 0x230);
    *(uint *)(param_1 + 0x230) = uVar12 + 1;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x11d8) + -1;
    uVar12 = *(uint *)(param_1 + lVar8 * 4 + 0x238);
    *(long *)(param_1 + 0x11d8) = lVar8;
  }
  uVar4 = uVar12 - *(int *)(param_1 + 0x228);
  lVar8 = param_1 + 0x228 + ((ulong)(uVar4 >> 3) & 0x1ffffff8);
  *(ulong *)(lVar8 + 0xfb8) = 1L << ((ulong)uVar4 & 0x3f) | *(ulong *)(lVar8 + 0xfb8);
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1264));
  uVar13 = *(ulong *)(param_1 + 0x1c8);
  plVar1 = (long *)(param_1 + 0x1c0);
  uVar14 = (ulong)uVar12;
  if (uVar13 != 0) {
    uVar9 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar12);
    }
    else {
      unaff_x26 = uVar14;
      if (uVar13 <= uVar14) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar14 / uVar13;
        }
        unaff_x26 = uVar14 - uVar5 * uVar13;
      }
    }
    plVar10 = *(long **)(*plVar1 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      if (uVar9 < 2) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == uVar14 || (plVar10[1] & uVar13 - 1) == unaff_x26))) {
          if (*(uint *)(plVar10 + 2) == uVar12) {
            return uVar12;
          }
        }
      }
      else {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar9 = plVar10[1];
          if (uVar9 != uVar14) {
            if (uVar13 <= uVar9) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar5 * uVar13;
            }
            if (uVar9 != unaff_x26) break;
          }
          if (*(uint *)(plVar10 + 2) == uVar12) {
            return uVar12;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x1f8) + 0x10))
                              (*(long **)(param_1 + 0x1f8),0x20,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0xb8))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x1f8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    *(uint *)(plVar10 + 2) = uVar12;
    plVar10[3] = param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    *(uint *)(plVar10 + 2) = uVar12;
    plVar10[3] = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar14;
  fVar16 = (float)(*(long *)(param_1 + 0x218) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 0x220) * (float)uVar13 < fVar16)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar9 = (ulong)(fVar16 / *(float *)(param_1 + 0x220));
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    FUN_01786d08(plVar1,uVar9);
    uVar13 = *(ulong *)(param_1 + 0x1c8);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = (ulong)((int)uVar13 - 1U & uVar12);
    }
    else if (uVar14 < uVar13) {
      unaff_x26 = uVar14;
    }
    else {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar14 / uVar13;
      }
      unaff_x26 = uVar14 - uVar9 * uVar13;
    }
  }
  plVar11 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar10 = *(long *)(param_1 + 0x1f0);
    *(long **)(param_1 + 0x1f0) = plVar10;
    *(long *)(*(long *)(param_1 + 0x1c0) + unaff_x26 * 8) = param_1 + 0x1f0;
    if (*plVar10 == 0) goto LAB_01783ee4;
    uVar14 = *(ulong *)(*plVar10 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar14 = uVar14 & uVar13 - 1;
    }
    else if (uVar13 <= uVar14) {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar14 / uVar13;
      }
      uVar14 = uVar14 - uVar9 * uVar13;
    }
    plVar11 = (long *)(*plVar1 + uVar14 * 8);
  }
  else {
    *plVar10 = *plVar11;
  }
  *plVar11 = (long)plVar10;
LAB_01783ee4:
  *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + 1;
  return uVar12;
}


