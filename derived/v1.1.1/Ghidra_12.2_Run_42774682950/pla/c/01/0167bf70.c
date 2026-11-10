/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167bf70; name: FUN_0167bf70
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0167bf70(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long extraout_x1;
  undefined1 uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  long *local_480;
  code *local_478;
  undefined1 *local_470;
  long *local_468;
  undefined1 auStack_460 [416];
  long *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  long *local_2a0;
  long *local_298;
  long *local_290;
  code *local_288;
  undefined1 *local_280;
  long *local_278;
  undefined4 local_270;
  undefined1 *local_268;
  undefined4 local_260;
  undefined8 local_250;
  ulong uStack_248;
  undefined4 local_240;
  long *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined5 local_218;
  undefined3 uStack_213;
  undefined4 uStack_210;
  char local_20c;
  undefined1 local_20b;
  undefined1 local_200;
  undefined1 local_140 [112];
  undefined2 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  long local_70 [2];
  
  local_200 = 0;
  local_140[0] = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_218 = 0;
  uStack_213 = 0;
  uStack_210 = 0;
  local_20c = '\0';
  local_228 = 0;
  local_230 = (long *)0x0;
  local_220 = 0;
  FUN_0165a7a0(&local_480);
  plVar5 = local_480;
  puVar7 = PTR_DAT_043796e8;
  puVar6 = PTR_DAT_043796e0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if (local_480 == (long *)0x0) goto LAB_0167bfdc;
  if (*(int *)((long)local_480 + 0xc) != 0) {
    piVar1 = (int *)((long)local_480 + 0xc);
    iVar13 = *(int *)((long)local_480 + 0xc);
    do {
      plVar20 = (long *)plVar5[2];
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar14;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar7 = puVar9;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_0167c5a4;
        if (plVar20 == (long *)puVar7) break;
        plVar20 = (long *)*plVar20;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = plVar5[3];
          plVar5 = (long *)0x0;
          plVar20 = local_480;
          if (lVar17 != 0) {
            plVar5 = (long *)(lVar17 + -0x50);
          }
          goto joined_r0x0167c0ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar11;
    } while (iVar11 != 0);
  }
LAB_0167c5a4:
  plVar5 = (long *)0x0;
  plVar20 = local_480;
joined_r0x0167c0ec:
  local_480 = plVar20;
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 1;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(int *)plVar21 = iVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 == 0) {
      plVar20[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_290 = (long *)*plVar20;
      FUN_02a44274(lVar17 + 0xd8,&local_290);
    }
  }
  if (plVar5 == (long *)0x0) goto LAB_0167bfdc;
  plVar20 = (long *)plVar5[0x13];
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0167cbb4;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
      lVar17 = plVar20[0x35];
      if (lVar17 != 0) goto LAB_0167c608;
LAB_0167c1b0:
      plVar20 = (long *)0x0;
    }
    else {
      lVar17 = plVar20[0x35];
      if (lVar17 == 0) goto LAB_0167c1b0;
LAB_0167c608:
      puVar7 = PTR_DAT_043794b8;
      puVar6 = PTR_DAT_043794b0;
      if (*(int *)(lVar17 + 0xc) == 0) goto LAB_0167c1b0;
      piVar1 = (int *)(lVar17 + 0xc);
      iVar13 = *(int *)(lVar17 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar17 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)puVar9 = uVar14;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)PTR_DAT_043794c8 = puVar9;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar7 = PTR_DAT_043794c8;
          __cxa_guard_release(puVar6);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_0167c1b0;
        while (puVar19 != (undefined8 *)puVar7) {
          puVar19 = (undefined8 *)*puVar19;
          plVar20 = (long *)0x0;
          if (puVar19 == (undefined8 *)0x0) goto LAB_0167c1b4;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar20 = (long *)0x0;
            if (*(long *)(lVar17 + 0x18) != 0) {
              plVar20 = (long *)(*(long *)(lVar17 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar20 = (long *)0x0;
        iVar13 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0167c1b4:
    plVar21 = local_230;
    local_230 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      lVar17 = plVar21[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))();
      }
    }
    local_230 = plVar20;
  }
  FUN_0199cf64(&local_480,plVar5);
  plVar20 = local_480;
  puVar7 = PTR_DAT_0437a110;
  puVar6 = PTR_DAT_0437a108;
  if (local_480 == (long *)0x0) {
LAB_0167c1f4:
    uVar16 = 0;
  }
  else {
    if (*(int *)((long)local_480 + 0xc) != 0) {
      piVar1 = (int *)((long)local_480 + 0xc);
      iVar13 = *(int *)((long)local_480 + 0xc);
      do {
        plVar21 = (long *)plVar20[2];
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar14;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar6 = puVar9;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar21 == (long *)0x0) goto LAB_0167c8f4;
          if (plVar21 == (long *)puVar6) break;
          plVar21 = (long *)*plVar21;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar13) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar17 = plVar20[3];
            plVar20 = (long *)0x0;
            plVar21 = local_480;
            if (lVar17 != 0) {
              plVar20 = (long *)(lVar17 + -0x50);
            }
            goto joined_r0x0167c918;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0167c8f4:
    plVar20 = (long *)0x0;
    plVar21 = local_480;
joined_r0x0167c918:
    local_480 = plVar21;
    if (plVar21 != (long *)0x0) {
      plVar2 = plVar21 + 1;
      do {
        iVar13 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        plVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_290 = (long *)*plVar21;
        FUN_02a44274(lVar17 + 0xd8,&local_290);
      }
    }
    if (plVar20 == (long *)0x0) goto LAB_0167c1f4;
    iVar13 = FUN_017e52f8(plVar20);
    if (iVar13 == 6) {
      local_480 = (long *)&LAB_0167cccc;
      local_478 = FUN_0167ccd4;
      local_470 = &LAB_0167ccd8;
      local_468 = (long *)&LAB_0167ccdc;
      iVar13 = FUN_017e536c(plVar20,&local_480);
      pcVar10 = local_478;
      if (local_478 != (code *)0x0) {
        local_470 = (undefined1 *)0x0;
        local_468 = (long *)0x0;
        local_480 = (long *)0x0;
        local_478 = (code *)0x0;
        (*pcVar10)(auStack_460);
      }
      if (iVar13 == 6) {
LAB_0167cbb4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if ((*(long *)(*(long *)(extraout_x1 + 0x98) + 8) != 0) &&
         (iVar11 = FUN_02c66b3c(), iVar11 == 0)) {
        if (*(long *)(*(long *)(extraout_x1 + 0x98) + 8) == 0) {
          uVar24 = FUN_02c5e31c(extraout_x1);
          uVar24 = uVar24 & 0xffff;
        }
        else {
          uVar24 = FUN_02c66e84();
        }
        uVar12 = FUN_02c66e84(*(undefined8 *)(extraout_x1 + 0x98));
        if ((uint)(int)((float)uVar24 * 0.2) <= uVar12) {
          uVar12 = (int)((float)uVar24 * 0.2);
        }
        FUN_02c788b4(*(undefined8 *)(extraout_x1 + 0x98),uVar12);
      }
    }
    uVar16 = (undefined1)iVar13;
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar13 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  local_290 = *(long **)PTR_DAT_0437a0d8;
  local_288 = *(code **)(PTR_DAT_0437a0d8 + 8);
  local_280 = *(undefined1 **)(PTR_DAT_0437a0d8 + 0x10);
  local_278 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x18))();
  }
  local_270 = 0;
  local_268 = &DAT_cbf29ce484222645;
  local_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_240 = 0;
  FUN_01668fcc(&local_480,param_2,0);
  plVar20 = local_468;
  local_290 = local_480;
  local_280 = local_470;
  local_288 = local_478;
  if (local_468 != (long *)0x0) {
    (**(code **)(*local_468 + 0x18))(local_468);
  }
  plVar21 = local_278;
  local_278 = plVar20;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))();
  }
  if (local_468 != (long *)0x0) {
    (**(code **)(*local_468 + 0x20))();
  }
  uVar18 = 1;
  local_270 = FUN_016780c8(param_2,1);
  puVar15 = (undefined1 *)FUN_01673270(param_2,2);
  local_268 = &DAT_cbf29ce484222645;
  if (puVar15 != (undefined1 *)0xae652fb65c121b9b) {
    local_268 = puVar15;
  }
  local_260 = FUN_016780c8(param_2,3);
  uVar22 = FUN_01679454(param_2,4);
  uVar23 = FUN_01679454(param_2,5);
  uVar24 = FUN_01679454(param_2,6);
  local_250 = CONCAT44(uVar23,uVar22);
  uStack_248 = (ulong)uVar24;
  local_240 = FUN_01679454(param_2,7);
  FUN_01668fcc(&local_480,param_2,8);
  if (((local_480 != (long *)0x20d2b0e5f112fec5) && (local_480 != (long *)0xf644afd9efa28ae5)) &&
     (local_480 != (long *)0xbe0efda8cfefbc5)) {
    uVar18 = 0;
  }
  if (local_468 != (long *)0x0) {
    (**(code **)(*local_468 + 0x20))();
  }
  local_84 = CONCAT11(uVar18,(undefined1)local_84);
  FUN_0167b9a8(local_140,&local_290);
  if (local_20c == '\0') {
    local_20c = '\x01';
  }
  local_20b = uVar16;
  FUN_0199c048(&local_480,plVar5);
  if (local_480 == (long *)0x0) {
    local_298 = (long *)0x0;
  }
  else {
    FUN_00ccf754(&local_298);
    plVar20 = local_480;
    if (local_480 != (long *)0x0) {
      plVar21 = local_480 + 1;
      do {
        iVar13 = (int)*plVar21 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *(int *)plVar21 = iVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 == 0) {
        local_480[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_70[0] = *plVar20;
        FUN_02a44274(lVar17 + 0xd8,local_70);
      }
    }
  }
  if (local_298 != (long *)0x0) {
    FUN_019bbcc0(&local_480);
    if (local_480 == (long *)0x0) {
      local_2a0 = (long *)0x0;
    }
    else {
      FUN_0165ce38(&local_2a0);
      plVar20 = local_480;
      if (local_480 != (long *)0x0) {
        plVar21 = local_480 + 1;
        do {
          iVar13 = (int)*plVar21 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *(int *)plVar21 = iVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 == 0) {
          local_480[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *plVar20;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
    }
    if (local_2a0 != (long *)0x0) {
      FUN_0167bad8(&local_480,&local_230);
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2c0 = (long *)0x0;
      FUN_0167b2b4(local_2a0[0xf],&local_480);
      plVar20 = local_2c0;
      if (local_2c0 != (long *)0x0) {
        plVar21 = local_2c0 + 1;
        do {
          iVar13 = (int)*plVar21 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *(int *)plVar21 = iVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 == 0) {
          local_2c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *plVar20;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      FUN_0167b61c(&local_480);
      if (local_2a0 != (long *)0x0) {
        lVar17 = local_2a0[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_2a0 + 0x20))();
        }
      }
    }
    FUN_019bbbdc(&local_480,local_298);
    if (local_480 == (long *)0x0) {
      local_2a0 = (long *)0x0;
      plVar20 = local_2a0;
    }
    else {
      FUN_00ccf8c8(&local_2a0);
      plVar21 = local_480;
      plVar20 = local_2a0;
      if (local_480 != (long *)0x0) {
        plVar2 = local_480 + 1;
        do {
          iVar13 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 == 0) {
          local_480[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *plVar21;
          FUN_02a44274(lVar17 + 0xd8,local_70);
          plVar20 = local_2a0;
        }
      }
    }
    local_2a0 = plVar20;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x40))(plVar20,5);
      *(undefined4 *)(plVar20 + 0x3d) = 5;
      if (local_2a0 != (long *)0x0) {
        lVar17 = local_2a0[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_2a0 + 0x20))();
        }
      }
    }
    if (local_298 != (long *)0x0) {
      lVar17 = local_298[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_298 + 0x20))();
      }
    }
  }
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  lVar17 = plVar5[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
LAB_0167bfdc:
  FUN_016c1114(1);
  FUN_0167b61c(&local_230);
  return 2;
}


