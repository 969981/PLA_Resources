/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099494c; name: FUN_0099494c
 */


void FUN_0099494c(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  uint extraout_var_00;
  byte local_7c [4];
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  uVar15 = *(ulong *)(param_1 + 0x70);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar19 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar16 = (ulong)param_2;
    if (uVar19 < 2) {
      uVar17 = (int)uVar15 - 1 & uVar16;
    }
    else if (uVar16 < uVar15) {
      uVar17 = uVar16;
    }
    else {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar16 / uVar15;
      }
      uVar17 = uVar16 - uVar17 * uVar15;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x68) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (*(byte *)(plVar18 + 2) == param_2) goto LAB_00994a68;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) goto LAB_00994fe8;
          plVar18 = (long *)*plVar18;
          bVar7 = false;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar18[1];
          if (uVar19 == uVar16) {
            if (*(byte *)(plVar18 + 2) == param_2) goto LAB_00994a68;
          }
          else {
            if (uVar15 <= uVar19) {
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = uVar19 / uVar15;
              }
              uVar19 = uVar19 - uVar4 * uVar15;
            }
            if (uVar19 != uVar17) goto LAB_00994fe8;
          }
          plVar18 = (long *)*plVar18;
          bVar7 = false;
        } while (plVar18 != (long *)0x0);
      }
      goto LAB_00994a74;
    }
  }
LAB_00994fe8:
  bVar7 = false;
  goto LAB_00994a74;
LAB_00994a68:
  bVar7 = (int)plVar18[4] == 0;
LAB_00994a74:
  lVar12 = param_1 + 0x68;
  local_7c[0] = param_2;
  plVar18 = (long *)FUN_00994624(lVar12,local_7c);
  puVar5 = PTR_DAT_04379520;
  lVar20 = *plVar18;
  plVar18 = *(long **)(lVar20 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar18;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar10 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x480,0x10);
    if (plVar10 == (long *)0x0) {
      (**(code **)(*plVar18 + 0xb8))(plVar18);
    }
    FUN_00acf470(plVar10,param_1);
    *plVar10 = (long)&PTR_FUN_041d29a8;
    plVar10[1] = (long)plVar18;
    plVar10[9] = (long)&PTR_LAB_041d2af0;
    plVar10[10] = (long)&PTR_LAB_041d2bd0;
    *(undefined2 *)(plVar10 + 0x8c) = 0x1f1f;
    *(undefined8 *)((long)plVar10 + 0x464) = 0x3f8000003f800000;
    *(undefined4 *)((long)plVar10 + 0x46c) = 0x3f800000;
    *(undefined1 *)(plVar10 + 0x8e) = 0;
    *(undefined8 *)((long)plVar10 + 0x474) = 0;
    *(undefined1 *)((long)plVar10 + 0x47c) = 0;
    plVar10[4] = 0x10;
    plVar10[2] = (long)plVar10;
    plVar10[3] = 0x480;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00995154;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar18 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar18 = plVar10 + 9;
    }
    (**(code **)(*plVar18 + 0xb8))(plVar18,lVar20);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_009ad580(&local_78,lVar20 + 0x318);
    (**(code **)(*plVar18 + 0xc0))(plVar18,&local_78);
    puVar13 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_68 = (long *)*puVar13;
        FUN_02a44274(lVar9 + 0xd8,&local_68);
      }
    }
    (**(code **)(*plVar18 + 200))(plVar18,*(undefined1 *)(lVar20 + 0x33b));
    (**(code **)(*plVar18 + 0x90))(plVar18);
    local_68 = plVar10;
    FUN_02a4dad4(lVar20 + 0xf0,&local_68);
    if (local_68 != (long *)0x0) {
      lVar20 = local_68[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    *(byte *)(plVar10 + 0x8c) = local_7c[0];
    plVar18 = (long *)FUN_00994624(lVar12,local_7c);
    lVar20 = *plVar18;
    plVar18 = *(long **)(lVar20 + 8);
    if (((*puVar5 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar18;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar10 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x230,0x10);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*plVar18 + 0xb8))(plVar18);
      }
      FUN_00ac679c(plVar10,bVar7);
      plVar10[1] = (long)plVar18;
      plVar10[2] = (long)plVar10;
      plVar10[3] = 0x230;
      plVar10[4] = 0x10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_00995154:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar18 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        plVar18 = plVar10 + 9;
      }
      (**(code **)(*plVar18 + 0xb8))(plVar18,lVar20);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_009ad580(&local_78,lVar20 + 0x318);
      (**(code **)(*plVar18 + 0xc0))(plVar18,&local_78);
      puVar13 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_78 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_68 = (long *)*puVar13;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      (**(code **)(*plVar18 + 200))(plVar18,*(undefined1 *)(lVar20 + 0x33b));
      (**(code **)(*plVar18 + 0x90))(plVar18);
      local_68 = plVar10;
      FUN_02a4dad4(lVar20 + 0xf0,&local_68);
      if (local_68 != (long *)0x0) {
        lVar20 = local_68[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      plVar18 = (long *)FUN_00994624(lVar12,local_7c);
      lVar20 = FUN_009b09f8(*plVar18 + 0xf0,&local_78);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x280) = 0;
        *(undefined8 *)(lVar20 + 0x284) = 0;
        *(undefined1 *)(lVar20 + 0x28c) = 0;
        *(undefined8 *)(lVar20 + 0x290) = *(undefined8 *)(lVar20 + 0x2d0);
        *(undefined8 *)(lVar20 + 0x298) = *(undefined8 *)(lVar20 + 0x2d8);
        *(undefined4 *)(lVar20 + 0x2a0) = *(undefined4 *)(lVar20 + 0x2e0);
        FUN_01c15ebc();
        *(ulong *)(lVar20 + 0x2b8) = (ulong)extraout_var_00;
        *(ulong *)(lVar20 + 0x2b0) = CONCAT44(extraout_var,extraout_s0);
        *(undefined4 *)(lVar20 + 0x2c0) = 0;
        FUN_01c15268(0x3f800000,lVar20);
      }
      plVar18 = (long *)FUN_00994624(lVar12,local_7c);
      plVar18 = (long *)FUN_009b0eac(*plVar18 + 0xf0,&local_78);
      if (plVar18 != (long *)0x0) {
        *(undefined1 *)((long)plVar18 + 0x2a9) = *(undefined1 *)(param_1 + 0x561);
        *(bool *)(plVar18 + 0x55) = bVar7;
        uVar15 = (**(code **)(*plVar18 + 0xf8))();
        if ((uVar15 & 1) == 0) {
          plVar18 = (long *)FUN_00994624(lVar12,local_7c);
          lVar12 = FUN_009b1360(*plVar18 + 0xf0,&local_78);
          lVar12 = *(long *)(lVar12 + 0x1f0);
          if (*(int *)(lVar12 + 0x88) == 0) {
            local_78 = (undefined8 *)0x1e0f2020be5b5db7;
            puVar13 = (undefined8 *)FUN_00b52d20(lVar12,&local_78);
            plVar18 = (long *)*puVar13;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
            plVar10 = *(long **)(lVar12 + 0x70);
            *(long **)(lVar12 + 0x70) = plVar18;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))();
            }
            *(undefined8 **)(lVar12 + 0x80) = local_78;
            if (*(long **)(lVar12 + 0x68) == (long *)0x0) {
              if (*(long **)(lVar12 + 0x70) == (long *)0x0) {
                uVar14 = 0;
              }
              else {
                (**(code **)(**(long **)(lVar12 + 0x70) + 0x30))();
                uVar14 = 2;
              }
            }
            else {
              (**(code **)(**(long **)(lVar12 + 0x68) + 0x40))();
              uVar14 = 1;
            }
            *(undefined4 *)(lVar12 + 0x88) = uVar14;
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


