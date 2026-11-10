/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a44274; name: FUN_02a44274
 */


void FUN_02a44274(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  long *plVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  void *__src;
  void *pvVar23;
  long local_68;
  
  if (*param_2 < *param_1) {
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  puVar1 = param_1 + 0x36;
  do {
    if (*(long *)puVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x33));
        while (*(long *)puVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *(undefined8 *)puVar1 = uVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a44314;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *(undefined8 *)puVar1 = uVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a44314:
  if ((1L << ((ulong)(*param_2 - *param_1) & 0x3f) &
      *(ulong *)(*(long *)(param_1 + 0x22) + ((ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8))) == 0
     ) goto LAB_02a44ab4;
  plVar19 = *(long **)(param_1 + 6);
  plVar13 = *(long **)(param_1 + 8);
  lVar10 = (long)plVar13 - (long)plVar19;
  uVar15 = 0;
  if (lVar10 != 0) {
    uVar15 = lVar10 * 0x80 - 1;
  }
  uVar4 = *(ulong *)(param_1 + 0x14);
  uVar11 = *(long *)(param_1 + 0x16) + uVar4;
  puVar1 = param_1 + 0x18;
  if (uVar15 == uVar11) {
    if (uVar4 < 0x400) {
      uVar15 = lVar10 >> 3;
      lVar10 = (long)*(long **)(param_1 + 10) - *(long *)(param_1 + 4);
      if (uVar15 < (ulong)(lVar10 >> 3)) {
        if (*(long **)(param_1 + 10) == plVar13) {
          local_68 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x1000,4);
          if (local_68 == 0) {
            (**(code **)(**(long **)puVar1 + 0xb8))();
          }
          pvVar17 = *(void **)(param_1 + 6);
          if (pvVar17 == *(void **)(param_1 + 4)) {
            uVar15 = *(ulong *)(param_1 + 8);
            uVar11 = *(ulong *)(param_1 + 10);
            if (uVar15 < uVar11) {
              lVar14 = (long)(uVar11 - uVar15) >> 3;
              lVar10 = lVar14 + 2;
              if (-1 < lVar14 + 1) {
                lVar10 = lVar14 + 1;
              }
              sVar7 = uVar15 - (long)pvVar17;
              pvVar16 = (void *)(uVar15 + (lVar10 >> 1) * 8);
              if (sVar7 != 0) {
                pvVar16 = (void *)((long)pvVar16 - sVar7);
                memmove(pvVar16,pvVar17,sVar7);
                uVar15 = *(ulong *)(param_1 + 8);
              }
              *(void **)(param_1 + 6) = pvVar16;
              *(ulong *)(param_1 + 8) = uVar15 + (lVar10 >> 1) * 8;
            }
            else {
              lVar14 = uVar11 - (long)*(void **)(param_1 + 4);
              lVar10 = lVar14 >> 2;
              puVar20 = param_1 + 0xc;
              if (lVar14 == 0) {
                lVar10 = 1;
              }
              lVar14 = (**(code **)(**(long **)puVar20 + 0x10))(*(long **)puVar20,lVar10 << 3,4);
              if (lVar14 == 0) {
                (**(code **)(**(long **)puVar20 + 0xb8))();
              }
              lVar21 = lVar14 + (lVar10 + 3U >> 2) * 8;
              lVar22 = *(long *)(param_1 + 8);
              lVar2 = lVar21;
              for (lVar12 = *(long *)(param_1 + 6); lVar12 != lVar22; lVar12 = lVar12 + 8) {
                FUN_02a47290(puVar20,lVar2,lVar12);
                lVar2 = lVar2 + 8;
              }
              lVar22 = *(long *)(param_1 + 4);
              *(long *)(param_1 + 4) = lVar14;
              *(long *)(param_1 + 6) = lVar21;
              lVar12 = *(long *)(param_1 + 10);
              *(long *)(param_1 + 8) = lVar2;
              *(long *)(param_1 + 10) = lVar14 + lVar10 * 8;
              if (lVar22 != 0) {
                plVar19 = *(long **)puVar20;
                uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
                if ((uVar15 & 1) != 0) {
                  lVar10 = tpidr_el0;
                  if (*(char *)(lVar10 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar10 + 0x38d488) = 1;
                    *(undefined8 *)(lVar10 + 0x38d478) = 0;
                    *(undefined8 *)(lVar10 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar10 + 0x38d480)) {
                    FUN_02bcc824(plVar19,lVar22,lVar12 - lVar22,4);
                    goto LAB_02a449fc;
                  }
                }
                (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,lVar12 - lVar22,4);
              }
            }
          }
LAB_02a449fc:
          FUN_02a47290(param_1 + 0xc,*(long *)(param_1 + 6) + -8,&local_68);
          plVar13 = *(long **)(param_1 + 6);
          *(long **)(param_1 + 6) = plVar13 + -1;
          local_68 = plVar13[-1];
          goto LAB_02a44a20;
        }
        local_68 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x1000,4);
        if (local_68 == 0) {
          (**(code **)(**(long **)puVar1 + 0xb8))();
        }
        if (*(long *)(param_1 + 8) == *(long *)(param_1 + 10)) {
          pvVar17 = *(void **)(param_1 + 4);
          pvVar16 = *(void **)(param_1 + 6);
          if (pvVar16 < pvVar17 || (long)pvVar16 - (long)pvVar17 == 0) {
            lVar10 = *(long *)(param_1 + 10) - (long)pvVar17;
            uVar15 = lVar10 >> 2;
            puVar20 = param_1 + 0xc;
            if (lVar10 == 0) {
              uVar15 = 1;
            }
            lVar10 = (**(code **)(**(long **)puVar20 + 0x10))(*(long **)puVar20,uVar15 << 3,4);
            if (lVar10 == 0) {
              (**(code **)(**(long **)puVar20 + 0xb8))();
            }
            lVar2 = lVar10 + (uVar15 >> 2) * 8;
            lVar21 = *(long *)(param_1 + 8);
            lVar12 = lVar2;
            for (lVar14 = *(long *)(param_1 + 6); lVar14 != lVar21; lVar14 = lVar14 + 8) {
              FUN_02a47290(puVar20,lVar12,lVar14);
              lVar12 = lVar12 + 8;
            }
            lVar21 = *(long *)(param_1 + 4);
            lVar14 = *(long *)(param_1 + 10);
            *(long *)(param_1 + 8) = lVar12;
            *(ulong *)(param_1 + 10) = lVar10 + uVar15 * 8;
            *(long *)(param_1 + 4) = lVar10;
            *(long *)(param_1 + 6) = lVar2;
            if (lVar21 != 0) {
              plVar19 = *(long **)puVar20;
              uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
              if ((uVar15 & 1) != 0) {
                lVar10 = tpidr_el0;
                if (*(char *)(lVar10 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar10 + 0x38d488) = 1;
                  *(undefined8 *)(lVar10 + 0x38d478) = 0;
                  *(undefined8 *)(lVar10 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar10 + 0x38d480)) {
                  FUN_02bcc824(plVar19,lVar21,lVar14 - lVar21,4);
                  goto LAB_02a44bfc;
                }
              }
              (**(code **)(*plVar19 + 0x18))(plVar19,lVar21,lVar14 - lVar21,4);
            }
          }
          else {
            lVar14 = (long)pvVar16 - (long)pvVar17 >> 3;
            lVar10 = lVar14 + 2;
            if (-1 < lVar14 + 1) {
              lVar10 = lVar14 + 1;
            }
            sVar7 = *(long *)(param_1 + 8) - (long)pvVar16;
            pvVar17 = (void *)((long)pvVar16 + (lVar10 >> 1) * -8);
            if (sVar7 != 0) {
              memmove(pvVar17,pvVar16,sVar7);
              pvVar16 = *(void **)(param_1 + 6);
            }
            *(void **)(param_1 + 6) = (void *)((long)pvVar16 + (lVar10 >> 1) * -8);
            *(void **)(param_1 + 8) = (void *)((long)pvVar17 + ((long)sVar7 >> 3) * 8);
          }
        }
LAB_02a44bfc:
        FUN_02a47290(param_1 + 0xc,*(undefined8 *)(param_1 + 8),&local_68);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      }
      else {
        uVar11 = lVar10 >> 2;
        puVar20 = param_1 + 0xc;
        if (lVar10 == 0) {
          uVar11 = 1;
        }
        pvVar17 = (void *)(**(code **)(**(long **)puVar20 + 0x10))(*(long **)puVar20,uVar11 << 3,4);
        if (pvVar17 == (void *)0x0) {
          (**(code **)(**(long **)puVar20 + 0xb8))();
        }
        pvVar16 = (void *)((long)pvVar17 + uVar11 * 8);
        local_68 = (**(code **)(**(long **)puVar1 + 0x10))(*(long **)puVar1,0x1000,4);
        if (local_68 == 0) {
          (**(code **)(**(long **)puVar1 + 0xb8))();
        }
        __src = (void *)((long)pvVar17 + uVar15 * 8);
        lVar10 = tpidr_el0;
        pvVar9 = pvVar17;
        if (uVar15 == uVar11) {
          if (__src < pvVar17 || (long)__src - (long)pvVar17 == 0) {
            lVar14 = (long)pvVar16 - (long)pvVar17;
            uVar15 = lVar14 >> 2;
            if (lVar14 == 0) {
              uVar15 = 1;
            }
            pvVar9 = (void *)(**(code **)(**(long **)puVar20 + 0x10))
                                       (*(long **)puVar20,uVar15 << 3,4);
            if (pvVar9 == (void *)0x0) {
              (**(code **)(**(long **)puVar20 + 0xb8))();
            }
            __src = (void *)((long)pvVar9 + (uVar15 >> 2) * 8);
            pvVar16 = (void *)((long)pvVar9 + uVar15 * 8);
            if (pvVar17 != (void *)0x0) {
              plVar19 = *(long **)puVar20;
              uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
              if ((uVar15 & 1) != 0) {
                if (*(char *)(lVar10 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar10 + 0x38d488) = 1;
                  *(undefined8 *)(lVar10 + 0x38d478) = 0;
                  *(undefined8 *)(lVar10 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar10 + 0x38d480)) {
                  FUN_02bcc824(plVar19,pvVar17,lVar14,4);
                  goto LAB_02a44624;
                }
              }
              (**(code **)(*plVar19 + 0x18))(plVar19,pvVar17,lVar14,4);
            }
          }
          else {
            lVar14 = (long)__src - (long)pvVar17 >> 3;
            uVar15 = lVar14 + 2;
            if (-1 < lVar14 + 1) {
              uVar15 = lVar14 + 1;
            }
            __src = (void *)((long)__src + (uVar15 & 0x3ffffffffffffffe) * -4);
          }
        }
LAB_02a44624:
        FUN_02a47290(puVar20,__src,&local_68);
        lVar14 = *(long *)(param_1 + 8);
        pvVar17 = (void *)((long)__src + 8);
        if (lVar14 != *(long *)(param_1 + 6)) {
          do {
            lVar14 = lVar14 + -8;
            if (__src == pvVar9) {
              if (pvVar17 < pvVar16) {
                lVar12 = (long)pvVar16 - (long)pvVar17 >> 3;
                uVar15 = lVar12 + 2;
                if (-1 < lVar12 + 1) {
                  uVar15 = lVar12 + 1;
                }
                sVar7 = (long)pvVar17 - (long)__src;
                pvVar17 = (void *)((long)pvVar17 + (uVar15 & 0x3ffffffffffffffe) * 4);
                pvVar18 = pvVar17;
                if (sVar7 != 0) {
                  pvVar18 = (void *)((long)pvVar17 - sVar7);
                  memmove(pvVar18,__src,sVar7);
                }
                __src = pvVar18;
              }
              else {
                lVar2 = (long)pvVar16 - (long)pvVar9;
                lVar12 = lVar2 >> 2;
                if (lVar2 == 0) {
                  lVar12 = 1;
                }
                pvVar18 = (void *)(**(code **)(**(long **)puVar20 + 0x10))
                                            (*(long **)puVar20,lVar12 << 3,4);
                if (pvVar18 == (void *)0x0) {
                  (**(code **)(**(long **)puVar20 + 0xb8))();
                }
                pvVar3 = (void *)((long)pvVar18 + (lVar12 + 3U >> 2) * 8);
                pvVar16 = (void *)((long)pvVar18 + lVar12 * 8);
                pvVar23 = pvVar3;
                if (__src != pvVar17) {
                  do {
                    FUN_02a47290(puVar20,pvVar23,__src);
                    __src = (void *)((long)__src + 8);
                    pvVar23 = (void *)((long)pvVar23 + 8);
                  } while (pvVar17 != __src);
                }
                pvVar17 = pvVar23;
                if (pvVar9 != (void *)0x0) {
                  plVar19 = *(long **)puVar20;
                  uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
                  if ((uVar15 & 1) != 0) {
                    if (*(char *)(lVar10 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar10 + 0x38d488) = 1;
                      *(undefined8 *)(lVar10 + 0x38d478) = 0;
                      *(undefined8 *)(lVar10 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar10 + 0x38d480)) {
                      FUN_02bcc824(plVar19,pvVar9,lVar2,4);
                      goto LAB_02a447c4;
                    }
                  }
                  (**(code **)(*plVar19 + 0x18))(plVar19,pvVar9,lVar2,4);
                }
LAB_02a447c4:
                __src = pvVar3;
                pvVar9 = pvVar18;
              }
            }
            __src = (void *)((long)__src - 8);
            FUN_02a47368(puVar20,__src,lVar14);
          } while (lVar14 != *(long *)(param_1 + 6));
        }
        lVar12 = *(long *)(param_1 + 4);
        *(void **)(param_1 + 4) = pvVar9;
        *(void **)(param_1 + 6) = __src;
        lVar14 = *(long *)(param_1 + 10);
        *(void **)(param_1 + 8) = pvVar17;
        *(void **)(param_1 + 10) = pvVar16;
        if (lVar12 != 0) {
          plVar19 = *(long **)puVar20;
          uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar12,lVar14 - lVar12,4);
              goto LAB_02a44a34;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar12,lVar14 - lVar12,4);
        }
      }
    }
    else {
      *(ulong *)(param_1 + 0x14) = uVar4 - 0x400;
      plVar13 = plVar19 + 1;
      local_68 = *plVar19;
LAB_02a44a20:
      *(long **)(param_1 + 6) = plVar13;
      FUN_02a4705c(param_1 + 4,&local_68);
    }
LAB_02a44a34:
    uVar11 = *(long *)(param_1 + 0x14) + *(long *)(param_1 + 0x16);
    plVar19 = *(long **)(param_1 + 6);
    plVar13 = *(long **)(param_1 + 8);
  }
  if (plVar13 == plVar19) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)((long)plVar19 + (uVar11 >> 7 & 0x1fffffffffffff8)) + (uVar11 & 0x3ff) * 4;
  }
  FUN_01665ff4(puVar1,lVar10,param_2);
  *(long *)(param_1 + 0x16) = *(long *)(param_1 + 0x16) + 1;
  uVar15 = (ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8;
  *(ulong *)(*(long *)(param_1 + 0x22) + uVar15) =
       *(ulong *)(*(long *)(param_1 + 0x22) + uVar15) &
       (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
  param_1[2] = param_1[2] - 1;
LAB_02a44ab4:
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x33));
  return;
}


