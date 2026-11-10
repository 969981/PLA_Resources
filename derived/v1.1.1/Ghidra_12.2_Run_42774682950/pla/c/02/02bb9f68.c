/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb9f68; name: FUN_02bb9f68
 */


void FUN_02bb9f68(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong unaff_x26;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  long local_68;
  
  lVar19 = *param_2;
  uVar18 = *(ulong *)(param_1 + 0x10);
  plVar9 = (long *)(param_1 + 8);
  uVar16 = *(ulong *)(lVar19 + 0x60);
  if (uVar18 == 0) {
LAB_02bba080:
    plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                (*(long **)(param_1 + 0x40),0x38,8);
    if (plVar14 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0xb8))();
    }
    uVar20 = *(undefined8 *)(param_1 + 0x40);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar20;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    plVar14[2] = *(long *)(lVar19 + 0x60);
    plVar14[3] = *(long *)(lVar19 + 0x68);
    plVar14[4] = *(long *)(lVar19 + 0x70);
    plVar7 = *(long **)(lVar19 + 0x78);
    plVar14[5] = (long)plVar7;
    if (plVar7 == (long *)0x0) {
      plVar14[6] = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x18))();
      plVar14[6] = 0;
    }
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    *plVar14 = 0;
    plVar14[1] = uVar16;
    fVar21 = (float)(*(long *)(param_1 + 0x60) + 1);
    if ((uVar18 == 0) || (*(float *)(param_1 + 0x68) * (float)uVar18 < fVar21)) {
      uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
      uVar10 = (ulong)(fVar21 / *(float *)(param_1 + 0x68));
      if (uVar10 <= uVar18) {
        uVar10 = uVar18;
      }
      if (uVar10 - 1 == 0) {
        uVar10 = 2;
      }
      else if ((uVar10 & uVar10 - 1) != 0) {
        uVar10 = std::__next_prime(uVar10);
      }
      uVar18 = *(ulong *)(param_1 + 0x10);
      if (uVar18 < uVar10) {
        uVar8 = uVar10;
LAB_02bba1bc:
        FUN_02bba8ec(plVar9,uVar8);
      }
      else if (uVar10 < uVar18) {
        uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x60) / *(float *)(param_1 + 0x68));
        if ((uVar18 < 3) ||
           (uVar11 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
           uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
           1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar8 = std::__next_prime(uVar8);
        }
        else if (1 < uVar8) {
          uVar8 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar8 - 1) & 0x3f);
        }
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        if (uVar8 < uVar18) goto LAB_02bba1bc;
      }
      uVar18 = *(ulong *)(param_1 + 0x10);
      if ((uVar18 & uVar18 - 1) == 0) {
        unaff_x26 = uVar18 - 1 & uVar16;
      }
      else if (uVar16 < uVar18) {
        unaff_x26 = uVar16;
      }
      else {
        uVar10 = 0;
        if (uVar18 != 0) {
          uVar10 = uVar16 / uVar18;
        }
        unaff_x26 = uVar16 - uVar10 * uVar18;
      }
    }
    plVar7 = *(long **)(*plVar9 + unaff_x26 * 8);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(param_1 + 0x38);
      *plVar14 = *plVar7;
      *plVar7 = (long)plVar14;
      *(long **)(*(long *)(param_1 + 8) + unaff_x26 * 8) = plVar7;
      if (*plVar14 != 0) {
        uVar16 = *(ulong *)(*plVar14 + 8);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar16 = uVar16 & uVar18 - 1;
        }
        else if (uVar18 <= uVar16) {
          uVar10 = 0;
          if (uVar18 != 0) {
            uVar10 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar10 * uVar18;
        }
        plVar7 = (long *)(*plVar9 + uVar16 * 8);
        goto LAB_02bba2f0;
      }
    }
    else {
      *plVar14 = *plVar7;
LAB_02bba2f0:
      *plVar7 = (long)plVar14;
    }
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    lVar19 = *param_2;
  }
  else {
    uVar10 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x26 = uVar18 - 1 & uVar16;
    }
    else {
      unaff_x26 = uVar16;
      if (uVar18 <= uVar16) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar16 / uVar18;
        }
        unaff_x26 = uVar16 - uVar8 * uVar18;
      }
    }
    plVar14 = *(long **)(*plVar9 + unaff_x26 * 8);
    if (plVar14 == (long *)0x0) goto LAB_02bba080;
    if (uVar10 < 2) {
      do {
        plVar14 = (long *)*plVar14;
        if ((plVar14 == (long *)0x0) ||
           (plVar14[1] != uVar16 && (plVar14[1] & uVar18 - 1) != unaff_x26)) goto LAB_02bba080;
      } while (plVar14[2] != uVar16);
    }
    else {
      do {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_02bba080;
        uVar10 = plVar14[1];
        if (uVar10 != uVar16) {
          if (uVar18 <= uVar10) {
            uVar8 = 0;
            if (uVar18 != 0) {
              uVar8 = uVar10 / uVar18;
            }
            uVar10 = uVar10 - uVar8 * uVar18;
          }
          if (uVar10 != unaff_x26) goto LAB_02bba080;
        }
      } while (plVar14[2] != uVar16);
    }
  }
  if (lVar19 != 0) {
    piVar1 = (int *)(lVar19 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar14[6];
  plVar14[6] = lVar19;
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_68 = *param_2;
  puVar2 = (undefined8 *)(param_1 + 0x88);
  uVar16 = *(ulong *)(param_1 + 0x78);
  if (uVar16 < *(ulong *)(param_1 + 0x80)) {
    FUN_02bbad48(puVar2,uVar16,&local_68);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 8;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x90);
    lVar19 = (long)(uVar16 - *(long *)(param_1 + 0x70)) >> 3;
    uVar16 = lVar19 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(ulong *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    if ((ulong)(lVar12 >> 3) < uVar18 >> 1) {
      uVar10 = lVar12 >> 2;
      uVar18 = uVar16;
      if (uVar16 <= uVar10) {
        uVar18 = uVar10;
      }
    }
    if (uVar18 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar18 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar15 = lVar12 + lVar19 * 8;
    FUN_02bbad48(puVar2,lVar15,&local_68);
    lVar13 = *(long *)(param_1 + 0x70);
    lVar17 = *(long *)(param_1 + 0x78);
    lVar19 = lVar15 + 8;
    if (lVar17 != lVar13) {
      do {
        lVar15 = lVar15 + -8;
        lVar17 = lVar17 + -8;
        FUN_02bbad48(puVar2,lVar15,lVar17);
      } while (lVar13 != lVar17);
      lVar13 = *(long *)(param_1 + 0x70);
    }
    lVar17 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x70) = lVar15;
    *(long *)(param_1 + 0x78) = lVar19;
    *(ulong *)(param_1 + 0x80) = lVar12 + uVar18 * 8;
    if (lVar13 != 0) {
      plVar9 = (long *)*puVar2;
      lVar17 = lVar17 - lVar13;
      uVar16 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar16 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar13,lVar17,8);
          goto LAB_02bba4d0;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar17,8);
    }
  }
LAB_02bba4d0:
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return;
}


