/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f677a4; name: FUN_01f677a4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f677a4(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint *puVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  long *local_368;
  undefined8 local_360;
  long *local_358;
  long *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  long *local_308;
  long *local_300;
  long *local_2f8;
  long *local_2f0;
  ulong local_2e8;
  long lStack_2e0;
  long local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [96];
  undefined8 local_230;
  long *local_228;
  long *local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [96];
  long *local_1a0;
  long *local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [96];
  long *local_100;
  code *local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_00ca554c(&local_228);
  if (local_228 == (long *)0x0) {
    return;
  }
  lVar16 = FUN_018b3dd0(local_228,&DAT_cbf29ce484222645);
  puVar11 = PTR_LAB_0437a720;
  puVar10 = PTR_DAT_04379628;
  puVar9 = PTR_DAT_04379620;
  puVar8 = PTR_DAT_04379618;
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar20 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
  uVar28 = (ulong)*puVar20 << 2;
  uVar22 = (ulong)*puVar20;
  while (uVar22 != 0) {
    puVar20 = puVar20 + 1;
    uVar4 = *puVar20;
    if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
      FUN_00100250(puVar11,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar8);
    }
    lVar16 = *(long *)puVar9;
    *(long *)puVar10 = lVar16;
    local_230 = 0;
    FUN_01f6d130(param_1,*(undefined8 *)(lVar16 + 0x100),(long)puVar20 + (ulong)uVar4,&local_230,0);
    uVar28 = uVar28 - 4;
    uVar22 = uVar28;
  }
  lVar16 = FUN_018b4864(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      local_2b0 = &LAB_01f7c634;
      local_2a8 = FUN_01f7c654;
      piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
      local_2a0 = &LAB_01f7c658;
      puStack_298 = &LAB_01f7c65c;
      if (((*(ushort *)((long)piVar29 - (long)*piVar29) < 9) ||
          (uVar28 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[4], uVar28 == 0)) ||
         (*(undefined1 **)((long)piVar29 + uVar28) != &DAT_cbf29ce484222645)) {
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
        FUN_017e9e98(&local_100);
        if (local_100 == (long *)0x0) goto LAB_01f698e4;
        lVar16 = local_100[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        lVar27 = local_100[0x23];
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
        local_180 = (long *)0x0;
        FUN_01f795bc(param_1,lVar27,piVar29,&local_180,0);
        pcVar21 = local_2a8;
        if (local_2a8 != (code *)0x0) goto LAB_01f6795c;
      }
      else {
        pcVar21 = FUN_01f7c654;
LAB_01f6795c:
        local_2a0 = (undefined1 *)0x0;
        puStack_298 = (undefined1 *)0x0;
        local_2b0 = (undefined1 *)0x0;
        local_2a8 = (code *)0x0;
        (*pcVar21)(auStack_290);
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b4e94(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x28];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_2b8 = 0;
      FUN_01f6dbe8(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_2b8);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b51ac(local_228,&DAT_cbf29ce484222645);
  puVar8 = PTR_DAT_043794d0;
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
LAB_01f67b48:
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar1 = (int *)((long)puVar20 + (ulong)uVar4);
      piVar29 = (int *)(lVar16 + 0xc);
      plVar24 = (long *)local_100[0x2d];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_188 = plVar24;
      if (*(long *)(param_1 + 0x88) == 0) {
        local_190 = (long *)0x0;
        goto LAB_01f67b98;
      }
      FUN_017e9e98(&local_190);
      if (local_190 == (long *)0x0) goto LAB_01f67b98;
      if (*(long *)(param_1 + 0x68) == 0) {
        local_350 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f68754;
      }
      FUN_009acf14(&local_198);
      if (local_198 == (long *)0x0) {
        local_350 = (long *)0x0;
        goto joined_r0x01f68754;
      }
      if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar28 != 0)) {
        local_350 = *(long **)((long)piVar1 + uVar28);
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f68500;
LAB_01f68428:
        local_350 = (long *)0x0;
        local_1a0 = (long *)0x0;
        goto joined_r0x01f68774;
      }
      local_350 = (long *)0x0;
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f68428;
LAB_01f68500:
      FUN_009acf14(&local_1a0);
      if (local_1a0 == (long *)0x0) {
        local_350 = (long *)0x0;
        goto joined_r0x01f68774;
      }
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      FUN_00b645bc(&local_100,local_1a0 + 0xd);
      plVar24 = local_100;
      if (local_100 == (long *)0x0) {
LAB_01f68920:
        local_350 = (long *)0x0;
        goto joined_r0x01f68928;
      }
      if (*(int *)((long)local_100 + 0xc) != 0) {
        piVar29 = (int *)((long)local_100 + 0xc);
        iVar15 = *(int *)((long)local_100 + 0xc);
        do {
          plVar17 = (long *)plVar24[2];
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar14 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01f68618;
            if (plVar17 == (long *)PTR_DAT_0437a0f0) break;
            plVar17 = (long *)*plVar17;
          }
          iVar14 = *piVar29;
          if (iVar14 == iVar15) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar13) {
              *piVar29 = iVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar16 = plVar24[3];
              local_358 = (long *)0x0;
              plVar24 = local_100;
              if (lVar16 != 0) {
                local_358 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x01f68798;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar15 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01f68618:
      local_358 = (long *)0x0;
      plVar24 = local_100;
joined_r0x01f68798:
      local_100 = plVar24;
      if (plVar24 != (long *)0x0) {
        plVar17 = plVar24 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar13) {
            *(int *)plVar17 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          plVar24[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_180 = (long *)*plVar24;
          FUN_02a44274(lVar16 + 0xd8,&local_180);
        }
      }
      if (local_358 == (long *)0x0) goto LAB_01f68920;
      uVar28 = FUN_01845504(local_358,local_350);
      if ((uVar28 & 1) != 0) {
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
          local_100 = (long *)0x0;
        }
        else {
          uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
          local_100 = (long *)0x0;
          if (uVar28 != 0) {
            puVar3 = (uint *)((long)piVar1 + uVar28);
            local_100 = (long *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
        (**(code **)(*local_180 + 0x18))(&local_100);
        if ((char)local_100 == '\0') {
          FUN_01847304(local_358,local_350);
          if ((char)local_100 != '\0') goto LAB_01f68d88;
        }
        else {
LAB_01f68d88:
          local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
        }
        plVar24 = local_180;
        local_180 = (long *)0x0;
        if (plVar24 != (long *)0x0) {
          FUN_02bcbe58(&local_100,0);
          (**(code **)(*plVar24 + 8))(plVar24);
          uVar19 = local_168;
          uVar18 = local_170;
          pcVar21 = local_178;
          uVar28 = (**(code **)(*(long *)local_178 + 0xc0))();
          lVar16 = tpidr_el0;
          if ((uVar28 & 1) == 0) {
LAB_01f68ff4:
            (**(code **)(*(long *)pcVar21 + 0x18))(pcVar21,plVar24,uVar18,uVar19);
          }
          else {
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f68ff4;
            FUN_02bcc824(pcVar21,plVar24,uVar18,uVar19);
          }
          if (*(char *)(lVar16 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar16 + 0x38d488) = 1;
            *(undefined8 *)(lVar16 + 0x38d478) = 0;
            *(undefined8 *)(lVar16 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
          *(int *)(lVar16 + 0x38d480) = iVar15;
          if (iVar15 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar16 + 0x38d484) = 0;
          }
        }
        local_350 = (long *)0x0;
        goto LAB_01f69860;
      }
      plVar24 = (long *)FUN_01f7c660(local_188,piVar1,&local_188);
      if (plVar24 != (long *)0x0) {
        lVar16 = plVar24[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar18;
        }
        piVar29 = (int *)(lVar16 + 0xc);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = *piVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((char)plVar24[0x16] == '\0') {
        local_350 = (long *)0x0;
        if (plVar24 == (long *)0x0) goto LAB_01f69860;
        goto LAB_01f6982c;
      }
      local_220 = (long *)0x0;
      local_218 = (code *)0x0;
      local_210 = 0;
      uStack_208 = 0;
      lVar16 = local_1a0[0xf];
      local_168 = 0;
      local_170 = 0;
      local_178 = (code *)0x0;
      local_180 = (long *)0x0;
      if (*(char *)(lVar16 + 0x162) != '\0') goto LAB_01f691c4;
      uVar28 = *(ulong *)(lVar16 + 0x70);
      if (uVar28 != 0) {
        uVar22 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
        uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar22 < 2) {
          uVar23 = (ulong)((uint)uVar28 - 1) & 0xb;
        }
        else if (uVar28 < 0xc) {
          uVar4 = (uint)uVar28 & 0xff;
          uVar6 = 0;
          if ((uVar28 & 0xff) != 0) {
            uVar6 = 0xb / uVar4;
          }
          uVar23 = (ulong)(0xb - uVar6 * uVar4);
        }
        else {
          uVar23 = 0xb;
        }
        plVar17 = *(long **)(*(long *)(lVar16 + 0x68) + uVar23 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if (uVar22 < 2) {
            do {
              if (plVar17[1] == 0xb) {
                if ((int)plVar17[2] == 0xb) goto LAB_01f69138;
              }
              else if ((plVar17[1] & uVar28 - 1) != uVar23) goto LAB_01f698d4;
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_01f698d4;
            } while( true );
          }
          do {
            uVar22 = plVar17[1];
            if (uVar22 == 0xb) {
              if ((int)plVar17[2] == 0xb) goto LAB_01f69138;
            }
            else {
              if (uVar28 <= uVar22) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar22 / uVar28;
                }
                uVar22 = uVar22 - uVar7 * uVar28;
              }
              if (uVar22 != uVar23) break;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_01f698d4;
    }
    goto LAB_01f698d8;
  }
LAB_01f67ba4:
  lVar16 = FUN_018b57dc(local_228,&DAT_cbf29ce484222645);
  puVar9 = PTR_DAT_0437a0e8;
  puVar8 = PTR_DAT_043794d0;
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar1 = (int *)((long)puVar20 + (ulong)uVar4);
      piVar29 = (int *)(lVar16 + 0xc);
      plVar24 = (long *)local_100[0x32];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f67c58;
LAB_01f67ff0:
        FUN_017e9e98(&local_220);
        if (local_220 != (long *)0x0) {
          if (*(long *)(param_1 + 0x68) == 0) {
            plVar24 = (long *)0x0;
            local_308 = (long *)0x0;
          }
          else {
            FUN_009acf14(&local_308);
            if (local_308 == (long *)0x0) {
              plVar24 = (long *)0x0;
            }
            else {
              if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
                 (uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar28 == 0)) {
                local_350 = (long *)0x0;
                if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f684ac;
LAB_01f68634:
                FUN_009acf14(&local_188);
                if (local_188 == (long *)0x0) {
                  plVar24 = (long *)0x0;
                }
                else {
                  local_100 = (long *)0x0;
                  local_f8 = (code *)0x0;
                  FUN_00b645bc(&local_100,local_188 + 0xd);
                  plVar17 = local_100;
                  if (local_100 == (long *)0x0) {
LAB_01f68c08:
                    plVar24 = (long *)0x0;
                  }
                  else {
                    if (*(int *)((long)local_100 + 0xc) != 0) {
                      piVar29 = (int *)((long)local_100 + 0xc);
                      iVar15 = *(int *)((long)local_100 + 0xc);
                      do {
                        plVar26 = (long *)plVar17[2];
                        if (((*puVar9 & 1) == 0) &&
                           (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                          if (((*puVar8 & 1) == 0) &&
                             (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                            uVar18 = FUN_0087f8f0();
                            *(undefined8 *)PTR_DAT_043794d8 = uVar18;
                            __cxa_guard_release(puVar8);
                          }
                          *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
                          __cxa_guard_release(puVar9);
                        }
                        while( true ) {
                          if (plVar26 == (long *)0x0) goto LAB_01f6873c;
                          if (plVar26 == (long *)PTR_DAT_0437a0f0) break;
                          plVar26 = (long *)*plVar26;
                        }
                        iVar14 = *piVar29;
                        if (iVar14 == iVar15) {
                          cVar5 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                          if (bVar13) {
                            *piVar29 = iVar15 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          if (cVar5 == '\0') {
                            lVar16 = plVar17[3];
                            local_358 = (long *)0x0;
                            plVar17 = local_100;
                            if (lVar16 != 0) {
                              local_358 = (long *)(lVar16 + -0x50);
                            }
                            goto joined_r0x01f6895c;
                          }
                        }
                        else {
                          ClearExclusiveLocal();
                        }
                        iVar15 = iVar14;
                      } while (iVar14 != 0);
                    }
LAB_01f6873c:
                    local_358 = (long *)0x0;
                    plVar17 = local_100;
joined_r0x01f6895c:
                    local_100 = plVar17;
                    if (plVar17 != (long *)0x0) {
                      plVar26 = plVar17 + 1;
                      do {
                        iVar15 = (int)*plVar26 + -1;
                        cVar5 = '\x01';
                        bVar13 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                        if (bVar13) {
                          *(int *)plVar26 = iVar15;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar15 == 0) {
                        plVar17[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar16 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar16;
                        local_180 = (long *)*plVar17;
                        FUN_02a44274(lVar16 + 0xd8,&local_180);
                      }
                    }
                    if (local_358 == (long *)0x0) goto LAB_01f68c08;
                    uVar28 = FUN_01845504(local_358,local_350);
                    if ((uVar28 & 1) == 0) {
                      local_190 = (long *)0x0;
                      if (((*PTR_DAT_04379520 & 1) == 0) &&
                         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528
                         , iVar15 != 0)) {
                        FUN_008a62a4(PTR_DAT_04379528);
                        FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379520);
                      }
                      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01f6cbd4;
                      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
                      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
                      plVar17 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x100,0x10);
                      if (plVar17 == (long *)0x0) {
                        (**(code **)(*plVar24 + 0xb8))(plVar24);
                      }
                      FUN_01ce6d0c(plVar17,piVar1,plVar24);
                      plVar17[1] = (long)plVar24;
                      plVar17[2] = (long)plVar17;
                      plVar17[3] = 0x100;
                      plVar17[4] = 0x10;
                      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
                      if (plVar17 != (long *)0x0) {
                        lVar16 = plVar17[0xb];
                        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
                        if (*(long *)(lVar16 + 0x10) == 0) {
                          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                          *(undefined8 *)(lVar16 + 0x10) = uVar18;
                        }
                        piVar29 = (int *)(lVar16 + 0xc);
                        do {
                          cVar5 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                          if (bVar13) {
                            *piVar29 = *piVar29 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                      }
                      plVar24 = local_190;
                      local_190 = (long *)0x0;
                      if (plVar24 != (long *)0x0) {
                        lVar16 = plVar24[0xb];
                        piVar29 = (int *)(lVar16 + 0xc);
                        do {
                          iVar15 = *piVar29;
                          cVar5 = '\x01';
                          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                          if (bVar13) {
                            *piVar29 = iVar15 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar15 + -1 == 0) {
                          *(undefined8 *)(lVar16 + 0x18) = 0;
                          (**(code **)(*plVar24 + 0x20))();
                        }
                      }
                      local_190 = plVar17;
                      if ((char)plVar17[0x16] == '\0') {
                        plVar24 = (long *)0x0;
                      }
                      else {
                        local_178 = (code *)0x0;
                        local_180 = (long *)0x0;
                        local_168 = 0;
                        local_170 = 0;
                        local_f0 = 0;
                        local_e8 = 0;
                        local_100 = (long *)0x0;
                        local_f8 = (code *)0x0;
                        FUN_01c61f24(&local_198,local_188[0xf],0xd,&local_190,&local_100,1);
                        pcVar21 = local_f8;
                        if (local_f8 != (code *)0x0) {
                          local_f0 = 0;
                          local_e8 = 0;
                          local_100 = (long *)0x0;
                          local_f8 = (code *)0x0;
                          (*pcVar21)(&local_e0);
                        }
                        pcVar21 = local_178;
                        plVar24 = local_198;
                        local_198 = (long *)0x0;
                        if (local_178 != (code *)0x0) {
                          local_168 = 0;
                          local_170 = 0;
                          local_178 = (code *)0x0;
                          local_180 = (long *)0x0;
                          (*pcVar21)(auStack_160);
                        }
                        if (local_190 == (long *)0x0) goto LAB_01f69314;
                      }
                      lVar16 = local_190[0xb];
                      piVar29 = (int *)(lVar16 + 0xc);
                      do {
                        iVar15 = *piVar29;
                        cVar5 = '\x01';
                        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                        if (bVar13) {
                          *piVar29 = iVar15 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar15 + -1 == 0) {
                        *(undefined8 *)(lVar16 + 0x18) = 0;
                        (**(code **)(*local_190 + 0x20))();
                      }
                    }
                    else {
                      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) {
                        local_100 = (long *)0x0;
                      }
                      else {
                        uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
                        local_100 = (long *)0x0;
                        if (uVar28 != 0) {
                          puVar3 = (uint *)((long)piVar1 + uVar28);
                          local_100 = (long *)((long)puVar3 + (ulong)*puVar3);
                        }
                      }
                      FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
                      (**(code **)(*local_180 + 0x18))(&local_100);
                      if ((char)local_100 == '\0') {
                        FUN_01847304(local_358,local_350);
                        if ((char)local_100 != '\0') goto LAB_01f68ef8;
                      }
                      else {
LAB_01f68ef8:
                        local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
                      }
                      plVar24 = local_180;
                      local_180 = (long *)0x0;
                      if (plVar24 != (long *)0x0) {
                        FUN_02bcbe58(&local_100,0);
                        (**(code **)(*plVar24 + 8))(plVar24);
                        uVar19 = local_168;
                        uVar18 = local_170;
                        pcVar21 = local_178;
                        uVar28 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
                        if ((uVar28 & 1) == 0) {
LAB_01f691d4:
                          (**(code **)(*(long *)pcVar21 + 0x18))(pcVar21,plVar24,uVar18,uVar19);
                        }
                        else {
                          lVar16 = tpidr_el0;
                          if (*(char *)(lVar16 + 0x38d488) == '\0') {
                            *(undefined1 *)(lVar16 + 0x38d488) = 1;
                            *(undefined8 *)(lVar16 + 0x38d478) = 0;
                            *(undefined8 *)(lVar16 + 0x38d480) = 0;
                            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                          }
                          if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f691d4;
                          FUN_02bcc824(pcVar21,plVar24,uVar18,uVar19);
                        }
                        lVar16 = tpidr_el0;
                        if (*(char *)(lVar16 + 0x38d488) == '\0') {
                          *(undefined1 *)(lVar16 + 0x38d488) = 1;
                          *(undefined8 *)(lVar16 + 0x38d478) = 0;
                          *(undefined8 *)(lVar16 + 0x38d480) = 0;
                          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                        }
                        iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
                        *(int *)(lVar16 + 0x38d480) = iVar15;
                        if (iVar15 == 0) {
                          FUN_02bcc320();
                          if (*(char *)(lVar16 + 0x38d488) == '\0') {
                            *(undefined1 *)(lVar16 + 0x38d488) = 1;
                            *(undefined8 *)(lVar16 + 0x38d478) = 0;
                            *(undefined8 *)(lVar16 + 0x38d480) = 0;
                            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
                          }
                          *(undefined4 *)(lVar16 + 0x38d484) = 0;
                        }
                      }
                      plVar24 = (long *)0x0;
                    }
LAB_01f69314:
                    lVar16 = local_358[0xb];
                    piVar29 = (int *)(lVar16 + 0xc);
                    do {
                      iVar15 = *piVar29;
                      cVar5 = '\x01';
                      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                      if (bVar13) {
                        *piVar29 = iVar15 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar15 + -1 == 0) {
                      *(undefined8 *)(lVar16 + 0x18) = 0;
                      (**(code **)(*local_358 + 0x20))();
                    }
                  }
                  if (local_188 != (long *)0x0) {
                    lVar16 = local_188[0xb];
                    piVar29 = (int *)(lVar16 + 0xc);
                    do {
                      iVar15 = *piVar29;
                      cVar5 = '\x01';
                      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                      if (bVar13) {
                        *piVar29 = iVar15 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar15 + -1 == 0) {
                      *(undefined8 *)(lVar16 + 0x18) = 0;
                      (**(code **)(*local_188 + 0x20))();
                    }
                  }
                }
              }
              else {
                local_350 = *(long **)((long)piVar1 + uVar28);
                if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f68634;
LAB_01f684ac:
                plVar24 = (long *)0x0;
                local_188 = (long *)0x0;
              }
              if (local_308 != (long *)0x0) {
                lVar16 = local_308[0xb];
                piVar29 = (int *)(lVar16 + 0xc);
                do {
                  iVar15 = *piVar29;
                  cVar5 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                  if (bVar13) {
                    *piVar29 = iVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*local_308 + 0x20))();
                }
              }
            }
          }
          if (local_220 != (long *)0x0) {
            lVar16 = *(long *)((long)local_220 + 0x58);
            piVar29 = (int *)(lVar16 + 0xc);
            do {
              iVar15 = *piVar29;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_220 + 0x20))();
            }
          }
          if (plVar24 != (long *)0x0) {
            lVar16 = *(long *)((long)plVar24 + 0x58);
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar18;
            }
            piVar29 = (int *)(lVar16 + 0xc);
            do {
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = *piVar29 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar18 = *(undefined8 *)(param_1 + 0x98);
            lVar16 = *(long *)((long)plVar24 + 0x58);
            local_100 = plVar24;
            if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
            if (*(long *)(lVar16 + 0x10) == 0) {
              uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              *(undefined8 *)(lVar16 + 0x10) = uVar19;
            }
            piVar29 = (int *)(lVar16 + 0xc);
            do {
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = *piVar29 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            FUN_01cbc9e0(uVar18,&local_100,0);
            if (local_100 != (long *)0x0) {
              lVar16 = local_100[0xb];
              piVar29 = (int *)(lVar16 + 0xc);
              do {
                iVar15 = *piVar29;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                if (bVar13) {
                  *piVar29 = iVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_100 + 0x20))();
              }
            }
            lVar16 = *(long *)((long)plVar24 + 0x58);
            piVar29 = (int *)(lVar16 + 0xc);
            do {
              iVar15 = *piVar29;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
            lVar16 = *(long *)((long)plVar24 + 0x58);
            piVar29 = (int *)(lVar16 + 0xc);
            do {
              iVar15 = *piVar29;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
              if (bVar13) {
                *piVar29 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
            }
          }
        }
      }
      else {
        if (*(long *)(param_1 + 0x88) != 0) goto LAB_01f67ff0;
LAB_01f67c58:
        local_220 = (long *)0x0;
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b6754(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x3c];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_2c0 = 0;
      FUN_01f6e63c(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_2c0);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b6a6c(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x8c];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_2c8 = 0;
      FUN_01f6f54c(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_2c8);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b5e0c(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x41];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_2d0 = 0;
      FUN_01f70458(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_2d0);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  plVar17 = (long *)FUN_018b40f0(local_228);
  local_308 = (long *)0x0;
  local_300 = (long *)0x0;
  local_2f0 = (long *)plVar17[3];
  local_2e8 = plVar17[4];
  lStack_2e0 = plVar17[5];
  local_2d8 = plVar17[6];
  local_2f8 = (long *)0x0;
  lVar16 = plVar17[1] - *plVar17;
  plVar24 = local_300;
  if (lVar16 == 0) {
joined_r0x01f699b4:
    local_308 = plVar24;
    if (plVar24 != (long *)0x0) goto LAB_01f699b8;
  }
  else {
    uVar28 = local_2e8;
    if (0x7ffffffffffffffe < local_2e8) {
      uVar28 = 0x7fffffffffffffff;
    }
    if (uVar28 < (ulong)(lVar16 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar24 = (long *)(**(code **)(*local_2f0 + 0x10))(local_2f0,lVar16,8);
    if (plVar24 == (long *)0x0) {
      (**(code **)(*local_2f0 + 0xb8))();
    }
    puVar10 = PTR_LAB_04379530;
    puVar9 = PTR_DAT_04379528;
    puVar8 = PTR_DAT_04379520;
    local_2f8 = plVar24 + (lVar16 >> 3);
    plVar26 = (long *)*plVar17;
    plVar17 = (long *)plVar17[1];
    local_300 = plVar24;
    if (plVar26 == plVar17) goto joined_r0x01f699b4;
    local_308 = plVar24;
    do {
      plVar25 = local_2f0;
      plVar24 = local_300;
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
        FUN_008a62a4(puVar9);
        FUN_00100250(puVar10,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar8);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      plVar12 = local_300;
      if (lVar16 == 0) {
        *plVar24 = *plVar26;
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01f6cbd4;
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar25;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        *plVar24 = *plVar26;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      plVar26 = plVar26 + 1;
      plVar24 = local_300 + 1;
      local_300 = plVar24;
    } while (plVar17 != plVar26);
    if (local_308 != plVar24) {
      plVar17 = local_308;
LAB_01f6993c:
      piVar29 = (int *)*plVar17;
      if (((0xc < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
          (uVar28 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[6], uVar28 != 0)) &&
         (*(long *)((long)piVar29 + uVar28) == -0x7e50bc6468bc3e77)) goto LAB_01f69930;
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      plVar24 = (long *)local_100[0x46];
      do {
        iVar15 = *piVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
        lVar16 = *(long *)(param_1 + 0x88);
      }
      else {
        lVar16 = *(long *)(param_1 + 0x88);
      }
      if (lVar16 == 0) {
        local_190 = (long *)0x0;
        goto LAB_01f69930;
      }
      FUN_017e9e98(&local_190);
      if (local_190 == (long *)0x0) goto LAB_01f69930;
      if (*(long *)(param_1 + 0x68) == 0) {
        plVar24 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f6adc8;
      }
      FUN_009acf14(&local_198);
      if (local_198 == (long *)0x0) {
        plVar24 = (long *)0x0;
        goto joined_r0x01f6adc8;
      }
      if ((6 < *(ushort *)((long)piVar29 - (long)*piVar29)) &&
         (uVar28 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[3], uVar28 != 0)) {
        local_360 = *(undefined8 *)((long)piVar29 + uVar28);
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f6ab44;
LAB_01f6a938:
        plVar24 = (long *)0x0;
        local_1a0 = (long *)0x0;
        goto joined_r0x01f6af3c;
      }
      local_360 = 0;
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f6a938;
LAB_01f6ab44:
      FUN_009acf14(&local_1a0);
      if (local_1a0 == (long *)0x0) {
        plVar24 = (long *)0x0;
        goto joined_r0x01f6af3c;
      }
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      FUN_00b645bc(&local_100,local_1a0 + 0xd);
      plVar26 = local_100;
      if (local_100 == (long *)0x0) {
LAB_01f6b1a4:
        plVar24 = (long *)0x0;
        goto joined_r0x01f6b1ac;
      }
      if (*(int *)((long)local_100 + 0xc) != 0) {
        piVar1 = (int *)((long)local_100 + 0xc);
        iVar15 = *(int *)((long)local_100 + 0xc);
        do {
          plVar25 = (long *)plVar26[2];
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar14 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          while( true ) {
            if (plVar25 == (long *)0x0) goto LAB_01f6ac6c;
            if (plVar25 == (long *)PTR_DAT_0437a0f0) break;
            plVar25 = (long *)*plVar25;
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar15) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = iVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar16 = plVar26[3];
              local_368 = (long *)0x0;
              plVar26 = local_100;
              if (lVar16 != 0) {
                local_368 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x01f6af60;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar15 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01f6ac6c:
      local_368 = (long *)0x0;
      plVar26 = local_100;
joined_r0x01f6af60:
      local_100 = plVar26;
      if (plVar26 != (long *)0x0) {
        plVar25 = plVar26 + 1;
        do {
          iVar15 = (int)*plVar25 + -1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar13) {
            *(int *)plVar25 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          plVar26[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_180 = (long *)*plVar26;
          FUN_02a44274(lVar16 + 0xd8,&local_180);
        }
      }
      if (local_368 == (long *)0x0) goto LAB_01f6b1a4;
      uVar28 = FUN_01845504(local_368,local_360);
      if ((uVar28 & 1) != 0) {
        if (*(ushort *)((long)piVar29 - (long)*piVar29) < 0x33) {
          local_100 = (long *)0x0;
        }
        else {
          uVar28 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[0x19];
          local_100 = (long *)0x0;
          if (uVar28 != 0) {
            puVar20 = (uint *)((long)piVar29 + uVar28);
            local_100 = (long *)((long)puVar20 + (ulong)*puVar20);
          }
        }
        FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
        (**(code **)(*local_180 + 0x18))(&local_100);
        if ((char)local_100 == '\0') {
          FUN_01847304(local_368,local_360);
          if ((char)local_100 != '\0') goto LAB_01f6b890;
        }
        else {
LAB_01f6b890:
          local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
        }
        plVar24 = local_180;
        local_180 = (long *)0x0;
        if (plVar24 != (long *)0x0) {
          FUN_02bcbe58(&local_100,0);
          (**(code **)(*plVar24 + 8))(plVar24);
          uVar19 = local_168;
          uVar18 = local_170;
          pcVar21 = local_178;
          uVar28 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
          if ((uVar28 & 1) == 0) {
LAB_01f6bcc0:
            (**(code **)(*(long *)pcVar21 + 0x18))(pcVar21,plVar24,uVar18,uVar19);
          }
          else {
            lVar16 = tpidr_el0;
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f6bcc0;
            FUN_02bcc824(pcVar21,plVar24,uVar18,uVar19);
          }
          lVar16 = tpidr_el0;
          if (*(char *)(lVar16 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar16 + 0x38d488) = 1;
            *(undefined8 *)(lVar16 + 0x38d478) = 0;
            *(undefined8 *)(lVar16 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
          *(int *)(lVar16 + 0x38d480) = iVar15;
          if (iVar15 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar16 + 0x38d484) = 0;
          }
        }
        plVar24 = (long *)0x0;
        goto LAB_01f6cd48;
      }
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
        FUN_008a62a4(puVar9);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar8);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01f6cbd4;
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      plVar26 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x210,0x10);
      if (plVar26 == (long *)0x0) {
        (**(code **)(*plVar24 + 0xb8))(plVar24);
      }
      FUN_01cbe528(plVar26,piVar29,plVar24);
      plVar26[1] = (long)plVar24;
      plVar26[2] = (long)plVar26;
      plVar26[3] = 0x210;
      plVar26[4] = 0x10;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      if (plVar26 != (long *)0x0) {
        lVar16 = plVar26[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar18;
        }
        piVar29 = (int *)(lVar16 + 0xc);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = *piVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((char)plVar26[0x16] == '\0') {
        plVar24 = (long *)0x0;
        if (plVar26 == (long *)0x0) goto LAB_01f6cd48;
        goto LAB_01f6cd14;
      }
      local_220 = (long *)0x0;
      local_218 = (code *)0x0;
      local_210 = 0;
      uStack_208 = 0;
      lVar16 = local_1a0[0xf];
      local_168 = 0;
      local_170 = 0;
      local_178 = (code *)0x0;
      local_180 = (long *)0x0;
      if (*(char *)(lVar16 + 0x162) != '\0') goto LAB_01f6be98;
      uVar28 = *(ulong *)(lVar16 + 0x70);
      if (uVar28 != 0) {
        uVar22 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
        uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar22 < 2) {
          uVar23 = (ulong)((uint)uVar28 - 1) & 0x14;
        }
        else if (uVar28 < 0x15) {
          uVar4 = (uint)uVar28 & 0xff;
          uVar6 = 0;
          if ((uVar28 & 0xff) != 0) {
            uVar6 = 0x14 / uVar4;
          }
          uVar23 = (ulong)(0x14 - uVar6 * uVar4);
        }
        else {
          uVar23 = 0x14;
        }
        plVar24 = *(long **)(*(long *)(lVar16 + 0x68) + uVar23 * 8);
        if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
          if (uVar22 < 2) {
            do {
              if (plVar24[1] == 0x14) {
                if ((int)plVar24[2] == 0x14) goto LAB_01f6be0c;
              }
              else if ((plVar24[1] & uVar28 - 1) != uVar23) goto LAB_01f698d4;
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_01f698d4;
            } while( true );
          }
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x14) {
              if ((int)plVar24[2] == 0x14) goto LAB_01f6be0c;
            }
            else {
              if (uVar28 <= uVar22) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar22 / uVar28;
                }
                uVar22 = uVar22 - uVar7 * uVar28;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
            if (plVar24 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_01f698d4;
    }
LAB_01f699b8:
    plVar17 = local_2f0;
    lVar16 = (long)local_2f8 - (long)plVar24;
    local_300 = plVar24;
    uVar28 = (**(code **)(*local_2f0 + 0xc0))(local_2f0);
    if ((uVar28 & 1) != 0) {
      lVar27 = tpidr_el0;
      if (*(char *)(lVar27 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar27 + 0x38d488) = 1;
        *(undefined8 *)(lVar27 + 0x38d478) = 0;
        *(undefined8 *)(lVar27 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar27 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar27 + 0x38d480)) {
        FUN_02bcc824(plVar17,plVar24,lVar16,8);
        goto LAB_01f69a3c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,plVar24,lVar16,8);
  }
LAB_01f69a3c:
  lVar16 = FUN_018b6d84(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x4b];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_310 = 0;
      FUN_01f71368(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_310);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b6124(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x50];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_318 = 0;
      FUN_01f72278(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_318);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b643c(local_228,&DAT_cbf29ce484222645);
  local_100 = (long *)(PTR_DAT_0437ace8 + 0x10);
  FUN_00937ea0(&local_f8,lVar16 + 8);
  local_e8 = *(long *)(lVar16 + 0x18);
  if (local_e8 != 0) {
    piVar29 = (int *)(local_e8 + 0x50);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_e0 = *(long *)(lVar16 + 0x20);
  if (local_e0 != 0) {
    piVar29 = (int *)(local_e0 + 0x50);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_d8 = *(long *)(lVar16 + 0x28);
  if (local_d8 != 0) {
    lVar16 = *(long *)(local_d8 + 0x58);
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_01f698e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_100 = (long *)(PTR_DAT_0437a508 + 0x10);
  if (local_f8 != (code *)0x0) {
    piVar29 = (int *)((long)*(uint **)(local_f8 + 0x250) + (ulong)**(uint **)(local_f8 + 0x250));
    puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    puVar20 = puVar2 + 1;
    uVar28 = (ulong)*puVar2;
    if (uVar28 != 0) {
      puVar2 = puVar20 + uVar28;
      do {
        if (*(long *)(param_1 + 0x88) == 0) {
          local_180 = (long *)0x0;
          goto LAB_01f698e4;
        }
        uVar4 = *puVar20;
        FUN_017e9e98(&local_180);
        if (local_180 == (long *)0x0) goto LAB_01f698e4;
        lVar16 = local_180[0xb];
        piVar29 = (int *)(lVar16 + 0xc);
        lVar27 = local_180[0x50];
        do {
          iVar15 = *piVar29;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_180 + 0x20))();
        }
        local_320 = 0;
        FUN_01f731ec(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_320);
        puVar20 = puVar20 + 1;
      } while (puVar20 != puVar2);
    }
  }
  FUN_00936104(&local_100);
  lVar16 = FUN_018b709c(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x69];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_328 = 0;
      FUN_01f740fc(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_328);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b73b4(local_228,&DAT_cbf29ce484222645);
  puVar8 = PTR_DAT_043794d0;
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
LAB_01f69db0:
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar1 = (int *)((long)puVar20 + (ulong)uVar4);
      piVar29 = (int *)(lVar16 + 0xc);
      plVar24 = (long *)local_100[0x5f];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 != 0) {
        if (*(long *)(param_1 + 0x88) != 0) goto LAB_01f6a470;
LAB_01f69df8:
        local_188 = (long *)0x0;
        goto LAB_01f69dfc;
      }
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f69df8;
LAB_01f6a470:
      FUN_017e9e98(&local_188);
      if (local_188 == (long *)0x0) goto LAB_01f69dfc;
      if (*(long *)(param_1 + 0x68) == 0) {
        plVar24 = (long *)0x0;
        local_190 = (long *)0x0;
        goto joined_r0x01f6add8;
      }
      FUN_009acf14(&local_190);
      if (local_190 == (long *)0x0) {
        plVar24 = (long *)0x0;
        goto joined_r0x01f6add8;
      }
      if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar28 != 0)) {
        local_350 = *(long **)((long)piVar1 + uVar28);
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f6ac88;
LAB_01f6a9bc:
        plVar24 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f6b1bc;
      }
      local_350 = (long *)0x0;
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f6a9bc;
LAB_01f6ac88:
      FUN_009acf14(&local_198);
      if (local_198 == (long *)0x0) {
        plVar24 = (long *)0x0;
        goto joined_r0x01f6b1bc;
      }
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      FUN_00b645bc(&local_100,local_198 + 0xd);
      plVar17 = local_100;
      if (local_100 == (long *)0x0) {
LAB_01f6b444:
        plVar24 = (long *)0x0;
        goto joined_r0x01f6b44c;
      }
      if (*(int *)((long)local_100 + 0xc) != 0) {
        piVar29 = (int *)((long)local_100 + 0xc);
        iVar15 = *(int *)((long)local_100 + 0xc);
        do {
          plVar26 = (long *)plVar17[2];
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar14 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          while( true ) {
            if (plVar26 == (long *)0x0) goto LAB_01f6ada0;
            if (plVar26 == (long *)PTR_DAT_0437a0f0) break;
            plVar26 = (long *)*plVar26;
          }
          iVar14 = *piVar29;
          if (iVar14 == iVar15) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar13) {
              *piVar29 = iVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar16 = plVar17[3];
              local_358 = (long *)0x0;
              plVar17 = local_100;
              if (lVar16 != 0) {
                local_358 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x01f6b1e0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar15 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01f6ada0:
      local_358 = (long *)0x0;
      plVar17 = local_100;
joined_r0x01f6b1e0:
      local_100 = plVar17;
      if (plVar17 != (long *)0x0) {
        plVar26 = plVar17 + 1;
        do {
          iVar15 = (int)*plVar26 + -1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar13) {
            *(int *)plVar26 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          plVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_180 = (long *)*plVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_180);
        }
      }
      if (local_358 == (long *)0x0) goto LAB_01f6b444;
      uVar28 = FUN_01845504(local_358,local_350);
      if ((uVar28 & 1) != 0) {
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
          local_100 = (long *)0x0;
        }
        else {
          uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
          local_100 = (long *)0x0;
          if (uVar28 != 0) {
            puVar3 = (uint *)((long)piVar1 + uVar28);
            local_100 = (long *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
        (**(code **)(*local_180 + 0x18))(&local_100);
        if ((char)local_100 == '\0') {
          FUN_01847304(local_358,local_350);
          if ((char)local_100 != '\0') goto LAB_01f6ba08;
        }
        else {
LAB_01f6ba08:
          local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
        }
        plVar24 = local_180;
        local_180 = (long *)0x0;
        if (plVar24 != (long *)0x0) {
          FUN_02bcbe58(&local_100,0);
          (**(code **)(*plVar24 + 8))(plVar24);
          uVar19 = local_168;
          uVar18 = local_170;
          pcVar21 = local_178;
          uVar28 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
          if ((uVar28 & 1) == 0) {
LAB_01f6bea8:
            (**(code **)(*(long *)pcVar21 + 0x18))(pcVar21,plVar24,uVar18,uVar19);
          }
          else {
            lVar16 = tpidr_el0;
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f6bea8;
            FUN_02bcc824(pcVar21,plVar24,uVar18,uVar19);
          }
          lVar16 = tpidr_el0;
          if (*(char *)(lVar16 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar16 + 0x38d488) = 1;
            *(undefined8 *)(lVar16 + 0x38d478) = 0;
            *(undefined8 *)(lVar16 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
          *(int *)(lVar16 + 0x38d480) = iVar15;
          if (iVar15 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar16 + 0x38d484) = 0;
          }
        }
        plVar24 = (long *)0x0;
        goto LAB_01f6cf00;
      }
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar15 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01f6cbd4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      plVar17 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xe0,0x10);
      if (plVar17 == (long *)0x0) {
        (**(code **)(*plVar24 + 0xb8))(plVar24);
      }
      FUN_01c67820(plVar17,piVar1,plVar24);
      plVar17[1] = (long)plVar24;
      plVar17[2] = (long)plVar17;
      plVar17[3] = 0xe0;
      plVar17[4] = 0x10;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      if (plVar17 != (long *)0x0) {
        lVar16 = plVar17[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar18;
        }
        piVar29 = (int *)(lVar16 + 0xc);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = *piVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((char)plVar17[0x16] == '\0') {
        plVar24 = (long *)0x0;
        if (plVar17 == (long *)0x0) goto LAB_01f6cf00;
        goto LAB_01f6cecc;
      }
      local_220 = (long *)0x0;
      local_218 = (code *)0x0;
      local_210 = 0;
      uStack_208 = 0;
      lVar16 = local_198[0xf];
      local_168 = 0;
      local_170 = 0;
      local_178 = (code *)0x0;
      local_180 = (long *)0x0;
      if (*(char *)(lVar16 + 0x162) != '\0') goto LAB_01f6c080;
      uVar28 = *(ulong *)(lVar16 + 0x70);
      if (uVar28 != 0) {
        uVar22 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
        uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar22 < 2) {
          uVar23 = (ulong)((uint)uVar28 - 1) & 0x19;
        }
        else if (uVar28 < 0x1a) {
          uVar4 = (uint)uVar28 & 0xff;
          uVar6 = 0;
          if ((uVar28 & 0xff) != 0) {
            uVar6 = 0x19 / uVar4;
          }
          uVar23 = (ulong)(0x19 - uVar6 * uVar4);
        }
        else {
          uVar23 = 0x19;
        }
        plVar24 = *(long **)(*(long *)(lVar16 + 0x68) + uVar23 * 8);
        if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
          if (uVar22 < 2) {
            do {
              if (plVar24[1] == 0x19) {
                if ((int)plVar24[2] == 0x19) goto LAB_01f6bff4;
              }
              else if ((plVar24[1] & uVar28 - 1) != uVar23) goto LAB_01f698d4;
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_01f698d4;
            } while( true );
          }
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x19) {
              if ((int)plVar24[2] == 0x19) goto LAB_01f6bff4;
            }
            else {
              if (uVar28 <= uVar22) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar22 / uVar28;
                }
                uVar22 = uVar22 - uVar7 * uVar28;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
            if (plVar24 == (long *)0x0) break;
          } while( true );
        }
      }
      goto LAB_01f698d4;
    }
    goto LAB_01f698d8;
  }
LAB_01f69e08:
  lVar16 = FUN_018b76cc(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x73];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_330 = 0;
      FUN_01f7499c(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_330);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b79e4(local_228,&DAT_cbf29ce484222645);
  puVar8 = PTR_DAT_043794d0;
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
LAB_01f69f30:
    if (*(long *)(param_1 + 0x88) != 0) {
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar1 = (int *)((long)puVar20 + (ulong)uVar4);
      piVar29 = (int *)(lVar16 + 0xc);
      plVar24 = (long *)local_100[0x2d];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_188 = plVar24;
      if (*(long *)(param_1 + 0x88) == 0) {
        local_190 = (long *)0x0;
        goto LAB_01f69f80;
      }
      FUN_017e9e98(&local_190);
      if (local_190 == (long *)0x0) goto LAB_01f69f80;
      if (*(long *)(param_1 + 0x68) == 0) {
        local_350 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f6adb8;
      }
      FUN_009acf14(&local_198);
      if (local_198 == (long *)0x0) {
        local_350 = (long *)0x0;
        goto joined_r0x01f6adb8;
      }
      if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar28 != 0)) {
        local_350 = *(long **)((long)piVar1 + uVar28);
        if (*(long *)(param_1 + 0x68) != 0) goto LAB_01f6aa10;
LAB_01f6a8b4:
        local_350 = (long *)0x0;
        local_1a0 = (long *)0x0;
        goto joined_r0x01f6ade8;
      }
      local_350 = (long *)0x0;
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_01f6a8b4;
LAB_01f6aa10:
      FUN_009acf14(&local_1a0);
      if (local_1a0 == (long *)0x0) {
        local_350 = (long *)0x0;
        goto joined_r0x01f6ade8;
      }
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      FUN_00b645bc(&local_100,local_1a0 + 0xd);
      plVar24 = local_100;
      if (local_100 == (long *)0x0) {
LAB_01f6af24:
        local_350 = (long *)0x0;
        goto joined_r0x01f6af2c;
      }
      if (*(int *)((long)local_100 + 0xc) != 0) {
        piVar29 = (int *)((long)local_100 + 0xc);
        iVar15 = *(int *)((long)local_100 + 0xc);
        do {
          plVar17 = (long *)plVar24[2];
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar14 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01f6ab28;
            if (plVar17 == (long *)PTR_DAT_0437a0f0) break;
            plVar17 = (long *)*plVar17;
          }
          iVar14 = *piVar29;
          if (iVar14 == iVar15) {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar13) {
              *piVar29 = iVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar16 = plVar24[3];
              local_358 = (long *)0x0;
              plVar24 = local_100;
              if (lVar16 != 0) {
                local_358 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x01f6ae0c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar15 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01f6ab28:
      local_358 = (long *)0x0;
      plVar24 = local_100;
joined_r0x01f6ae0c:
      local_100 = plVar24;
      if (plVar24 != (long *)0x0) {
        plVar17 = plVar24 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar13) {
            *(int *)plVar17 = iVar15;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 == 0) {
          plVar24[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_180 = (long *)*plVar24;
          FUN_02a44274(lVar16 + 0xd8,&local_180);
        }
      }
      if (local_358 == (long *)0x0) goto LAB_01f6af24;
      uVar28 = FUN_01845504(local_358,local_350);
      if ((uVar28 & 1) != 0) {
        if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
          local_100 = (long *)0x0;
        }
        else {
          uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
          local_100 = (long *)0x0;
          if (uVar28 != 0) {
            puVar3 = (uint *)((long)piVar1 + uVar28);
            local_100 = (long *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
        (**(code **)(*local_180 + 0x18))(&local_100);
        if ((char)local_100 == '\0') {
          FUN_01847304(local_358,local_350);
          if ((char)local_100 != '\0') goto LAB_01f6b6cc;
        }
        else {
LAB_01f6b6cc:
          local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
        }
        plVar24 = local_180;
        local_180 = (long *)0x0;
        if (plVar24 != (long *)0x0) {
          FUN_02bcbe58(&local_100,0);
          (**(code **)(*plVar24 + 8))();
          uVar19 = local_168;
          uVar18 = local_170;
          pcVar21 = local_178;
          uVar28 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
          if ((uVar28 & 1) == 0) {
LAB_01f6bb40:
            (**(code **)(*(long *)pcVar21 + 0x18))(pcVar21,plVar24,uVar18,uVar19);
          }
          else {
            lVar16 = tpidr_el0;
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar16 + 0x38d480) < 1) goto LAB_01f6bb40;
            FUN_02bcc824(pcVar21,plVar24,uVar18,uVar19);
          }
          lVar16 = tpidr_el0;
          if (*(char *)(lVar16 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar16 + 0x38d488) = 1;
            *(undefined8 *)(lVar16 + 0x38d478) = 0;
            *(undefined8 *)(lVar16 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar15 = *(int *)(lVar16 + 0x38d480) + -1;
          *(int *)(lVar16 + 0x38d480) = iVar15;
          if (iVar15 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar16 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar16 + 0x38d488) = 1;
              *(undefined8 *)(lVar16 + 0x38d478) = 0;
              *(undefined8 *)(lVar16 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar16 + 0x38d484) = 0;
          }
        }
        local_350 = (long *)0x0;
        goto LAB_01f6d0bc;
      }
      plVar24 = (long *)FUN_01f7c660(local_188,piVar1,&local_188);
      if (plVar24 != (long *)0x0) {
        lVar16 = plVar24[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar18;
        }
        piVar29 = (int *)(lVar16 + 0xc);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar13) {
            *piVar29 = *piVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((char)plVar24[0x16] == '\0') {
        local_350 = (long *)0x0;
        if (plVar24 == (long *)0x0) goto LAB_01f6d0bc;
        goto LAB_01f6d088;
      }
      local_220 = (long *)0x0;
      local_218 = (code *)0x0;
      local_210 = 0;
      uStack_208 = 0;
      lVar16 = local_1a0[0xf];
      local_168 = 0;
      local_170 = 0;
      local_178 = (code *)0x0;
      local_180 = (long *)0x0;
      if (*(char *)(lVar16 + 0x162) != '\0') goto LAB_01f6c11c;
      uVar28 = *(ulong *)(lVar16 + 0x70);
      if (uVar28 != 0) {
        uVar22 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
        uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar22 < 2) {
          uVar23 = (ulong)((uint)uVar28 - 1) & 0x1b;
        }
        else if (uVar28 < 0x1c) {
          uVar4 = (uint)uVar28 & 0xff;
          uVar6 = 0;
          if ((uVar28 & 0xff) != 0) {
            uVar6 = 0x1b / uVar4;
          }
          uVar23 = (ulong)(0x1b - uVar6 * uVar4);
        }
        else {
          uVar23 = 0x1b;
        }
        plVar17 = *(long **)(*(long *)(lVar16 + 0x68) + uVar23 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if (uVar22 < 2) {
            do {
              if (plVar17[1] == 0x1b) {
                if ((int)plVar17[2] == 0x1b) goto LAB_01f6c090;
              }
              else if ((plVar17[1] & uVar28 - 1) != uVar23) goto LAB_01f698d4;
              plVar17 = (long *)*plVar17;
              if (plVar17 == (long *)0x0) goto LAB_01f698d4;
            } while( true );
          }
          do {
            uVar22 = plVar17[1];
            if (uVar22 == 0x1b) {
              if ((int)plVar17[2] == 0x1b) goto LAB_01f6c090;
            }
            else {
              if (uVar28 <= uVar22) {
                uVar7 = 0;
                if (uVar28 != 0) {
                  uVar7 = uVar22 / uVar28;
                }
                uVar22 = uVar22 - uVar7 * uVar28;
              }
              if (uVar22 != uVar23) break;
            }
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) break;
          } while( true );
        }
      }
LAB_01f698d4:
      local_168 = 0;
      local_170 = 0;
      local_178 = (code *)0x0;
      local_180 = (long *)0x0;
      uStack_208 = 0;
      local_210 = 0;
      local_218 = (code *)0x0;
      local_220 = (long *)0x0;
      FUN_01f7c2e0();
    }
    goto LAB_01f698d8;
  }
LAB_01f69f8c:
  lVar16 = FUN_018b7cfc(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x78];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_338 = 0;
      FUN_01f758d4(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_338);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  lVar16 = FUN_018b8644(local_228,&DAT_cbf29ce484222645);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x87];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_340 = 0;
      FUN_01f767e4(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_340);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  local_100 = (long *)&DAT_cbf29ce484222645;
  lVar16 = FUN_018b92a0(local_228,&local_100);
  puVar20 = *(uint **)(*(long *)(lVar16 + 8) + 0x250);
  piVar29 = (int *)((long)puVar20 + (ulong)*puVar20);
  puVar2 = (uint *)((long)piVar29 + (ulong)*(ushort *)((long)piVar29 + (4 - (long)*piVar29)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar20 = puVar2 + 1;
  uVar28 = (ulong)*puVar2;
  if (uVar28 != 0) {
    puVar2 = puVar20 + uVar28;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f698d8;
      uVar4 = *puVar20;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f698e4;
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      lVar27 = local_100[0x96];
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_348 = 0;
      FUN_01f7785c(param_1,lVar27,(long)puVar20 + (ulong)uVar4,&local_348);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar2);
  }
  if (local_228 != (long *)0x0) {
    lVar16 = local_228[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_228 + 0x20))();
    }
  }
  return;
LAB_01f69138:
  lVar16 = plVar17[7];
  plVar17 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
  if (((*PTR_DAT_04382c08 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04382c08), iVar15 != 0)) {
    uVar18 = FUN_01e368c0();
    *(undefined8 *)PTR_DAT_04382c10 = uVar18;
    __cxa_guard_release(PTR_DAT_04382c08);
  }
  for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    if (plVar17 == (long *)PTR_DAT_04382c10) {
      plVar24 = *(long **)(lVar16 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar15 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01f6cbd4;
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,0x130,8);
      if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(lVar16);
      }
      goto LAB_01f69900;
    }
  }
LAB_01f691c4:
  pcVar21 = local_178;
  local_308 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_168 = 0;
    local_170 = 0;
    local_178 = (code *)0x0;
    local_180 = (long *)0x0;
    (*pcVar21)(auStack_160);
  }
  pcVar21 = local_218;
  local_350 = local_308;
  local_308 = (long *)0x0;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = (long *)0x0;
    local_218 = (code *)0x0;
    (*pcVar21)(auStack_200);
  }
  if (plVar24 != (long *)0x0) {
LAB_01f6982c:
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
LAB_01f69860:
  lVar16 = local_358[0xb];
  piVar29 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar29;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
    if (bVar13) {
      *piVar29 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_358 + 0x20))();
  }
joined_r0x01f68928:
  if (local_1a0 != (long *)0x0) {
    lVar16 = local_1a0[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_1a0 + 0x20))();
    }
  }
joined_r0x01f68774:
  if (local_198 != (long *)0x0) {
    lVar16 = *(long *)((long)local_198 + 0x58);
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f68754:
  if (local_190 != (long *)0x0) {
    lVar16 = local_190[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
  if (local_350 != (long *)0x0) {
    lVar16 = local_350[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    lVar16 = local_350[0xb];
    local_100 = local_350;
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar19;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_01cbc9e0(uVar18,&local_100,0);
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
    lVar16 = local_350[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_350 + 0x20))();
    }
    lVar16 = local_350[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_350 + 0x20))();
    }
  }
LAB_01f67b98:
  puVar20 = puVar20 + 1;
  if (puVar20 == puVar2) goto LAB_01f67ba4;
  goto LAB_01f67b48;
LAB_01f6be0c:
  lVar16 = plVar24[7];
  plVar24 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
  if (((*PTR_DAT_04382c88 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04382c88), iVar15 != 0)) {
    uVar18 = FUN_01e38060();
    *(undefined8 *)PTR_DAT_04382c90 = uVar18;
    __cxa_guard_release(PTR_DAT_04382c88);
  }
  for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
    if (plVar24 == (long *)PTR_DAT_04382c90) {
      plVar24 = *(long **)(lVar16 + 0x68);
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
        FUN_008a62a4(puVar9);
        FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar8);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01f6cbd4;
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,0x140,8);
      if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(lVar16);
      }
      lVar16 = *plVar24;
      goto LAB_01f69908;
    }
  }
LAB_01f6be98:
  pcVar21 = local_178;
  local_188 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_168 = 0;
    local_170 = 0;
    local_178 = (code *)0x0;
    local_180 = (long *)0x0;
    (*pcVar21)(auStack_160);
  }
  plVar24 = local_188;
  pcVar21 = local_218;
  local_188 = (long *)0x0;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = (long *)0x0;
    local_218 = (code *)0x0;
    (*pcVar21)(auStack_200);
  }
  if (plVar26 != (long *)0x0) {
LAB_01f6cd14:
    lVar16 = plVar26[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))();
    }
  }
LAB_01f6cd48:
  lVar16 = local_368[0xb];
  piVar29 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar29;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
    if (bVar13) {
      *piVar29 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_368 + 0x20))();
  }
joined_r0x01f6b1ac:
  if (local_1a0 != (long *)0x0) {
    lVar16 = local_1a0[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_1a0 + 0x20))();
    }
  }
joined_r0x01f6af3c:
  if (local_198 != (long *)0x0) {
    lVar16 = local_198[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f6adc8:
  if (local_190 != (long *)0x0) {
    lVar16 = local_190[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    lVar16 = plVar24[0xb];
    local_100 = plVar24;
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar19;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_01cbc9e0(uVar18,&local_100,0);
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
LAB_01f69930:
  bVar13 = plVar17 == plVar12;
  plVar17 = plVar17 + 1;
  plVar24 = local_308;
  if (bVar13) goto joined_r0x01f699b4;
  goto LAB_01f6993c;
LAB_01f6bff4:
  lVar16 = plVar24[7];
  plVar24 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
  if (((*PTR_DAT_04382d88 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04382d88), iVar15 != 0)) {
    uVar18 = FUN_01e3a420();
    *(undefined8 *)PTR_DAT_04382d90 = uVar18;
    __cxa_guard_release(PTR_DAT_04382d88);
  }
  for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
    if (plVar24 == (long *)PTR_DAT_04382d90) {
      plVar24 = *(long **)(lVar16 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar15 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (*(ulong *)(lVar16 + 0x80) < 0x10) {
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,0x138,8);
        if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bd32e0(lVar16);
        }
LAB_01f69900:
        lVar16 = *plVar24;
LAB_01f69908:
        (**(code **)(lVar16 + 0xb8))(plVar24);
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(0);
      }
      goto LAB_01f6cbd4;
    }
  }
LAB_01f6c080:
  pcVar21 = local_178;
  local_308 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_168 = 0;
    local_170 = 0;
    local_178 = (code *)0x0;
    local_180 = (long *)0x0;
    (*pcVar21)(auStack_160);
  }
  pcVar21 = local_218;
  plVar24 = local_308;
  local_308 = (long *)0x0;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = (long *)0x0;
    local_218 = (code *)0x0;
    (*pcVar21)(auStack_200);
  }
  if (plVar17 != (long *)0x0) {
LAB_01f6cecc:
    lVar16 = plVar17[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
LAB_01f6cf00:
  lVar16 = local_358[0xb];
  piVar29 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar29;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
    if (bVar13) {
      *piVar29 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_358 + 0x20))();
  }
joined_r0x01f6b44c:
  if (local_198 != (long *)0x0) {
    lVar16 = local_198[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f6b1bc:
  if (local_190 != (long *)0x0) {
    lVar16 = *(long *)((long)local_190 + 0x58);
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
joined_r0x01f6add8:
  if (local_188 != (long *)0x0) {
    lVar16 = local_188[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    lVar16 = plVar24[0xb];
    local_100 = plVar24;
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar19;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_01cbc9e0(uVar18,&local_100,0);
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
LAB_01f69dfc:
  puVar20 = puVar20 + 1;
  if (puVar20 == puVar2) goto LAB_01f69e08;
  goto LAB_01f69db0;
LAB_01f6c090:
  lVar16 = plVar17[7];
  plVar17 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
  if (((*PTR_DAT_04382dc8 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04382dc8), iVar15 != 0)) {
    uVar18 = FUN_01e3aba0();
    *(undefined8 *)PTR_DAT_04382dd0 = uVar18;
    __cxa_guard_release(PTR_DAT_04382dc8);
  }
  for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    if (plVar17 == (long *)PTR_DAT_04382dd0) {
      plVar24 = *(long **)(lVar16 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar15 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (*(ulong *)(lVar16 + 0x80) < 0x10) {
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar24;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        lVar16 = (**(code **)(*plVar24 + 0x10))(plVar24,0x138,8);
        if (lVar16 == 0) {
          (**(code **)(*plVar24 + 0xb8))(plVar24);
                    /* WARNING: Subroutine does not return */
          FUN_00bd32e0(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(lVar16);
      }
      goto LAB_01f6cbd4;
    }
  }
LAB_01f6c11c:
  pcVar21 = local_178;
  local_308 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_168 = 0;
    local_170 = 0;
    local_178 = (code *)0x0;
    local_180 = (long *)0x0;
    (*pcVar21)(auStack_160);
  }
  pcVar21 = local_218;
  local_350 = local_308;
  local_308 = (long *)0x0;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = (long *)0x0;
    local_218 = (code *)0x0;
    (*pcVar21)(auStack_200);
  }
  if (plVar24 != (long *)0x0) {
LAB_01f6d088:
    lVar16 = plVar24[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
LAB_01f6d0bc:
  lVar16 = local_358[0xb];
  piVar29 = (int *)(lVar16 + 0xc);
  do {
    iVar15 = *piVar29;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
    if (bVar13) {
      *piVar29 = iVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar15 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_358 + 0x20))();
  }
joined_r0x01f6af2c:
  if (local_1a0 != (long *)0x0) {
    lVar16 = local_1a0[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_1a0 + 0x20))();
    }
  }
joined_r0x01f6ade8:
  if (local_198 != (long *)0x0) {
    lVar16 = *(long *)((long)local_198 + 0x58);
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
    }
  }
joined_r0x01f6adb8:
  if (local_190 != (long *)0x0) {
    lVar16 = local_190[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
  if (local_350 != (long *)0x0) {
    lVar16 = local_350[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar18;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar18 = *(undefined8 *)(param_1 + 0x98);
    lVar16 = local_350[0xb];
    local_100 = local_350;
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01f698e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar19;
    }
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_01cbc9e0(uVar18,&local_100,0);
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar29 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar29;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar13) {
          *piVar29 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
    lVar16 = local_350[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_350 + 0x20))();
    }
    lVar16 = local_350[0xb];
    piVar29 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar29;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar13) {
        *piVar29 = iVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_350 + 0x20))();
    }
  }
LAB_01f69f80:
  puVar20 = puVar20 + 1;
  if (puVar20 == puVar2) goto LAB_01f69f8c;
  goto LAB_01f69f30;
LAB_01f698d8:
  local_100 = (long *)0x0;
  goto LAB_01f698e4;
}


