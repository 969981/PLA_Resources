/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bba68c; name: FUN_01bba68c
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_01bba68c(long param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_88;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar19 = *(long *)(param_1 + 0x2e8);
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0xc) == 0)) {
    return 0x32;
  }
  piVar1 = (int *)(lVar19 + 0xc);
  iVar12 = *(int *)(lVar19 + 0xc);
LAB_01bba70c:
  plVar20 = *(long **)(lVar19 + 0x10);
  if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
      uVar14 = FUN_0087f8f0();
      *(undefined8 *)puVar8 = uVar14;
      __cxa_guard_release(puVar7);
    }
    *(undefined **)puVar10 = puVar8;
    __cxa_guard_release(puVar9);
  }
  while( true ) {
    if (plVar20 == (long *)0x0) {
      return 0x32;
    }
    if (plVar20 == (long *)puVar10) break;
    plVar20 = (long *)*plVar20;
  }
  iVar11 = *piVar1;
  if (iVar11 != iVar12) {
    ClearExclusiveLocal();
LAB_01bba704:
    iVar12 = iVar11;
    if (iVar11 == 0) {
      return 0x32;
    }
    goto LAB_01bba70c;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar5) {
    *piVar1 = iVar12 + 1;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_01bba704;
  lVar19 = *(long *)(lVar19 + 0x18);
  if (lVar19 == 0) {
    return 0x32;
  }
  local_80 = (undefined8 *)0x0;
  pcStack_78 = (char *)0x0;
  FUN_008802f0(&local_80,*(long *)(lVar19 + 0x58) + 0x58);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00ca524c(&local_a0,&local_80);
  puVar18 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_58 = *puVar18;
      FUN_02a44274(lVar15 + 0xd8,&local_58);
    }
  }
  if (local_a0 == (undefined8 *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_00ca554c(&local_60);
    puVar18 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_80 = (undefined8 *)*puVar18;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
  }
  if (local_60 == (long *)0x0) goto LAB_01bbaa00;
  local_80 = (undefined8 *)0xc6a9fa08d7874415;
  pcStack_78 = "landmark";
  local_70 = 8;
  local_68 = (long *)0x0;
  FUN_02a47560(&local_a0,local_60 + 0xd);
  uVar13 = FUN_00ea4c30(&local_80,&local_a0);
  puVar18 = (undefined8 *)(uVar13 & 0xffffffff);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((uVar13 & 1) != 0) {
    FUN_02a47560(&local_80,local_60 + 0xd);
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    uVar13 = *(ulong *)(lVar15 + 0x60);
    if (uVar13 == 0) {
LAB_01bba9d4:
      puVar18 = (undefined8 *)0x0;
    }
    else {
      uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar13 - 1 & 0xc6a9fa08d7874415;
      }
      else if (uVar13 < 0xc6a9fa08d7874416) {
        uVar17 = 0;
        if (uVar13 != 0) {
          uVar17 = 0xc6a9fa08d7874415 / uVar13;
        }
        uVar17 = 0xc6a9fa08d7874415 - uVar17 * uVar13;
      }
      else {
        uVar17 = 0xc6a9fa08d7874415;
      }
      plVar20 = *(long **)(*(long *)(lVar15 + 0x58) + uVar17 * 8);
      if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
      goto LAB_01bba9d4;
      if (1 < uVar16) {
        do {
          uVar16 = plVar20[1];
          if (uVar16 == 0xc6a9fa08d7874415) {
            if (plVar20[2] == -0x395605f72878bbeb) goto LAB_01bba908;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar6 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        goto LAB_01bba9d4;
      }
      do {
        if (plVar20[1] != 0xc6a9fa08d7874415) {
          if ((plVar20[1] & uVar13 - 1) == uVar17) goto LAB_01bbaba0;
          goto LAB_01bba9d4;
        }
        if (plVar20[2] == -0x395605f72878bbeb) goto LAB_01bba908;
LAB_01bbaba0:
        plVar20 = (long *)*plVar20;
        puVar18 = (undefined8 *)0x0;
      } while (plVar20 != (long *)0x0);
    }
    goto joined_r0x01bba9dc;
  }
  bVar5 = false;
joined_r0x01bbaa10:
  if (local_60 != (long *)0x0) {
    lVar15 = local_60[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (bVar5) {
    bVar5 = true;
    goto LAB_01bba98c;
  }
LAB_01bbaa00:
  bVar5 = false;
LAB_01bba98c:
  lVar15 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*(long *)(lVar19 + -0x50) + 0x20))((long *)(lVar19 + -0x50));
  }
  if (bVar5) {
    return (ulong)puVar18 & 0xffffffff;
  }
  return 0x32;
LAB_01bba908:
  plVar20 = (long *)plVar20[3];
  if (plVar20 == (long *)0x0) goto LAB_01bba9d4;
  plVar2 = plVar20 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar13 = FUN_00d78f50(plVar20,&local_80);
  puVar18 = (undefined8 *)(uVar13 & 0xffffffff);
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
joined_r0x01bba9dc:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  bVar5 = true;
  goto joined_r0x01bbaa10;
}


