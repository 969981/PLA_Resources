/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f90bc0; name: FUN_01f90bc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f90bc0(long *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  char *pcVar31;
  bool bVar32;
  bool bVar33;
  char cVar34;
  int iVar35;
  int iVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  undefined1 *puVar42;
  long *plVar43;
  ulong uVar44;
  long lVar45;
  long *plVar46;
  long lVar47;
  long *plVar48;
  long *plVar49;
  long lVar50;
  float *pfVar51;
  long lVar52;
  float *pfVar53;
  float *pfVar54;
  long *plVar55;
  long *plVar56;
  long *plVar57;
  long lVar58;
  long *plVar59;
  undefined8 *puVar60;
  long *plVar61;
  long *plVar62;
  void *__src;
  float extraout_s0;
  float fVar63;
  float extraout_var;
  float fVar64;
  float fVar65;
  float extraout_var_00;
  float fVar66;
  float fVar67;
  undefined4 extraout_var_01;
  float fVar68;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 in_q3 [16];
  undefined1 auVar77 [16];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  long *local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  char *local_290;
  long *local_288;
  long *local_280;
  long *local_278;
  long *local_270;
  char *pcStack_268;
  long *local_260 [2];
  long local_250;
  long local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  ulong local_230;
  undefined8 uStack_228;
  char local_1d0;
  int local_1cc;
  long local_1c0 [5];
  float afStack_198 [18];
  float local_150 [2];
  undefined8 uStack_148;
  undefined1 *local_140;
  float local_138 [4];
  float fStack_128;
  float fStack_124;
  undefined1 *local_120;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 *local_100;
  char local_f0;
  long *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  long lStack_90;
  long *local_88 [3];
  
  puVar30 = PTR_DAT_0437a0f0;
  puVar29 = PTR_DAT_0437a0e8;
  puVar28 = PTR_DAT_043794d8;
  puVar27 = PTR_DAT_043794d0;
  lVar58 = param_1[0x13];
  if ((lVar58 == 0) || (*(int *)(lVar58 + 0xc) == 0)) {
LAB_01f90bf0:
    plVar55 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar58 + 0xc);
    iVar35 = *(int *)(lVar58 + 0xc);
    do {
      puVar60 = *(undefined8 **)(lVar58 + 0x10);
      if (((*puVar29 & 1) == 0) && (iVar36 = __cxa_guard_acquire(puVar29), iVar36 != 0)) {
        if (((*puVar27 & 1) == 0) && (iVar36 = __cxa_guard_acquire(puVar27), iVar36 != 0)) {
          uVar38 = FUN_0087f8f0();
          *(undefined8 *)puVar28 = uVar38;
          __cxa_guard_release(puVar27);
        }
        *(undefined **)puVar30 = puVar28;
        __cxa_guard_release(puVar29);
      }
      if (puVar60 == (undefined8 *)0x0) goto LAB_01f90bf0;
      while (puVar60 != (undefined8 *)puVar30) {
        puVar60 = (undefined8 *)*puVar60;
        plVar55 = (long *)0x0;
        if (puVar60 == (undefined8 *)0x0) goto LAB_01f90bf4;
      }
      iVar36 = *piVar1;
      if (iVar36 == iVar35) {
        cVar34 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = iVar35 + 1;
          cVar34 = ExclusiveMonitorsStatus();
        }
        if (cVar34 == '\0') {
          plVar55 = (long *)0x0;
          if (*(long *)(lVar58 + 0x18) != 0) {
            plVar55 = (long *)(*(long *)(lVar58 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar55 = (long *)0x0;
      iVar35 = iVar36;
    } while (iVar36 != 0);
  }
LAB_01f90bf4:
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar35 = __cxa_guard_acquire(PTR_DAT_04379690), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar58 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar58;
  plVar56 = *(long **)(*(long *)(lVar58 + 0x50) + 0x30);
  if (plVar56 != (long *)0x0) {
    lVar58 = plVar56[0xb];
    if (*(undefined8 **)(lVar58 + 0x18) == (undefined8 *)0x0) goto LAB_01f9340c;
    if (*(long *)(lVar58 + 0x10) == 0) {
      uVar38 = (**(code **)**(undefined8 **)(lVar58 + 0x18))();
      *(undefined8 *)(lVar58 + 0x10) = uVar38;
    }
    piVar1 = (int *)(lVar58 + 0xc);
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = *piVar1 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  puVar27 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar35 = __cxa_guard_acquire(PTR_DAT_04379678), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar29 = PTR_DAT_04379688;
  puVar28 = PTR_DAT_04379680;
  lVar58 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar58;
  plVar57 = *(long **)(lVar58 + 0x100);
  if (plVar57 != (long *)0x0) {
    plVar39 = plVar57 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar32) {
        *(int *)plVar39 = (int)*plVar39 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar39 = (long *)plVar57[0x20];
  if (plVar39 != (long *)0x0) {
    plVar59 = plVar39 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar59,0x10);
      if (bVar32) {
        *(int *)plVar59 = (int)*plVar59 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar59 = (long *)plVar39[0xe];
  if (plVar59 != (long *)0x0) {
    plVar40 = plVar59 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar32) {
        *(int *)plVar40 = (int)*plVar40 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar40 = plVar39 + 10;
  do {
    iVar35 = (int)*plVar40 + -1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
    if (bVar32) {
      *(int *)plVar40 = iVar35;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 == 0) {
    (**(code **)(*plVar39 + 0x10))();
    plVar39 = (long *)plVar59[0xb];
  }
  else {
    plVar39 = (long *)plVar59[0xb];
  }
  if (plVar39 != (long *)0x0) {
    plVar40 = plVar39 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar32) {
        *(int *)plVar40 = (int)*plVar40 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  if (((*puVar27 & 1) == 0) && (iVar35 = __cxa_guard_acquire(PTR_DAT_04379678), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar58 = *(long *)puVar28;
  *(long *)puVar29 = lVar58;
  plVar40 = *(long **)(lVar58 + 0xd0);
  if (plVar40 == (long *)0x0) {
LAB_01f90d50:
    lVar58 = param_1[0x15];
  }
  else {
    plVar48 = plVar40 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar48,0x10);
      if (bVar32) {
        *(int *)plVar48 = (int)*plVar48 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    do {
      iVar35 = (int)*plVar48 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar48,0x10);
      if (bVar32) {
        *(int *)plVar48 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 != 0) goto LAB_01f90d50;
    (**(code **)(*plVar40 + 0x10))();
    lVar58 = param_1[0x15];
  }
  if ((lVar58 != 0) && (*(int *)(lVar58 + 0xc) != 0)) {
    piVar1 = (int *)(lVar58 + 0xc);
    local_280._0_4_ = *(int *)(lVar58 + 0xc);
    do {
      plVar40 = *(long **)(lVar58 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar35 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar35 != 0)) {
          uVar38 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar38;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar40 == (long *)0x0) goto joined_r0x01f91130;
        if (plVar40 == (long *)PTR_DAT_043796e8) break;
        plVar40 = (long *)*plVar40;
      }
      iVar35 = *piVar1;
      if (iVar35 == (int)local_280) {
        cVar34 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = (int)local_280 + 1;
          cVar34 = ExclusiveMonitorsStatus();
        }
        if (cVar34 == '\0') {
          lVar58 = *(long *)(lVar58 + 0x18);
          plVar40 = (long *)(lVar58 + -0x50);
          if (lVar58 != 0) {
            if (plVar55 == (long *)0x0) goto LAB_01f910fc;
            FUN_0199eeac(&local_270,plVar40);
            plVar48 = local_270;
            if (local_270 == (long *)0x0) goto LAB_01f910fc;
            if (*(int *)((long)local_270 + 0xc) == 0) goto LAB_01f91454;
            piVar1 = (int *)((long)local_270 + 0xc);
            local_288._0_4_ = *(int *)((long)local_270 + 0xc);
            goto LAB_01f911f0;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_280._0_4_ = iVar35;
    } while (iVar35 != 0);
  }
  goto joined_r0x01f91130;
LAB_01f911f0:
  do {
    plVar46 = (long *)plVar48[2];
    if (((*PTR_DAT_0437ee88 & 1) == 0) &&
       (iVar35 = __cxa_guard_acquire(PTR_DAT_0437ee88), iVar35 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar35 != 0)) {
        uVar38 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar38;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437ee90 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437ee88);
    }
    while( true ) {
      if (plVar46 == (long *)0x0) goto LAB_01f91454;
      if (plVar46 == (long *)PTR_DAT_0437ee90) break;
      plVar46 = (long *)*plVar46;
    }
    iVar35 = *piVar1;
    if (iVar35 == (int)local_288) {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = (int)local_288 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
      if (cVar34 == '\0') {
        lVar47 = plVar48[3];
        local_280 = (long *)0x0;
        plVar48 = local_270;
        if (lVar47 != 0) {
          local_280 = (long *)(lVar47 + -0x50);
        }
        goto joined_r0x01f91264;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_288._0_4_ = iVar35;
  } while (iVar35 != 0);
LAB_01f91454:
  local_280 = (long *)0x0;
  plVar48 = local_270;
joined_r0x01f91264:
  local_270 = plVar48;
  if (plVar48 != (long *)0x0) {
    plVar46 = (long *)((long)plVar48 + 8);
    do {
      iVar35 = *(int *)plVar46;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar32) {
        *(int *)plVar46 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(long *)((long)plVar48 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar47 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar47;
      local_c0 = (long *)*plVar48;
      FUN_02a44274(lVar47 + 0xd8,&local_c0);
    }
  }
  if (local_280 != (long *)0x0) {
    FUN_0199c138(&local_278,plVar40);
    if (local_278 != (long *)0x0) {
      FUN_009c69bc(&local_270);
      if (local_270 != (long *)0x0) {
        lVar47 = local_270[0xb];
        piVar1 = (int *)(lVar47 + 0xc);
        do {
          iVar35 = *piVar1;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar35 + -1;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (iVar35 + -1 == 0) {
          *(undefined8 *)(lVar47 + 0x18) = 0;
          (**(code **)(*local_270 + 0x20))();
        }
        FUN_009c69bc(&local_270,local_278);
        (**(code **)(*local_270 + 0x40))();
        param_1[0x33] = in_q3._8_8_;
        param_1[0x32] = in_q3._0_8_;
        if (local_270 != (long *)0x0) {
          lVar47 = local_270[0xb];
          piVar1 = (int *)(lVar47 + 0xc);
          do {
            iVar35 = *piVar1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = iVar35 + -1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 + -1 == 0) {
            *(undefined8 *)(lVar47 + 0x18) = 0;
            (**(code **)(*local_270 + 0x20))();
          }
        }
        if (*(int *)(lVar58 + 0x1c0) != 2) goto LAB_01f91370;
        FUN_0199bf58(&local_270,plVar40);
        plVar48 = local_270;
        if (local_270 == (long *)0x0) goto LAB_01f91370;
        if (*(int *)((long)local_270 + 0xc) != 0) {
          piVar1 = (int *)((long)local_270 + 0xc);
          local_290._0_4_ = *(int *)((long)local_270 + 0xc);
          do {
            plVar46 = (long *)plVar48[2];
            if (((*PTR_DAT_04379fc8 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_04379fc8), iVar35 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar35 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar35 != 0)) {
                uVar38 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar38;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_04379fd0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_04379fc8);
            }
            while( true ) {
              if (plVar46 == (long *)0x0) goto LAB_01f915cc;
              if (plVar46 == (long *)PTR_DAT_04379fd0) break;
              plVar46 = (long *)*plVar46;
            }
            iVar35 = *piVar1;
            if (iVar35 == (int)local_290) {
              cVar34 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = (int)local_290 + 1;
                cVar34 = ExclusiveMonitorsStatus();
              }
              if (cVar34 == '\0') {
                lVar47 = plVar48[3];
                local_288 = (long *)0x0;
                plVar48 = local_270;
                if (lVar47 != 0) {
                  local_288 = (long *)(lVar47 + -0x50);
                }
                goto joined_r0x01f91608;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            local_290._0_4_ = iVar35;
          } while (iVar35 != 0);
        }
LAB_01f915cc:
        local_288 = (long *)0x0;
        plVar48 = local_270;
joined_r0x01f91608:
        local_270 = plVar48;
        if (plVar48 != (long *)0x0) {
          plVar46 = (long *)((long)plVar48 + 8);
          do {
            iVar35 = *(int *)plVar46;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar32) {
              *(int *)plVar46 = iVar35 + -1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 + -1 == 0) {
            *(long *)((long)plVar48 + 0x10) = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar47 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar47;
            local_c0 = (long *)*plVar48;
            FUN_02a44274(lVar47 + 0xd8,&local_c0);
          }
        }
        if (local_288 == (long *)0x0) goto LAB_01f91370;
        FUN_018f8f5c(&local_270,local_288);
        do {
          pcVar31 = pcStack_268;
          local_290 = pcStack_268;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(&pcStack_268,0x10);
          if (bVar32) {
            pcStack_268 = (char *)0x0;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        uVar38 = *(undefined8 *)PTR_DAT_043794a0;
        *(undefined8 *)PTR_DAT_043794a8 = uVar38;
        FUN_02a44e0c(&local_e0,uVar38,pcVar31);
        plVar48 = local_270;
        local_270 = (long *)0x0;
        if (plVar48 != (long *)0x0) {
          plVar46 = plVar48 + 1;
          do {
            iVar35 = (int)*plVar46 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar32) {
              *(int *)plVar46 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            plVar48[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar47 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar47;
            local_c0 = (long *)*plVar48;
            FUN_02a44274(lVar47 + 0xd8,&local_c0);
          }
        }
        puVar60 = (undefined8 *)param_1[0x34];
        param_1[0x34] = 0;
        if (local_e0 == (long *)0x0) {
          if (puVar60 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar60 + 1);
            do {
              iVar35 = *piVar1;
              cVar34 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = iVar35 + -1;
                cVar34 = ExclusiveMonitorsStatus();
              }
            } while (cVar34 != '\0');
            if (iVar35 == 1) {
              puVar60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar47 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar47;
              local_c0 = (long *)*puVar60;
              FUN_02a44274(lVar47 + 0xd8,&local_c0);
            }
          }
          local_290 = (char *)0x0;
        }
        else {
          plVar48 = local_e0;
          if (puVar60 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar60 + 1);
            do {
              iVar35 = *piVar1;
              cVar34 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = iVar35 + -1;
                cVar34 = ExclusiveMonitorsStatus();
              }
            } while (cVar34 != '\0');
            if (iVar35 + -1 == 0) {
              puVar60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar47 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar47;
              local_c0 = (long *)*puVar60;
              FUN_02a44274(lVar47 + 0xd8,&local_c0);
            }
            plVar48 = local_e0;
          }
          local_e0 = (long *)0x0;
          param_1[0x34] = (long)plVar48;
        }
        plVar48 = local_e0;
        param_1[0x35] = (long)local_290;
        if (local_e0 != (long *)0x0) {
          plVar46 = local_e0 + 1;
          do {
            iVar35 = (int)*plVar46 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar32) {
              *(int *)plVar46 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            local_e0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar47 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar47;
            local_c0 = (long *)*plVar48;
            FUN_02a44274(lVar47 + 0xd8,&local_c0);
          }
        }
        plVar48 = local_270;
        if (local_270 != (long *)0x0) {
          plVar46 = local_270 + 1;
          do {
            iVar35 = (int)*plVar46 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
            if (bVar32) {
              *(int *)plVar46 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            local_270[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar47 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar47;
            local_c0 = (long *)*plVar48;
            FUN_02a44274(lVar47 + 0xd8,&local_c0);
          }
        }
        lVar47 = *(long *)((long)local_288 + 0x58);
        piVar1 = (int *)(lVar47 + 0xc);
        do {
          iVar35 = *piVar1;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar32) {
            *piVar1 = iVar35 + -1;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (iVar35 + -1 == 0) {
          *(undefined8 *)(lVar47 + 0x18) = 0;
          (**(code **)(*local_288 + 0x20))();
        }
        puVar60 = (undefined8 *)FUN_02ad80fc();
        local_270 = (long *)&DAT_6723799257d05608;
        pcStack_268 = "Main";
        local_260[0] = (long *)0x1f;
        local_260[1] = (long *)0x0;
        lVar47 = FUN_02b11e64(*puVar60,&local_270);
        param_1[0x36] = lVar47;
        if (local_260[1] != (long *)0x0) {
          (**(code **)(*local_260[1] + 0x20))();
        }
        if (((*PTR_DAT_04379690 & 1) == 0) &&
           (iVar35 = __cxa_guard_acquire(PTR_DAT_04379690), iVar35 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        lVar47 = *(long *)PTR_DAT_04379698;
        *(long *)PTR_DAT_043796a0 = lVar47;
        plVar48 = *(long **)(*(long *)(lVar47 + 0x50) + 0x30);
        if (plVar48 != (long *)0x0) {
          lVar47 = plVar48[0xb];
          if (*(undefined8 **)(lVar47 + 0x18) == (undefined8 *)0x0) goto LAB_01f9340c;
          if (*(long *)(lVar47 + 0x10) == 0) {
            uVar38 = (**(code **)**(undefined8 **)(lVar47 + 0x18))();
            *(undefined8 *)(lVar47 + 0x10) = uVar38;
          }
          piVar1 = (int *)(lVar47 + 0xc);
          do {
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar32) {
              *piVar1 = *piVar1 + 1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
        }
        if (((*puVar27 & 1) == 0) && (iVar35 = __cxa_guard_acquire(PTR_DAT_04379678), iVar35 != 0))
        {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar47 = *(long *)puVar28;
        *(long *)puVar29 = lVar47;
        plVar46 = *(long **)(lVar47 + 0x100);
        if (plVar46 != (long *)0x0) {
          plVar41 = plVar46 + 10;
          do {
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
            if (bVar32) {
              *(int *)plVar41 = (int)*plVar41 + 1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
        }
        plVar41 = (long *)plVar46[0x20];
        if (plVar41 != (long *)0x0) {
          plVar49 = plVar41 + 10;
          do {
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar49,0x10);
            if (bVar32) {
              *(int *)plVar49 = (int)*plVar49 + 1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
        }
        plVar49 = (long *)plVar41[0xe];
        if (plVar49 != (long *)0x0) {
          plVar61 = plVar49 + 10;
          do {
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar32) {
              *(int *)plVar61 = (int)*plVar61 + 1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
        }
        plVar61 = plVar41 + 10;
        do {
          iVar35 = (int)*plVar61 + -1;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
          if (bVar32) {
            *(int *)plVar61 = iVar35;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*plVar41 + 0x10))();
        }
        plVar41 = (long *)plVar49[0xb];
        if (plVar41 != (long *)0x0) {
          plVar61 = plVar41 + 10;
          do {
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar32) {
              *(int *)plVar61 = (int)*plVar61 + 1;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
        }
        lVar47 = param_1[0x15];
        if ((lVar47 != 0) && (*(int *)(lVar47 + 0xc) != 0)) {
          piVar1 = (int *)(lVar47 + 0xc);
          local_290._0_4_ = *(int *)(lVar47 + 0xc);
          do {
            plVar61 = *(long **)(lVar47 + 0x10);
            if (((*PTR_DAT_043796e0 & 1) == 0) &&
               (iVar35 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar35 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar35 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar35 != 0)) {
                uVar38 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar38;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043796e0);
            }
            while( true ) {
              if (plVar61 == (long *)0x0) goto LAB_01f92b0c;
              if (plVar61 == (long *)PTR_DAT_043796e8) break;
              plVar61 = (long *)*plVar61;
            }
            iVar35 = *piVar1;
            if (iVar35 == (int)local_290) {
              cVar34 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar32) {
                *piVar1 = (int)local_290 + 1;
                cVar34 = ExclusiveMonitorsStatus();
              }
              if (cVar34 == '\0') {
                lVar47 = *(long *)(lVar47 + 0x18);
                if (lVar47 != 0) {
                  FUN_0199eeac(&local_270,(long *)(lVar47 + -0x50));
                  plVar61 = local_270;
                  if (local_270 == (long *)0x0) goto LAB_01f92ad8;
                  if (*(int *)((long)local_270 + 0xc) == 0) goto LAB_01f91ec0;
                  piVar1 = (int *)((long)local_270 + 0xc);
                  local_290._0_4_ = *(int *)((long)local_270 + 0xc);
                  goto LAB_01f91de0;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            local_290._0_4_ = iVar35;
          } while (iVar35 != 0);
        }
        goto LAB_01f92b0c;
      }
      goto LAB_01f91370;
    }
    goto LAB_01f91394;
  }
  goto LAB_01f910fc;
LAB_01f91de0:
  do {
    plVar62 = (long *)plVar61[2];
    if (((*PTR_DAT_0437ee88 & 1) == 0) &&
       (iVar35 = __cxa_guard_acquire(PTR_DAT_0437ee88), iVar35 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar35 != 0)) {
        uVar38 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar38;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437ee90 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437ee88);
    }
    while( true ) {
      if (plVar62 == (long *)0x0) goto LAB_01f91ec0;
      if (plVar62 == (long *)PTR_DAT_0437ee90) break;
      plVar62 = (long *)*plVar62;
    }
    iVar35 = *piVar1;
    if (iVar35 == (int)local_290) {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = (int)local_290 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
      if (cVar34 == '\0') {
        lVar50 = plVar61[3];
        local_2a8 = (long *)0x0;
        plVar61 = local_270;
        if (lVar50 != 0) {
          local_2a8 = (long *)(lVar50 + -0x50);
        }
        goto joined_r0x01f91eec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_290._0_4_ = iVar35;
  } while (iVar35 != 0);
LAB_01f91ec0:
  local_2a8 = (long *)0x0;
  plVar61 = local_270;
joined_r0x01f91eec:
  local_270 = plVar61;
  if (plVar61 != (long *)0x0) {
    plVar62 = (long *)((long)plVar61 + 8);
    do {
      iVar35 = *(int *)plVar62;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar62,0x10);
      if (bVar32) {
        *(int *)plVar62 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(long *)((long)plVar61 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar50 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar50;
      local_c0 = (long *)*plVar61;
      FUN_02a44274(lVar50 + 0xd8,&local_c0);
    }
  }
  if (local_2a8 != (long *)0x0) {
    if ((char)param_1[0x30] == '\0') {
      pcStack_268 = "quest_destination";
      local_270 = (long *)0x7ef945cdc4edf54a;
      local_260[0] = (long *)0x11;
      local_260[1] = (long *)0x0;
      local_c0 = (long *)0xc59554b50a05f76e;
      local_b8 = (long *)0x394f551;
      local_b0 = (long *)0x13;
      local_a8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379660), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar38 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar38;
      FUN_00d7d9e4(&local_e0,uVar38,&local_270);
      if (local_e0 == (long *)0x0) {
        uVar37 = 0;
      }
      else {
        uVar37 = FUN_00d78f50(local_e0,&local_c0);
        if (local_e0 != (long *)0x0) {
          plVar61 = local_e0 + 10;
          do {
            iVar35 = (int)*plVar61 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar32) {
              *(int *)plVar61 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
        }
      }
      *(undefined4 *)((long)param_1 + 0x184) = uVar37;
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_260[1] != (long *)0x0) {
        (**(code **)(*local_260[1] + 0x20))();
      }
      if (0 < *(int *)((long)param_1 + 0x184)) {
        local_230 = 0;
        plVar61 = param_1 + 0x17;
        local_260[0] = (long *)&DAT_cbf29ce484222645;
        local_260[1] = (long *)&DAT_cbf29ce484222645;
        local_270 = (long *)0x0;
        pcStack_268 = &DAT_cbf29ce484222645;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FUN_01f9609c(plVar61,&local_270);
        if (1 < *(int *)((long)param_1 + 0x184)) {
          local_270 = (long *)0x0;
          pcStack_268 = &DAT_cbf29ce484222645;
          local_260[0] = (long *)&DAT_cbf29ce484222645;
          local_260[1] = (long *)&DAT_cbf29ce484222645;
          local_250 = 0;
          local_248 = 0;
          local_230 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FUN_01f9609c(plVar61,&local_270);
          if (2 < *(int *)((long)param_1 + 0x184)) {
            local_270 = (long *)0x0;
            pcStack_268 = &DAT_cbf29ce484222645;
            local_260[0] = (long *)&DAT_cbf29ce484222645;
            local_260[1] = (long *)&DAT_cbf29ce484222645;
            local_230 = 0;
            local_250 = 0;
            local_248 = 0;
            local_240 = 0;
            uStack_238 = 0;
            FUN_01f9609c(plVar61,&local_270);
            if (3 < *(int *)((long)param_1 + 0x184)) {
              local_290._0_4_ = 3;
              do {
                local_270 = (long *)0x0;
                pcStack_268 = &DAT_cbf29ce484222645;
                local_260[0] = (long *)&DAT_cbf29ce484222645;
                local_260[1] = (long *)&DAT_cbf29ce484222645;
                local_230 = 0;
                local_250 = 0;
                local_248 = 0;
                local_240 = 0;
                uStack_238 = 0;
                FUN_01f9609c(plVar61,&local_270);
                local_290._0_4_ = (int)local_290 + 1;
              } while ((int)local_290 < *(int *)((long)param_1 + 0x184));
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    lVar50 = param_1[0x17];
    lVar45 = param_1[0x18];
    if (((lVar50 != lVar45) && (*(undefined1 *)(lVar50 + 0x44) = 0, lVar50 + 0x50 != lVar45)) &&
       (*(undefined1 *)(lVar50 + 0x94) = 0, lVar50 + 0xa0 != lVar45)) {
      *(undefined1 *)(lVar50 + 0xe4) = 0;
      for (lVar50 = lVar50 + 0xf0; lVar50 != lVar45; lVar50 = lVar50 + 0x50) {
        *(undefined1 *)(lVar50 + 0x44) = 0;
      }
    }
    FUN_016aa648(&local_270,plVar41);
    if ((char)local_270 == '\0') {
LAB_01f92304:
      bVar32 = false;
      iVar35 = 2;
    }
    else {
      lVar50 = FUN_016a7b0c(plVar41);
      if ((lVar50 == 0) ||
         (puVar42 = (undefined1 *)FUN_016a7b0c(plVar41), puVar42 == &DAT_cbf29ce484222645)) {
        if ((char)local_270 != '\0') {
          local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
        }
        goto LAB_01f92304;
      }
      lVar50 = FUN_016a7b0c(plVar41);
      if ((char)local_270 != '\0') {
        local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
      }
      if (lVar50 == -0x3f15b8ab654a0c27) goto LAB_01f92304;
      FUN_016aa648(&local_270,plVar41);
      if ((char)local_270 != '\0') {
        local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
      }
      FUN_016aa648(&local_270,plVar41);
      bVar32 = local_1d0 != '\0';
      iVar35 = local_1cc;
      if ((char)local_270 != '\0') {
        local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
      }
    }
    local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
    if (*(char *)((long)local_2a8 + 0xc0) != '\0') {
      memcpy(local_260,(long *)((long)local_2a8 + 0xd0),0xa0);
      local_270 = (long *)CONCAT71(local_270._1_7_,1);
    }
    memcpy(local_1c0,(long *)((long)local_2a8 + 0x170),0xd0);
    local_f0 = *(char *)((long)local_2a8 + 0x240);
    if (!bVar32 && *(char *)((long)local_2a8 + 0x240) != '\0') {
      local_288 = (long *)0x0;
      do {
        lVar50 = param_1[0x17];
        if ((ulong)((param_1[0x18] - lVar50 >> 4) * -0x3333333333333333) <= local_288) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        plVar61 = (long *)(lVar50 + (long)local_288 * 0x50);
        if (*plVar61 == 0) {
          if (((char)local_270 != '\0') &&
             (local_260[(long)local_288 * 6] != (long *)&DAT_cbf29ce484222645)) {
            puVar42 = (undefined1 *)local_1c0[(long)local_288 * 4 + 4];
            if ((puVar42 != &DAT_cbf29ce484222645) &&
               (((puVar42 != (undefined1 *)0x0 &&
                 ((char)local_1c0[(long)local_288 * 6 + -0xf] == '\0')) &&
                (FUN_01469684(&local_e0,plVar48), local_e0 != (long *)0x0)))) {
              plVar62 = local_e0 + 10;
              do {
                cVar34 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar62,0x10);
                if (bVar32) {
                  *(int *)plVar62 = (int)*plVar62 + 1;
                  cVar34 = ExclusiveMonitorsStatus();
                }
              } while (cVar34 != '\0');
              plVar62 = (long *)*plVar61;
              *plVar61 = (long)local_e0;
              if (plVar62 != (long *)0x0) {
                plVar43 = plVar62 + 10;
                do {
                  iVar36 = (int)*plVar43 + -1;
                  cVar34 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar32) {
                    *(int *)plVar43 = iVar36;
                    cVar34 = ExclusiveMonitorsStatus();
                  }
                } while (cVar34 != '\0');
                if (iVar36 == 0) {
                  (**(code **)(*plVar62 + 0x10))();
                }
              }
              lVar52 = lVar50 + (long)local_288 * 0x50;
              lVar45 = local_1c0[(long)local_288 * 4 + 2];
              *(long *)(lVar52 + 0x28) = local_1c0[(long)local_288 * 4 + 3];
              pfVar54 = (float *)(lVar52 + 0x20);
              *(long *)pfVar54 = lVar45;
              *(undefined8 *)(lVar52 + 8) = local_260[(long)local_288 * 6];
              *(long *)(lVar52 + 0x10) = local_1c0[0];
              plVar62 = (long *)(lVar52 + 0x18);
              *plVar62 = local_1c0[(long)local_288 * 4 + 4];
              pfVar53 = (float *)(lVar52 + 0x40);
              *pfVar53 = afStack_198[(long)local_288 * 8];
              *(undefined1 *)(lVar52 + 0x44) = 1;
              fVar65 = (float)param_1[0x33];
              fVar67 = (float)((ulong)param_1[0x33] >> 0x20);
              fVar66 = (float)param_1[0x32];
              fVar68 = (float)((ulong)param_1[0x32] >> 0x20);
              fVar63 = fVar66 - *pfVar54;
              fVar64 = fVar68 - *(float *)(lVar52 + 0x24);
              fVar73 = fVar65 - *(float *)(lVar52 + 0x28);
              fVar74 = fVar67 - *(float *)(lVar52 + 0x2c);
              auVar69._0_4_ = fVar63 * fVar63;
              auVar69._4_4_ = fVar64 * fVar64;
              auVar69._8_4_ = fVar73 * fVar73;
              auVar69._12_4_ = fVar74 * fVar74;
              auVar72 = NEON_ext(auVar69,auVar69,8,1);
              fVar64 = auVar72._0_4_ + auVar69._0_4_;
              fVar73 = auVar72._4_4_ + auVar69._4_4_;
              fVar63 = fVar64 + fVar73;
              fVar64 = fVar64 + fVar73;
              pfVar51 = local_150 + (long)local_288 * 8;
              pfVar2 = local_138 + (long)local_288 * 8 + -2;
              fVar73 = SQRT(fVar63);
              auVar70._0_8_ = CONCAT44(SQRT(fVar64),fVar73);
              auVar70._8_4_ = SQRT(fVar63);
              auVar70._12_4_ = SQRT(fVar64);
              pfVar3 = local_138 + (long)local_288 * 8;
              uStack_2b8 = auVar70._8_8_;
              local_2c0 = auVar70._0_8_;
              if ((local_140 != (undefined1 *)0x0) && (local_140 != &DAT_cbf29ce484222645)) {
                fVar66 = fVar66 - local_150[0];
                fVar68 = fVar68 - local_150[1];
                fVar65 = fVar65 - (float)uStack_148;
                fVar67 = fVar67 - uStack_148._4_4_;
                fVar66 = fVar66 * fVar66;
                fVar68 = fVar68 * fVar68;
                fVar65 = fVar65 * fVar65;
                fVar67 = fVar67 * fVar67;
                auVar20._4_4_ = fVar68;
                auVar20._0_4_ = fVar66;
                auVar20._8_4_ = fVar65;
                auVar20._12_4_ = fVar67;
                auVar21._4_4_ = fVar68;
                auVar21._0_4_ = fVar66;
                auVar21._8_4_ = fVar65;
                auVar21._12_4_ = fVar67;
                auVar72 = NEON_ext(auVar20,auVar21,8,1);
                fVar66 = auVar72._0_4_ + fVar66;
                fVar68 = auVar72._4_4_ + fVar68;
                fVar63 = fVar66 + fVar68;
                fVar66 = fVar66 + fVar68;
                fVar64 = SQRT(fVar63);
                if (fVar64 < fVar73) {
                  uVar38 = *(undefined8 *)(local_150 + (long)local_288 * 8 + 2);
                  *(undefined8 *)pfVar54 = *(undefined8 *)pfVar51;
                  *(undefined8 *)(lVar52 + 0x28) = uVar38;
                  *plVar62 = *(long *)pfVar2;
                  *pfVar53 = *pfVar3;
                  uStack_2b8 = CONCAT44(SQRT(fVar66),SQRT(fVar63));
                  local_2c0 = CONCAT44(SQRT(fVar66),fVar64);
                }
              }
              if ((local_120 != (undefined1 *)0x0) && (local_120 != &DAT_cbf29ce484222645)) {
                fVar64 = (float)param_1[0x32] - local_138[2];
                fVar66 = (float)((ulong)param_1[0x32] >> 0x20) - local_138[3];
                fVar63 = (float)param_1[0x33] - fStack_128;
                fVar68 = (float)((ulong)param_1[0x33] >> 0x20) - fStack_124;
                fVar64 = fVar64 * fVar64;
                fVar66 = fVar66 * fVar66;
                fVar63 = fVar63 * fVar63;
                fVar68 = fVar68 * fVar68;
                auVar22._4_4_ = fVar66;
                auVar22._0_4_ = fVar64;
                auVar22._8_4_ = fVar63;
                auVar22._12_4_ = fVar68;
                auVar23._4_4_ = fVar66;
                auVar23._0_4_ = fVar64;
                auVar23._8_4_ = fVar63;
                auVar23._12_4_ = fVar68;
                auVar72 = NEON_ext(auVar22,auVar23,8,1);
                fVar64 = auVar72._0_4_ + fVar64;
                fVar66 = auVar72._4_4_ + fVar66;
                fVar63 = fVar64 + fVar66;
                fVar64 = fVar64 + fVar66;
                fVar66 = SQRT(fVar63);
                if (fVar66 < (float)local_2c0) {
                  uVar38 = *(undefined8 *)(local_150 + (long)local_288 * 8 + 2);
                  *(undefined8 *)pfVar54 = *(undefined8 *)pfVar51;
                  *(undefined8 *)(lVar52 + 0x28) = uVar38;
                  *plVar62 = *(long *)pfVar2;
                  *pfVar53 = *pfVar3;
                  uStack_2b8 = CONCAT44(SQRT(fVar64),SQRT(fVar63));
                  local_2c0 = CONCAT44(SQRT(fVar64),fVar66);
                }
              }
              if ((local_100 != (undefined1 *)0x0) && (local_100 != &DAT_cbf29ce484222645)) {
                fVar64 = (float)param_1[0x32] - local_110;
                fVar66 = (float)((ulong)param_1[0x32] >> 0x20) - fStack_10c;
                fVar63 = (float)param_1[0x33] - fStack_108;
                fVar68 = (float)((ulong)param_1[0x33] >> 0x20) - fStack_104;
                fVar64 = fVar64 * fVar64;
                fVar66 = fVar66 * fVar66;
                fVar63 = fVar63 * fVar63;
                fVar68 = fVar68 * fVar68;
                auVar24._4_4_ = fVar66;
                auVar24._0_4_ = fVar64;
                auVar24._8_4_ = fVar63;
                auVar24._12_4_ = fVar68;
                auVar25._4_4_ = fVar66;
                auVar25._0_4_ = fVar64;
                auVar25._8_4_ = fVar63;
                auVar25._12_4_ = fVar68;
                auVar72 = NEON_ext(auVar24,auVar25,8,1);
                fVar64 = auVar72._0_4_ + fVar64;
                fVar66 = auVar72._4_4_ + fVar66;
                fVar63 = fVar64 + fVar66;
                fVar64 = fVar64 + fVar66;
                fVar66 = SQRT(fVar63);
                if (fVar66 < (float)local_2c0) {
                  uVar38 = *(undefined8 *)(local_150 + (long)local_288 * 8 + 2);
                  *(undefined8 *)pfVar54 = *(undefined8 *)pfVar51;
                  *(undefined8 *)(lVar52 + 0x28) = uVar38;
                  *plVar62 = *(long *)pfVar2;
                  *pfVar53 = *pfVar3;
                  uStack_2b8 = CONCAT44(SQRT(fVar64),SQRT(fVar63));
                  local_2c0 = CONCAT44(SQRT(fVar64),fVar66);
                }
              }
              uVar38 = FUN_01832ce8(pfVar54);
              uVar44 = FUN_01f96468(param_1,plVar61,1);
              if ((uVar44 & 1) == 0) {
                local_b0 = (long *)0x0;
                local_a8 = (long *)0x0;
                local_c0 = (long *)0x0;
                local_b8 = (long *)0x0;
                plVar43 = (long *)*plVar61;
                *plVar61 = 0;
                if (plVar43 != (long *)0x0) {
                  plVar4 = plVar43 + 10;
                  do {
                    iVar36 = (int)*plVar4 + -1;
                    cVar34 = '\x01';
                    bVar32 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar32) {
                      *(int *)plVar4 = iVar36;
                      cVar34 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar34 != '\0');
                  if (iVar36 == 0) {
                    (**(code **)(*plVar43 + 0x10))();
                  }
                }
                *plVar61 = 0;
                *(undefined8 *)(lVar52 + 8) = &DAT_cbf29ce484222645;
                *(long *)(lVar52 + 0x10) = (long)&DAT_cbf29ce484222645;
                *plVar62 = (long)&DAT_cbf29ce484222645;
                *(long **)(lVar52 + 0x28) = local_b8;
                *(long **)pfVar54 = local_c0;
                lVar50 = lVar50 + (long)local_288 * 0x50;
                *(long **)(lVar50 + 0x30) = local_b0;
                *(long **)(lVar50 + 0x38) = local_a8;
                pfVar53[0] = 0.0;
                pfVar53[1] = 0.0;
              }
              else {
                auVar26._8_8_ = uStack_2b8;
                auVar26._0_8_ = local_2c0;
                FUN_01461fb0((int)uVar38,(int)((ulong)uVar38 >> 0x20),auVar26,*plVar61,iVar35 == 1);
              }
              if (local_e0 != (long *)0x0) {
                plVar61 = local_e0 + 10;
                do {
                  iVar36 = (int)*plVar61 + -1;
                  cVar34 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                  if (bVar32) {
                    *(int *)plVar61 = iVar36;
                    cVar34 = ExclusiveMonitorsStatus();
                  }
                } while (cVar34 != '\0');
                if (iVar36 == 0) {
                  (**(code **)(*local_e0 + 0x10))();
                }
              }
            }
          }
        }
        else if (((char)local_270 != '\0') &&
                (plVar62 = (long *)(lVar50 + (long)local_288 * 0x50 + 0x10),
                *plVar62 == local_1c0[0])) {
          if ((local_140 == (undefined1 *)0x0) || (local_140 == &DAT_cbf29ce484222645)) {
            if ((local_120 != (undefined1 *)0x0) && (local_120 != &DAT_cbf29ce484222645)) {
              lVar45 = 1;
              puVar42 = local_120;
              goto LAB_01f92860;
            }
            if ((local_100 != (undefined1 *)0x0) && (local_100 != &DAT_cbf29ce484222645)) {
              lVar45 = 2;
              puVar42 = local_100;
              goto LAB_01f92860;
            }
            plVar43 = (long *)(lVar50 + (long)local_288 * 0x50 + 0x18);
            if (local_1c0[(long)local_288 * 4 + 4] != *plVar43) goto LAB_01f929dc;
            lVar52 = lVar50 + (long)local_288 * 0x50;
            lVar45 = local_1c0[(long)local_288 * 4 + 3];
            *(long *)(lVar52 + 0x20) = local_1c0[(long)local_288 * 4 + 2];
            *(long *)(lVar52 + 0x28) = lVar45;
            pfVar51 = afStack_198 + (long)local_288 * 8;
            *plVar43 = local_1c0[(long)local_288 * 4 + 4];
LAB_01f92984:
            lVar45 = lVar50 + (long)local_288 * 0x50;
            *(float *)(lVar45 + 0x40) = *pfVar51;
            *(long **)(lVar45 + 8) = local_260[(long)local_288 * 6];
            *plVar62 = local_1c0[0];
            uVar44 = FUN_01f96468(param_1,plVar61,1);
            if ((uVar44 & 1) != 0) {
              *(undefined1 *)(lVar50 + (long)local_288 * 0x50 + 0x44) = 1;
            }
          }
          else {
            lVar45 = 0;
            puVar42 = local_140;
LAB_01f92860:
            lVar52 = local_1c0[(long)local_288 * 4 + 2];
            fVar63 = *(float *)(param_1 + 0x32) - (float)lVar52;
            fVar64 = *(float *)((long)param_1 + 0x194) - (float)((ulong)lVar52 >> 0x20);
            fVar66 = *(float *)(param_1 + 0x33) - (float)local_1c0[(long)local_288 * 4 + 3];
            fVar68 = *(float *)((long)param_1 + 0x19c) -
                     (float)((ulong)local_1c0[(long)local_288 * 4 + 3] >> 0x20);
            fVar63 = fVar63 * fVar63;
            fVar64 = fVar64 * fVar64;
            fVar66 = fVar66 * fVar66;
            fVar68 = fVar68 * fVar68;
            auVar72._4_4_ = fVar64;
            auVar72._0_4_ = fVar63;
            auVar72._8_4_ = fVar66;
            auVar72._12_4_ = fVar68;
            auVar75._4_4_ = fVar64;
            auVar75._0_4_ = fVar63;
            auVar75._8_4_ = fVar66;
            auVar75._12_4_ = fVar68;
            auVar72 = NEON_ext(auVar72,auVar75,8,1);
            fVar66 = *(float *)(param_1 + 0x32) - local_150[lVar45 * 8];
            fVar68 = *(float *)((long)param_1 + 0x194) - local_150[lVar45 * 8 + 1];
            fVar65 = *(float *)(param_1 + 0x33) - local_150[lVar45 * 8 + 2];
            fVar67 = *(float *)((long)param_1 + 0x19c) - local_150[lVar45 * 8 + 3];
            auVar71._0_4_ = fVar66 * fVar66;
            auVar71._4_4_ = fVar68 * fVar68;
            auVar71._8_4_ = fVar65 * fVar65;
            auVar71._12_4_ = fVar67 * fVar67;
            auVar75 = NEON_ext(auVar71,auVar71,8,1);
            plVar43 = (long *)(lVar50 + (long)local_288 * 0x50 + 0x18);
            if (SQRT(auVar75._0_4_ + auVar71._0_4_ + auVar75._4_4_ + auVar71._4_4_) <
                SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64)) {
              if (puVar42 == (undefined1 *)*plVar43) {
                lVar52 = lVar50 + (long)local_288 * 0x50;
                uVar38 = *(undefined8 *)(local_150 + lVar45 * 8 + 2);
                *(undefined8 *)(lVar52 + 0x20) = *(undefined8 *)(local_150 + lVar45 * 8);
                *(undefined8 *)(lVar52 + 0x28) = uVar38;
                *plVar43 = *(long *)(local_138 + lVar45 * 8 + -2);
                pfVar51 = local_138 + lVar45 * 8;
                goto LAB_01f92984;
              }
            }
            else if (local_1c0[(long)local_288 * 4 + 4] == *plVar43) {
              lVar52 = lVar50 + (long)local_288 * 0x50;
              lVar45 = local_1c0[(long)local_288 * 4 + 3];
              *(long *)(lVar52 + 0x20) = local_1c0[(long)local_288 * 4 + 2];
              *(long *)(lVar52 + 0x28) = lVar45;
              *plVar43 = local_1c0[(long)local_288 * 4 + 4];
              pfVar51 = afStack_198 + (long)local_288 * 8;
              goto LAB_01f92984;
            }
          }
        }
LAB_01f929dc:
        local_288 = (long *)((long)local_288 + 1);
      } while (local_288 != (long *)0x3);
    }
    plVar62 = (long *)param_1[0x18];
    for (plVar61 = (long *)param_1[0x17]; plVar61 != plVar62; plVar61 = plVar61 + 10) {
      if ((*(char *)((long)plVar61 + 0x44) == '\0') && (*plVar61 != 0)) {
        FUN_01461414(*plVar61,1);
        local_b0 = (long *)0x0;
        local_a8 = (long *)0x0;
        local_c0 = (long *)0x0;
        local_b8 = (long *)0x0;
        plVar43 = (long *)*plVar61;
        *plVar61 = 0;
        if (plVar43 != (long *)0x0) {
          plVar4 = plVar43 + 10;
          do {
            iVar35 = (int)*plVar4 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar32) {
              *(int *)plVar4 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*plVar43 + 0x10))();
          }
        }
        *plVar61 = 0;
        plVar61[1] = (long)&DAT_cbf29ce484222645;
        plVar61[2] = (long)&DAT_cbf29ce484222645;
        plVar61[3] = (long)&DAT_cbf29ce484222645;
        plVar61[5] = (long)local_b8;
        plVar61[4] = (long)local_c0;
        plVar61[7] = (long)local_a8;
        plVar61[8] = 0;
        plVar61[6] = (long)local_b0;
      }
    }
    if ((char)local_270 != '\0') {
      local_270 = (long *)((ulong)local_270 & 0xffffffffffffff00);
    }
    lVar50 = *(long *)((long)local_2a8 + 0x58);
    piVar1 = (int *)(lVar50 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar50 + 0x18) = 0;
      (**(code **)(*local_2a8 + 0x20))();
    }
  }
LAB_01f92ad8:
  lVar50 = *(long *)(lVar47 + 8);
  piVar1 = (int *)(lVar50 + 0xc);
  do {
    iVar35 = *piVar1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar35 + -1;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 + -1 == 0) {
    *(undefined8 *)(lVar50 + 0x18) = 0;
    (**(code **)(*(long *)(lVar47 + -0x50) + 0x20))();
  }
LAB_01f92b0c:
  if (plVar41 != (long *)0x0) {
    plVar61 = plVar41 + 10;
    do {
      iVar35 = (int)*plVar61 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
      if (bVar32) {
        *(int *)plVar61 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar41 + 0x10))();
    }
  }
  if (plVar49 != (long *)0x0) {
    plVar41 = plVar49 + 10;
    do {
      iVar35 = (int)*plVar41 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar49 + 0x10))();
    }
  }
  if (plVar46 != (long *)0x0) {
    plVar41 = plVar46 + 10;
    do {
      iVar35 = (int)*plVar41 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar46 + 0x10))();
    }
  }
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*plVar48 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar35 = __cxa_guard_acquire(PTR_DAT_04379690), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar47 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar47;
  plVar48 = *(long **)(*(long *)(lVar47 + 0x50) + 0x30);
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    if (*(undefined8 **)(lVar47 + 0x18) == (undefined8 *)0x0) goto LAB_01f9340c;
    if (*(long *)(lVar47 + 0x10) == 0) {
      uVar38 = (**(code **)**(undefined8 **)(lVar47 + 0x18))();
      *(undefined8 *)(lVar47 + 0x10) = uVar38;
    }
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = *piVar1 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  if (((*puVar27 & 1) == 0) && (iVar35 = __cxa_guard_acquire(PTR_DAT_04379678), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar47 = *(long *)puVar28;
  *(long *)puVar29 = lVar47;
  plVar46 = *(long **)(lVar47 + 0xd0);
  if (plVar46 == (long *)0x0) {
    lVar47 = _DAT_000001a8;
  }
  else {
    plVar41 = plVar46 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = (int)*plVar41 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    lVar47 = plVar46[0x35];
    do {
      iVar35 = (int)*plVar41 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      plVar46 = (long *)(**(code **)(*plVar46 + 0x10))();
    }
  }
  iVar35 = (int)param_1[0x40];
  *(undefined1 *)((long)param_1 + 0x174) = 0;
  if (iVar35 == 7) {
    lVar50 = param_1[0xd];
    if (lVar50 < -0x1c4412fb859ba949) {
      if (lVar50 < -0x1c4414fb859bacaf) {
        if (lVar50 == -0x1c4415fb859bae62) {
          iVar35 = 3;
        }
        else {
          if (lVar50 != -0x1c4417fb859bb1c8) goto LAB_01f92e50;
          iVar35 = 6;
        }
      }
      else if (lVar50 == -0x1c4413fb859baafc) {
        iVar35 = 1;
      }
      else {
        if (lVar50 != -0x1c4414fb859bacaf) goto LAB_01f92e50;
        iVar35 = 4;
      }
    }
    else if (lVar50 == -0x1c4410fb859ba5e3) {
      iVar35 = 0;
    }
    else if (lVar50 == -0x1c4412fb859ba949) {
      iVar35 = 2;
    }
    else {
      if (lVar50 != -0x1c4411fb859ba796) goto LAB_01f92e50;
      iVar35 = 5;
    }
    *(int *)(param_1 + 0x40) = iVar35;
  }
LAB_01f92e50:
  plVar41 = param_1 + 0x26;
  iVar35 = FUN_0131afa4(plVar46,iVar35,0x14);
  if ((iVar35 == 0) || (6 < (int)param_1[0x40])) {
LAB_01f930a8:
    if (*(char *)((long)param_1 + 0x174) == '\0') goto LAB_01f930b0;
  }
  else {
    FUN_0131abec(lVar47);
    if (*plVar41 == 0) {
      FUN_01469684(&local_c0,plVar48);
      if (local_c0 != (long *)0x0) {
        plVar46 = local_c0 + 10;
        do {
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
          if (bVar32) {
            *(int *)plVar46 = (int)*plVar46 + 1;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        plVar46 = (long *)*plVar41;
        *plVar41 = (long)local_c0;
        if (plVar46 != (long *)0x0) {
          plVar49 = plVar46 + 10;
          do {
            iVar35 = (int)*plVar49 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar49,0x10);
            if (bVar32) {
              *(int *)plVar49 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*plVar46 + 0x10))();
          }
        }
        *(undefined1 *)((long)param_1 + 0x174) = 1;
        *(undefined1 *)((long)param_1 + 0x177) = 1;
        param_1[0x2b] = CONCAT44(extraout_var_01,extraout_var_00);
        param_1[0x2a] = CONCAT44(extraout_var,extraout_s0);
      }
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      param_1[0x43] = CONCAT44(extraout_var_01,extraout_var_00);
      param_1[0x42] = CONCAT44(extraout_var,extraout_s0);
      param_1[0x2b] = CONCAT44(extraout_var_01,extraout_var_00);
      param_1[0x2a] = CONCAT44(extraout_var,extraout_s0);
      FUN_01f94f5c(param_1,plVar41);
      auVar72 = *(undefined1 (*) [16])(param_1 + 0x2c);
      pcStack_268 = (char *)CONCAT44((float)((ulong)param_1[0x2b] >> 0x20) + auVar72._12_4_,
                                     (float)param_1[0x2b] + auVar72._8_4_);
      local_270 = (long *)CONCAT44((float)((ulong)param_1[0x2a] >> 0x20) + auVar72._4_4_,
                                   (float)param_1[0x2a] + auVar72._0_4_);
      uVar37 = FUN_01832ce8(&local_270);
      uVar44 = FUN_01f96468(param_1,plVar41,0);
      if ((uVar44 & 1) == 0) {
        local_260[0] = (long *)0x0;
        local_260[1] = (long *)0x0;
        local_270 = (long *)0x0;
        pcStack_268 = (char *)0x0;
        plVar46 = (long *)*plVar41;
        *plVar41 = 0;
        if (plVar46 != (long *)0x0) {
          plVar49 = plVar46 + 10;
          do {
            iVar35 = (int)*plVar49 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar49,0x10);
            if (bVar32) {
              *(int *)plVar49 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*plVar46 + 0x10))();
          }
        }
        param_1[0x26] = 0;
        param_1[0x27] = (long)&DAT_cbf29ce484222645;
        param_1[0x28] = (long)&DAT_cbf29ce484222645;
        param_1[0x29] = (long)&DAT_cbf29ce484222645;
        param_1[0x2b] = (long)pcStack_268;
        param_1[0x2a] = (long)local_270;
        param_1[0x2c] = (long)local_260[0];
        param_1[0x2d] = (long)local_260[1];
        param_1[0x2e] = 0;
      }
      else {
        fVar63 = *(float *)(param_1 + 0x32) -
                 (*(float *)(param_1 + 0x2a) + *(float *)(param_1 + 0x2c));
        fVar64 = *(float *)((long)param_1 + 0x194) -
                 (*(float *)((long)param_1 + 0x154) + *(float *)((long)param_1 + 0x164));
        fVar66 = *(float *)(param_1 + 0x33) -
                 (*(float *)(param_1 + 0x2b) + *(float *)(param_1 + 0x2d));
        fVar68 = *(float *)((long)param_1 + 0x19c) -
                 (*(float *)((long)param_1 + 0x15c) + *(float *)((long)param_1 + 0x16c));
        auVar77._0_4_ = fVar63 * fVar63;
        auVar77._4_4_ = fVar64 * fVar64;
        auVar77._8_4_ = fVar66 * fVar66;
        auVar77._12_4_ = fVar68 * fVar68;
        NEON_ext(auVar77,auVar77,8,1);
        FUN_01461fb0(uVar37,param_1[0x26],3);
      }
      if (local_c0 != (long *)0x0) {
        plVar46 = local_c0 + 10;
        do {
          iVar35 = (int)*plVar46 + -1;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar46,0x10);
          if (bVar32) {
            *(int *)plVar46 = iVar35;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*local_c0 + 0x10))();
        }
      }
      goto LAB_01f930a8;
    }
    if ((((float)param_1[0x42] == extraout_s0) &&
        ((float)((ulong)param_1[0x42] >> 0x20) == extraout_var)) &&
       ((float)param_1[0x43] == extraout_var_00)) {
      *(undefined1 *)((long)param_1 + 0x174) = 1;
    }
    FUN_01f94f5c(param_1,plVar41);
    uVar44 = FUN_01f96468(param_1,plVar41,0);
    if ((uVar44 & 1) != 0) goto LAB_01f930a8;
    *(undefined1 *)((long)param_1 + 0x174) = 0;
LAB_01f930b0:
    if (*plVar41 != 0) {
      FUN_01461414(*plVar41,1);
      local_260[0] = (long *)0x0;
      local_260[1] = (long *)0x0;
      local_270 = (long *)0x0;
      pcStack_268 = (char *)0x0;
      plVar46 = (long *)*plVar41;
      *plVar41 = 0;
      if (plVar46 != (long *)0x0) {
        plVar41 = plVar46 + 10;
        do {
          iVar35 = (int)*plVar41 + -1;
          cVar34 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
          if (bVar32) {
            *(int *)plVar41 = iVar35;
            cVar34 = ExclusiveMonitorsStatus();
          }
        } while (cVar34 != '\0');
        if (iVar35 == 0) {
          (**(code **)(*plVar46 + 0x10))();
        }
      }
      param_1[0x26] = 0;
      param_1[0x27] = (long)&DAT_cbf29ce484222645;
      param_1[0x28] = (long)&DAT_cbf29ce484222645;
      param_1[0x29] = (long)&DAT_cbf29ce484222645;
      param_1[0x2b] = (long)pcStack_268;
      param_1[0x2a] = (long)local_270;
      param_1[0x2d] = (long)local_260[1];
      param_1[0x2e] = 0;
      param_1[0x45] = 0;
      param_1[0x2c] = (long)local_260[0];
      param_1[0x44] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
    }
  }
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*plVar48 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar35 = __cxa_guard_acquire(PTR_DAT_04379690), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar47 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar47;
  plVar48 = *(long **)(*(long *)(lVar47 + 0x50) + 0x30);
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    if (*(undefined8 **)(lVar47 + 0x18) == (undefined8 *)0x0) {
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar47 + 0x10) == 0) {
      uVar38 = (**(code **)**(undefined8 **)(lVar47 + 0x18))();
      *(undefined8 *)(lVar47 + 0x10) = uVar38;
    }
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = *piVar1 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  if (((*puVar27 & 1) == 0) && (iVar35 = __cxa_guard_acquire(PTR_DAT_04379678), iVar35 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar47 = *(long *)puVar28;
  *(long *)puVar29 = lVar47;
  plVar46 = *(long **)(lVar47 + 0x100);
  if (plVar46 != (long *)0x0) {
    plVar41 = plVar46 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = (int)*plVar41 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar41 = (long *)plVar46[0x20];
  if (plVar41 != (long *)0x0) {
    plVar49 = plVar41 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar32) {
        *(int *)plVar49 = (int)*plVar49 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar49 = (long *)plVar41[0xe];
  if (plVar49 != (long *)0x0) {
    plVar61 = plVar49 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
      if (bVar32) {
        *(int *)plVar61 = (int)*plVar61 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  plVar61 = plVar41 + 10;
  do {
    iVar35 = (int)*plVar61 + -1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
    if (bVar32) {
      *(int *)plVar61 = iVar35;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 == 0) {
    (**(code **)(*plVar41 + 0x10))();
  }
  plVar41 = (long *)plVar49[0xb];
  if (plVar41 != (long *)0x0) {
    plVar61 = plVar41 + 10;
    do {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
      if (bVar32) {
        *(int *)plVar61 = (int)*plVar61 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
  }
  lVar47 = param_1[0x15];
  if ((lVar47 != 0) && (*(int *)(lVar47 + 0xc) != 0)) {
    piVar1 = (int *)(lVar47 + 0xc);
    iVar35 = *(int *)(lVar47 + 0xc);
    do {
      plVar61 = *(long **)(lVar47 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar36 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar36 != 0)) {
          uVar38 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar38;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar61 == (long *)0x0) goto LAB_01f94c04;
        if (plVar61 == (long *)PTR_DAT_043796e8) break;
        plVar61 = (long *)*plVar61;
      }
      iVar36 = *piVar1;
      if (iVar36 == iVar35) {
        cVar34 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar32) {
          *piVar1 = iVar35 + 1;
          cVar34 = ExclusiveMonitorsStatus();
        }
        if (cVar34 == '\0') {
          lVar47 = *(long *)(lVar47 + 0x18);
          if (lVar47 != 0) {
            FUN_0199eeac(&local_270,(long *)(lVar47 + -0x50));
            plVar61 = local_270;
            if (local_270 == (long *)0x0) goto LAB_01f94bd0;
            if (*(int *)((long)local_270 + 0xc) == 0) goto LAB_01f93524;
            piVar1 = (int *)((long)local_270 + 0xc);
            iVar35 = *(int *)((long)local_270 + 0xc);
            goto LAB_01f9345c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar35 = iVar36;
    } while (iVar36 != 0);
  }
  goto LAB_01f94c04;
LAB_01f9429c:
  fVar63 = (float)param_1[0x32] - *(float *)(plVar61 + 0x18);
  fVar64 = (float)((ulong)param_1[0x32] >> 0x20) - *(float *)((long)plVar61 + 0xc4);
  fVar66 = (float)param_1[0x33] - *(float *)(plVar61 + 0x19);
  fVar68 = (float)((ulong)param_1[0x33] >> 0x20) - *(float *)((long)plVar61 + 0xcc);
  fVar63 = fVar63 * fVar63;
  fVar64 = fVar64 * fVar64;
  fVar66 = fVar66 * fVar66;
  fVar68 = fVar68 * fVar68;
  auVar18._4_4_ = fVar64;
  auVar18._0_4_ = fVar63;
  auVar18._8_4_ = fVar66;
  auVar18._12_4_ = fVar68;
  auVar19._4_4_ = fVar64;
  auVar19._0_4_ = fVar63;
  auVar19._8_4_ = fVar66;
  auVar19._12_4_ = fVar68;
  auVar72 = NEON_ext(auVar18,auVar19,8,1);
  if (SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64) <= *(float *)((long)param_1 + 0x18c)) {
    plVar61 = plVar61 + 0x30;
    goto LAB_01f944b8;
  }
  if (plVar61 + 0x30 == plVar43) {
    local_b8 = plVar43;
LAB_01f9444c:
    plVar43 = local_b8 + -0x30;
    if ((char)*plVar43 != '\0') {
      *(char *)plVar43 = '\0';
    }
    while (plVar43 != plVar62) {
      plVar43 = plVar43 + -0x30;
      if ((char)*plVar43 != '\0') {
        *(char *)plVar43 = '\0';
      }
    }
  }
  else {
    do {
      if ((char)*plVar62 == '\0') {
        if ((char)plVar62[0x30] != '\0') {
          memcpy(plVar62 + 2,plVar62 + 0x32,0xa0);
          *(char *)plVar62 = '\x01';
        }
      }
      else if ((char)plVar62[0x30] == '\0') {
        *(char *)plVar62 = '\0';
      }
      else {
        memcpy(plVar62 + 2,plVar62 + 0x32,0x98);
      }
      plVar62[0x16] = plVar62[0x46];
      memcpy(plVar62 + 0x18,plVar62 + 0x48,0xc0);
      plVar62 = plVar62 + 0x30;
    } while (plVar43 + -0x30 != plVar62);
    if (local_b8 != plVar62) goto LAB_01f9444c;
  }
LAB_01f944b4:
  plVar43 = plVar62;
  local_b8 = plVar62;
LAB_01f944b8:
  plVar62 = plVar43;
  if (plVar43 == plVar61) goto code_r0x01f944c4;
  goto LAB_01f93c90;
LAB_01f940e8:
  plVar43 = plVar43 + 0x30;
  goto LAB_01f940ec;
code_r0x01f944c4:
  plVar61 = local_c0;
LAB_01f944d0:
  local_270 = param_1;
  FUN_01f976d0(plVar61,plVar43,&local_270);
  if ((ulong)(long)(int)param_1[0x31] <
      (ulong)(((long)local_b8 - (long)local_c0 >> 7) * -0x5555555555555555)) {
    FUN_01f968a8(&local_c0);
  }
  plVar61 = local_b8;
  if (local_c0 != local_b8) {
    plVar43 = local_b8;
    plVar62 = local_c0;
LAB_01f94520:
    lVar50 = param_1[0x1e];
joined_r0x01f94528:
    if (lVar50 == param_1[0x1f]) goto LAB_01f94578;
    if (*(char *)(lVar50 + 0x44) != '\0') goto LAB_01f9456c;
    if (*(long *)(lVar50 + 0x18) == plVar62[0x1a]) {
      *(undefined1 *)(lVar50 + 0x44) = 1;
      if (plVar62 + 0x30 == plVar43) {
        local_b8 = plVar43;
        plVar43 = plVar62;
        goto LAB_01f94774;
      }
      plVar61 = plVar43 + -0x30;
      plVar43 = plVar62;
      do {
        if ((char)*plVar43 == '\0') {
          if ((char)plVar43[0x30] != '\0') {
            memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
            *(char *)plVar43 = '\x01';
          }
        }
        else if ((char)plVar43[0x30] == '\0') {
          *(char *)plVar43 = '\0';
        }
        else {
          memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
        }
        plVar43[0x16] = plVar43[0x46];
        memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
        plVar43 = plVar43 + 0x30;
      } while (plVar61 != plVar43);
      if (local_b8 != plVar43) {
LAB_01f94774:
        plVar61 = local_b8 + -0x30;
        if ((char)*plVar61 != '\0') {
          *(char *)plVar61 = '\0';
        }
        while (plVar61 != plVar43) {
          plVar61 = plVar61 + -0x30;
          if ((char)*plVar61 != '\0') {
            *(char *)plVar61 = '\0';
          }
        }
      }
    }
    else {
      fVar64 = (float)*(undefined8 *)(lVar50 + 0x28);
      fVar63 = (float)((ulong)*(undefined8 *)(lVar50 + 0x20) >> 0x20);
      bVar32 = false;
      if (((float)*(undefined8 *)(lVar50 + 0x20) == *(float *)(plVar62 + 0x18)) &&
         (bVar32 = false, !NAN(fVar63) && !NAN(*(float *)((long)plVar62 + 0xc4)))) {
        bVar32 = fVar63 == *(float *)((long)plVar62 + 0xc4);
      }
      bVar33 = false;
      if ((bVar32) && (bVar33 = false, !NAN(fVar64) && !NAN(*(float *)(plVar62 + 0x19)))) {
        bVar33 = fVar64 == *(float *)(plVar62 + 0x19);
      }
      if (!bVar33) goto LAB_01f9456c;
      *(undefined1 *)(lVar50 + 0x44) = 1;
      if (plVar62 + 0x30 == plVar43) {
        local_b8 = plVar43;
        plVar43 = plVar62;
        goto LAB_01f947ac;
      }
      plVar61 = plVar43 + -0x30;
      plVar43 = plVar62;
      do {
        if ((char)*plVar43 == '\0') {
          if ((char)plVar43[0x30] != '\0') {
            memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
            *(char *)plVar43 = '\x01';
          }
        }
        else if ((char)plVar43[0x30] == '\0') {
          *(char *)plVar43 = '\0';
        }
        else {
          memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
        }
        plVar43[0x16] = plVar43[0x46];
        memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
        plVar43 = plVar43 + 0x30;
      } while (plVar61 != plVar43);
      if (local_b8 != plVar43) {
LAB_01f947ac:
        plVar61 = local_b8 + -0x30;
        if ((char)*plVar61 != '\0') {
          *(char *)plVar61 = '\0';
        }
        while (plVar61 != plVar43) {
          plVar61 = plVar61 + -0x30;
          if ((char)*plVar61 != '\0') {
            *(char *)plVar61 = '\0';
          }
        }
      }
    }
    goto LAB_01f94814;
  }
LAB_01f94828:
  plVar62 = (long *)param_1[0x1e];
  local_2a0 = (undefined4)param_1[0x1f];
  uStack_29c = (undefined4)((ulong)param_1[0x1f] >> 0x20);
  plVar43 = local_c0;
  if (plVar61 != local_c0) {
    uVar44 = 0;
    do {
      if (plVar62 == (long *)CONCAT44(uStack_29c,local_2a0)) {
        plVar62 = (long *)CONCAT44(uStack_29c,local_2a0);
      }
      else {
        do {
          FUN_01469684(&local_270,plVar48);
          if (*plVar62 == 0) {
            if (local_270 != (long *)0x0) {
              plVar61 = local_270 + 10;
              do {
                cVar34 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar32) {
                  *(int *)plVar61 = (int)*plVar61 + 1;
                  cVar34 = ExclusiveMonitorsStatus();
                }
              } while (cVar34 != '\0');
              plVar61 = (long *)*plVar62;
              *plVar62 = (long)local_270;
              if (plVar61 != (long *)0x0) {
                plVar43 = plVar61 + 10;
                do {
                  iVar35 = (int)*plVar43 + -1;
                  cVar34 = '\x01';
                  bVar32 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar32) {
                    *(int *)plVar43 = iVar35;
                    cVar34 = ExclusiveMonitorsStatus();
                  }
                } while (cVar34 != '\0');
                if (iVar35 == 0) {
                  (**(code **)(*plVar61 + 0x10))();
                }
              }
              plVar62[5] = local_c0[uVar44 * 0x30 + 0x19];
              pfVar51 = (float *)(plVar62 + 4);
              *(long *)pfVar51 = local_c0[uVar44 * 0x30 + 0x18];
              plVar62[1] = local_c0[uVar44 * 0x30 + 2];
              plVar62[2] = local_c0[uVar44 * 0x30 + 0x16];
              plVar62[3] = local_c0[uVar44 * 0x30 + 0x1a];
              *(int *)(plVar62 + 8) = (int)local_c0[uVar44 * 0x30 + 0x1b];
              *(undefined2 *)((long)plVar62 + 0x44) = 1;
              FUN_01832ce8(pfVar51);
              fVar63 = *(float *)((long)param_1 + 0x194) - *(float *)((long)plVar62 + 0x24);
              fVar64 = *(float *)((long)param_1 + 0x19c) - *(float *)((long)plVar62 + 0x2c);
              auVar76._0_4_ =
                   (*(float *)(param_1 + 0x32) - *pfVar51) * (*(float *)(param_1 + 0x32) - *pfVar51)
              ;
              auVar76._4_4_ = fVar63 * fVar63;
              auVar76._8_4_ =
                   (*(float *)(param_1 + 0x33) - *(float *)(plVar62 + 5)) *
                   (*(float *)(param_1 + 0x33) - *(float *)(plVar62 + 5));
              auVar76._12_4_ = fVar64 * fVar64;
              NEON_ext(auVar76,auVar76,8,1);
              FUN_01461fb0(*plVar62,2);
              iVar36 = 0x15;
              iVar35 = 0x15;
              goto joined_r0x01f94944;
            }
            iVar35 = 0;
          }
          else {
            iVar36 = 0;
            iVar35 = 0;
joined_r0x01f94944:
            if (local_270 != (long *)0x0) {
              plVar61 = local_270 + 10;
              do {
                iVar5 = (int)*plVar61 + -1;
                cVar34 = '\x01';
                bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
                if (bVar32) {
                  *(int *)plVar61 = iVar5;
                  cVar34 = ExclusiveMonitorsStatus();
                }
              } while (cVar34 != '\0');
              iVar35 = iVar36;
              if (iVar5 == 0) {
                (**(code **)(*local_270 + 0x10))();
              }
            }
          }
          plVar62 = plVar62 + 10;
        } while ((plVar62 != (long *)CONCAT44(uStack_29c,local_2a0)) && (iVar35 == 0));
        plVar62 = (long *)param_1[0x1e];
        local_2a0 = (undefined4)param_1[0x1f];
        uStack_29c = (undefined4)((ulong)param_1[0x1f] >> 0x20);
        plVar43 = local_c0;
        plVar61 = local_b8;
      }
      uVar44 = uVar44 + 1;
    } while (uVar44 < (ulong)(((long)plVar61 - (long)plVar43 >> 7) * -0x5555555555555555));
  }
  if (plVar62 != (long *)CONCAT44(uStack_29c,local_2a0)) {
    do {
      if ((*(char *)((long)plVar62 + 0x44) == '\0') && (*plVar62 != 0)) {
        FUN_01461414(*plVar62,0);
        local_260[0] = (long *)0x0;
        local_260[1] = (long *)0x0;
        local_270 = (long *)0x0;
        pcStack_268 = (char *)0x0;
        plVar61 = (long *)*plVar62;
        *plVar62 = 0;
        if (plVar61 != (long *)0x0) {
          plVar43 = plVar61 + 10;
          do {
            iVar35 = (int)*plVar43 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar43,0x10);
            if (bVar32) {
              *(int *)plVar43 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*plVar61 + 0x10))();
          }
        }
        *plVar62 = 0;
        plVar62[1] = (long)&DAT_cbf29ce484222645;
        plVar62[2] = (long)&DAT_cbf29ce484222645;
        plVar62[3] = (long)&DAT_cbf29ce484222645;
        plVar62[5] = (long)pcStack_268;
        plVar62[4] = (long)local_270;
        plVar62[7] = (long)local_260[1];
        plVar62[8] = 0;
        plVar62[6] = (long)local_260[0];
      }
      plVar62 = plVar62 + 10;
    } while (plVar62 != (long *)CONCAT44(uStack_29c,local_2a0));
    plVar43 = local_c0;
  }
  plVar61 = local_a8;
  if (plVar43 != (long *)0x0) {
    plVar62 = plVar43;
    if (local_b8 != plVar43) {
      plVar62 = local_b8 + -0x30;
      if ((char)*plVar62 != '\0') {
        *(char *)plVar62 = '\0';
      }
      if (plVar62 != plVar43) {
        do {
          if ((char)local_b8[-0x60] != '\0') {
            *(char *)(local_b8 + -0x60) = '\0';
          }
          local_b8 = local_b8 + -0x30;
        } while (plVar43 + 0x30 != local_b8);
      }
      plVar62 = local_c0;
    }
    lVar50 = (long)local_b0 - (long)plVar62;
    local_b8 = plVar43;
    uVar44 = (**(code **)(*local_a8 + 0xc0))(local_a8);
    if ((uVar44 & 1) != 0) {
      lVar45 = tpidr_el0;
      if (*(char *)(lVar45 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar45 + 0x38d488) = 1;
        *(undefined8 *)(lVar45 + 0x38d478) = 0;
        *(undefined8 *)(lVar45 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar45 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar45 + 0x38d480)) {
        FUN_02bcc824(plVar61,plVar62,lVar50,0x10);
        goto LAB_01f94b9c;
      }
    }
    (**(code **)(*plVar61 + 0x18))(plVar61,plVar62,lVar50,0x10);
  }
LAB_01f94b9c:
  lVar50 = *(long *)((long)local_288 + 0x58);
  piVar1 = (int *)(lVar50 + 0xc);
  do {
    iVar35 = *piVar1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar35 + -1;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 + -1 == 0) {
    *(undefined8 *)(lVar50 + 0x18) = 0;
    (**(code **)(*local_288 + 0x20))();
  }
  goto LAB_01f94bd0;
LAB_01f94578:
  lVar50 = param_1[0x17];
joined_r0x01f94580:
  if (lVar50 == param_1[0x18]) goto LAB_01f945b0;
  if ((*(long *)(lVar50 + 0x10) != plVar62[0x16]) && (*(long *)(lVar50 + 0x18) != plVar62[0x1a]))
  goto code_r0x01f945a4;
  *(undefined1 *)(lVar50 + 0x44) = 1;
  if (plVar62 + 0x30 == plVar43) {
    local_b8 = plVar43;
    plVar43 = plVar62;
    goto LAB_01f947e4;
  }
  plVar61 = plVar43 + -0x30;
  plVar43 = plVar62;
  do {
    if ((char)*plVar43 == '\0') {
      if ((char)plVar43[0x30] != '\0') {
        memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
        *(char *)plVar43 = '\x01';
      }
    }
    else if ((char)plVar43[0x30] == '\0') {
      *(char *)plVar43 = '\0';
    }
    else {
      memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
    }
    plVar43[0x16] = plVar43[0x46];
    memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
    plVar43 = plVar43 + 0x30;
  } while (plVar61 != plVar43);
  if (local_b8 != plVar43) {
LAB_01f947e4:
    plVar61 = local_b8 + -0x30;
    if ((char)*plVar61 != '\0') {
      *(char *)plVar61 = '\0';
    }
    while (plVar61 != plVar43) {
      plVar61 = plVar61 + -0x30;
      if ((char)*plVar61 != '\0') {
        *(char *)plVar61 = '\0';
      }
    }
  }
LAB_01f94814:
  plVar61 = plVar43;
  local_b8 = plVar43;
  if (plVar62 == plVar43) goto LAB_01f94828;
  goto LAB_01f94520;
LAB_01f945b0:
  plVar62 = plVar62 + 0x30;
  if (plVar62 == plVar43) goto LAB_01f94828;
  goto LAB_01f94520;
code_r0x01f945a4:
  lVar50 = lVar50 + 0x50;
  goto joined_r0x01f94580;
LAB_01f9456c:
  lVar50 = lVar50 + 0x50;
  goto joined_r0x01f94528;
LAB_01f9345c:
  do {
    plVar62 = (long *)plVar61[2];
    if (((*PTR_DAT_0437ee88 & 1) == 0) &&
       (iVar36 = __cxa_guard_acquire(PTR_DAT_0437ee88), iVar36 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar36 != 0)) {
        uVar38 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar38;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_0437ee90 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437ee88);
    }
    while( true ) {
      if (plVar62 == (long *)0x0) goto LAB_01f93524;
      if (plVar62 == (long *)PTR_DAT_0437ee90) break;
      plVar62 = (long *)*plVar62;
    }
    iVar36 = *piVar1;
    if (iVar36 == iVar35) {
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + 1;
        cVar34 = ExclusiveMonitorsStatus();
      }
      if (cVar34 == '\0') {
        lVar50 = plVar61[3];
        local_288 = (long *)0x0;
        plVar61 = local_270;
        if (lVar50 != 0) {
          local_288 = (long *)(lVar50 + -0x50);
        }
        goto joined_r0x01f9354c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar35 = iVar36;
  } while (iVar36 != 0);
LAB_01f93524:
  local_288 = (long *)0x0;
  plVar61 = local_270;
joined_r0x01f9354c:
  local_270 = plVar61;
  if (plVar61 != (long *)0x0) {
    plVar62 = (long *)((long)plVar61 + 8);
    do {
      iVar35 = *(int *)plVar62;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar62,0x10);
      if (bVar32) {
        *(int *)plVar62 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(long *)((long)plVar61 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379498), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar50 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar50;
      local_c0 = (long *)*plVar61;
      FUN_02a44274(lVar50 + 0xd8,&local_c0);
    }
  }
  if (local_288 != (long *)0x0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_a8 = *(long **)((long)local_288 + 0x98);
    local_a0 = *(ulong *)((long)local_288 + 0xa0);
    local_98 = *(long *)((long)local_288 + 0xa8);
    lStack_90 = *(long *)((long)local_288 + 0xb0);
    lVar50 = *(long *)((long)local_288 + 0x88) - *(long *)((long)local_288 + 0x80);
    if (lVar50 != 0) {
      uVar44 = local_a0;
      if (0x7ffffffffffffffe < local_a0) {
        uVar44 = 0x7fffffffffffffff;
      }
      if (uVar44 < (ulong)((lVar50 >> 7) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      plVar61 = (long *)(**(code **)(*local_a8 + 0x10))(local_a8,lVar50,0x10);
      if (plVar61 == (long *)0x0) {
        (**(code **)(*local_a8 + 0xb8))();
      }
      local_b0 = plVar61 + (lVar50 >> 7) * 0x10;
      lVar50 = *(long *)((long)local_288 + 0x88);
      local_c0 = plVar61;
      local_b8 = plVar61;
      if (*(long *)((long)local_288 + 0x80) != lVar50) {
        __src = (void *)(*(long *)((long)local_288 + 0x80) + 0x10);
        do {
          plVar62 = local_a8;
          plVar61 = local_b8;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar35 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar27 = PTR_DAT_04379528;
            if (iVar35 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar27,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar45 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar45 != 0) {
            if (0xf < *(ulong *)(lVar45 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar45 + *(ulong *)(lVar45 + 0x80) * 8) = plVar62;
            *(long *)(lVar45 + 0x80) = *(long *)(lVar45 + 0x80) + 1;
          }
          *(char *)plVar61 = '\0';
          if (*(char *)((long)__src + -0x10) != '\0') {
            memcpy(plVar61 + 2,__src,0xa0);
            *(char *)plVar61 = '\x01';
          }
          memcpy(plVar61 + 0x16,(void *)((long)__src + 0xa0),0xd0);
          if (lVar45 != 0) {
            *(long *)(lVar45 + 0x80) = *(long *)(lVar45 + 0x80) + -1;
          }
          local_b8 = local_b8 + 0x30;
          lVar45 = (long)__src + 0x170;
          __src = (void *)((long)__src + 0x180);
        } while (lVar45 != lVar50);
      }
    }
    if (*(char *)((long)param_1 + 0x181) == '\0') {
      pcStack_268 = "quest_destination";
      local_270 = (long *)0x7ef945cdc4edf54a;
      local_260[0] = (long *)0x11;
      local_260[1] = (long *)0x0;
      local_e0 = (long *)0xd1398d610eff973d;
      pcStack_d8 = "AcceptableQuestDisplayMax";
      local_d0 = 0x19;
      local_c8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379660), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar38 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar38;
      FUN_00d7d9e4(local_88,uVar38,&local_270);
      if (local_88[0] == (long *)0x0) {
        uVar37 = 0;
      }
      else {
        uVar37 = FUN_00d78f50(local_88[0],&local_e0);
        if (local_88[0] != (long *)0x0) {
          plVar61 = local_88[0] + 10;
          do {
            iVar35 = (int)*plVar61 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar32) {
              *(int *)plVar61 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x31) = uVar37;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_260[1] != (long *)0x0) {
        (**(code **)(*local_260[1] + 0x20))();
      }
      pcStack_268 = "quest_destination";
      local_270 = (long *)0x7ef945cdc4edf54a;
      local_260[0] = (long *)0x11;
      local_260[1] = (long *)0x0;
      local_e0 = (long *)0xd4b207b2716ef78e;
      pcStack_d8 = "AcceptableQuestDistance";
      local_d0 = 0x17;
      local_c8 = (long *)0x0;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(PTR_DAT_04379660), iVar35 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar38 = *(undefined8 *)PTR_DAT_04379668;
      *(undefined8 *)PTR_DAT_04379670 = uVar38;
      FUN_00d7d9e4(local_88,uVar38,&local_270);
      if (local_88[0] == (long *)0x0) {
        uVar37 = 0;
      }
      else {
        uVar37 = FUN_00d7905c(local_88[0],&local_e0);
        if (local_88[0] != (long *)0x0) {
          plVar61 = local_88[0] + 10;
          do {
            iVar35 = (int)*plVar61 + -1;
            cVar34 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
            if (bVar32) {
              *(int *)plVar61 = iVar35;
              cVar34 = ExclusiveMonitorsStatus();
            }
          } while (cVar34 != '\0');
          if (iVar35 == 0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
        }
      }
      *(undefined4 *)((long)param_1 + 0x18c) = uVar37;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_260[1] != (long *)0x0) {
        (**(code **)(*local_260[1] + 0x20))();
      }
      if (0 < (int)param_1[0x31]) {
        plVar61 = param_1 + 0x1e;
        local_230 = 0;
        local_260[0] = (long *)&DAT_cbf29ce484222645;
        local_260[1] = (long *)&DAT_cbf29ce484222645;
        local_270 = (long *)0x0;
        pcStack_268 = &DAT_cbf29ce484222645;
        local_250 = 0;
        local_248 = 0;
        local_240 = 0;
        uStack_238 = 0;
        FUN_01f9609c(plVar61,&local_270);
        if (1 < (int)param_1[0x31]) {
          local_270 = (long *)0x0;
          pcStack_268 = &DAT_cbf29ce484222645;
          local_260[0] = (long *)&DAT_cbf29ce484222645;
          local_260[1] = (long *)&DAT_cbf29ce484222645;
          local_250 = 0;
          local_248 = 0;
          local_230 = 0;
          local_240 = 0;
          uStack_238 = 0;
          FUN_01f9609c(plVar61,&local_270);
          if (2 < (int)param_1[0x31]) {
            local_270 = (long *)0x0;
            pcStack_268 = &DAT_cbf29ce484222645;
            local_260[0] = (long *)&DAT_cbf29ce484222645;
            local_260[1] = (long *)&DAT_cbf29ce484222645;
            local_230 = 0;
            local_250 = 0;
            local_248 = 0;
            local_240 = 0;
            uStack_238 = 0;
            FUN_01f9609c(plVar61,&local_270);
            if (3 < (int)param_1[0x31]) {
              local_270 = (long *)0x0;
              pcStack_268 = &DAT_cbf29ce484222645;
              local_260[0] = (long *)&DAT_cbf29ce484222645;
              local_260[1] = (long *)&DAT_cbf29ce484222645;
              local_230 = 0;
              local_250 = 0;
              local_248 = 0;
              local_240 = 0;
              uStack_238 = 0;
              FUN_01f9609c(plVar61,&local_270);
              if (4 < (int)param_1[0x31]) {
                local_270 = (long *)0x0;
                pcStack_268 = &DAT_cbf29ce484222645;
                local_260[0] = (long *)&DAT_cbf29ce484222645;
                local_260[1] = (long *)&DAT_cbf29ce484222645;
                local_230 = 0;
                local_250 = 0;
                local_248 = 0;
                local_240 = 0;
                uStack_238 = 0;
                FUN_01f9609c(plVar61,&local_270);
                if (5 < (int)param_1[0x31]) {
                  local_270 = (long *)0x0;
                  pcStack_268 = &DAT_cbf29ce484222645;
                  local_260[0] = (long *)&DAT_cbf29ce484222645;
                  local_260[1] = (long *)&DAT_cbf29ce484222645;
                  local_230 = 0;
                  local_250 = 0;
                  local_248 = 0;
                  local_240 = 0;
                  uStack_238 = 0;
                  FUN_01f9609c(plVar61,&local_270);
                  if (6 < (int)param_1[0x31]) {
                    local_270 = (long *)0x0;
                    pcStack_268 = &DAT_cbf29ce484222645;
                    local_260[0] = (long *)&DAT_cbf29ce484222645;
                    local_260[1] = (long *)&DAT_cbf29ce484222645;
                    local_230 = 0;
                    local_250 = 0;
                    local_248 = 0;
                    local_240 = 0;
                    uStack_238 = 0;
                    FUN_01f9609c(plVar61,&local_270);
                    if (7 < (int)param_1[0x31]) {
                      iVar35 = 7;
                      do {
                        local_270 = (long *)0x0;
                        pcStack_268 = &DAT_cbf29ce484222645;
                        local_260[0] = (long *)&DAT_cbf29ce484222645;
                        local_260[1] = (long *)&DAT_cbf29ce484222645;
                        local_230 = 0;
                        local_250 = 0;
                        local_248 = 0;
                        local_240 = 0;
                        uStack_238 = 0;
                        FUN_01f9609c(plVar61,&local_270);
                        iVar35 = iVar35 + 1;
                      } while (iVar35 < (int)param_1[0x31]);
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0x181) = 1;
    }
    lVar50 = param_1[0x1e];
    lVar45 = param_1[0x1f];
    if (((((lVar50 != lVar45) && (*(undefined1 *)(lVar50 + 0x44) = 0, lVar50 + 0x50 != lVar45)) &&
         (*(undefined1 *)(lVar50 + 0x94) = 0, lVar50 + 0xa0 != lVar45)) &&
        ((*(undefined1 *)(lVar50 + 0xe4) = 0, lVar50 + 0xf0 != lVar45 &&
         (*(undefined1 *)(lVar50 + 0x134) = 0, lVar50 + 0x140 != lVar45)))) &&
       ((*(undefined1 *)(lVar50 + 0x184) = 0, lVar50 + 400 != lVar45 &&
        (*(undefined1 *)(lVar50 + 0x1d4) = 0, lVar50 + 0x1e0 != lVar45)))) {
      *(undefined1 *)(lVar50 + 0x224) = 0;
      for (lVar50 = lVar50 + 0x230; lVar50 != lVar45; lVar50 = lVar50 + 0x50) {
        *(undefined1 *)(lVar50 + 0x44) = 0;
      }
    }
    if (local_b8 != local_c0) {
      plVar61 = local_c0;
      plVar62 = local_b8;
LAB_01f93c90:
      plVar43 = plVar61;
      if ((char)*plVar61 != '\0') {
        if ((char)plVar61[0x14] != '\0') {
          if (plVar61 + 0x30 == plVar62) {
            local_b8 = plVar62;
          }
          else {
            do {
              if ((char)*plVar43 == '\0') {
                if ((char)plVar43[0x30] != '\0') {
                  memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
                  *(char *)plVar43 = '\x01';
                }
              }
              else if ((char)plVar43[0x30] == '\0') {
                *(char *)plVar43 = '\0';
              }
              else {
                memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
              }
              plVar43[0x16] = plVar43[0x46];
              memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
              plVar43 = plVar43 + 0x30;
            } while (plVar62 + -0x30 != plVar43);
            if (local_b8 == plVar43) goto LAB_01f940e0;
          }
          plVar62 = local_b8 + -0x30;
          if ((char)*plVar62 != '\0') {
            *(char *)plVar62 = '\0';
          }
          while (plVar62 != plVar43) {
            plVar62 = plVar62 + -0x30;
            if ((char)*plVar62 != '\0') {
              *(char *)plVar62 = '\0';
            }
          }
          goto LAB_01f940e0;
        }
        if ((char)plVar61[7] != '\0') {
          if (plVar61 + 0x30 == plVar62) {
            local_b8 = plVar62;
          }
          else {
            do {
              if ((char)*plVar43 == '\0') {
                if ((char)plVar43[0x30] != '\0') {
                  memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
                  *(char *)plVar43 = '\x01';
                }
              }
              else if ((char)plVar43[0x30] == '\0') {
                *(char *)plVar43 = '\0';
              }
              else {
                memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
              }
              plVar43[0x16] = plVar43[0x46];
              memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
              plVar43 = plVar43 + 0x30;
            } while (plVar62 + -0x30 != plVar43);
            if (local_b8 == plVar43) goto LAB_01f940e0;
          }
          plVar62 = local_b8 + -0x30;
          if ((char)*plVar62 != '\0') {
            *(char *)plVar62 = '\0';
          }
          while (plVar62 != plVar43) {
            plVar62 = plVar62 + -0x30;
            if ((char)*plVar62 != '\0') {
              *(char *)plVar62 = '\0';
            }
          }
          goto LAB_01f940e0;
        }
        cVar34 = FUN_016ac110(plVar41,plVar61 + 0x16);
        plVar62 = plVar61;
        if (cVar34 == '\x01') {
          uStack_228 = 0;
          local_270 = (long *)0x0;
          local_240 = 0;
          uStack_238 = 0;
          local_248 = plVar61[0x19];
          local_250 = plVar61[0x18];
          pcStack_268 = (char *)plVar61[2];
          local_260[0] = (long *)plVar61[0x16];
          local_260[1] = (long *)plVar61[0x1a];
          local_230 = (ulong)*(uint *)(plVar61 + 0x1b);
          uVar44 = FUN_01f96468(param_1,&local_270,0);
          if ((uVar44 & 1) != 0) {
LAB_01f940ec:
            if (plVar43 == local_b8) goto LAB_01f9429c;
            if (plVar61 == plVar43) goto LAB_01f940e8;
            cVar34 = FUN_016ac110(plVar41,plVar43 + 0x16);
            if ((byte)(cVar34 + 1U) < 3) {
              iVar35 = *(int *)(&DAT_03a7d244 + (long)(char)(cVar34 + 1U) * 4);
            }
            else {
              iVar35 = 2;
            }
            auVar72 = *(undefined1 (*) [16])(plVar43 + 0x18);
            if ((float)plVar61[0x18] == auVar72._0_4_) {
              bVar32 = false;
              if (((float)((ulong)plVar61[0x18] >> 0x20) == auVar72._4_4_) &&
                 (bVar32 = false, !NAN((float)plVar61[0x19]) && !NAN(auVar72._8_4_))) {
                bVar32 = (float)plVar61[0x19] == auVar72._8_4_;
              }
              if ((((!bVar32) || ((char)plVar61[7] != '\0')) || (iVar35 != 1)) ||
                 ((char)plVar43[7] != '\0')) goto LAB_01f94178;
              if (plVar61 + 0x30 == local_b8) {
                local_b8 = plVar61 + 0x30;
                goto LAB_01f94484;
              }
              plVar43 = local_b8 + -0x30;
              do {
                if ((char)*plVar62 == '\0') {
                  if ((char)plVar62[0x30] != '\0') {
                    memcpy(plVar62 + 2,plVar62 + 0x32,0xa0);
                    *(char *)plVar62 = '\x01';
                  }
                }
                else if ((char)plVar62[0x30] == '\0') {
                  *(char *)plVar62 = '\0';
                }
                else {
                  memcpy(plVar62 + 2,plVar62 + 0x32,0x98);
                }
                plVar62[0x16] = plVar62[0x46];
                memcpy(plVar62 + 0x18,plVar62 + 0x48,0xc0);
                plVar62 = plVar62 + 0x30;
              } while (plVar43 != plVar62);
              if (local_b8 != plVar62) {
LAB_01f94484:
                plVar43 = local_b8 + -0x30;
                if ((char)*plVar43 != '\0') {
                  *(char *)plVar43 = '\0';
                }
                while (plVar43 != plVar62) {
                  plVar43 = plVar43 + -0x30;
                  if ((char)*plVar43 != '\0') {
                    *(char *)plVar43 = '\0';
                  }
                }
              }
            }
            else {
LAB_01f94178:
              if (((plVar61[0x1a] != plVar43[0x1a]) || ((char)plVar61[7] != '\0')) ||
                 ((iVar35 != 1 || ((char)plVar43[7] != '\0')))) goto LAB_01f940e8;
              if (plVar61 + 0x30 == local_b8) {
                local_b8 = plVar61 + 0x30;
              }
              else {
                plVar43 = local_b8 + -0x30;
                do {
                  if ((char)*plVar62 == '\0') {
                    if ((char)plVar62[0x30] != '\0') {
                      memcpy(plVar62 + 2,plVar62 + 0x32,0xa0);
                      *(char *)plVar62 = '\x01';
                    }
                  }
                  else if ((char)plVar62[0x30] == '\0') {
                    *(char *)plVar62 = '\0';
                  }
                  else {
                    memcpy(plVar62 + 2,plVar62 + 0x32,0x98);
                  }
                  plVar62[0x16] = plVar62[0x46];
                  memcpy(plVar62 + 0x18,plVar62 + 0x48,0xc0);
                  plVar62 = plVar62 + 0x30;
                } while (plVar43 != plVar62);
                if (local_b8 == plVar62) goto LAB_01f944b4;
              }
              plVar43 = local_b8 + -0x30;
              if ((char)*plVar43 != '\0') {
                *(char *)plVar43 = '\0';
              }
              while (plVar43 != plVar62) {
                plVar43 = plVar43 + -0x30;
                if ((char)*plVar43 != '\0') {
                  *(char *)plVar43 = '\0';
                }
              }
            }
            goto LAB_01f944b4;
          }
          plVar62 = plVar61 + 0x30;
          if (plVar62 == local_b8) {
            local_b8 = plVar61;
LAB_01f94238:
            plVar43 = plVar62 + -0x30;
            if ((char)*plVar43 != '\0') {
              *(char *)plVar43 = '\0';
            }
            if (plVar43 != local_b8) {
              do {
                if ((char)plVar62[-0x60] != '\0') {
                  *(char *)(plVar62 + -0x60) = '\0';
                }
                plVar62 = plVar62 + -0x30;
              } while (local_b8 + 0x30 != plVar62);
            }
            if (local_270 == (long *)0x0) goto LAB_01f94294;
            plVar62 = local_270 + 10;
            do {
              iVar35 = (int)*plVar62 + -1;
              cVar34 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar62,0x10);
              if (bVar32) {
                *(int *)plVar62 = iVar35;
                cVar34 = ExclusiveMonitorsStatus();
              }
            } while (cVar34 != '\0');
            if (iVar35 != 0) goto LAB_01f94294;
            (**(code **)(*local_270 + 0x10))();
            plVar43 = local_b8;
          }
          else {
            plVar62 = local_b8 + -0x30;
            do {
              if ((char)*plVar43 == '\0') {
                if ((char)plVar43[0x30] != '\0') {
                  memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
                  *(char *)plVar43 = '\x01';
                }
              }
              else if ((char)plVar43[0x30] == '\0') {
                *(char *)plVar43 = '\0';
              }
              else {
                memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
              }
              plVar43[0x16] = plVar43[0x46];
              memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
              plVar43 = plVar43 + 0x30;
            } while (plVar62 != plVar43);
            bVar32 = local_b8 != plVar43;
            plVar62 = local_b8;
            local_b8 = plVar43;
            if (bVar32) goto LAB_01f94238;
LAB_01f94294:
            plVar43 = local_b8;
          }
          goto LAB_01f944b8;
        }
        if (plVar61 + 0x30 == local_b8) {
          local_b8 = plVar61 + 0x30;
        }
        else {
          plVar43 = local_b8 + -0x30;
          do {
            if ((char)*plVar62 == '\0') {
              if ((char)plVar62[0x30] != '\0') {
                memcpy(plVar62 + 2,plVar62 + 0x32,0xa0);
                *(char *)plVar62 = '\x01';
              }
            }
            else if ((char)plVar62[0x30] == '\0') {
              *(char *)plVar62 = '\0';
            }
            else {
              memcpy(plVar62 + 2,plVar62 + 0x32,0x98);
            }
            plVar62[0x16] = plVar62[0x46];
            memcpy(plVar62 + 0x18,plVar62 + 0x48,0xc0);
            plVar62 = plVar62 + 0x30;
          } while (plVar43 != plVar62);
          if (local_b8 == plVar62) goto LAB_01f944b4;
        }
        plVar43 = local_b8 + -0x30;
        if ((char)*plVar43 != '\0') {
          *(char *)plVar43 = '\0';
        }
        while (plVar43 != plVar62) {
          plVar43 = plVar43 + -0x30;
          if ((char)*plVar43 != '\0') {
            *(char *)plVar43 = '\0';
          }
        }
        goto LAB_01f944b4;
      }
      if (plVar61 + 0x30 == plVar62) {
        local_b8 = plVar62;
      }
      else {
        do {
          if ((char)*plVar43 == '\0') {
            if ((char)plVar43[0x30] != '\0') {
              memcpy(plVar43 + 2,plVar43 + 0x32,0xa0);
              *(char *)plVar43 = '\x01';
            }
          }
          else if ((char)plVar43[0x30] == '\0') {
            *(char *)plVar43 = '\0';
          }
          else {
            memcpy(plVar43 + 2,plVar43 + 0x32,0x98);
          }
          plVar43[0x16] = plVar43[0x46];
          memcpy(plVar43 + 0x18,plVar43 + 0x48,0xc0);
          plVar43 = plVar43 + 0x30;
        } while (plVar62 + -0x30 != plVar43);
        if (local_b8 == plVar43) goto LAB_01f940e0;
      }
      plVar62 = local_b8 + -0x30;
      if ((char)*plVar62 != '\0') {
        *(char *)plVar62 = '\0';
      }
      while (plVar62 != plVar43) {
        plVar62 = plVar62 + -0x30;
        if ((char)*plVar62 != '\0') {
          *(char *)plVar62 = '\0';
        }
      }
LAB_01f940e0:
      local_b8 = plVar43;
      goto LAB_01f944b8;
    }
    plVar61 = local_b8;
    plVar43 = local_b8;
    goto LAB_01f944d0;
  }
LAB_01f94bd0:
  lVar50 = *(long *)(lVar47 + 8);
  piVar1 = (int *)(lVar50 + 0xc);
  do {
    iVar35 = *piVar1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar35 + -1;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 + -1 == 0) {
    *(undefined8 *)(lVar50 + 0x18) = 0;
    (**(code **)(*(long *)(lVar47 + -0x50) + 0x20))();
  }
LAB_01f94c04:
  if (plVar41 != (long *)0x0) {
    plVar61 = plVar41 + 10;
    do {
      iVar35 = (int)*plVar61 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar61,0x10);
      if (bVar32) {
        *(int *)plVar61 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar41 + 0x10))();
    }
  }
  if (plVar49 != (long *)0x0) {
    plVar41 = plVar49 + 10;
    do {
      iVar35 = (int)*plVar41 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar49 + 0x10))();
    }
  }
  if (plVar46 != (long *)0x0) {
    plVar41 = plVar46 + 10;
    do {
      iVar35 = (int)*plVar41 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar32) {
        *(int *)plVar41 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar46 + 0x10))();
    }
  }
  if (plVar48 != (long *)0x0) {
    lVar47 = plVar48[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*plVar48 + 0x20))();
    }
  }
  plVar48 = (long *)param_1[0x17];
  plVar46 = (long *)param_1[0x18];
  if (plVar48 != plVar46) {
    if ((*plVar48 != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
      FUN_01f94f5c(param_1,plVar48);
      FUN_01f95e38(param_1,plVar48);
      fVar63 = (float)plVar48[4] + *(float *)(plVar48 + 6);
      fVar64 = (float)((ulong)plVar48[4] >> 0x20) + *(float *)((long)plVar48 + 0x34);
      fVar66 = (float)plVar48[5] + *(float *)(plVar48 + 7);
      fVar68 = (float)((ulong)plVar48[5] >> 0x20) + *(float *)((long)plVar48 + 0x3c);
      pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
      local_270 = (long *)CONCAT44(fVar64,fVar63);
      fVar63 = *(float *)(param_1 + 0x32) - fVar63;
      fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
      fVar66 = *(float *)(param_1 + 0x33) - fVar66;
      fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
      fVar63 = fVar63 * fVar63;
      fVar64 = fVar64 * fVar64;
      fVar66 = fVar66 * fVar66;
      fVar68 = fVar68 * fVar68;
      auVar6._4_4_ = fVar64;
      auVar6._0_4_ = fVar63;
      auVar6._8_4_ = fVar66;
      auVar6._12_4_ = fVar68;
      auVar7._4_4_ = fVar64;
      auVar7._0_4_ = fVar63;
      auVar7._8_4_ = fVar66;
      auVar7._12_4_ = fVar68;
      auVar72 = NEON_ext(auVar6,auVar7,8,1);
      FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),*plVar48,&local_270);
    }
    plVar41 = plVar48 + 10;
    if (plVar41 != plVar46) {
      if ((*plVar41 != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
        FUN_01f94f5c(param_1,plVar41);
        FUN_01f95e38(param_1,plVar41);
        fVar63 = (float)plVar48[0xe] + *(float *)(plVar48 + 0x10);
        fVar64 = (float)((ulong)plVar48[0xe] >> 0x20) + *(float *)((long)plVar48 + 0x84);
        fVar66 = (float)plVar48[0xf] + *(float *)(plVar48 + 0x11);
        fVar68 = (float)((ulong)plVar48[0xf] >> 0x20) + *(float *)((long)plVar48 + 0x8c);
        pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
        local_270 = (long *)CONCAT44(fVar64,fVar63);
        fVar63 = *(float *)(param_1 + 0x32) - fVar63;
        fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
        fVar66 = *(float *)(param_1 + 0x33) - fVar66;
        fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
        fVar63 = fVar63 * fVar63;
        fVar64 = fVar64 * fVar64;
        fVar66 = fVar66 * fVar66;
        fVar68 = fVar68 * fVar68;
        auVar8._4_4_ = fVar64;
        auVar8._0_4_ = fVar63;
        auVar8._8_4_ = fVar66;
        auVar8._12_4_ = fVar68;
        auVar9._4_4_ = fVar64;
        auVar9._0_4_ = fVar63;
        auVar9._8_4_ = fVar66;
        auVar9._12_4_ = fVar68;
        auVar72 = NEON_ext(auVar8,auVar9,8,1);
        FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),plVar48[10],&local_270);
      }
      plVar41 = plVar48 + 0x14;
      if (plVar41 != plVar46) {
        if ((*plVar41 != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
          FUN_01f94f5c(param_1,plVar41);
          FUN_01f95e38(param_1,plVar41);
          fVar63 = (float)plVar48[0x18] + *(float *)(plVar48 + 0x1a);
          fVar64 = (float)((ulong)plVar48[0x18] >> 0x20) + *(float *)((long)plVar48 + 0xd4);
          fVar66 = (float)plVar48[0x19] + *(float *)(plVar48 + 0x1b);
          fVar68 = (float)((ulong)plVar48[0x19] >> 0x20) + *(float *)((long)plVar48 + 0xdc);
          pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
          local_270 = (long *)CONCAT44(fVar64,fVar63);
          fVar63 = *(float *)(param_1 + 0x32) - fVar63;
          fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
          fVar66 = *(float *)(param_1 + 0x33) - fVar66;
          fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
          fVar63 = fVar63 * fVar63;
          fVar64 = fVar64 * fVar64;
          fVar66 = fVar66 * fVar66;
          fVar68 = fVar68 * fVar68;
          auVar10._4_4_ = fVar64;
          auVar10._0_4_ = fVar63;
          auVar10._8_4_ = fVar66;
          auVar10._12_4_ = fVar68;
          auVar11._4_4_ = fVar64;
          auVar11._0_4_ = fVar63;
          auVar11._8_4_ = fVar66;
          auVar11._12_4_ = fVar68;
          auVar72 = NEON_ext(auVar10,auVar11,8,1);
          FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),plVar48[0x14],
                       &local_270);
        }
        for (plVar48 = plVar48 + 0x1e; plVar48 != plVar46; plVar48 = plVar48 + 10) {
          if ((*plVar48 != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
            FUN_01f94f5c(param_1,plVar48);
            FUN_01f95e38(param_1,plVar48);
            fVar63 = (float)plVar48[4] + *(float *)(plVar48 + 6);
            fVar64 = (float)((ulong)plVar48[4] >> 0x20) + *(float *)((long)plVar48 + 0x34);
            fVar66 = (float)plVar48[5] + *(float *)(plVar48 + 7);
            fVar68 = (float)((ulong)plVar48[5] >> 0x20) + *(float *)((long)plVar48 + 0x3c);
            pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
            local_270 = (long *)CONCAT44(fVar64,fVar63);
            fVar63 = *(float *)(param_1 + 0x32) - fVar63;
            fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
            fVar66 = *(float *)(param_1 + 0x33) - fVar66;
            fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
            fVar63 = fVar63 * fVar63;
            fVar64 = fVar64 * fVar64;
            fVar66 = fVar66 * fVar66;
            fVar68 = fVar68 * fVar68;
            auVar12._4_4_ = fVar64;
            auVar12._0_4_ = fVar63;
            auVar12._8_4_ = fVar66;
            auVar12._12_4_ = fVar68;
            auVar13._4_4_ = fVar64;
            auVar13._0_4_ = fVar63;
            auVar13._8_4_ = fVar66;
            auVar13._12_4_ = fVar68;
            auVar72 = NEON_ext(auVar12,auVar13,8,1);
            FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),*plVar48,&local_270);
          }
        }
      }
    }
  }
  if ((param_1[0x26] != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
    fVar63 = (float)param_1[0x2a] + *(float *)(param_1 + 0x2c);
    fVar64 = (float)((ulong)param_1[0x2a] >> 0x20) + *(float *)((long)param_1 + 0x164);
    fVar66 = (float)param_1[0x2b] + *(float *)(param_1 + 0x2d);
    fVar68 = (float)((ulong)param_1[0x2b] >> 0x20) + *(float *)((long)param_1 + 0x16c);
    pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
    local_270 = (long *)CONCAT44(fVar64,fVar63);
    fVar63 = *(float *)(param_1 + 0x32) - fVar63;
    fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
    fVar66 = *(float *)(param_1 + 0x33) - fVar66;
    fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
    fVar63 = fVar63 * fVar63;
    fVar64 = fVar64 * fVar64;
    fVar66 = fVar66 * fVar66;
    fVar68 = fVar68 * fVar68;
    auVar14._4_4_ = fVar64;
    auVar14._0_4_ = fVar63;
    auVar14._8_4_ = fVar66;
    auVar14._12_4_ = fVar68;
    auVar15._4_4_ = fVar64;
    auVar15._0_4_ = fVar63;
    auVar15._8_4_ = fVar66;
    auVar15._12_4_ = fVar68;
    auVar72 = NEON_ext(auVar14,auVar15,8,1);
    FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),param_1[0x26],&local_270);
  }
  plVar46 = (long *)param_1[0x1f];
  for (plVar48 = (long *)param_1[0x1e]; plVar48 != plVar46; plVar48 = plVar48 + 10) {
    if ((*plVar48 != 0) && (uVar44 = FUN_014614a8(), (uVar44 & 1) != 0)) {
      FUN_01f94f5c(param_1,plVar48);
      FUN_01f95e38(param_1,plVar48);
      fVar63 = (float)plVar48[4] + *(float *)(plVar48 + 6);
      fVar64 = (float)((ulong)plVar48[4] >> 0x20) + *(float *)((long)plVar48 + 0x34);
      fVar66 = (float)plVar48[5] + *(float *)(plVar48 + 7);
      fVar68 = (float)((ulong)plVar48[5] >> 0x20) + *(float *)((long)plVar48 + 0x3c);
      pcStack_268 = (char *)CONCAT44(fVar68,fVar66);
      local_270 = (long *)CONCAT44(fVar64,fVar63);
      fVar63 = *(float *)(param_1 + 0x32) - fVar63;
      fVar64 = *(float *)((long)param_1 + 0x194) - fVar64;
      fVar66 = *(float *)(param_1 + 0x33) - fVar66;
      fVar68 = *(float *)((long)param_1 + 0x19c) - fVar68;
      fVar63 = fVar63 * fVar63;
      fVar64 = fVar64 * fVar64;
      fVar66 = fVar66 * fVar66;
      fVar68 = fVar68 * fVar68;
      auVar16._4_4_ = fVar64;
      auVar16._0_4_ = fVar63;
      auVar16._8_4_ = fVar66;
      auVar16._12_4_ = fVar68;
      auVar17._4_4_ = fVar64;
      auVar17._0_4_ = fVar63;
      auVar17._8_4_ = fVar66;
      auVar17._12_4_ = fVar68;
      auVar72 = NEON_ext(auVar16,auVar17,8,1);
      FUN_014624fc(SQRT(auVar72._0_4_ + fVar63 + auVar72._4_4_ + fVar64),*plVar48,&local_270);
    }
  }
LAB_01f91370:
  if (local_278 != (long *)0x0) {
    lVar47 = local_278[0xb];
    piVar1 = (int *)(lVar47 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar47 + 0x18) = 0;
      (**(code **)(*local_278 + 0x20))();
    }
  }
LAB_01f91394:
  lVar47 = *(long *)((long)local_280 + 0x58);
  piVar1 = (int *)(lVar47 + 0xc);
  do {
    iVar35 = *piVar1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar35 + -1;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 + -1 == 0) {
    *(undefined8 *)(lVar47 + 0x18) = 0;
    (**(code **)(*local_280 + 0x20))();
  }
LAB_01f910fc:
  lVar58 = *(long *)(lVar58 + 8);
  piVar1 = (int *)(lVar58 + 0xc);
  do {
    iVar35 = *piVar1;
    cVar34 = '\x01';
    bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar32) {
      *piVar1 = iVar35 + -1;
      cVar34 = ExclusiveMonitorsStatus();
    }
  } while (cVar34 != '\0');
  if (iVar35 + -1 == 0) {
    *(undefined8 *)(lVar58 + 0x18) = 0;
    (**(code **)(*plVar40 + 0x20))();
  }
joined_r0x01f91130:
  if (plVar39 != (long *)0x0) {
    plVar40 = plVar39 + 10;
    do {
      iVar35 = (int)*plVar40 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar32) {
        *(int *)plVar40 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
    }
  }
  if (plVar59 != (long *)0x0) {
    plVar39 = plVar59 + 10;
    do {
      iVar35 = (int)*plVar39 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar32) {
        *(int *)plVar39 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar59 + 0x10))(plVar59);
    }
  }
  if (plVar57 != (long *)0x0) {
    plVar39 = plVar57 + 10;
    do {
      iVar35 = (int)*plVar39 + -1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar32) {
        *(int *)plVar39 = iVar35;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 == 0) {
      (**(code **)(*plVar57 + 0x10))(plVar57);
    }
  }
  if (plVar56 != (long *)0x0) {
    lVar58 = plVar56[0xb];
    piVar1 = (int *)(lVar58 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar58 + 0x18) = 0;
      (**(code **)(*plVar56 + 0x20))(plVar56);
    }
  }
  if (plVar55 != (long *)0x0) {
    lVar58 = plVar55[0xb];
    piVar1 = (int *)(lVar58 + 0xc);
    do {
      iVar35 = *piVar1;
      cVar34 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar32) {
        *piVar1 = iVar35 + -1;
        cVar34 = ExclusiveMonitorsStatus();
      }
    } while (cVar34 != '\0');
    if (iVar35 + -1 == 0) {
      *(undefined8 *)(lVar58 + 0x18) = 0;
      (**(code **)(*plVar55 + 0x20))(plVar55);
    }
  }
  return;
}


