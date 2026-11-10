/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291677c; name: FUN_0291677c
 */


/* WARNING: Removing unreachable block (ram,0x02916d34) */

void FUN_0291677c(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  code *local_f0;
  code *local_e8;
  undefined1 auStack_d0 [96];
  long local_70;
  undefined4 local_64;
  long local_58;
  
  uVar14 = (ulong)param_3;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar4 != 0))
  {
    local_58 = FUN_00938550();
    puVar3 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_58);
    FUN_00100250(PTR_LAB_0437a8d8,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar11 = *(long **)PTR_DAT_0437a7d0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = (ulong)((int)uVar6 - 1U & param_3);
    }
    else {
      uVar8 = uVar14;
      if (uVar6 <= uVar14) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar14 / uVar6;
        }
        uVar8 = uVar14 - uVar8 * uVar6;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + uVar8 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar9, plVar13 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar13[1] == uVar14) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_029169d0;
          }
          else if ((plVar13[1] & uVar6 - 1) != uVar8) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar13[1];
          if (uVar7 == uVar14) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_029169d0;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  bVar2 = false;
  lVar16 = 0;
LAB_029168d4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  if (local_f0 != (code *)0x0) {
    local_64 = 1;
    local_70 = lVar16;
    local_58 = param_2;
    (*local_f0)(auStack_d0,&local_64,&local_58,&local_70);
  }
  if (bVar2) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar16 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar16;
    if (plVar11 == (long *)0x0) {
      lVar12 = *(long *)PTR_PTR_04379d00;
    }
    else {
      lVar12 = plVar11[0xc];
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    plVar13 = *(long **)(*(long *)(lVar16 + 0x158) + 0x60);
    local_58 = lVar12;
    (**(code **)(*plVar13 + 0xf0))(plVar13,1,&local_58,1);
    if (plVar11 == (long *)0x0) goto LAB_029169a8;
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  else if (plVar11 == (long *)0x0) goto LAB_029169a8;
  (**(code **)(*plVar11 + 0x20))(plVar11);
LAB_029169a8:
  if (local_e8 != (code *)0x0) {
    (*local_e8)(auStack_d0);
  }
  return;
LAB_029169d0:
  local_e8 = (code *)0x0;
  local_f0 = (code *)0x0;
  if ((code *)plVar13[10] != (code *)0x0) {
    (*(code *)plVar13[10])(plVar13 + 0xc,auStack_d0);
    local_f0 = (code *)plVar13[8];
    local_e8 = (code *)plVar13[9];
  }
  lVar16 = plVar13[0x18];
  if ((char)plVar13[0x19] == '\0') {
    bVar2 = false;
  }
  else {
    plVar15 = (long *)plVar13[4];
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    bVar2 = true;
    plVar11 = plVar15;
  }
  uVar7 = param_1[1];
  uVar14 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar6 = plVar13[1];
  uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar14 < 2) {
    uVar6 = uVar7 - 1 & uVar6;
  }
  else if (uVar7 <= uVar6) {
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar6 / uVar7;
    }
    uVar6 = uVar6 - uVar8 * uVar7;
  }
  plVar15 = *(long **)(*param_1 + uVar6 * 8);
  do {
    plVar10 = plVar15;
    plVar15 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar13);
  if (plVar10 == param_1 + 6) {
LAB_02916b08:
    if (*plVar13 != 0) {
      uVar8 = *(ulong *)(*plVar13 + 8);
      if (uVar14 < 2) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar1 * uVar7;
      }
      if (uVar8 == uVar6) goto LAB_02916b4c;
    }
    *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
  }
  else {
    uVar8 = plVar10[1];
    if (uVar14 < 2) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar1 * uVar7;
    }
    if (uVar8 != uVar6) goto LAB_02916b08;
  }
LAB_02916b4c:
  lVar12 = *plVar13;
  if (lVar12 != 0) {
    uVar8 = *(ulong *)(lVar12 + 8);
    if (uVar14 < 2) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar14 = 0;
      if (uVar7 != 0) {
        uVar14 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar14 * uVar7;
    }
    if (uVar8 != uVar6) {
      *(long **)(*param_1 + uVar8 * 8) = plVar10;
      lVar12 = *plVar13;
    }
  }
  *plVar10 = lVar12;
  *plVar13 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  pcVar5 = (code *)plVar13[9];
  if (pcVar5 == (code *)0x0) {
    plVar15 = (long *)plVar13[4];
  }
  else {
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[8] = 0;
    plVar13[9] = 0;
    (*pcVar5)(plVar13 + 0xc);
    plVar15 = (long *)plVar13[4];
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  plVar15 = (long *)param_1[7];
  uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar14 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar15,plVar13,0xd0,0x10);
      goto LAB_029168d4;
    }
  }
  (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,0xd0,0x10);
  goto LAB_029168d4;
}


