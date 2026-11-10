/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290c2e8; name: FUN_0290c2e8
 */


bool FUN_0290c2e8(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined4 uVar26;
  long *local_88 [3];
  
  FUN_0290b54c();
  uVar4 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((uVar4 & 1) == 0) goto LAB_0290caf4;
  nn::os::LockMutex((MutexType *)(param_2 + 0x61));
  puVar1 = PTR_DAT_04379528;
  pbVar12 = PTR_DAT_04379520;
  if (param_2[0x5d] == 0) {
    plVar18 = (long *)param_2[1];
    puVar5 = (undefined8 *)(**(code **)(*plVar18 + 0x10))(plVar18,0x68,8);
    lVar13 = tpidr_el0;
    if (puVar5 == (undefined8 *)0x0) {
      lVar17 = 0;
      lVar6 = 0;
      plVar18 = (long *)0x0;
    }
    else {
      if ((*pbVar12 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar2 = PTR_DAT_04379528;
        if (iVar3 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0290ce84;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar18;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar5 = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      if ((*pbVar12 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar2 = PTR_DAT_04379528;
        if (iVar3 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      lVar17 = DAT_043f1798;
      if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
          (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
         (lVar7 = *(long *)(lVar13 + 0x20), *(long *)(lVar13 + 0x20) == 0)) {
        *(long *)(lVar13 + 0x20) = DAT_043f1798;
        lVar7 = lVar17;
      }
      puVar5[2] = lVar7;
      puVar5[3] = 0xfffffffffffffff;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      puVar5[6] = 0;
      if ((*pbVar12 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar2 = PTR_DAT_04379528;
        if (iVar3 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      lVar17 = DAT_043f1798;
      if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
          (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
         (lVar7 = *(long *)(lVar13 + 0x20), *(long *)(lVar13 + 0x20) == 0)) {
        *(long *)(lVar13 + 0x20) = DAT_043f1798;
        lVar7 = lVar17;
      }
      puVar5[7] = lVar7;
      puVar5[8] = 0xfffffffffffffff;
      lVar17 = 0x68;
      puVar5[9] = 0;
      *(undefined4 *)(puVar5 + 10) = 0;
      puVar5[0xb] = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar6 = 8;
    }
    lVar7 = param_2[0x5d];
    param_2[0x5d] = (long)puVar5;
    if (lVar7 != 0) {
      FUN_02bcbe58(local_88,0);
      FUN_0290dfcc(lVar7);
      plVar23 = (long *)param_2[0x5e];
      lVar21 = param_2[0x5f];
      lVar22 = param_2[0x60];
      uVar4 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar4 & 1) == 0) {
LAB_0290c53c:
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar7,lVar21,lVar22);
      }
      else {
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_0290c53c;
        FUN_02bcc824(plVar23,lVar7,lVar21,lVar22);
      }
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar3 = *(int *)(lVar13 + 0x38d480) + -1;
      *(int *)(lVar13 + 0x38d480) = iVar3;
      pbVar12 = PTR_DAT_04379520;
      if (iVar3 == 0) {
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
    param_2[0x5e] = (long)plVar18;
    param_2[0x5f] = lVar17;
    param_2[0x60] = lVar6;
  }
  pcVar19 = *(char **)(param_3 + 8);
  if (*pcVar19 == '\0') {
    local_88[0] = (long *)FUN_00938550();
    if (local_88[0] == (long *)0x0) goto LAB_0290c638;
    (**(code **)(*local_88[0] + 0x18))(local_88[0]);
    plVar18 = (long *)param_2[0x5d];
    if (local_88[0] != (long *)0x0) goto LAB_0290c640;
LAB_0290cbb4:
    plVar23 = (long *)PTR_DAT_04379c88;
    plVar20 = local_88[0];
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar8 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar8;
    FUN_02a47cd8(local_88,uVar8,pcVar19);
LAB_0290c638:
    plVar18 = (long *)param_2[0x5d];
    if (local_88[0] == (long *)0x0) goto LAB_0290cbb4;
LAB_0290c640:
    plVar23 = local_88[0] + 0xb;
    plVar20 = local_88[0];
  }
  pbVar24 = (byte *)*plVar23;
  pbVar25 = (byte *)plVar18[1];
  uVar26 = (undefined4)param_1;
  pbVar15 = pbVar12;
  if (pbVar25 != (byte *)0x0) {
    uVar4 = (long)pbVar25 - ((ulong)pbVar25 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      pbVar15 = (byte *)((ulong)(pbVar25 + -1) & (ulong)pbVar24);
    }
    else {
      pbVar15 = pbVar24;
      if (pbVar25 <= pbVar24) {
        uVar14 = 0;
        if (pbVar25 != (byte *)0x0) {
          uVar14 = (ulong)pbVar24 / (ulong)pbVar25;
        }
        pbVar15 = pbVar24 + -(uVar14 * (long)pbVar25);
      }
    }
    lVar13 = *plVar18;
    plVar23 = *(long **)(lVar13 + (long)pbVar15 * 8);
    if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if ((byte *)plVar23[1] == pbVar24) {
            puVar5 = (undefined8 *)PTR_DAT_04379c88;
            if (plVar23[2] != 0) {
              puVar5 = (undefined8 *)(plVar23[2] + 0x58);
            }
            if ((byte *)*puVar5 == pbVar24) goto LAB_0290ca04;
          }
          else if ((byte *)((ulong)plVar23[1] & (ulong)(pbVar25 + -1)) != pbVar15) break;
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          pbVar16 = (byte *)plVar23[1];
          if (pbVar16 == pbVar24) {
            puVar5 = (undefined8 *)PTR_DAT_04379c88;
            if (plVar23[2] != 0) {
              puVar5 = (undefined8 *)(plVar23[2] + 0x58);
            }
            if ((byte *)*puVar5 == pbVar24) goto LAB_0290ca04;
          }
          else {
            if (pbVar25 <= pbVar16) {
              uVar14 = 0;
              if (pbVar25 != (byte *)0x0) {
                uVar14 = (ulong)pbVar16 / (ulong)pbVar25;
              }
              pbVar16 = pbVar16 + -(uVar14 * (long)pbVar25);
            }
            if (pbVar16 != pbVar15) break;
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
    if (uVar4 < 2) {
      pbVar15 = (byte *)((ulong)(pbVar25 + -1) & (ulong)pbVar24);
      plVar23 = *(long **)(lVar13 + (long)pbVar15 * 8);
    }
    else {
      pbVar15 = pbVar24;
      if (pbVar25 <= pbVar24) {
        uVar14 = 0;
        if (pbVar25 != (byte *)0x0) {
          uVar14 = (ulong)pbVar24 / (ulong)pbVar25;
        }
        pbVar15 = pbVar24 + -(uVar14 * (long)pbVar25);
      }
      plVar23 = *(long **)(lVar13 + (long)pbVar15 * 8);
    }
    if (plVar23 != (long *)0x0) {
      if (uVar4 < 2) {
        do {
          plVar23 = (long *)*plVar23;
          if ((plVar23 == (long *)0x0) ||
             ((byte *)plVar23[1] != pbVar24 &&
              (byte *)((ulong)plVar23[1] & (ulong)(pbVar25 + -1)) != pbVar15)) goto LAB_0290c870;
          puVar5 = (undefined8 *)PTR_DAT_04379c88;
          if (plVar23[2] != 0) {
            puVar5 = (undefined8 *)(plVar23[2] + 0x58);
          }
        } while ((byte *)*puVar5 != pbVar24);
        goto joined_r0x0290c868;
      }
      for (plVar23 = (long *)*plVar23; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        pbVar16 = (byte *)plVar23[1];
        if (pbVar16 != pbVar24) {
          if (pbVar25 <= pbVar16) {
            uVar4 = 0;
            if (pbVar25 != (byte *)0x0) {
              uVar4 = (ulong)pbVar16 / (ulong)pbVar25;
            }
            pbVar16 = pbVar16 + -(uVar4 * (long)pbVar25);
          }
          if (pbVar16 != pbVar15) break;
        }
        puVar5 = (undefined8 *)PTR_DAT_04379c88;
        if (plVar23[2] != 0) {
          puVar5 = (undefined8 *)(plVar23[2] + 0x58);
        }
        if ((byte *)*puVar5 == pbVar24) goto joined_r0x0290c868;
      }
    }
  }
LAB_0290c870:
  plVar23 = (long *)(**(code **)(*(long *)plVar18[7] + 0x10))((long *)plVar18[7],0x20,8);
  if (plVar23 == (long *)0x0) {
    (**(code **)(*(long *)plVar18[7] + 0xb8))();
  }
  lVar13 = plVar18[7];
  if ((*pbVar12 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar2 = PTR_DAT_04379528;
    if (iVar3 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0290ce84:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar13;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar23[2] = (long)plVar20;
  if (plVar20 == (long *)0x0) {
    *(undefined4 *)(plVar23 + 3) = uVar26;
  }
  else {
    (**(code **)(*plVar20 + 0x18))(plVar20);
    *(undefined4 *)(plVar23 + 3) = uVar26;
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar23 = 0;
  plVar23[1] = (long)pbVar24;
  if ((pbVar25 == (byte *)0x0) ||
     (*(float *)(plVar18 + 0xc) * (float)pbVar25 < (float)(plVar18[0xb] + 1))) {
    uVar4 = (ulong)(pbVar25 < (byte *)0x3 || ((ulong)pbVar25 & (ulong)(pbVar25 + -1)) != 0) |
            (long)pbVar25 << 1;
    uVar14 = (ulong)((float)(plVar18[0xb] + 1) / *(float *)(plVar18 + 0xc));
    if (uVar14 <= uVar4) {
      uVar14 = uVar4;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      uVar14 = std::__next_prime(uVar14);
    }
    uVar4 = plVar18[1];
    if (uVar4 < uVar14) {
      uVar9 = uVar14;
LAB_0290c984:
      FUN_0290ed58(plVar18,uVar9);
    }
    else if (uVar14 < uVar4) {
      uVar9 = (ulong)((float)(ulong)plVar18[0xb] / *(float *)(plVar18 + 0xc));
      if ((uVar4 < 3) ||
         (uVar10 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333),
         1 < (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= uVar14) {
        uVar9 = uVar14;
      }
      if (uVar9 < uVar4) goto LAB_0290c984;
    }
    pbVar25 = (byte *)plVar18[1];
    if (((ulong)pbVar25 & (ulong)(pbVar25 + -1)) == 0) {
      pbVar15 = (byte *)((ulong)(pbVar25 + -1) & (ulong)pbVar24);
    }
    else if (pbVar24 < pbVar25) {
      pbVar15 = pbVar24;
    }
    else {
      uVar4 = 0;
      if (pbVar25 != (byte *)0x0) {
        uVar4 = (ulong)pbVar24 / (ulong)pbVar25;
      }
      pbVar15 = pbVar24 + -(uVar4 * (long)pbVar25);
    }
  }
  plVar11 = *(long **)(*plVar18 + (long)pbVar15 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar18 + 6;
    *plVar23 = *plVar11;
    *plVar11 = (long)plVar23;
    *(long **)(*plVar18 + (long)pbVar15 * 8) = plVar11;
    if (*plVar23 != 0) {
      pbVar12 = *(byte **)(*plVar23 + 8);
      if (((ulong)pbVar25 & (ulong)(pbVar25 + -1)) == 0) {
        pbVar12 = (byte *)((ulong)pbVar12 & (ulong)(pbVar25 + -1));
      }
      else if (pbVar25 <= pbVar12) {
        uVar4 = 0;
        if (pbVar25 != (byte *)0x0) {
          uVar4 = (ulong)pbVar12 / (ulong)pbVar25;
        }
        pbVar12 = pbVar12 + -(uVar4 * (long)pbVar25);
      }
      plVar11 = (long *)(*plVar18 + (long)pbVar12 * 8);
      goto LAB_0290cac4;
    }
  }
  else {
    *plVar23 = *plVar11;
LAB_0290cac4:
    *plVar11 = (long)plVar23;
  }
  plVar18[0xb] = plVar18[0xb] + 1;
  goto joined_r0x0290c868;
LAB_0290ca04:
  *(undefined4 *)(plVar23 + 3) = uVar26;
joined_r0x0290c868:
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x61));
LAB_0290caf4:
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar13 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar13;
  plVar18 = *(long **)(*(long *)(lVar13 + 0x158) + 0x60);
  iVar3 = (**(code **)(*plVar18 + 0x88))
                    (param_1,plVar18,*(undefined8 *)(param_3 + 8),param_2[0x86],param_4,4,0);
  return iVar3 == 1;
}


