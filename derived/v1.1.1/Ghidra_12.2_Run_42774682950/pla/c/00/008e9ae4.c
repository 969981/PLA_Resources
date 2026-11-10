/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e9ae4; name: FUN_008e9ae4
 */


void FUN_008e9ae4(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *__s1;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar8 = param_1[1];
  uVar7 = param_2;
  if (uVar8 > param_2 || param_2 == uVar8) {
    if (uVar8 <= param_2) {
      return;
    }
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar8 < 3) ||
       (uVar15 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
       uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
       1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar7 = std::__next_prime(uVar7);
    }
    else if (1 < uVar7) {
      uVar7 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar7 - 1) & 0x3f);
    }
    if (uVar7 <= param_2) {
      uVar7 = param_2;
    }
    if (uVar8 <= uVar7) {
      return;
    }
  }
  plVar19 = DAT_043f1798;
  if (uVar7 == 0) {
    lVar10 = *param_1;
    *param_1 = 0;
    plVar19 = DAT_043f1798;
    if (lVar10 != 0) {
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x20);
      if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
        *(long **)(lVar5 + 0x20) = DAT_043f1798;
        plVar9 = plVar19;
      }
      uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar10,0,8);
          goto LAB_008ea0e0;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,0,8);
    }
LAB_008ea0e0:
    param_1[1] = 0;
    return;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_008dcb60();
  }
  lVar10 = tpidr_el0;
  plVar9 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar9 = plVar19;
  }
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,uVar7 << 3,8);
  lVar16 = *param_1;
  *param_1 = lVar5;
  plVar19 = DAT_043f1798;
  if (lVar16 != 0) {
    plVar9 = *(long **)(lVar10 + 0x20);
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      *(long **)(lVar10 + 0x20) = DAT_043f1798;
      plVar9 = plVar19;
    }
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar16,0,8);
        goto LAB_008e9d28;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar16,0,8);
  }
LAB_008e9d28:
  uVar15 = uVar7 - 1;
  uVar8 = uVar7 & 3;
  param_1[1] = uVar7;
  if (uVar15 < 3) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    do {
      lVar5 = lVar10 * 8;
      lVar10 = lVar10 + 4;
      *(undefined8 *)(*param_1 + lVar5) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
    } while (uVar7 - uVar8 != lVar10);
  }
  if (uVar8 != 0) {
    lVar10 = lVar10 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar10) = 0;
      uVar8 = uVar8 - 1;
      lVar10 = lVar10 + 8;
    } while (uVar8 != 0);
  }
  plVar19 = (long *)param_1[2];
  if (plVar19 != (long *)0x0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar20 = plVar19[1];
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar20 = uVar20 & uVar15;
    }
    else if (uVar7 <= uVar20) {
      uVar21 = 0;
      if (uVar7 != 0) {
        uVar21 = uVar20 / uVar7;
      }
      uVar20 = uVar20 - uVar21 * uVar7;
    }
    *(long **)(*param_1 + uVar20 * 8) = param_1 + 2;
    for (plVar9 = (long *)*plVar19; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      while( true ) {
        uVar21 = plVar9[1];
        if (uVar8 < 2) {
          uVar21 = uVar21 & uVar15;
        }
        else if (uVar7 <= uVar21) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = uVar21 / uVar7;
          }
          uVar21 = uVar21 - uVar14 * uVar7;
        }
        if (uVar21 == uVar20) break;
        if (*(long *)(*param_1 + uVar21 * 8) == 0) {
          *(long **)(*param_1 + uVar21 * 8) = plVar19;
          plVar6 = (long *)*plVar9;
          plVar19 = plVar9;
          uVar20 = uVar21;
        }
        else {
          plVar17 = (long *)*plVar9;
          plVar6 = plVar9;
          if (plVar17 != (long *)0x0) {
            bVar3 = *(byte *)(plVar9 + 2);
            __n = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              __n = plVar9[3];
            }
            if ((bVar3 & 1) == 0) {
              do {
                plVar18 = plVar17;
                bVar2 = *(byte *)(plVar18 + 2);
                sVar1 = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  sVar1 = plVar18[3];
                }
                if (__n != sVar1) {
LAB_008e9fc8:
                  break;
                }
                if (__n != 0) {
                  pcVar13 = (char *)plVar18[4];
                  if ((bVar2 & 1) == 0) {
                    pcVar13 = (char *)((long)plVar18 + 0x11);
                  }
                  pcVar12 = (char *)((long)plVar9 + 0x11);
                  uVar14 = (ulong)(bVar3 >> 1);
                  do {
                    if (*pcVar12 != *pcVar13) goto LAB_008e9fc8;
                    uVar14 = uVar14 - 1;
                    pcVar12 = pcVar12 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (uVar14 != 0);
                }
                plVar6 = plVar18;
                plVar17 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
            }
            else {
              bVar3 = *(byte *)(plVar17 + 2);
              sVar1 = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar17[3];
              }
              if (__n == 0) {
                while( true ) {
                  plVar18 = plVar17;
                  if (sVar1 != 0) break;
                  plVar17 = (long *)*plVar18;
                  plVar6 = plVar18;
                  if (plVar17 == (long *)0x0) break;
                  sVar1 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
                  if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                    sVar1 = plVar17[3];
                  }
                }
              }
              else if (__n == sVar1) {
                pvVar11 = (void *)plVar17[4];
                if ((bVar3 & 1) == 0) {
                  pvVar11 = (void *)((long)plVar17 + 0x11);
                }
                __s1 = (void *)plVar9[4];
                iVar4 = memcmp(__s1,pvVar11,__n);
                while( true ) {
                  plVar18 = plVar17;
                  if (iVar4 != 0) break;
                  plVar17 = (long *)*plVar18;
                  plVar6 = plVar18;
                  if (plVar17 == (long *)0x0) break;
                  bVar3 = *(byte *)(plVar17 + 2);
                  sVar1 = (ulong)(bVar3 >> 1);
                  if ((bVar3 & 1) != 0) {
                    sVar1 = plVar17[3];
                  }
                  if (__n != sVar1) break;
                  pvVar11 = (void *)plVar17[4];
                  if ((bVar3 & 1) == 0) {
                    pvVar11 = (void *)((long)plVar17 + 0x11);
                  }
                  iVar4 = memcmp(__s1,pvVar11,__n);
                }
              }
            }
          }
          *plVar19 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar21 * 8);
          **(undefined8 **)(*param_1 + uVar21 * 8) = plVar9;
          plVar6 = (long *)*plVar19;
        }
        plVar9 = plVar6;
        if (plVar9 == (long *)0x0) {
          return;
        }
      }
      plVar19 = plVar9;
    }
  }
  return;
}


