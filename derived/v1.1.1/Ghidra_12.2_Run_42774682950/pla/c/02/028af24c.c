/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028af24c; name: FUN_028af24c
 */


void FUN_028af24c(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  long local_68;
  
  FUN_028a7d54();
  *param_1 = &DAT_04272b08;
  param_1[0xd] = param_2;
  param_1[9] = &PTR_LAB_04272c90;
  param_1[10] = &PTR_LAB_04272df0;
  param_1[0xe] = 0;
  puVar5 = PTR_DAT_04379520;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar12 = DAT_043f1798;
  lVar4 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar10 = lVar12;
  }
  param_1[0x15] = 0;
  param_1[0x11] = lVar10;
  param_1[0x12] = 0x555555555555555;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar12 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar10 = lVar12;
  }
  param_1[0x1c] = 0;
  param_1[0x18] = lVar10;
  param_1[0x19] = 0x555555555555555;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar12 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar10 = lVar12;
  }
  param_1[0x1f] = lVar10;
  param_1[0x20] = 0x555555555555555;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar12 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar10 = lVar12;
  }
  param_1[0x28] = 0;
  param_1[0x26] = lVar10;
  param_1[0x27] = 0x555555555555555;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x354,0,1);
  piVar11 = (int *)param_1[0xd];
  param_1[0x6c] = 0;
  if (piVar11 == (int *)0x0) {
    return;
  }
  if ((4 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar13 != 0)) {
    puVar17 = (uint *)((long)piVar11 + uVar13);
    puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
    uVar13 = (ulong)*puVar17;
    if (*puVar17 != 0) {
      lVar12 = param_1[0xe];
      if ((ulong)((param_1[0x10] - lVar12 >> 4) * -0x5555555555555555) < uVar13) {
        puVar18 = param_1 + 0x11;
        lVar14 = param_1[0xf];
        lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar13 * 0x30,8);
        if (lVar10 == 0) {
          (**(code **)(*(long *)*puVar18 + 0xb8))();
        }
        lVar21 = lVar10 + (lVar14 - lVar12 >> 4) * 0x10;
        lVar12 = param_1[0xe];
        lVar14 = param_1[0xf];
        lVar20 = lVar21;
        if (lVar14 == lVar12) {
          lVar14 = lVar12;
        }
        else {
          do {
            lVar20 = lVar20 + -0x30;
            lVar14 = lVar14 + -0x30;
            FUN_028b454c(puVar18,lVar20,lVar14);
          } while (lVar12 != lVar14);
          lVar12 = param_1[0xf];
          lVar14 = param_1[0xe];
        }
        param_1[0xe] = lVar20;
        param_1[0xf] = lVar21;
        lVar20 = param_1[0x10];
        param_1[0x10] = lVar10 + uVar13 * 0x30;
        while (lVar12 != lVar14) {
          plVar19 = (long *)(lVar12 + -0x10);
          lVar12 = lVar12 + -0x30;
          if ((long *)*plVar19 != (long *)0x0) {
            (**(code **)(*(long *)*plVar19 + 0x20))();
          }
        }
        if (lVar14 == 0) goto LAB_028af604;
        plVar19 = (long *)*puVar18;
        uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar13 & 1) == 0) {
LAB_028af5e8:
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,lVar20 - lVar14,8);
          goto LAB_028af604;
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_028af5e8;
        FUN_02bcc824(plVar19,lVar14,lVar20 - lVar14,8);
        uVar3 = *puVar17;
      }
      else {
LAB_028af604:
        uVar3 = *puVar17;
      }
      if (uVar3 != 0) {
        puVar17 = puVar17 + 1;
        puVar1 = puVar17 + uVar3;
        puVar18 = param_1 + 0x11;
        do {
          local_68 = (long)puVar17 + (ulong)*puVar17;
          uVar13 = param_1[0xf];
          if (uVar13 < (ulong)param_1[0x10]) {
            FUN_028b465c(puVar18,uVar13,&local_68);
            param_1[0xf] = param_1[0xf] + 0x30;
          }
          else {
            uVar16 = param_1[0x12];
            lVar12 = (long)(uVar13 - param_1[0xe]) >> 4;
            if (0x7ffffffffffffffe < uVar16) {
              uVar16 = 0x7fffffffffffffff;
            }
            uVar13 = lVar12 * -0x5555555555555555 + 1;
            if (uVar16 < uVar13) goto LAB_028b08e0;
            lVar10 = (long)(param_1[0x10] - param_1[0xe]) >> 4;
            uVar15 = lVar10 * 0x5555555555555556;
            if (uVar13 <= uVar15) {
              uVar13 = uVar15;
            }
            if ((ulong)(lVar10 * -0x5555555555555555) < uVar16 >> 1) {
              uVar16 = uVar13;
            }
            if (uVar16 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar16 * 0x30,8);
              if (lVar10 == 0) {
                (**(code **)(*(long *)*puVar18 + 0xb8))();
              }
            }
            lVar21 = lVar10 + lVar12 * 0x10;
            FUN_028b465c(puVar18,lVar21,&local_68);
            lVar14 = param_1[0xe];
            lVar20 = param_1[0xf];
            lVar12 = lVar21 + 0x30;
            if (lVar20 == lVar14) {
              lVar20 = lVar14;
            }
            else {
              do {
                lVar21 = lVar21 + -0x30;
                lVar20 = lVar20 + -0x30;
                FUN_028b454c(puVar18,lVar21,lVar20);
              } while (lVar14 != lVar20);
              lVar14 = param_1[0xf];
              lVar20 = param_1[0xe];
            }
            param_1[0xe] = lVar21;
            param_1[0xf] = lVar12;
            lVar12 = param_1[0x10];
            param_1[0x10] = lVar10 + uVar16 * 0x30;
            while (lVar14 != lVar20) {
              plVar19 = (long *)(lVar14 + -0x10);
              lVar14 = lVar14 + -0x30;
              if ((long *)*plVar19 != (long *)0x0) {
                (**(code **)(*(long *)*plVar19 + 0x20))();
              }
            }
            if (lVar20 != 0) {
              plVar19 = (long *)*puVar18;
              uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
              if ((uVar13 & 1) != 0) {
                if (*(char *)(lVar4 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar4 + 0x38d488) = 1;
                  *(undefined8 *)(lVar4 + 0x38d478) = 0;
                  *(undefined8 *)(lVar4 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar4 + 0x38d480)) {
                  FUN_02bcc824(plVar19,lVar20,lVar12 - lVar20,8);
                  goto LAB_028af65c;
                }
              }
              (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,lVar12 - lVar20,8);
            }
          }
LAB_028af65c:
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar1);
      }
    }
  }
  puVar2 = (undefined8 *)param_1[0xf];
  for (puVar18 = (undefined8 *)param_1[0xe]; puVar18 != puVar2; puVar18 = puVar18 + 6) {
    piVar11 = (int *)*puVar18;
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 0xb) ||
       (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5], uVar13 == 0)) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)((long)piVar11 + uVar13);
    }
    *(undefined4 *)(puVar18 + 5) = uVar22;
  }
  piVar11 = (int *)param_1[0xd];
  if ((((6 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
       (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar13 != 0)) &&
      (puVar17 = (uint *)((long)piVar11 + uVar13),
      puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), puVar17 != (uint *)0x0)) &&
     (uVar13 = (ulong)*puVar17, *puVar17 != 0)) {
    lVar12 = param_1[0x15];
    if ((ulong)((param_1[0x17] - lVar12 >> 4) * -0x5555555555555555) < uVar13) {
      puVar18 = param_1 + 0x18;
      lVar14 = param_1[0x16];
      lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar13 * 0x30,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar18 + 0xb8))();
      }
      lVar21 = lVar10 + (lVar14 - lVar12 >> 4) * 0x10;
      lVar12 = param_1[0x15];
      lVar14 = param_1[0x16];
      lVar20 = lVar21;
      if (lVar14 == lVar12) {
        lVar14 = lVar12;
      }
      else {
        do {
          lVar20 = lVar20 + -0x30;
          lVar14 = lVar14 + -0x30;
          FUN_028b47c4(puVar18,lVar20,lVar14);
        } while (lVar12 != lVar14);
        lVar12 = param_1[0x16];
        lVar14 = param_1[0x15];
      }
      param_1[0x15] = lVar20;
      param_1[0x16] = lVar21;
      lVar20 = param_1[0x17];
      param_1[0x17] = lVar10 + uVar13 * 0x30;
      while (lVar12 != lVar14) {
        plVar19 = (long *)(lVar12 + -0x10);
        lVar12 = lVar12 + -0x30;
        if ((long *)*plVar19 != (long *)0x0) {
          (**(code **)(*(long *)*plVar19 + 0x20))();
        }
      }
      if (lVar14 == 0) goto LAB_028afa84;
      plVar19 = (long *)*puVar18;
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) == 0) {
LAB_028afa68:
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,lVar20 - lVar14,8);
        goto LAB_028afa84;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_028afa68;
      FUN_02bcc824(plVar19,lVar14,lVar20 - lVar14,8);
      uVar3 = *puVar17;
    }
    else {
LAB_028afa84:
      uVar3 = *puVar17;
    }
    if (uVar3 != 0) {
      puVar17 = puVar17 + 1;
      puVar1 = puVar17 + uVar3;
      puVar18 = param_1 + 0x18;
      do {
        local_68 = (long)puVar17 + (ulong)*puVar17;
        uVar13 = param_1[0x16];
        if (uVar13 < (ulong)param_1[0x17]) {
          FUN_028b48d4(puVar18,uVar13,&local_68);
          param_1[0x16] = param_1[0x16] + 0x30;
        }
        else {
          uVar16 = param_1[0x19];
          lVar12 = (long)(uVar13 - param_1[0x15]) >> 4;
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          uVar13 = lVar12 * -0x5555555555555555 + 1;
          if (uVar16 < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (long)(param_1[0x17] - param_1[0x15]) >> 4;
          uVar15 = lVar10 * 0x5555555555555556;
          if (uVar13 <= uVar15) {
            uVar13 = uVar15;
          }
          if ((ulong)(lVar10 * -0x5555555555555555) < uVar16 >> 1) {
            uVar16 = uVar13;
          }
          if (uVar16 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar16 * 0x30,8);
            if (lVar10 == 0) {
              (**(code **)(*(long *)*puVar18 + 0xb8))();
            }
          }
          lVar21 = lVar10 + lVar12 * 0x10;
          FUN_028b48d4(puVar18,lVar21,&local_68);
          lVar14 = param_1[0x15];
          lVar20 = param_1[0x16];
          lVar12 = lVar21 + 0x30;
          if (lVar20 == lVar14) {
            lVar20 = lVar14;
          }
          else {
            do {
              lVar21 = lVar21 + -0x30;
              lVar20 = lVar20 + -0x30;
              FUN_028b47c4(puVar18,lVar21,lVar20);
            } while (lVar14 != lVar20);
            lVar14 = param_1[0x16];
            lVar20 = param_1[0x15];
          }
          param_1[0x15] = lVar21;
          param_1[0x16] = lVar12;
          lVar12 = param_1[0x17];
          param_1[0x17] = lVar10 + uVar16 * 0x30;
          while (lVar14 != lVar20) {
            plVar19 = (long *)(lVar14 + -0x10);
            lVar14 = lVar14 + -0x30;
            if ((long *)*plVar19 != (long *)0x0) {
              (**(code **)(*(long *)*plVar19 + 0x20))();
            }
          }
          if (lVar20 != 0) {
            plVar19 = (long *)*puVar18;
            uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
            if ((uVar13 & 1) != 0) {
              if (*(char *)(lVar4 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar4 + 0x38d488) = 1;
                *(undefined8 *)(lVar4 + 0x38d478) = 0;
                *(undefined8 *)(lVar4 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar4 + 0x38d480)) {
                FUN_02bcc824(plVar19,lVar20,lVar12 - lVar20,8);
                goto LAB_028afadc;
              }
            }
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,lVar12 - lVar20,8);
          }
        }
LAB_028afadc:
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x16];
  for (puVar18 = (undefined8 *)param_1[0x15]; puVar18 != puVar2; puVar18 = puVar18 + 6) {
    piVar11 = (int *)*puVar18;
    uVar22 = 0;
    if (10 < *(ushort *)((long)piVar11 - (long)*piVar11)) {
      uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5];
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = *(undefined4 *)((long)piVar11 + uVar13);
      }
    }
    *(undefined4 *)(puVar18 + 5) = uVar22;
  }
  piVar11 = (int *)param_1[0xd];
  if (((8 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
      (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4], uVar13 != 0)) &&
     ((puVar17 = (uint *)((long)piVar11 + uVar13),
      puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), puVar17 != (uint *)0x0 &&
      (uVar13 = (ulong)*puVar17, *puVar17 != 0)))) {
    lVar12 = param_1[0x1c];
    if ((ulong)((param_1[0x1e] - lVar12 >> 4) * -0x5555555555555555) < uVar13) {
      puVar18 = param_1 + 0x1f;
      lVar14 = param_1[0x1d];
      lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar13 * 0x30,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar18 + 0xb8))();
      }
      lVar21 = lVar10 + (lVar14 - lVar12 >> 4) * 0x10;
      lVar12 = param_1[0x1c];
      lVar14 = param_1[0x1d];
      lVar20 = lVar21;
      if (lVar14 == lVar12) {
        lVar14 = lVar12;
      }
      else {
        do {
          lVar20 = lVar20 + -0x30;
          lVar14 = lVar14 + -0x30;
          FUN_028b4a3c(puVar18,lVar20,lVar14);
        } while (lVar12 != lVar14);
        lVar12 = param_1[0x1c];
        lVar14 = param_1[0x1d];
      }
      param_1[0x1c] = lVar20;
      param_1[0x1d] = lVar21;
      lVar20 = param_1[0x1e];
      param_1[0x1e] = lVar10 + uVar13 * 0x30;
      while (lVar14 != lVar12) {
        plVar19 = (long *)(lVar14 + -0x10);
        lVar14 = lVar14 + -0x30;
        if ((long *)*plVar19 != (long *)0x0) {
          (**(code **)(*(long *)*plVar19 + 0x20))();
        }
      }
      if (lVar12 == 0) goto LAB_028aff04;
      plVar19 = (long *)*puVar18;
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) == 0) {
LAB_028afee8:
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar12,lVar20 - lVar12,8);
        goto LAB_028aff04;
      }
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_028afee8;
      FUN_02bcc824(plVar19,lVar12,lVar20 - lVar12,8);
      uVar3 = *puVar17;
    }
    else {
LAB_028aff04:
      uVar3 = *puVar17;
    }
    if (uVar3 != 0) {
      puVar17 = puVar17 + 1;
      puVar1 = puVar17 + uVar3;
      puVar18 = param_1 + 0x1f;
      do {
        local_68 = (long)puVar17 + (ulong)*puVar17;
        uVar13 = param_1[0x1d];
        if (uVar13 < (ulong)param_1[0x1e]) {
          FUN_028b4b4c(puVar18,uVar13,&local_68);
          param_1[0x1d] = param_1[0x1d] + 0x30;
        }
        else {
          lVar12 = (long)(uVar13 - param_1[0x1c]) >> 4;
          uVar13 = param_1[0x20];
          if (0x7ffffffffffffffe < uVar13) {
            uVar13 = 0x7fffffffffffffff;
          }
          uVar16 = lVar12 * -0x5555555555555555 + 1;
          if (uVar13 < uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = (long)(param_1[0x1e] - param_1[0x1c]) >> 4;
          uVar15 = lVar10 * 0x5555555555555556;
          if (uVar16 <= uVar15) {
            uVar16 = uVar15;
          }
          if ((ulong)(lVar10 * -0x5555555555555555) < uVar13 >> 1) {
            uVar13 = uVar16;
          }
          if (uVar13 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar13 * 0x30,8);
            if (lVar10 == 0) {
              (**(code **)(*(long *)*puVar18 + 0xb8))();
            }
          }
          lVar21 = lVar10 + lVar12 * 0x10;
          FUN_028b4b4c(puVar18,lVar21,&local_68);
          lVar14 = param_1[0x1c];
          lVar20 = param_1[0x1d];
          lVar12 = lVar21 + 0x30;
          if (lVar20 == lVar14) {
            lVar20 = lVar14;
          }
          else {
            do {
              lVar21 = lVar21 + -0x30;
              lVar20 = lVar20 + -0x30;
              FUN_028b4a3c(puVar18,lVar21,lVar20);
            } while (lVar14 != lVar20);
            lVar14 = param_1[0x1d];
            lVar20 = param_1[0x1c];
          }
          param_1[0x1c] = lVar21;
          param_1[0x1d] = lVar12;
          lVar12 = param_1[0x1e];
          param_1[0x1e] = lVar10 + uVar13 * 0x30;
          while (lVar14 != lVar20) {
            plVar19 = (long *)(lVar14 + -0x10);
            lVar14 = lVar14 + -0x30;
            if ((long *)*plVar19 != (long *)0x0) {
              (**(code **)(*(long *)*plVar19 + 0x20))();
            }
          }
          if (lVar20 != 0) {
            plVar19 = (long *)*puVar18;
            uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
            if ((uVar13 & 1) != 0) {
              if (*(char *)(lVar4 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar4 + 0x38d488) = 1;
                *(undefined8 *)(lVar4 + 0x38d478) = 0;
                *(undefined8 *)(lVar4 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar4 + 0x38d480)) {
                FUN_02bcc824(plVar19,lVar20,lVar12 - lVar20,8);
                goto LAB_028aff5c;
              }
            }
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,lVar12 - lVar20,8);
          }
        }
LAB_028aff5c:
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x1d];
  for (puVar18 = (undefined8 *)param_1[0x1c]; puVar18 != puVar2; puVar18 = puVar18 + 6) {
    piVar11 = (int *)*puVar18;
    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
       (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar13 == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)((long)piVar11 + uVar13) != '\0';
    }
    *(bool *)(puVar18 + 5) = bVar8;
  }
  piVar11 = (int *)param_1[0xd];
  if (*(ushort *)((long)piVar11 - (long)*piVar11) < 0xb) {
    return;
  }
  uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5];
  if (uVar13 == 0) {
    return;
  }
  puVar17 = (uint *)((long)piVar11 + uVar13);
  puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
  if (puVar17 == (uint *)0x0) {
    return;
  }
  uVar13 = (ulong)*puVar17;
  if (*puVar17 == 0) {
    return;
  }
  lVar12 = param_1[0x23];
  if ((ulong)((param_1[0x25] - lVar12 >> 4) * -0x5555555555555555) < uVar13) {
    lVar14 = param_1[0x24];
    puVar18 = param_1 + 0x26;
    lVar10 = (**(code **)(*(long *)param_1[0x26] + 0x10))((long *)param_1[0x26],uVar13 * 0x30,8);
    if (lVar10 == 0) {
      (**(code **)(*(long *)*puVar18 + 0xb8))();
    }
    lVar21 = lVar10 + (lVar14 - lVar12 >> 4) * 0x10;
    lVar12 = param_1[0x23];
    lVar14 = param_1[0x24];
    lVar20 = lVar21;
    if (lVar14 == lVar12) {
      lVar14 = lVar12;
    }
    else {
      do {
        lVar20 = lVar20 + -0x30;
        lVar14 = lVar14 + -0x30;
        FUN_028b4cbc(puVar18,lVar20,lVar14);
      } while (lVar12 != lVar14);
      lVar12 = param_1[0x23];
      lVar14 = param_1[0x24];
    }
    param_1[0x23] = lVar20;
    param_1[0x24] = lVar21;
    lVar20 = param_1[0x25];
    param_1[0x25] = lVar10 + uVar13 * 0x30;
    while (lVar14 != lVar12) {
      plVar19 = (long *)(lVar14 + -0x10);
      lVar14 = lVar14 + -0x30;
      if ((long *)*plVar19 != (long *)0x0) {
        (**(code **)(*(long *)*plVar19 + 0x20))();
      }
    }
    if (lVar12 != 0) {
      plVar19 = (long *)*puVar18;
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) != 0) {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar19,lVar12,lVar20 - lVar12,8);
          uVar3 = *puVar17;
          goto joined_r0x028b0388;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar12,lVar20 - lVar12,8);
    }
  }
  uVar3 = *puVar17;
joined_r0x028b0388:
  if (uVar3 != 0) {
    puVar17 = puVar17 + 1;
    puVar1 = puVar17 + uVar3;
    puVar18 = param_1 + 0x26;
    do {
      local_68 = (long)puVar17 + (ulong)*puVar17;
      uVar13 = param_1[0x24];
      if (uVar13 < (ulong)param_1[0x25]) {
        FUN_028b4dcc(puVar18,uVar13,&local_68);
        param_1[0x24] = param_1[0x24] + 0x30;
      }
      else {
        lVar12 = (long)(uVar13 - param_1[0x23]) >> 4;
        uVar13 = param_1[0x27];
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        uVar16 = lVar12 * -0x5555555555555555 + 1;
        if (uVar13 < uVar16) {
LAB_028b08e0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)(param_1[0x25] - param_1[0x23]) >> 4;
        uVar15 = lVar10 * 0x5555555555555556;
        if (uVar16 <= uVar15) {
          uVar16 = uVar15;
        }
        if ((ulong)(lVar10 * -0x5555555555555555) < uVar13 >> 1) {
          uVar13 = uVar16;
        }
        if (uVar13 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(long *)*puVar18 + 0x10))((long *)*puVar18,uVar13 * 0x30,8);
          if (lVar10 == 0) {
            (**(code **)(*(long *)*puVar18 + 0xb8))();
          }
        }
        lVar21 = lVar10 + lVar12 * 0x10;
        FUN_028b4dcc(puVar18,lVar21,&local_68);
        lVar14 = param_1[0x23];
        lVar20 = param_1[0x24];
        lVar12 = lVar21 + 0x30;
        if (lVar20 == lVar14) {
          lVar20 = lVar14;
        }
        else {
          do {
            lVar21 = lVar21 + -0x30;
            lVar20 = lVar20 + -0x30;
            FUN_028b4cbc(puVar18,lVar21,lVar20);
          } while (lVar14 != lVar20);
          lVar14 = param_1[0x23];
          lVar20 = param_1[0x24];
        }
        param_1[0x23] = lVar21;
        param_1[0x24] = lVar12;
        lVar12 = param_1[0x25];
        param_1[0x25] = lVar10 + uVar13 * 0x30;
        while (lVar20 != lVar14) {
          plVar19 = (long *)(lVar20 + -0x10);
          lVar20 = lVar20 + -0x30;
          if ((long *)*plVar19 != (long *)0x0) {
            (**(code **)(*(long *)*plVar19 + 0x20))();
          }
        }
        if (lVar14 != 0) {
          plVar19 = (long *)*puVar18;
          uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar14,lVar12 - lVar14,8);
              goto LAB_028b03e4;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,lVar12 - lVar14,8);
        }
      }
LAB_028b03e4:
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
  }
  return;
}


