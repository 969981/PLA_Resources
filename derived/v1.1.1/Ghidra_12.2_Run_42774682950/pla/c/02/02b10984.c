/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b10984; name: FUN_02b10984
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b10984(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong unaff_x26;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = PTR_DAT_04379528;
  uVar18 = *(ulong *)(param_1 + 0xa0);
  uVar20 = *param_2;
  plVar16 = (long *)(param_1 + 0x98);
  if (uVar18 != 0) {
    uVar10 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar18 - 1 & uVar20;
    }
    else {
      uVar11 = uVar20;
      if (uVar18 <= uVar20) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar20 / uVar18;
        }
        uVar11 = uVar20 - uVar11 * uVar18;
      }
    }
    plVar12 = *(long **)(*plVar16 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar20) {
            if (plVar12[2] == uVar20) {
              return;
            }
          }
          else if ((plVar12[1] & uVar18 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar20) {
            if (plVar12[2] == uVar20) {
              return;
            }
          }
          else {
            if (uVar18 <= uVar10) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar10 / uVar18;
              }
              uVar10 = uVar10 - uVar2 * uVar18;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar15 = *(long *)(param_1 + 0x60);
  lVar13 = *(long *)(param_1 + 0x68);
  if (uVar18 == 0) {
LAB_02b10b64:
    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                                (*(long **)(param_1 + 0xd0),0x38,8);
    if (plVar12 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd0) + 0xb8))();
    }
    uVar21 = *(undefined8 *)(param_1 + 0xd0);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (lVar17 != 0) {
      if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02b115d0;
      *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar21;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    }
    plVar12[2] = *param_2;
    plVar12[3] = param_2[1];
    plVar12[4] = param_2[2];
    plVar7 = (long *)param_2[3];
    plVar12[5] = (long)plVar7;
    uVar14 = (undefined4)((ulong)(lVar13 - lVar15) >> 5);
    if (plVar7 == (long *)0x0) {
      *(undefined4 *)(plVar12 + 6) = uVar14;
    }
    else {
      (**(code **)(*plVar7 + 0x18))();
      *(undefined4 *)(plVar12 + 6) = uVar14;
    }
    if (lVar17 != 0) {
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    }
    *plVar12 = 0;
    plVar12[1] = uVar20;
    fVar22 = (float)(*(long *)(param_1 + 0xf0) + 1);
    if ((uVar18 == 0) || (*(float *)(param_1 + 0xf8) * (float)uVar18 < fVar22)) {
      uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
      uVar10 = (ulong)(fVar22 / *(float *)(param_1 + 0xf8));
      if (uVar10 <= uVar18) {
        uVar10 = uVar18;
      }
      FUN_00d7c4f8(plVar16,uVar10);
      uVar18 = *(ulong *)(param_1 + 0xa0);
      if ((uVar18 & uVar18 - 1) == 0) {
        unaff_x26 = uVar18 - 1 & uVar20;
      }
      else if (uVar20 < uVar18) {
        unaff_x26 = uVar20;
      }
      else {
        uVar10 = 0;
        if (uVar18 != 0) {
          uVar10 = uVar20 / uVar18;
        }
        unaff_x26 = uVar20 - uVar10 * uVar18;
      }
    }
    plVar7 = *(long **)(*plVar16 + unaff_x26 * 8);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(param_1 + 200);
      *plVar12 = *plVar7;
      *plVar7 = (long)plVar12;
      *(long **)(*(long *)(param_1 + 0x98) + unaff_x26 * 8) = plVar7;
      if (*plVar12 != 0) {
        uVar20 = *(ulong *)(*plVar12 + 8);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar20 = uVar20 & uVar18 - 1;
        }
        else if (uVar18 <= uVar20) {
          uVar10 = 0;
          if (uVar18 != 0) {
            uVar10 = uVar20 / uVar18;
          }
          uVar20 = uVar20 - uVar10 * uVar18;
        }
        plVar7 = (long *)(*plVar16 + uVar20 * 8);
        goto LAB_02b10d48;
      }
    }
    else {
      *plVar12 = *plVar7;
LAB_02b10d48:
      *plVar7 = (long)plVar12;
    }
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
  }
  else {
    uVar10 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x26 = uVar18 - 1 & uVar20;
    }
    else {
      unaff_x26 = uVar20;
      if (uVar18 <= uVar20) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar20 / uVar18;
        }
        unaff_x26 = uVar20 - uVar11 * uVar18;
      }
    }
    plVar12 = *(long **)(*plVar16 + unaff_x26 * 8);
    if (plVar12 == (long *)0x0) goto LAB_02b10b64;
    if (uVar10 < 2) {
      do {
        plVar12 = (long *)*plVar12;
        if ((plVar12 == (long *)0x0) ||
           (plVar12[1] != uVar20 && (plVar12[1] & uVar18 - 1) != unaff_x26)) goto LAB_02b10b64;
      } while (plVar12[2] != uVar20);
    }
    else {
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_02b10b64;
        uVar10 = plVar12[1];
        if (uVar10 != uVar20) {
          if (uVar18 <= uVar10) {
            uVar11 = 0;
            if (uVar18 != 0) {
              uVar11 = uVar10 / uVar18;
            }
            uVar10 = uVar10 - uVar11 * uVar18;
          }
          if (uVar10 != unaff_x26) goto LAB_02b10b64;
        }
      } while (plVar12[2] != uVar20);
    }
  }
  plVar16 = *(long **)(param_1 + 8);
  puVar8 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0xe0,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    local_88 = 0;
    local_80 = 0;
    local_98 = (undefined8 *)0x0;
    local_90 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02b115d0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar16;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    uVar3 = _UNK_038890a8;
    uVar21 = _DAT_038890a0;
    *(undefined8 *)((long)puVar8 + 0x14) = 0x45bb80003ea3d70a;
    puVar8[6] = 0;
    puVar8[7] = 0;
    *(undefined8 *)((long)puVar8 + 0x1c) = 0x3fe38e393f060a92;
    *(undefined8 *)((long)puVar8 + 0x24) = 0x44700000c4700000;
    *(undefined8 *)((long)puVar8 + 0x2c) = 0x44070000c4070000;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = 0;
    *(undefined1 *)(puVar8 + 0x1a) = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[1] = uVar3;
    *puVar8 = uVar21;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    local_88 = 0xe0;
    local_80 = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    local_98 = puVar8;
    local_90 = plVar16;
  }
  uVar18 = *(ulong *)(param_1 + 0x68);
  puVar8 = (undefined8 *)(param_1 + 0x78);
  if (uVar18 < *(ulong *)(param_1 + 0x70)) {
    FUN_02b12a10(puVar8,uVar18,&local_98);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x20;
  }
  else {
    uVar20 = *(ulong *)(param_1 + 0x80);
    lVar13 = (long)(uVar18 - *(long *)(param_1 + 0x60)) >> 5;
    uVar18 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = *(ulong *)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
    if ((ulong)(lVar15 >> 5) < uVar20 >> 1) {
      uVar10 = lVar15 >> 4;
      uVar20 = uVar18;
      if (uVar18 <= uVar10) {
        uVar20 = uVar10;
      }
    }
    if (uVar20 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,uVar20 << 5,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar8 + 0xb8))();
      }
    }
    lVar17 = lVar15 + lVar13 * 0x20;
    FUN_02b12a10(puVar8,lVar17,&local_98);
    plVar16 = *(long **)(param_1 + 0x60);
    plVar12 = *(long **)(param_1 + 0x68);
    lVar13 = lVar17 + 0x20;
    if (plVar12 == plVar16) {
      plVar12 = plVar16;
    }
    else {
      do {
        lVar17 = lVar17 + -0x20;
        plVar12 = plVar12 + -4;
        FUN_02b12a10(puVar8,lVar17,plVar12);
      } while (plVar16 != plVar12);
      plVar16 = *(long **)(param_1 + 0x60);
      plVar12 = *(long **)(param_1 + 0x68);
    }
    lVar9 = *(long *)(param_1 + 0x70);
    *(ulong *)(param_1 + 0x70) = lVar15 + uVar20 * 0x20;
    *(long *)(param_1 + 0x60) = lVar17;
    *(long *)(param_1 + 0x68) = lVar13;
    if (plVar12 != plVar16) {
      lVar13 = tpidr_el0;
      do {
        plVar7 = plVar12 + -4;
        lVar15 = *plVar7;
        *plVar7 = 0;
        if (lVar15 != 0) {
          FUN_02bcbe58(auStack_78,0);
          plVar1 = (long *)plVar12[-3];
          lVar17 = plVar12[-2];
          lVar19 = plVar12[-1];
          uVar18 = (**(code **)(*plVar1 + 0xc0))(plVar1);
          if ((uVar18 & 1) == 0) {
LAB_02b11048:
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar15,lVar17,lVar19);
          }
          else {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02b11048;
            FUN_02bcc824(plVar1,lVar15,lVar17,lVar19);
          }
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar6 = *(int *)(lVar13 + 0x38d480) + -1;
          *(int *)(lVar13 + 0x38d480) = iVar6;
          if (iVar6 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar13 + 0x38d484) = 0;
          }
        }
        plVar12 = plVar7;
      } while (plVar16 != plVar7);
    }
    if (plVar16 != (long *)0x0) {
      lVar9 = lVar9 - (long)plVar16;
      plVar12 = (long *)*puVar8;
      uVar18 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar18 & 1) != 0) {
        lVar13 = tpidr_el0;
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar12,plVar16,lVar9,8);
          goto LAB_02b11254;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar16,lVar9,8);
    }
  }
LAB_02b11254:
  puVar8 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_78,0);
  uVar3 = local_80;
  uVar21 = local_88;
  plVar16 = local_90;
  uVar18 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar18 & 1) != 0) {
    lVar13 = tpidr_el0;
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar13 + 0x38d480)) {
      FUN_02bcc824(plVar16,puVar8,uVar21,uVar3);
      goto LAB_02b112e8;
    }
  }
  (**(code **)(*plVar16 + 0x18))(plVar16,puVar8,uVar21,uVar3);
LAB_02b112e8:
  lVar13 = tpidr_el0;
  if (*(char *)(lVar13 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar13 + 0x38d488) = 1;
    *(undefined8 *)(lVar13 + 0x38d478) = 0;
    *(undefined8 *)(lVar13 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar13 + 0x38d480) + -1;
  *(int *)(lVar13 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar13 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar13 + 0x38d488) = 1;
      *(undefined8 *)(lVar13 + 0x38d478) = 0;
      *(undefined8 *)(lVar13 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar13 + 0x38d484) = 0;
  }
  return;
}


