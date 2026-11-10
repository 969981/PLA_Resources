/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcff7c; name: FUN_02bcff7c
 */


void FUN_02bcff7c(ulong *param_1)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  ulong *puVar12;
  void *pvVar13;
  ulong uVar14;
  ulong uVar15;
  void *__src;
  ulong uVar16;
  void *pvVar17;
  void *pvVar18;
  long local_68;
  
  if (0x37 < param_1[8]) {
    param_1[8] = param_1[8] - 0x38;
    plVar7 = (long *)param_1[1] + 1;
    local_68 = *(long *)param_1[1];
    goto LAB_02bcffb8;
  }
  uVar16 = (long)(param_1[2] - param_1[1]) >> 3;
  lVar10 = param_1[3] - *param_1;
  if ((ulong)(lVar10 >> 3) <= uVar16) {
    uVar6 = lVar10 >> 2;
    puVar12 = param_1 + 4;
    if (lVar10 == 0) {
      uVar6 = 1;
    }
    pvVar13 = (void *)(**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar6 << 3,8);
    if (pvVar13 == (void *)0x0) {
      (**(code **)(*(long *)*puVar12 + 0xb8))();
    }
    pvVar11 = (void *)((long)pvVar13 + uVar6 * 8);
    local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    __src = (void *)((long)pvVar13 + uVar16 * 8);
    lVar10 = tpidr_el0;
    pvVar5 = pvVar13;
    if (uVar16 == uVar6) {
      if (__src < pvVar13 || (long)__src - (long)pvVar13 == 0) {
        lVar9 = (long)pvVar11 - (long)pvVar13;
        uVar16 = lVar9 >> 2;
        if (lVar9 == 0) {
          uVar16 = 1;
        }
        pvVar5 = (void *)(**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar16 << 3,8);
        if (pvVar5 == (void *)0x0) {
          (**(code **)(*(long *)*puVar12 + 0xb8))();
        }
        __src = (void *)((long)pvVar5 + (uVar16 >> 2) * 8);
        pvVar11 = (void *)((long)pvVar5 + uVar16 * 8);
        if (pvVar13 != (void *)0x0) {
          plVar7 = (long *)*puVar12;
          uVar16 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(plVar7,pvVar13,lVar9,8);
              goto LAB_02bd02bc;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,pvVar13,lVar9,8);
        }
      }
      else {
        lVar9 = (long)__src - (long)pvVar13 >> 3;
        uVar16 = lVar9 + 2;
        if (-1 < lVar9 + 1) {
          uVar16 = lVar9 + 1;
        }
        __src = (void *)((long)__src + (uVar16 & 0x3ffffffffffffffe) * -4);
      }
    }
LAB_02bd02bc:
    FUN_02bd0be4(puVar12,__src,&local_68);
    uVar16 = param_1[2];
    pvVar13 = (void *)((long)__src + 8);
    if (uVar16 != param_1[1]) {
      do {
        uVar16 = uVar16 - 8;
        if (__src == pvVar5) {
          if (pvVar13 < pvVar11) {
            lVar9 = (long)pvVar11 - (long)pvVar13 >> 3;
            uVar6 = lVar9 + 2;
            if (-1 < lVar9 + 1) {
              uVar6 = lVar9 + 1;
            }
            sVar3 = (long)pvVar13 - (long)__src;
            pvVar13 = (void *)((long)pvVar13 + (uVar6 & 0x3ffffffffffffffe) * 4);
            pvVar17 = pvVar13;
            if (sVar3 != 0) {
              pvVar17 = (void *)((long)pvVar13 - sVar3);
              memmove(pvVar17,__src,sVar3);
            }
            __src = pvVar17;
          }
          else {
            lVar4 = (long)pvVar11 - (long)pvVar5;
            lVar9 = lVar4 >> 2;
            if (lVar4 == 0) {
              lVar9 = 1;
            }
            pvVar17 = (void *)(**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar9 << 3,8)
            ;
            if (pvVar17 == (void *)0x0) {
              (**(code **)(*(long *)*puVar12 + 0xb8))();
            }
            pvVar1 = (void *)((long)pvVar17 + (lVar9 + 3U >> 2) * 8);
            pvVar11 = (void *)((long)pvVar17 + lVar9 * 8);
            pvVar18 = pvVar1;
            if (__src != pvVar13) {
              do {
                FUN_02bd0be4(puVar12,pvVar18,__src);
                __src = (void *)((long)__src + 8);
                pvVar18 = (void *)((long)pvVar18 + 8);
              } while (pvVar13 != __src);
            }
            pvVar13 = pvVar18;
            if (pvVar5 != (void *)0x0) {
              plVar7 = (long *)*puVar12;
              uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
              if ((uVar6 & 1) != 0) {
                if (*(char *)(lVar10 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar10 + 0x38d488) = 1;
                  *(undefined8 *)(lVar10 + 0x38d478) = 0;
                  *(undefined8 *)(lVar10 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar10 + 0x38d480)) {
                  FUN_02bcc824(plVar7,pvVar5,lVar4,8);
                  goto LAB_02bd045c;
                }
              }
              (**(code **)(*plVar7 + 0x18))(plVar7,pvVar5,lVar4,8);
            }
LAB_02bd045c:
            pvVar5 = pvVar17;
            __src = pvVar1;
          }
        }
        __src = (void *)((long)__src - 8);
        FUN_02bd0cbc(puVar12,__src,uVar16);
      } while (uVar16 != param_1[1]);
    }
    uVar6 = *param_1;
    *param_1 = (ulong)pvVar5;
    param_1[1] = (ulong)__src;
    uVar16 = param_1[3];
    param_1[2] = (ulong)pvVar13;
    param_1[3] = (ulong)pvVar11;
    if (uVar6 == 0) {
      return;
    }
    plVar7 = (long *)*puVar12;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar7,uVar6,uVar16 - uVar6,8);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x02bd0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,uVar16 - uVar6,8);
    return;
  }
  if (param_1[3] != param_1[2]) {
    local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    if (param_1[2] == param_1[3]) {
      pvVar13 = (void *)*param_1;
      pvVar11 = (void *)param_1[1];
      if (pvVar11 < pvVar13 || (long)pvVar11 - (long)pvVar13 == 0) {
        lVar10 = param_1[3] - (long)pvVar13;
        uVar16 = lVar10 >> 2;
        puVar12 = param_1 + 4;
        if (lVar10 == 0) {
          uVar16 = 1;
        }
        uVar6 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,uVar16 << 3,8);
        if (uVar6 == 0) {
          (**(code **)(*(long *)*puVar12 + 0xb8))();
        }
        uVar15 = param_1[2];
        uVar14 = uVar6 + (uVar16 >> 2) * 8;
        uVar2 = uVar14;
        for (uVar8 = param_1[1]; uVar8 != uVar15; uVar8 = uVar8 + 8) {
          FUN_02bd0be4(puVar12,uVar2,uVar8);
          uVar2 = uVar2 + 8;
        }
        uVar15 = *param_1;
        *param_1 = uVar6;
        param_1[1] = uVar14;
        uVar8 = param_1[3];
        param_1[2] = uVar2;
        param_1[3] = uVar6 + uVar16 * 8;
        if (uVar15 != 0) {
          plVar7 = (long *)*puVar12;
          uVar16 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar16 & 1) != 0) {
            lVar10 = tpidr_el0;
            if (*(char *)(lVar10 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar10 + 0x38d488) = 1;
              *(undefined8 *)(lVar10 + 0x38d478) = 0;
              *(undefined8 *)(lVar10 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar10 + 0x38d480)) {
              FUN_02bcc824(plVar7,uVar15,uVar8 - uVar15,8);
              goto LAB_02bd07c8;
            }
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,uVar15,uVar8 - uVar15,8);
        }
      }
      else {
        lVar9 = (long)pvVar11 - (long)pvVar13 >> 3;
        lVar10 = lVar9 + 2;
        if (-1 < lVar9 + 1) {
          lVar10 = lVar9 + 1;
        }
        sVar3 = param_1[2] - (long)pvVar11;
        pvVar13 = (void *)((long)pvVar11 + (lVar10 >> 1) * -8);
        if (sVar3 != 0) {
          memmove(pvVar13,pvVar11,sVar3);
          pvVar11 = (void *)param_1[1];
        }
        param_1[1] = (ulong)((long)pvVar11 + (lVar10 >> 1) * -8);
        param_1[2] = (ulong)((long)pvVar13 + ((long)sVar3 >> 3) * 8);
      }
    }
LAB_02bd07c8:
    FUN_02bd0be4(param_1 + 4,param_1[2],&local_68);
    param_1[2] = param_1[2] + 8;
    return;
  }
  local_68 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xfc0,8);
  if (local_68 == 0) {
    (**(code **)(*(long *)param_1[10] + 0xb8))();
  }
  pvVar13 = (void *)param_1[1];
  if (pvVar13 == (void *)*param_1) {
    uVar16 = param_1[2];
    uVar6 = param_1[3];
    if (uVar16 < uVar6) {
      lVar9 = (long)(uVar6 - uVar16) >> 3;
      lVar10 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar10 = lVar9 + 1;
      }
      sVar3 = uVar16 - (long)pvVar13;
      pvVar11 = (void *)(uVar16 + (lVar10 >> 1) * 8);
      if (sVar3 != 0) {
        pvVar11 = (void *)((long)pvVar11 - sVar3);
        memmove(pvVar11,pvVar13,sVar3);
        uVar16 = param_1[2];
      }
      param_1[1] = (ulong)pvVar11;
      param_1[2] = uVar16 + (lVar10 >> 1) * 8;
    }
    else {
      lVar9 = uVar6 - (long)*param_1;
      lVar10 = lVar9 >> 2;
      if (lVar9 == 0) {
        lVar10 = 1;
      }
      puVar12 = param_1 + 4;
      uVar16 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar10 << 3,8);
      if (uVar16 == 0) {
        (**(code **)(*(long *)*puVar12 + 0xb8))();
      }
      uVar14 = param_1[2];
      uVar2 = uVar16 + (lVar10 + 3U >> 2) * 8;
      uVar8 = uVar2;
      for (uVar6 = param_1[1]; uVar6 != uVar14; uVar6 = uVar6 + 8) {
        FUN_02bd0be4(puVar12,uVar8,uVar6);
        uVar8 = uVar8 + 8;
      }
      uVar14 = *param_1;
      *param_1 = uVar16;
      param_1[1] = uVar2;
      uVar6 = param_1[3];
      param_1[2] = uVar8;
      param_1[3] = uVar16 + lVar10 * 8;
      if (uVar14 != 0) {
        plVar7 = (long *)*puVar12;
        uVar16 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar16 & 1) != 0) {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(plVar7,uVar14,uVar6 - uVar14,8);
            goto LAB_02bd0694;
          }
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar14,uVar6 - uVar14,8);
      }
    }
  }
LAB_02bd0694:
  FUN_02bd0be4(param_1 + 4,param_1[1] - 8,&local_68);
  plVar7 = (long *)param_1[1];
  param_1[1] = (ulong)(plVar7 + -1);
  local_68 = plVar7[-1];
LAB_02bcffb8:
  param_1[1] = (ulong)plVar7;
  FUN_02bd09b0(param_1,&local_68);
  return;
}


