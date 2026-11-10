/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b92d44; name: FUN_02b92d44
 */


void FUN_02b92d44(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  void *__src;
  void *pvVar25;
  long local_68;
  
  plVar18 = (long *)param_1[1];
  plVar10 = (long *)param_1[2];
  uVar19 = (long)plVar10 - (long)plVar18 >> 3;
  uVar21 = 0;
  if ((long)plVar10 - (long)plVar18 != 0) {
    uVar21 = uVar19 * 0x38 - 1;
  }
  uVar23 = param_1[8];
  uVar11 = param_1[9] + uVar23;
  if (uVar21 != uVar11) goto LAB_02b92dcc;
  if (uVar23 < 0x38) {
    lVar7 = (long)param_1[3] - *param_1;
    if (uVar19 < (ulong)(lVar7 >> 3)) {
      if ((long *)param_1[3] == plVar10) {
        local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
        if (local_68 == 0) {
          (**(code **)(*(long *)param_1[10] + 0xb8))();
        }
        pvVar16 = (void *)param_1[1];
        if (pvVar16 == (void *)*param_1) {
          uVar21 = param_1[2];
          uVar19 = param_1[3];
          if (uVar21 < uVar19) {
            lVar13 = (long)(uVar19 - uVar21) >> 3;
            lVar7 = lVar13 + 2;
            if (-1 < lVar13 + 1) {
              lVar7 = lVar13 + 1;
            }
            sVar3 = uVar21 - (long)pvVar16;
            pvVar15 = (void *)(uVar21 + (lVar7 >> 1) * 8);
            if (sVar3 != 0) {
              pvVar15 = (void *)((long)pvVar15 - sVar3);
              memmove(pvVar15,pvVar16,sVar3);
              uVar21 = param_1[2];
            }
            param_1[1] = (ulong)pvVar15;
            param_1[2] = uVar21 + (lVar7 >> 1) * 8;
          }
          else {
            lVar13 = uVar19 - (long)*param_1;
            lVar7 = lVar13 >> 2;
            if (lVar13 == 0) {
              lVar7 = 1;
            }
            puVar22 = param_1 + 4;
            uVar21 = (**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,lVar7 << 3,8);
            if (uVar21 == 0) {
              (**(code **)(*(long *)*puVar22 + 0xb8))();
            }
            uVar11 = uVar21 + (lVar7 + 3U >> 2) * 8;
            uVar23 = param_1[2];
            uVar2 = uVar11;
            for (uVar19 = param_1[1]; uVar23 != uVar19; uVar19 = uVar19 + 8) {
              FUN_02b93ae8(puVar22,uVar2,uVar19);
              uVar2 = uVar2 + 8;
            }
            uVar23 = *param_1;
            uVar19 = param_1[3];
            param_1[2] = uVar2;
            param_1[3] = uVar21 + lVar7 * 8;
            *param_1 = uVar21;
            param_1[1] = uVar11;
            if (uVar23 != 0) {
              plVar18 = (long *)*puVar22;
              uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
              if ((uVar21 & 1) != 0) {
                lVar7 = tpidr_el0;
                if (*(char *)(lVar7 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar7 + 0x38d488) = 1;
                  *(undefined8 *)(lVar7 + 0x38d478) = 0;
                  *(undefined8 *)(lVar7 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar7 + 0x38d480)) {
                  FUN_02bcc824(plVar18,uVar23,uVar19 - uVar23,8);
                  goto LAB_02b9354c;
                }
              }
              (**(code **)(*plVar18 + 0x18))(plVar18,uVar23,uVar19 - uVar23,8);
            }
          }
        }
LAB_02b9354c:
        FUN_02b93ae8(param_1 + 4,param_1[1] - 8,&local_68);
        plVar10 = (long *)param_1[1];
        param_1[1] = (ulong)(plVar10 + -1);
        local_68 = plVar10[-1];
        goto LAB_02b92dac;
      }
      local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      if (param_1[2] == param_1[3]) {
        pvVar16 = (void *)*param_1;
        pvVar15 = (void *)param_1[1];
        if (pvVar15 < pvVar16 || (long)pvVar15 - (long)pvVar16 == 0) {
          lVar7 = param_1[3] - (long)pvVar16;
          uVar21 = lVar7 >> 2;
          puVar22 = param_1 + 4;
          if (lVar7 == 0) {
            uVar21 = 1;
          }
          uVar19 = (**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,uVar21 << 3,8);
          if (uVar19 == 0) {
            (**(code **)(*(long *)*puVar22 + 0xb8))();
          }
          uVar2 = uVar19 + (uVar21 >> 2) * 8;
          uVar24 = param_1[2];
          uVar23 = uVar2;
          for (uVar11 = param_1[1]; uVar11 != uVar24; uVar11 = uVar11 + 8) {
            FUN_02b93ae8(puVar22,uVar23,uVar11);
            uVar23 = uVar23 + 8;
          }
          uVar24 = *param_1;
          uVar11 = param_1[3];
          param_1[2] = uVar23;
          param_1[3] = uVar19 + uVar21 * 8;
          *param_1 = uVar19;
          param_1[1] = uVar2;
          if (uVar24 != 0) {
            plVar18 = (long *)*puVar22;
            uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
            if ((uVar21 & 1) != 0) {
              lVar7 = tpidr_el0;
              if (*(char *)(lVar7 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar7 + 0x38d488) = 1;
                *(undefined8 *)(lVar7 + 0x38d478) = 0;
                *(undefined8 *)(lVar7 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar7 + 0x38d480)) {
                FUN_02bcc824(plVar18,uVar24,uVar11 - uVar24,8);
                goto LAB_02b93690;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,uVar24,uVar11 - uVar24,8);
          }
        }
        else {
          lVar13 = (long)pvVar15 - (long)pvVar16 >> 3;
          lVar7 = lVar13 + 2;
          if (-1 < lVar13 + 1) {
            lVar7 = lVar13 + 1;
          }
          sVar3 = param_1[2] - (long)pvVar15;
          pvVar16 = (void *)((long)pvVar15 + (lVar7 >> 1) * -8);
          if (sVar3 != 0) {
            memmove(pvVar16,pvVar15,sVar3);
            pvVar15 = (void *)param_1[1];
          }
          param_1[1] = (ulong)((long)pvVar15 + (lVar7 >> 1) * -8);
          param_1[2] = (ulong)((long)pvVar16 + ((long)sVar3 >> 3) * 8);
        }
      }
LAB_02b93690:
      FUN_02b93ae8(param_1 + 4,param_1[2],&local_68);
      param_1[2] = param_1[2] + 8;
    }
    else {
      uVar21 = lVar7 >> 2;
      puVar22 = param_1 + 4;
      if (lVar7 == 0) {
        uVar21 = 1;
      }
      pvVar16 = (void *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,uVar21 << 3,8);
      if (pvVar16 == (void *)0x0) {
        (**(code **)(*(long *)*puVar22 + 0xb8))();
      }
      pvVar15 = (void *)((long)pvVar16 + uVar21 * 8);
      local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      __src = (void *)((long)pvVar16 + uVar19 * 8);
      lVar7 = tpidr_el0;
      pvVar8 = pvVar16;
      if (uVar19 == uVar21) {
        if (__src < pvVar16 || (long)__src - (long)pvVar16 == 0) {
          lVar13 = (long)pvVar15 - (long)pvVar16;
          uVar21 = lVar13 >> 2;
          if (lVar13 == 0) {
            uVar21 = 1;
          }
          pvVar8 = (void *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,uVar21 << 3,8);
          if (pvVar8 == (void *)0x0) {
            (**(code **)(*(long *)*puVar22 + 0xb8))();
          }
          __src = (void *)((long)pvVar8 + (uVar21 >> 2) * 8);
          pvVar15 = (void *)((long)pvVar8 + uVar21 * 8);
          if (pvVar16 != (void *)0x0) {
            plVar18 = (long *)*puVar22;
            uVar21 = (**(code **)(*plVar18 + 0xc0))(plVar18);
            if ((uVar21 & 1) != 0) {
              if (*(char *)(lVar7 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar7 + 0x38d488) = 1;
                *(undefined8 *)(lVar7 + 0x38d478) = 0;
                *(undefined8 *)(lVar7 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar7 + 0x38d480)) {
                FUN_02bcc824(plVar18,pvVar16,lVar13,8);
                goto LAB_02b93178;
              }
            }
            (**(code **)(*plVar18 + 0x18))(plVar18,pvVar16,lVar13,8);
          }
        }
        else {
          lVar13 = (long)__src - (long)pvVar16 >> 3;
          uVar21 = lVar13 + 2;
          if (-1 < lVar13 + 1) {
            uVar21 = lVar13 + 1;
          }
          __src = (void *)((long)__src + (uVar21 & 0x3ffffffffffffffe) * -4);
        }
      }
LAB_02b93178:
      FUN_02b93ae8(puVar22,__src,&local_68);
      uVar21 = param_1[2];
      pvVar16 = (void *)((long)__src + 8);
      if (uVar21 != param_1[1]) {
        do {
          uVar21 = uVar21 - 8;
          if (__src == pvVar8) {
            if (pvVar16 < pvVar15) {
              lVar13 = (long)pvVar15 - (long)pvVar16 >> 3;
              uVar19 = lVar13 + 2;
              if (-1 < lVar13 + 1) {
                uVar19 = lVar13 + 1;
              }
              sVar3 = (long)pvVar16 - (long)__src;
              pvVar16 = (void *)((long)pvVar16 + (uVar19 & 0x3ffffffffffffffe) * 4);
              pvVar17 = pvVar16;
              if (sVar3 != 0) {
                pvVar17 = (void *)((long)pvVar16 - sVar3);
                memmove(pvVar17,__src,sVar3);
              }
              __src = pvVar17;
            }
            else {
              lVar4 = (long)pvVar15 - (long)pvVar8;
              lVar13 = lVar4 >> 2;
              if (lVar4 == 0) {
                lVar13 = 1;
              }
              pvVar17 = (void *)(**(code **)(*(long *)*puVar22 + 0x10))
                                          ((long *)*puVar22,lVar13 << 3,8);
              if (pvVar17 == (void *)0x0) {
                (**(code **)(*(long *)*puVar22 + 0xb8))();
              }
              pvVar1 = (void *)((long)pvVar17 + (lVar13 + 3U >> 2) * 8);
              pvVar15 = (void *)((long)pvVar17 + lVar13 * 8);
              pvVar25 = pvVar1;
              if (__src != pvVar16) {
                do {
                  FUN_02b93ae8(puVar22,pvVar25,__src);
                  __src = (void *)((long)__src + 8);
                  pvVar25 = (void *)((long)pvVar25 + 8);
                } while (pvVar16 != __src);
              }
              pvVar16 = pvVar25;
              if (pvVar8 != (void *)0x0) {
                plVar18 = (long *)*puVar22;
                uVar19 = (**(code **)(*plVar18 + 0xc0))(plVar18);
                if ((uVar19 & 1) != 0) {
                  if (*(char *)(lVar7 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar7 + 0x38d488) = 1;
                    *(undefined8 *)(lVar7 + 0x38d478) = 0;
                    *(undefined8 *)(lVar7 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar7 + 0x38d480)) {
                    FUN_02bcc824(plVar18,pvVar8,lVar4,8);
                    goto LAB_02b93318;
                  }
                }
                (**(code **)(*plVar18 + 0x18))(plVar18,pvVar8,lVar4,8);
              }
LAB_02b93318:
              __src = pvVar1;
              pvVar8 = pvVar17;
            }
          }
          __src = (void *)((long)__src - 8);
          FUN_02b93bc0(puVar22,__src,uVar21);
        } while (uVar21 != param_1[1]);
      }
      uVar19 = *param_1;
      *param_1 = (ulong)pvVar8;
      param_1[1] = (ulong)__src;
      uVar21 = param_1[3];
      param_1[2] = (ulong)pvVar16;
      param_1[3] = (ulong)pvVar15;
      if (uVar19 != 0) {
        plVar18 = (long *)*puVar22;
        uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar18,uVar19,uVar21 - uVar19,8);
            goto LAB_02b92dc0;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,uVar19,uVar21 - uVar19,8);
      }
    }
  }
  else {
    param_1[8] = uVar23 - 0x38;
    plVar10 = plVar18 + 1;
    local_68 = *plVar18;
LAB_02b92dac:
    param_1[1] = (ulong)plVar10;
    FUN_02b938b4(param_1,&local_68);
  }
LAB_02b92dc0:
  uVar11 = param_1[8] + param_1[9];
  plVar18 = (long *)param_1[1];
  plVar10 = (long *)param_1[2];
LAB_02b92dcc:
  if (plVar10 == plVar18) {
    puVar20 = (undefined8 *)0x0;
  }
  else {
    puVar20 = (undefined8 *)(plVar18[uVar11 / 0x38] + (uVar11 % 0x38) * 0x48);
  }
  uVar21 = param_1[10];
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
    bVar9 = true;
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar21;
    bVar9 = false;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  uVar12 = *param_2;
  uVar14 = *param_3;
  *puVar20 = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[1] = 0;
  puVar20[2] = 0;
  puVar20[6] = uVar12;
  puVar20[7] = uVar14;
  *(undefined4 *)(puVar20 + 8) = 0xffffffff;
  if (!bVar9) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  param_1[9] = param_1[9] + 1;
  return;
}


