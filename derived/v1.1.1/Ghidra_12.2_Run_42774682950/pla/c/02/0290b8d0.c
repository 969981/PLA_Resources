/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290b8d0; name: FUN_0290b8d0
 */


bool FUN_0290b8d0(long *param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long *plVar19;
  char *pcVar20;
  long *plVar21;
  undefined *puVar22;
  undefined *puVar23;
  long *local_68;
  
  FUN_0290b54c();
  uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
  if ((uVar2 & 1) == 0) goto LAB_0290c010;
  nn::os::LockMutex((MutexType *)(param_1 + 0x59));
  puVar10 = PTR_DAT_04379520;
  if (param_1[0x55] == 0) {
    plVar19 = (long *)param_1[1];
    puVar3 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x68,8);
    if (puVar3 == (undefined8 *)0x0) {
      plVar19 = (long *)0x0;
      lVar17 = 0;
      lVar16 = 0;
    }
    else {
      if ((*puVar10 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar18 = PTR_DAT_04379528;
        if (iVar1 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar18,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0290c2b4;
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar19;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar3 = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if ((*puVar10 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar18 = PTR_DAT_04379528;
        if (iVar1 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar18,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar17 = DAT_043f1798;
      lVar16 = tpidr_el0;
      if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
          (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
         (lVar5 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
        *(long *)(lVar16 + 0x20) = DAT_043f1798;
        lVar5 = lVar17;
      }
      puVar3[2] = lVar5;
      puVar3[3] = 0xfffffffffffffff;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      if ((*puVar10 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar18 = PTR_DAT_04379528;
        if (iVar1 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar18,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar17 = DAT_043f1798;
      if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
          (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
         (lVar5 = *(long *)(lVar16 + 0x20), *(long *)(lVar16 + 0x20) == 0)) {
        *(long *)(lVar16 + 0x20) = DAT_043f1798;
        lVar5 = lVar17;
      }
      puVar3[7] = lVar5;
      puVar3[8] = 0xfffffffffffffff;
      lVar16 = 8;
      lVar17 = 0x68;
      puVar3[9] = 0;
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar4 = param_1[0x55];
    param_1[0x55] = (long)puVar3;
    if (lVar4 != 0) {
      FUN_0290db48(param_1 + 0x56);
    }
    param_1[0x58] = lVar16;
    param_1[0x56] = (long)plVar19;
    param_1[0x57] = lVar17;
  }
  puVar22 = PTR_DAT_04379ce0;
  puVar13 = PTR_DAT_04379cd8;
  puVar18 = PTR_DAT_04379cd0;
  pcVar20 = *(char **)(param_2 + 8);
  if (*pcVar20 == '\0') {
    plVar19 = (long *)FUN_00938550();
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar6 = *(undefined8 *)puVar13;
    *(undefined8 *)puVar22 = uVar6;
    FUN_02a47cd8(&local_68,uVar6,pcVar20);
    plVar19 = local_68;
  }
  plVar21 = (long *)param_1[0x55];
  if (plVar19 == (long *)0x0) {
    plVar14 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar14 = plVar19 + 0xb;
  }
  puVar23 = (undefined *)*plVar14;
  puVar22 = (undefined *)plVar21[1];
  if (puVar22 != (undefined *)0x0) {
    uVar2 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      puVar12 = (undefined *)((ulong)(puVar22 + -1) & (ulong)puVar23);
    }
    else {
      puVar12 = puVar23;
      if (puVar22 <= puVar23) {
        uVar11 = 0;
        if (puVar22 != (undefined *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar22;
        }
        puVar12 = puVar23 + -(uVar11 * (long)puVar22);
      }
    }
    lVar16 = *plVar21;
    plVar14 = *(long **)(lVar16 + (long)puVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if ((undefined *)plVar14[1] == puVar23) {
            puVar3 = (undefined8 *)PTR_DAT_04379c88;
            if (plVar14[2] != 0) {
              puVar3 = (undefined8 *)(plVar14[2] + 0x58);
            }
            if ((undefined *)*puVar3 == puVar23) goto LAB_0290bed4;
          }
          else if ((undefined *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined *)plVar14[1];
          if (puVar15 == puVar23) {
            puVar3 = (undefined8 *)PTR_DAT_04379c88;
            if (plVar14[2] != 0) {
              puVar3 = (undefined8 *)(plVar14[2] + 0x58);
            }
            if ((undefined *)*puVar3 == puVar23) goto LAB_0290bed4;
          }
          else {
            if (puVar22 <= puVar15) {
              uVar11 = 0;
              if (puVar22 != (undefined *)0x0) {
                uVar11 = (ulong)puVar15 / (ulong)puVar22;
              }
              puVar15 = puVar15 + -(uVar11 * (long)puVar22);
            }
            if (puVar15 != puVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
    if (uVar2 < 2) {
      puVar18 = (undefined *)((ulong)(puVar22 + -1) & (ulong)puVar23);
      plVar14 = *(long **)(lVar16 + (long)puVar18 * 8);
    }
    else {
      puVar18 = puVar23;
      if (puVar22 <= puVar23) {
        uVar11 = 0;
        if (puVar22 != (undefined *)0x0) {
          uVar11 = (ulong)puVar23 / (ulong)puVar22;
        }
        puVar18 = puVar23 + -(uVar11 * (long)puVar22);
      }
      plVar14 = *(long **)(lVar16 + (long)puVar18 * 8);
    }
    if (plVar14 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar14 = (long *)*plVar14;
          if ((plVar14 == (long *)0x0) ||
             ((undefined *)plVar14[1] != puVar23 &&
              (undefined *)((ulong)plVar14[1] & (ulong)(puVar22 + -1)) != puVar18))
          goto LAB_0290bd30;
          puVar3 = (undefined8 *)PTR_DAT_04379c88;
          if (plVar14[2] != 0) {
            puVar3 = (undefined8 *)(plVar14[2] + 0x58);
          }
        } while ((undefined *)*puVar3 != puVar23);
        goto joined_r0x0290bf24;
      }
      for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        puVar13 = (undefined *)plVar14[1];
        if (puVar13 != puVar23) {
          if (puVar22 <= puVar13) {
            uVar2 = 0;
            if (puVar22 != (undefined *)0x0) {
              uVar2 = (ulong)puVar13 / (ulong)puVar22;
            }
            puVar13 = puVar13 + -(uVar2 * (long)puVar22);
          }
          if (puVar13 != puVar18) break;
        }
        puVar3 = (undefined8 *)PTR_DAT_04379c88;
        if (plVar14[2] != 0) {
          puVar3 = (undefined8 *)(plVar14[2] + 0x58);
        }
        if ((undefined *)*puVar3 == puVar23) goto joined_r0x0290bf24;
      }
    }
  }
LAB_0290bd30:
  plVar14 = (long *)(**(code **)(*(long *)plVar21[7] + 0x10))((long *)plVar21[7],0x20,8);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*(long *)plVar21[7] + 0xb8))();
  }
  lVar16 = plVar21[7];
  if ((*puVar10 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar10 = PTR_DAT_04379528;
    if (iVar1 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar17 != 0) {
    if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_0290c2b4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar16;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  }
  plVar14[2] = (long)plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  FUN_00befc74(plVar14 + 3,param_3);
  if (lVar17 != 0) {
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  }
  *plVar14 = 0;
  plVar14[1] = (long)puVar23;
  if ((puVar22 == (undefined *)0x0) ||
     (*(float *)(plVar21 + 0xc) * (float)puVar22 < (float)(plVar21[0xb] + 1))) {
    uVar2 = (ulong)(puVar22 < (undefined *)0x3 || ((ulong)puVar22 & (ulong)(puVar22 + -1)) != 0) |
            (long)puVar22 << 1;
    uVar11 = (ulong)((float)(plVar21[0xb] + 1) / *(float *)(plVar21 + 0xc));
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (uVar11 - 1 == 0) {
      uVar11 = 2;
    }
    else if ((uVar11 & uVar11 - 1) != 0) {
      uVar11 = std::__next_prime(uVar11);
    }
    uVar2 = plVar21[1];
    if (uVar2 < uVar11) {
      uVar7 = uVar11;
LAB_0290be54:
      FUN_0290e8a8(plVar21,uVar7);
    }
    else if (uVar11 < uVar2) {
      uVar7 = (ulong)((float)(ulong)plVar21[0xb] / *(float *)(plVar21 + 0xc));
      if ((uVar2 < 3) ||
         (uVar8 = uVar2 - (uVar2 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar7 = std::__next_prime(uVar7);
      }
      else if (1 < uVar7) {
        uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
      }
      if (uVar7 <= uVar11) {
        uVar7 = uVar11;
      }
      if (uVar7 < uVar2) goto LAB_0290be54;
    }
    puVar22 = (undefined *)plVar21[1];
    if (((ulong)puVar22 & (ulong)(puVar22 + -1)) == 0) {
      puVar18 = (undefined *)((ulong)(puVar22 + -1) & (ulong)puVar23);
    }
    else if (puVar23 < puVar22) {
      puVar18 = puVar23;
    }
    else {
      uVar2 = 0;
      if (puVar22 != (undefined *)0x0) {
        uVar2 = (ulong)puVar23 / (ulong)puVar22;
      }
      puVar18 = puVar23 + -(uVar2 * (long)puVar22);
    }
  }
  plVar9 = *(long **)(*plVar21 + (long)puVar18 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = plVar21 + 6;
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
    *(long **)(*plVar21 + (long)puVar18 * 8) = plVar9;
    if (*plVar14 != 0) {
      puVar10 = *(undefined **)(*plVar14 + 8);
      if (((ulong)puVar22 & (ulong)(puVar22 + -1)) == 0) {
        puVar10 = (undefined *)((ulong)puVar10 & (ulong)(puVar22 + -1));
      }
      else if (puVar22 <= puVar10) {
        uVar2 = 0;
        if (puVar22 != (undefined *)0x0) {
          uVar2 = (ulong)puVar10 / (ulong)puVar22;
        }
        puVar10 = puVar10 + -(uVar2 * (long)puVar22);
      }
      plVar9 = (long *)(*plVar21 + (long)puVar10 * 8);
      goto LAB_0290bfe0;
    }
  }
  else {
    *plVar14 = *plVar9;
LAB_0290bfe0:
    *plVar9 = (long)plVar14;
  }
  plVar21[0xb] = plVar21[0xb] + 1;
  goto joined_r0x0290bf24;
LAB_0290bed4:
  pcVar20 = *(char **)(param_3 + 8);
  if (*pcVar20 == '\0') {
    local_68 = (long *)FUN_00938550();
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  else {
    if (((*puVar18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar6 = *(undefined8 *)puVar13;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
    FUN_02a47cd8(&local_68,uVar6,pcVar20);
  }
  plVar21 = (long *)plVar14[3];
  plVar14[3] = 0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  plVar14[3] = (long)local_68;
joined_r0x0290bf24:
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x59));
LAB_0290c010:
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar16 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar16;
  plVar19 = *(long **)(*(long *)(lVar16 + 0x158) + 0x60);
  iVar1 = (**(code **)(*plVar19 + 0x98))
                    (plVar19,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8),param_1[0x86]
                    );
  return iVar1 == 1;
}


