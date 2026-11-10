/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b151a4; name: FUN_02b151a4
 */


/* WARNING: Removing unreachable block (ram,0x02b15608) */

void FUN_02b151a4(long param_1)

{
  SemaphoreType *pSVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  size_t __n;
  code *pcVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  void *__src;
  void *pvVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  void *pvVar20;
  long *plVar21;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  long local_f0;
  SemaphoreType *pSStack_e8;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  undefined8 *puStack_70;
  
  pSVar1 = (SemaphoreType *)(param_1 + 0x198);
  uVar6 = nn::os::TryAcquireSemaphore(pSVar1);
  if ((uVar6 & 1) == 0) goto LAB_02b15698;
  nn::os::LockMutex((MutexType *)(param_1 + 0x170));
  iVar3 = 0;
  if (*(int *)(param_1 + 0x168) + 1U < 4) {
    iVar3 = *(int *)(param_1 + 0x168) + 1;
  }
  lVar12 = *(long *)(param_1 + 400);
  *(int *)(param_1 + 0x168) = iVar3;
  uVar4 = 0;
  if (iVar3 + 1U < 4) {
    uVar4 = iVar3 + 1;
  }
  lVar16 = param_1 + (ulong)uVar4 * 0x38 + 0x50;
  nn::os::LockMutex((MutexType *)(lVar12 + 0x448));
  local_110 = &LAB_02b16170;
  local_108 = FUN_02b16410;
  local_100 = &LAB_02b16414;
  puStack_f8 = &LAB_02b16420;
  uVar6 = *(ulong *)(lVar12 + 0x418);
  puVar2 = (undefined8 *)(lVar12 + 0x428);
  local_f0 = lVar16;
  pSStack_e8 = pSVar1;
  if (uVar6 < *(ulong *)(lVar12 + 0x420)) {
    FUN_00b6d82c(puVar2,uVar6,&local_110);
    *(long *)(lVar12 + 0x418) = *(long *)(lVar12 + 0x418) + 0x80;
    pcVar5 = local_108;
  }
  else {
    uVar11 = *(ulong *)(lVar12 + 0x430);
    lVar16 = (long)(uVar6 - *(long *)(lVar12 + 0x410)) >> 7;
    uVar6 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar6) goto LAB_02b15754;
    lVar8 = *(ulong *)(lVar12 + 0x420) - *(long *)(lVar12 + 0x410);
    if ((ulong)(lVar8 >> 7) < uVar11 >> 1) {
      uVar9 = lVar8 >> 6;
      uVar11 = uVar6;
      if (uVar6 <= uVar9) {
        uVar11 = uVar9;
      }
    }
    local_78 = 0;
    puStack_70 = puVar2;
    if (uVar11 == 0) {
      local_90 = 0;
    }
    else {
      local_90 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar11 << 7,0x10);
      if (local_90 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar16 = local_90 + lVar16 * 0x80;
    local_78 = local_90 + uVar11 * 0x80;
    lStack_88 = lVar16;
    FUN_00b6d82c(puVar2,lVar16,&local_110);
    local_80 = lVar16 + 0x80;
    FUN_00b6d990(lVar12 + 0x410,&local_90);
    FUN_00b6da64(&local_90);
    pcVar5 = local_108;
  }
  local_108 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    puStack_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar5)(&local_f0);
  }
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar12 + 0x468));
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0x448));
  pvVar13 = *(void **)(param_1 + 0x130);
  pvVar15 = *(void **)(param_1 + 0x138);
  if (pvVar13 != pvVar15) {
    uVar6 = (ulong)*(uint *)(param_1 + 0x168);
    lVar16 = param_1 + uVar6 * 0x38;
    plVar17 = (long *)(lVar16 + 0x50);
    lVar12 = *plVar17;
    plVar21 = (long *)(lVar16 + 0x58);
    __src = (void *)*plVar21;
    if (0 < (long)pvVar15 - (long)pvVar13) {
      lVar16 = (long)pvVar15 - (long)pvVar13 >> 3;
      plVar18 = (long *)(param_1 + uVar6 * 0x38 + 0x60);
      if (*plVar18 - (long)__src >> 3 < lVar16) {
        lVar10 = (long)__src - lVar12 >> 3;
        lVar8 = param_1 + uVar6 * 0x38;
        uVar11 = *(ulong *)(lVar8 + 0x70);
        uVar6 = lVar10 + lVar16;
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        if (uVar11 < uVar6) {
LAB_02b15754:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = *plVar18 - lVar12;
        if ((ulong)(lVar16 >> 3) < uVar11 >> 1) {
          uVar9 = lVar16 >> 2;
          uVar11 = uVar6;
          if (uVar6 <= uVar9) {
            uVar11 = uVar9;
          }
        }
        puVar2 = (undefined8 *)(lVar8 + 0x68);
        if (uVar11 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar11 << 3,8);
          if (lVar16 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xb8))();
          }
        }
        lVar19 = lVar16 + lVar10 * 8;
        lVar8 = lVar19;
        do {
          FUN_02b15fc0(puVar2,lVar8,pvVar13);
          pvVar13 = (void *)((long)pvVar13 + 8);
          lVar8 = lVar8 + 8;
        } while (pvVar15 != pvVar13);
        pvVar13 = (void *)*plVar17;
        if (pvVar13 != __src) {
          pvVar15 = __src;
          do {
            lVar19 = lVar19 + -8;
            pvVar15 = (void *)((long)pvVar15 + -8);
            FUN_02b16098(puVar2,lVar19,pvVar15);
          } while (pvVar13 != pvVar15);
        }
        pvVar13 = (void *)*plVar21;
        if (pvVar13 != __src) {
          lVar14 = 0;
          do {
            FUN_02b16098(puVar2,lVar8 + lVar14,lVar12 + lVar10 * 8 + lVar14);
            lVar14 = lVar14 + 8;
          } while ((long)pvVar13 + (lVar10 * -8 - lVar12) != lVar14);
          lVar8 = lVar8 + lVar14;
        }
        lVar10 = *plVar17;
        *plVar17 = lVar19;
        *plVar21 = lVar8;
        lVar12 = *plVar18;
        *plVar18 = lVar16 + uVar11 * 8;
        if (lVar10 != 0) {
          plVar17 = (long *)*puVar2;
          uVar6 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar6 & 1) != 0) {
            lVar16 = tpidr_el0;
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar16 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar10,lVar12 - lVar10,8);
              goto LAB_02b15684;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar12 - lVar10,8);
        }
      }
      else if (lVar16 < 1) {
        pvVar20 = (void *)((long)__src + lVar16 * -8);
        __n = lVar16 * -8;
        if (pvVar20 < __src) {
          pvVar7 = __src;
          do {
            FUN_02b16098(param_1 + uVar6 * 0x38 + 0x68,pvVar7,pvVar20);
            pvVar20 = (void *)((long)pvVar20 + 8);
            pvVar7 = (void *)(*plVar21 + 8);
            *plVar21 = (long)pvVar7;
          } while (pvVar20 < __src);
        }
        if (__n != 0) {
          memmove((void *)((long)__src + ((long)__n >> 3) * -8),__src,__n);
        }
        if ((long)pvVar15 - (long)pvVar13 != 0) {
          memmove(__src,pvVar13,(long)pvVar15 - (long)pvVar13);
        }
      }
      else if (pvVar13 != pvVar15) {
        do {
          FUN_02b15fc0(param_1 + uVar6 * 0x38 + 0x68,__src,pvVar13);
          pvVar13 = (void *)((long)pvVar13 + 8);
          __src = (void *)(*plVar21 + 8);
          *plVar21 = (long)__src;
        } while (pvVar15 != pvVar13);
      }
    }
LAB_02b15684:
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170));
LAB_02b15698:
  DAT_043ef688 = 1 - DAT_043ef688;
  return;
}


