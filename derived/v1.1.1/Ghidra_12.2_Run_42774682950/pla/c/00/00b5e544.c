/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b5e544; name: FUN_00b5e544
 */


void FUN_00b5e544(undefined8 *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int unaff_w21;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar14 = *(ulong *)(param_2 + 0x1f8);
  if (uVar14 != 0) {
    uVar12 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar13 = *param_3;
    uVar4 = 0;
    if (uVar14 != 0) {
      uVar4 = uVar13 / uVar14;
    }
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar18 = uVar14 - 1 & uVar13;
    }
    else {
      uVar18 = uVar13;
      if (uVar14 <= uVar13) {
        uVar18 = uVar13 - uVar4 * uVar14;
      }
    }
    lVar17 = *(long *)(param_2 + 0x1f0);
    plVar15 = *(long **)(lVar17 + uVar18 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      uVar16 = uVar14 - 1;
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar13) {
            if (plVar15[2] == uVar13) goto LAB_00b5e614;
          }
          else if ((plVar15[1] & uVar16) != uVar18) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar15[1];
          if (uVar19 == uVar13) {
            if (plVar15[2] == uVar13) goto LAB_00b5e614;
          }
          else {
            if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            if (uVar19 != uVar18) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00b5e7e4;
LAB_00b5e680:
  FUN_00b68014(&local_68,plVar15 + 3);
  plVar15 = local_68;
  if (local_68 == (long *)0x0) goto LAB_00b5e7e4;
  puVar10 = (undefined8 *)(**(code **)local_68[10])(local_68 + 10);
  if (((*PTR_DAT_0437ad58 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ad58), puVar8 = PTR_DAT_0437ad50, iVar9 != 0)) {
    if (((*PTR_DAT_0437ad48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ad48), puVar7 = PTR_DAT_043795e0, iVar9 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), puVar6 = PTR_DAT_043794d8, iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar7 = puVar6;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437ad48);
    }
    *(undefined **)PTR_DAT_0437ad60 = puVar8;
    __cxa_guard_release(PTR_DAT_0437ad58);
  }
  if (puVar10 != (undefined8 *)0x0) {
LAB_00b5e6c0:
    if (puVar10 != (undefined8 *)PTR_DAT_0437ad60) goto LAB_00b5e898;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_008802f0(&local_50,plVar15 + 0xb);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00880560(&local_60,&local_50);
    puVar10 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_38 = *puVar10;
        FUN_02a44274(lVar17 + 0xd8,&local_38);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00b6819c(param_1,&local_60);
    puVar10 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_50 = (undefined8 *)*puVar10;
        FUN_02a44274(lVar17 + 0xd8,&local_50);
      }
    }
    unaff_w21 = 1;
    goto joined_r0x00b5e7c0;
  }
  unaff_w21 = 0;
joined_r0x00b5e7c0:
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) goto LAB_00b5e880;
  }
  goto joined_r0x00b5e7e0;
LAB_00b5e898:
  puVar10 = (undefined8 *)*puVar10;
  unaff_w21 = 0;
  if (puVar10 == (undefined8 *)0x0) goto joined_r0x00b5e7c0;
  goto LAB_00b5e6c0;
LAB_00b5e614:
  if (uVar12 < 2) {
    uVar18 = uVar16 & uVar13;
    plVar15 = *(long **)(lVar17 + uVar18 * 8);
  }
  else {
    uVar18 = uVar13;
    if (uVar14 <= uVar13) {
      uVar18 = uVar13 - uVar4 * uVar14;
    }
    plVar15 = *(long **)(lVar17 + uVar18 * 8);
  }
  if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
    if (uVar12 < 2) {
      do {
        if (plVar15[1] == uVar13) {
          if (plVar15[2] == uVar13) goto LAB_00b5e680;
        }
        else if ((plVar15[1] & uVar16) != uVar18) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar15[1];
        if (uVar12 == uVar13) {
          if (plVar15[2] == uVar13) goto LAB_00b5e680;
        }
        else {
          if (uVar14 <= uVar12) {
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar12 / uVar14;
            }
            uVar12 = uVar12 - uVar4 * uVar14;
          }
          if (uVar12 != uVar18) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  local_68 = (long *)FUN_00b68190();
  lVar17 = extraout_x8;
LAB_00b5e880:
  *(undefined8 *)(lVar17 + 0x18) = 0;
  (**(code **)(*local_68 + 0x20))();
joined_r0x00b5e7e0:
  if (unaff_w21 != 0) {
    return;
  }
LAB_00b5e7e4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


