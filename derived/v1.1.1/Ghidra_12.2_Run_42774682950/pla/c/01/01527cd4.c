/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01527cd4; name: FUN_01527cd4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01527cd4(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong extraout_x8;
  long lVar16;
  ulong uVar17;
  ulong extraout_x9;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *extraout_x11;
  ulong extraout_x12;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined1 *local_3a0;
  code *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  long alStack_380 [12];
  long *local_320;
  long *local_318;
  long *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  long *plStack_2f8;
  long *local_2f0;
  undefined4 local_2e8;
  long *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  long *local_2c8;
  long *local_2c0;
  ulong local_2b8;
  undefined1 *local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  long *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 local_280;
  long *local_278;
  undefined8 *local_270 [7];
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [56];
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [64];
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long *local_d8;
  undefined4 local_d0;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  uVar22 = *(undefined8 *)(param_1 + 8);
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e654fc(local_270);
  if (local_270[0] == (undefined8 *)0x0) {
    local_78 = (long *)0x0;
    plVar20 = local_78;
  }
  else {
    FUN_01523304(&local_78);
    plVar20 = local_78;
    if (local_270[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_270[0] + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_270[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_2e0 = (long *)*local_270[0];
        FUN_02a44274(lVar21 + 0xd8,&local_2e0);
        plVar20 = local_78;
      }
    }
  }
  if (plVar20 == (long *)0x0) {
    return;
  }
  uVar17 = plVar20[0x38];
  local_78 = plVar20;
  if (uVar17 == 0) goto LAB_01527dec;
  uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar15 = *(ulong *)(param_1 + 0x490);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) goto LAB_01527df0;
  if (uVar15 < uVar17) {
    uVar19 = uVar15;
  }
  else {
    uVar19 = 0;
    if (uVar17 != 0) {
      uVar19 = uVar15 / uVar17;
    }
    uVar19 = uVar15 - uVar19 * uVar17;
  }
  do {
    plVar20 = *(long **)(plVar20[0x37] + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] == uVar15) {
            if (plVar20[2] == uVar15) goto LAB_01527e34;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == uVar15) {
            if (plVar20[2] == uVar15) goto LAB_01527e34;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar5 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
LAB_01527dec:
    FUN_0152a720();
    uVar15 = extraout_x8;
    uVar17 = extraout_x9;
    plVar20 = extraout_x11;
    uVar18 = extraout_x12;
LAB_01527df0:
    uVar19 = uVar17 - 1 & uVar15;
  } while( true );
LAB_01527e34:
  local_80 = (long *)0x0;
  FUN_01352fe4(local_270,uVar22);
  if (plVar20[0x13] != plVar20[0x12]) {
    lVar21 = 0;
    uVar17 = 0;
    do {
      local_2e0 = (long *)0x0;
      local_2d8 = &DAT_cbf29ce484222645;
      local_2d0 = &DAT_03996322;
      local_2b8 = local_2b8 & 0xffffffff00000000;
      local_2c8 = (long *)0x0;
      local_2c0 = (long *)0x0;
      local_2b0 = &DAT_cbf29ce484222645;
      local_2a8 = "";
      local_2a0 = 0;
      local_298 = (long *)0x0;
      local_290 = &DAT_cbf29ce484222645;
      local_288 = &DAT_03996322;
      local_280 = 0;
      local_278 = (long *)0x0;
      FUN_00adcc04(&local_310,plVar20[0x19] + lVar21);
      plVar23 = local_2e0;
      local_2e0 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))();
      }
      plVar11 = local_2c0;
      plVar23 = local_2f0;
      local_2e0 = local_310;
      local_310 = (long *)0x0;
      local_2d8 = (undefined1 *)uStack_308;
      local_2d0 = (undefined1 *)local_300;
      local_2c8 = plStack_2f8;
      local_2c0 = (long *)0x0;
      if (plVar11 == (long *)0x0) {
        local_2f0 = (long *)0x0;
        local_2c0 = plVar23;
        local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
      }
      else {
        (**(code **)(*plVar11 + 0x20))();
        local_2c0 = local_2f0;
        local_2f0 = (long *)0x0;
        local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
        if (local_310 != (long *)0x0) {
          (**(code **)(*local_310 + 0x20))();
        }
      }
      puVar24 = (undefined8 *)(plVar20[0x12] + lVar21);
      local_2b0 = (undefined1 *)*puVar24;
      local_2a8 = (char *)puVar24[1];
      local_2a0 = puVar24[2];
      plVar23 = (long *)puVar24[3];
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      if (local_298 != (long *)0x0) {
        lVar16 = *local_298;
        local_298 = plVar23;
        (**(code **)(lVar16 + 0x20))();
        plVar23 = local_298;
      }
      local_298 = plVar23;
      puVar24 = (undefined8 *)(plVar20[0x20] + lVar21);
      local_290 = (undefined1 *)*puVar24;
      local_288 = (undefined1 *)puVar24[1];
      local_280 = puVar24[2];
      plVar23 = (long *)puVar24[3];
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      if (local_278 != (long *)0x0) {
        lVar16 = *local_278;
        local_278 = plVar23;
        (**(code **)(lVar16 + 0x20))();
        plVar23 = local_278;
      }
      local_278 = plVar23;
      FUN_015299c8(local_270,&local_2e0);
      if (local_278 != (long *)0x0) {
        (**(code **)(*local_278 + 0x20))();
      }
      if (local_298 != (long *)0x0) {
        (**(code **)(*local_298 + 0x20))();
      }
      if (local_2c0 != (long *)0x0) {
        (**(code **)(*local_2c0 + 0x20))();
      }
      if (local_2e0 != (long *)0x0) {
        (**(code **)(*local_2e0 + 0x20))();
      }
      uVar17 = uVar17 + 1;
      lVar21 = lVar21 + 0x20;
    } while (uVar17 < (ulong)(plVar20[0x13] - plVar20[0x12] >> 5));
  }
  if (plVar20[5] != plVar20[4]) {
    lVar21 = 0;
    uVar17 = 0;
    do {
      local_2e0 = (long *)0x0;
      local_2d8 = &DAT_cbf29ce484222645;
      local_2d0 = &DAT_03996322;
      local_2b8 = local_2b8 & 0xffffffff00000000;
      local_2c8 = (long *)0x0;
      local_2c0 = (long *)0x0;
      local_298 = (long *)0x0;
      local_290 = &DAT_cbf29ce484222645;
      local_288 = &DAT_03996322;
      local_280 = 0;
      local_278 = (long *)0x0;
      puVar24 = (undefined8 *)(plVar20[4] + lVar21);
      local_2b0 = (undefined1 *)*puVar24;
      local_2a8 = (char *)puVar24[1];
      local_2a0 = puVar24[2];
      plVar23 = (long *)puVar24[3];
      if ((plVar23 == (long *)0x0) ||
         ((**(code **)(*plVar23 + 0x18))(plVar23), local_298 == (long *)0x0)) {
        local_298 = plVar23;
        if (*(int *)(param_1 + 0x498) == 0) goto LAB_015280b4;
LAB_01528de8:
        FUN_00adcc04(&local_310,plVar20[0xb] + lVar21);
        plVar23 = local_2e0;
        local_2e0 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x20))();
        }
        plVar11 = local_2c0;
        plVar23 = local_2f0;
        local_2e0 = local_310;
        local_310 = (long *)0x0;
        local_2d8 = (undefined1 *)uStack_308;
        local_2d0 = (undefined1 *)local_300;
        local_2c8 = plStack_2f8;
        local_2c0 = (long *)0x0;
        if (plVar11 == (long *)0x0) {
          local_2f0 = (long *)0x0;
          local_2c0 = plVar23;
          local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
        }
        else {
          (**(code **)(*plVar11 + 0x20))();
          local_2c0 = local_2f0;
          local_2f0 = (long *)0x0;
          local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
          if (local_310 != (long *)0x0) {
            (**(code **)(*local_310 + 0x20))();
          }
        }
        FUN_015299c8(auStack_238,&local_2e0);
      }
      else {
        lVar16 = *local_298;
        local_298 = plVar23;
        (**(code **)(lVar16 + 0x20))();
        if (*(int *)(param_1 + 0x498) != 0) goto LAB_01528de8;
LAB_015280b4:
        if (local_2b0 != &DAT_cbf29ce484222645) goto LAB_01528de8;
        FUN_00adcc04(&local_310,plVar20[0xb] + lVar21);
        plVar23 = local_2e0;
        local_2e0 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x20))();
        }
        plVar11 = local_2c0;
        plVar23 = local_2f0;
        local_2e0 = local_310;
        local_310 = (long *)0x0;
        local_2d8 = (undefined1 *)uStack_308;
        local_2d0 = (undefined1 *)local_300;
        local_2c8 = plStack_2f8;
        local_2c0 = (long *)0x0;
        if (plVar11 == (long *)0x0) {
          local_2f0 = (long *)0x0;
          local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
          local_2c0 = plVar23;
        }
        else {
          (**(code **)(*plVar11 + 0x20))();
          local_2c0 = local_2f0;
          local_2f0 = (long *)0x0;
          local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
          if (local_310 != (long *)0x0) {
            (**(code **)(*local_310 + 0x20))();
          }
        }
      }
      if (local_278 != (long *)0x0) {
        (**(code **)(*local_278 + 0x20))();
      }
      if (local_298 != (long *)0x0) {
        (**(code **)(*local_298 + 0x20))();
      }
      if (local_2c0 != (long *)0x0) {
        (**(code **)(*local_2c0 + 0x20))();
      }
      if (local_2e0 != (long *)0x0) {
        (**(code **)(*local_2e0 + 0x20))();
      }
      uVar17 = uVar17 + 1;
      lVar21 = lVar21 + 0x20;
    } while (uVar17 < (ulong)(plVar20[5] - plVar20[4] >> 5));
  }
  lVar21 = plVar20[0x27];
  if (plVar20[0x28] != lVar21) {
    lVar16 = 0;
    uVar17 = 0;
    do {
      puVar24 = (undefined8 *)(lVar21 + lVar16);
      local_2c8 = (long *)0x0;
      local_280 = 0;
      local_2e0 = (long *)*puVar24;
      local_2d8 = (undefined1 *)puVar24[1];
      local_2d0 = (undefined1 *)puVar24[2];
      plVar23 = (long *)puVar24[3];
      if (plVar23 == (long *)0x0) {
      }
      else {
        (**(code **)(*plVar23 + 0x18))(plVar23);
        if (local_2c8 != (long *)0x0) {
          lVar21 = *local_2c8;
          local_2c8 = plVar23;
          (**(code **)(lVar21 + 0x20))();
          plVar23 = local_2c8;
        }
      }
      local_2c8 = plVar23;
      lVar21 = plVar20[0x27] + lVar16;
      local_2c0 = *(long **)(lVar21 + 0x20);
      local_2b8 = *(ulong *)(lVar21 + 0x28);
      local_2b0 = *(undefined1 **)(lVar21 + 0x30);
      local_2a8 = *(char **)(lVar21 + 0x38);
      local_2a0 = *(undefined8 *)(lVar21 + 0x40);
      local_298 = *(long **)(lVar21 + 0x48);
      local_290 = *(undefined1 **)(lVar21 + 0x50);
      local_288 = *(undefined1 **)(lVar21 + 0x58);
      FUN_01529a1c(auStack_1c8,&local_2e0);
      if (local_2c8 != (long *)0x0) {
        (**(code **)(*local_2c8 + 0x20))();
      }
      lVar21 = plVar20[0x27];
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x60;
    } while (uVar17 < (ulong)((plVar20[0x28] - lVar21 >> 5) * -0x5555555555555555));
  }
  lVar21 = plVar20[0x2e];
  if (plVar20[0x2f] != lVar21) {
    lVar16 = 0;
    uVar17 = 0;
    do {
      FUN_01529a70(auStack_200,lVar21 + lVar16);
      lVar21 = plVar20[0x2e];
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x30;
    } while (uVar17 < (ulong)((plVar20[0x2f] - lVar21 >> 4) * -0x5555555555555555));
  }
  if (*(char *)plVar20[0x44] != '\0') {
    local_2c0 = (long *)0x0;
    local_2d0 = &DAT_03996322;
    local_2c8 = (long *)0x0;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    local_2e0 = (long *)0x0;
    local_2d8 = &DAT_cbf29ce484222645;
    local_2b0 = &DAT_cbf29ce484222645;
    local_2a8 = "";
    local_2a0 = 0;
    local_298 = (long *)0x0;
    FUN_00adcc04(&local_310,plVar20 + 0x43);
    plVar23 = local_2e0;
    local_2e0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = local_2c0;
    local_2e0 = local_310;
    local_310 = (long *)0x0;
    local_2d8 = (undefined1 *)uStack_308;
    local_2d0 = (undefined1 *)local_300;
    local_2c8 = plStack_2f8;
    local_2c0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_2c0 = local_2f0;
    local_2f0 = (long *)0x0;
    local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
    if (local_310 != (long *)0x0) {
      (**(code **)(*local_310 + 0x20))();
    }
    plVar23 = local_298;
    local_2b0 = (undefined1 *)0xedbae97e9d531fe1;
    local_2a8 = "right_attach_on";
    local_2a0 = 0xf;
    local_298 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_298 = (long *)0x0;
    FUN_01529ac4(auStack_138,&local_2e0);
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
    if (local_2c0 != (long *)0x0) {
      (**(code **)(*local_2c0 + 0x20))();
    }
    if (local_2e0 != (long *)0x0) {
      (**(code **)(*local_2e0 + 0x20))();
    }
  }
  if (*(char *)plVar20[0x40] != '\0') {
    local_2c0 = (long *)0x0;
    local_2d0 = &DAT_03996322;
    local_2c8 = (long *)0x0;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    local_2e0 = (long *)0x0;
    local_2d8 = &DAT_cbf29ce484222645;
    local_2b0 = &DAT_cbf29ce484222645;
    local_2a8 = "";
    local_2a0 = 0;
    local_298 = (long *)0x0;
    FUN_00adcc04(&local_310,plVar20 + 0x3f);
    plVar23 = local_2e0;
    local_2e0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = local_2c0;
    local_2e0 = local_310;
    local_310 = (long *)0x0;
    local_2d8 = (undefined1 *)uStack_308;
    local_2d0 = (undefined1 *)local_300;
    local_2c8 = plStack_2f8;
    local_2c0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_2c0 = local_2f0;
    local_2f0 = (long *)0x0;
    local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
    if (local_310 != (long *)0x0) {
      (**(code **)(*local_310 + 0x20))();
    }
    plVar23 = local_298;
    local_2b0 = (undefined1 *)0x5127f371e63bf8b4;
    local_2a8 = "left_attach_on";
    local_2a0 = 0xe;
    local_298 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_298 = (long *)0x0;
    FUN_01529ac4(auStack_138,&local_2e0);
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
    if (local_2c0 != (long *)0x0) {
      (**(code **)(*local_2c0 + 0x20))();
    }
    if (local_2e0 != (long *)0x0) {
      (**(code **)(*local_2e0 + 0x20))();
    }
  }
  if (*(char *)plVar20[0x3c] != '\0') {
    local_2c0 = (long *)0x0;
    local_2d0 = &DAT_03996322;
    local_2c8 = (long *)0x0;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    local_2e0 = (long *)0x0;
    local_2d8 = &DAT_cbf29ce484222645;
    local_2b0 = &DAT_cbf29ce484222645;
    local_2a8 = "";
    local_2a0 = 0;
    local_298 = (long *)0x0;
    FUN_00adcc04(&local_310,plVar20 + 0x3b);
    plVar23 = local_2e0;
    local_2e0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = local_2c0;
    local_2e0 = local_310;
    local_310 = (long *)0x0;
    local_2d8 = (undefined1 *)uStack_308;
    local_2d0 = (undefined1 *)local_300;
    local_2c8 = plStack_2f8;
    local_2c0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_2c0 = local_2f0;
    local_2f0 = (long *)0x0;
    local_2b8 = CONCAT44(local_2b8._4_4_,local_2e8);
    if (local_310 != (long *)0x0) {
      (**(code **)(*local_310 + 0x20))();
    }
    plVar23 = local_298;
    local_2b0 = (undefined1 *)0xdb04e7ac50386fe0;
    local_2a8 = "spine_03";
    local_2a0 = 8;
    local_298 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    local_298 = (long *)0x0;
    FUN_01529ac4(auStack_138,&local_2e0);
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
    if (local_2c0 != (long *)0x0) {
      (**(code **)(*local_2c0 + 0x20))();
    }
    if (local_2e0 != (long *)0x0) {
      (**(code **)(*local_2e0 + 0x20))();
    }
  }
  lVar21 = plVar20[0x47];
  if (lVar21 < 0x12575207bd8a04cf) {
    if (lVar21 < 0xb00bf2742937a21) {
      if (lVar21 == -0x509943b379f930d4) {
        local_18c = 0;
      }
      else if (lVar21 == -0x509940b379f92bbb) {
        local_18c = 1;
      }
      else {
        if (lVar21 != 0xb00b42742936770) goto LAB_015285a4;
        local_18c = 10;
      }
    }
    else if (lVar21 < 0xb03a6274295857d) {
      if (lVar21 == 0xb039b27429572cc) {
        local_18c = 9;
      }
      else {
        if (lVar21 != 0xb00bf2742937a21) goto LAB_015285a4;
        local_18c = 0xb;
      }
    }
    else if (lVar21 == 0xb03a6274295857d) {
      local_18c = 8;
    }
    else if (lVar21 == 0xb0aa627429ba42b) {
      local_18c = 0xc;
    }
    else {
LAB_015285a4:
      local_18c = 0xd;
      if (lVar21 != 0xb0a9f27429b9846) {
        local_18c = 0xe;
      }
    }
  }
  else if (lVar21 < 0x12685b07bd98874d) {
    if (lVar21 == 0x12685007bd98749c) {
      local_18c = 2;
    }
    else if (lVar21 == 0x12575b07bd8a141a) {
      local_18c = 5;
    }
    else {
      if (lVar21 != 0x12575207bd8a04cf) goto LAB_015285a4;
      local_18c = 4;
    }
  }
  else if (lVar21 == 0x12685b07bd98874d) {
    local_18c = 3;
  }
  else if (lVar21 == 0x129b3b07bdc3aa86) {
    local_18c = 7;
  }
  else {
    if (lVar21 != 0x129b4207bdc3b66b) goto LAB_015285a4;
    local_18c = 6;
  }
  local_190 = 1;
  plVar23 = (long *)plVar20[0x35];
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  if (local_f8 != (long *)0x0) {
    lVar21 = *local_f8;
    local_f8 = plVar23;
    (**(code **)(lVar21 + 0x20))();
    plVar23 = local_f8;
  }
  local_f8 = plVar23;
  local_f0 = plVar20[0x36];
  local_e8 = plVar20[0x37];
  local_e0 = plVar20[0x38];
  plVar23 = (long *)plVar20[0x39];
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  if (local_d8 != (long *)0x0) {
    lVar21 = *local_d8;
    local_d8 = plVar23;
    (**(code **)(lVar21 + 0x20))();
    plVar23 = local_d8;
  }
  local_d8 = plVar23;
  local_d0 = (undefined4)plVar20[0x3a];
  FUN_015129f4(&local_318,param_1,0xffffffff);
  (**(code **)(*local_318 + 0x10))(&local_2e0);
  local_310 = (long *)0x0;
  uStack_308 = 0;
  FUN_0087f944(&local_310,&local_2e0);
  plVar20 = local_2e0;
  if (local_2e0 != (long *)0x0) {
    plVar23 = local_2e0 + 1;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_2e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_70[0] = *plVar20;
      FUN_02a44274(lVar21 + 0xd8,local_70);
    }
  }
  FUN_0087fcf0(auStack_150,&local_310);
  plVar20 = local_310;
  if (local_310 != (long *)0x0) {
    plVar23 = local_310 + 1;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_310[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_2e0 = (long *)*plVar20;
      FUN_02a44274(lVar21 + 0xd8,&local_2e0);
    }
  }
  if (local_318 == (long *)0x0) {
LAB_01528750:
    lVar21 = *(long *)(param_1 + 0x98);
    if (lVar21 == 0) goto LAB_01528758;
LAB_01528ed4:
    puVar10 = PTR_DAT_0437f890;
    puVar9 = PTR_DAT_0437f888;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (*(int *)(lVar21 + 0xc) == 0) goto LAB_01528758;
    piVar1 = (int *)(lVar21 + 0xc);
    iVar12 = *(int *)(lVar21 + 0xc);
    do {
      puVar24 = *(undefined8 **)(lVar21 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      if (puVar24 == (undefined8 *)0x0) goto LAB_01528758;
      while (puVar24 != (undefined8 *)puVar10) {
        puVar24 = (undefined8 *)*puVar24;
        plVar20 = (long *)0x0;
        if (puVar24 == (undefined8 *)0x0) goto LAB_0152875c;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar20 = (long *)0x0;
          if (*(long *)(lVar21 + 0x18) != 0) {
            plVar20 = (long *)(*(long *)(lVar21 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar20 = (long *)0x0;
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
  else {
    lVar21 = local_318[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 != 0) goto LAB_01528750;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*local_318 + 0x20))();
    lVar21 = *(long *)(param_1 + 0x98);
    if (lVar21 != 0) goto LAB_01528ed4;
LAB_01528758:
    plVar20 = (long *)0x0;
  }
LAB_0152875c:
  local_2e0 = (long *)plVar20[0x13];
  local_2d8 = (undefined1 *)plVar20[0x14];
  plVar23 = (long *)FUN_0152b4a4(&local_310,uVar22,&local_2e0,local_270);
  puVar8 = PTR_DAT_0437a788;
  puVar7 = PTR_DAT_0437a780;
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_015291c0;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = local_80;
  local_80 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
LAB_015287f0:
    if (plVar20 == (long *)0x0) goto LAB_01528814;
LAB_015287f8:
    lVar21 = plVar20[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 != 0) goto LAB_01528814;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    local_80 = plVar23;
    (**(code **)(*plVar20 + 0x20))(plVar20);
    bVar2 = *puVar7;
  }
  else {
    lVar21 = plVar11[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 != 0) goto LAB_015287f0;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))();
    if (plVar20 != (long *)0x0) goto LAB_015287f8;
LAB_01528814:
    bVar2 = *puVar7;
    local_80 = plVar23;
  }
  if (((bVar2 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)puVar8;
  FUN_01e65a40(&local_2e0);
  FUN_0135ad58(local_80 + 0x4d,&local_2e0);
  plVar20 = local_2e0;
  if (local_2e0 != (long *)0x0) {
    plVar23 = local_2e0 + 1;
    do {
      iVar12 = (int)*plVar23 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *(int *)plVar23 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_2e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_310 = (long *)*plVar20;
      FUN_02a44274(lVar21 + 0xd8,&local_310);
    }
  }
  *(undefined4 *)(local_88 + 0x68) = 2;
  puVar10 = PTR_DAT_0437f890;
  puVar9 = PTR_DAT_0437f888;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  lVar21 = *(long *)(param_1 + 0x98);
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0xc) != 0)) {
    piVar1 = (int *)(lVar21 + 0xc);
    iVar12 = *(int *)(lVar21 + 0xc);
    do {
      plVar20 = *(long **)(lVar21 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar22;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto joined_r0x01529364;
        if (plVar20 == (long *)puVar10) break;
        plVar20 = (long *)*plVar20;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar20 = (long *)0x0;
          if (*(long *)(lVar21 + 0x18) != 0) {
            plVar20 = (long *)(*(long *)(lVar21 + 0x18) + -0x50);
          }
          plVar23 = (long *)plVar20[0x5f];
          goto joined_r0x0152932c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
joined_r0x01529364:
  plVar20 = (long *)0x0;
  plVar23 = _DAT_000002f8;
joined_r0x0152932c:
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_015291c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_3a0 = &LAB_0152b5fc;
  local_398 = FUN_0152be4c;
  local_390 = &LAB_0152be50;
  local_388 = &LAB_0152be5c;
  alStack_380[0] = param_1;
  FUN_01352900(&local_320,plVar23,0,&local_80,&local_3a0,0);
  pcVar6 = local_398;
  if (local_320 != (long *)0x0) {
    lVar21 = local_320[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_320 + 0x20))();
      pcVar6 = local_398;
      local_398 = (code *)0x0;
    }
  }
  if (pcVar6 != (code *)0x0) {
    local_390 = (undefined1 *)0x0;
    local_388 = (undefined1 *)0x0;
    local_3a0 = (undefined1 *)0x0;
    local_398 = (code *)0x0;
    (*pcVar6)(alStack_380);
  }
  if (plVar23 != (long *)0x0) {
    lVar21 = plVar23[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar21 = plVar20[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  FUN_00b17558(local_270);
  if (local_80 != (long *)0x0) {
    lVar21 = local_80[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar21 = local_78[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


