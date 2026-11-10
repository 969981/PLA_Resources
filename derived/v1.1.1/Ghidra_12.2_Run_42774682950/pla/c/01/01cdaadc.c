/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cdaadc; name: FUN_01cdaadc
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01cdaadc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 local_2b0;
  char *pcStack_2a8;
  undefined8 local_2a0;
  long *local_298;
  undefined8 *local_290;
  undefined8 uStack_288;
  undefined8 *local_280;
  long *local_278;
  undefined8 *local_270;
  undefined8 uStack_268;
  undefined8 *local_260;
  undefined8 uStack_258;
  undefined8 *local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 local_230;
  long *local_228;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  long local_1f0 [12];
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  long local_170 [12];
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  long local_f0 [12];
  undefined1 local_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  puVar7 = PTR_DAT_0437a0f0;
  puVar6 = PTR_DAT_0437a0e8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (*(int *)(param_1 + 0x120) == 0) {
    lVar18 = *(long *)(param_1 + 0x80);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) {
LAB_01cdab10:
      plVar17 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0xc);
      iVar10 = *(int *)(lVar18 + 0xc);
      do {
        puVar19 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar4), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        if (puVar19 == (undefined8 *)0x0) goto LAB_01cdab10;
        while (puVar19 != (undefined8 *)puVar7) {
          puVar19 = (undefined8 *)*puVar19;
          plVar17 = (long *)0x0;
          if (puVar19 == (undefined8 *)0x0) goto LAB_01cdab14;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar17 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar17 = (long *)0x0;
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01cdab14:
    local_2b0 = 0x271e67e896eea80c;
    pcStack_2a8 = "ObstructionWaza";
    local_2a0 = 0xf;
    local_298 = (long *)0x0;
    FUN_01845684(&local_290,plVar17,*(undefined8 *)(param_1 + 8),&local_2b0);
    plVar12 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar12 != (long *)0x0) {
      lVar18 = plVar12[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
    puVar19 = local_290;
    local_290 = (undefined8 *)0x0;
    *(undefined8 **)(param_1 + 0x68) = puVar19;
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
    if (plVar17 != (long *)0x0) {
      lVar18 = plVar17[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    lVar16 = *(long *)(param_1 + 0x128);
    bVar9 = true;
    lVar18 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar16 + 0x78);
    *(undefined8 *)(lVar18 + 0xd0) = *(undefined8 *)(lVar16 + 0x70);
    *(undefined1 *)(lVar18 + 0xe0) = 1;
    lVar16 = *(long *)(param_1 + 0x128);
    lVar18 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(lVar18 + 200) = *(undefined8 *)(lVar16 + 0x88);
    *(undefined8 *)(lVar18 + 0xc0) = *(undefined8 *)(lVar16 + 0x80);
    *(undefined1 *)(lVar18 + 0xe0) = 1;
    lVar18 = *(long *)(param_1 + 0x128);
    if (*(int *)(lVar18 + 0xd8) == 0) {
      if (((*PTR_DAT_0437a708 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a708);
      }
      uVar13 = *(undefined8 *)PTR_DAT_0437a710;
      *(undefined8 *)PTR_DAT_0437a718 = uVar13;
      FUN_010aace4(uVar13,*(undefined8 *)(lVar18 + 0xe0),
                   *(undefined1 *)(*(long *)(param_1 + 0x128) + 0x109));
      FUN_0108c3a8(&local_290);
      uVar13 = 0;
      if ((long)local_290 < 0x71e98f4e9a452820) {
        if ((long)local_290 < -0x2fae1c49911526b1) {
          if (local_290 == (undefined8 *)0x91637b1f1f924a98) {
            uVar13 = 3;
          }
        }
        else if (local_290 == (undefined8 *)0xd051e3b66eead94f) {
          uVar13 = 1;
        }
        else if (local_290 == (undefined8 *)0x9bd13c6e7bb876e) {
          uVar13 = 5;
        }
        else if (local_290 == (undefined8 *)0x3b5d719234d56e3a) {
          uVar13 = 2;
        }
      }
      else if ((long)local_290 < 0x73c1dc842bbb2546) {
        if (local_290 == (undefined8 *)0x71e98f4e9a452820) {
          uVar13 = 8;
        }
      }
      else if (local_290 == (undefined8 *)0x79ee85ffb7c5b8e6) {
        uVar13 = 7;
      }
      else if (local_290 == (undefined8 *)0x73c1dc842bbb2546) {
        uVar13 = 4;
      }
      else if (local_290 == (undefined8 *)0x7cc088e10572cf65) {
        uVar13 = 6;
      }
      if (local_278 != (long *)0x0) {
        (**(code **)(*local_278 + 0x20))();
      }
      local_90 = 0;
      local_240 = &DAT_cbf29ce484222645;
      local_238 = &DAT_03996322;
      local_250 = (undefined8 *)0x0;
      uStack_248 = 0;
      local_260 = (undefined8 *)0x0;
      uStack_258 = 0;
      local_270 = (undefined8 *)0x0;
      uStack_268 = 0;
      local_280 = (undefined8 *)0x0;
      local_278 = (long *)0x0;
      local_290 = (undefined8 *)0x0;
      uStack_288 = 0;
      local_230 = 0;
      local_228 = (long *)0x0;
      local_210 = (undefined1 *)0x0;
      local_208 = (code *)0x0;
      local_200 = (undefined1 *)0x0;
      puStack_1f8 = (undefined1 *)0x0;
      local_180 = (undefined1 *)0x0;
      puStack_178 = (undefined1 *)0x0;
      local_190 = (undefined1 *)0x0;
      local_188 = (code *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      local_100 = (undefined1 *)0x0;
      puStack_f8 = (undefined1 *)0x0;
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_8c = 0;
      FUN_0095e898(&local_250,param_1 + 0x90);
      lVar16 = *(long *)(param_1 + 0x90);
      if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
        piVar1 = (int *)(lVar16 + 0xc);
        iVar10 = *(int *)(lVar16 + 0xc);
        do {
          plVar17 = *(long **)(lVar16 + 0x10);
          if (((*PTR_DAT_043796e0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar11 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar14;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043796e0);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_01cdad14;
            if (plVar17 == (long *)PTR_DAT_043796e8) break;
            plVar17 = (long *)*plVar17;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar10) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar16 = *(long *)(lVar16 + 0x18);
              plVar17 = (long *)(lVar16 + -0x50);
              if (lVar16 != 0) {
                FUN_0199c304(&local_80,plVar17);
                FUN_00b6231c(&local_290,&local_80);
                puVar19 = local_80;
                if (local_80 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_80 + 1);
                  do {
                    iVar10 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar10 + -1 == 0) {
                    local_80[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_70[0] = (long *)*puVar19;
                    FUN_02a44274(lVar15 + 0xd8,local_70);
                  }
                }
                FUN_0199ce28(&local_80,plVar17);
                FUN_018ff388(&local_280,&local_80);
                puVar19 = local_80;
                if (local_80 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_80 + 1);
                  do {
                    iVar10 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar10 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar10 + -1 == 0) {
                    local_80[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_70[0] = (long *)*puVar19;
                    FUN_02a44274(lVar15 + 0xd8,local_70);
                  }
                }
                lVar16 = *(long *)(lVar16 + 8);
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar11;
        } while (iVar11 != 0);
      }
LAB_01cdad14:
      FUN_0095e070(&local_270,*(long *)(param_1 + 0x128) + 0xb8);
      FUN_008c4b3c(&local_260,*(long *)(param_1 + 0x128) + 200);
      local_240 = *(undefined1 **)(lVar18 + 0xe0);
      local_238 = *(undefined1 **)(lVar18 + 0xe8);
      local_230 = *(undefined8 *)(lVar18 + 0xf0);
      plVar17 = *(long **)(lVar18 + 0xf8);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      if (local_228 != (long *)0x0) {
        lVar18 = *local_228;
        local_228 = plVar17;
        (**(code **)(lVar18 + 0x20))();
        plVar17 = local_228;
      }
      local_228 = plVar17;
      pcVar8 = local_208;
      uStack_87 = *(undefined1 *)(*(long *)(param_1 + 0x128) + 0x109);
      uStack_86 = *(undefined1 *)(*(long *)(param_1 + 0x128) + 0x10a);
      if (local_208 != (code *)0x0) {
        local_200 = (undefined1 *)0x0;
        puStack_1f8 = (undefined1 *)0x0;
        local_210 = (undefined1 *)0x0;
        local_208 = (code *)0x0;
        (*pcVar8)(local_1f0);
      }
      pcVar8 = local_188;
      local_210 = &LAB_01ce0314;
      local_208 = FUN_01ce0430;
      local_200 = &LAB_01ce0434;
      puStack_1f8 = &LAB_01ce0440;
      local_1f0[0] = param_1;
      if (local_188 != (code *)0x0) {
        local_180 = (undefined1 *)0x0;
        puStack_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar8)(local_170);
      }
      pcVar8 = local_108;
      local_190 = &LAB_01ce044c;
      local_188 = FUN_01ce0568;
      local_180 = &LAB_01ce056c;
      puStack_178 = &LAB_01ce0578;
      local_170[0] = param_1;
      if (local_108 != (code *)0x0) {
        local_100 = (undefined1 *)0x0;
        puStack_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar8)(local_f0);
      }
      local_110 = &LAB_01ce0584;
      local_108 = FUN_01ce06a0;
      local_100 = &LAB_01ce06a4;
      puStack_f8 = &LAB_01ce06b0;
      lVar18 = *(long *)(param_1 + 0x128);
      local_90 = *(undefined1 *)(lVar18 + 0x100);
      uStack_8c = *(undefined4 *)(lVar18 + 0x104);
      uStack_88 = *(undefined1 *)(lVar18 + 0x108);
      local_f0[0] = param_1;
      switch(uVar13) {
      case 0:
        plVar17 = (long *)FUN_01ce06bc(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_01cdbe04:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 1:
        lVar18 = *(long *)(param_1 + 0x68);
        plVar12 = *(long **)(lVar18 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar4 = PTR_DAT_04379528;
          if (iVar10 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01cdbe1c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar12;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar17 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x6b0,0x10);
        if (plVar17 == (long *)0x0) {
          (**(code **)(*plVar12 + 0xb8))(plVar12);
        }
        FUN_01e8fb50(plVar17,&local_290);
        *plVar17 = (long)&PTR_LAB_04256ba8;
        plVar17[9] = (long)&PTR_LAB_04256d40;
        plVar17[0x3e] = (long)&PTR_LAB_04256e48;
        plVar17[10] = (long)&PTR_LAB_04256e20;
        *(undefined8 *)((long)plVar17 + 0x64c) = 0;
        *(undefined8 *)((long)plVar17 + 0x654) = 0;
        plVar17[0xcc] = 0;
        plVar17[0xcd] = 0;
        plVar17[0xce] = 0;
        plVar17[0xcf] = 0;
        plVar17[0xd0] = 0;
        *(undefined4 *)(plVar17 + 0xd1) = 0;
        *(undefined8 *)((long)plVar17 + 0x68c) = 0x40c90fdb;
        *(undefined4 *)((long)plVar17 + 0x484) = 2;
        *(undefined4 *)((long)plVar17 + 0x4cc) = 3;
        *(undefined4 *)((long)plVar17 + 0x4d4) = 4;
        *(undefined1 *)(plVar17 + 0x91) = 1;
        *(undefined4 *)((long)plVar17 + 0x49c) = 1;
        *(undefined1 *)(plVar17 + 0x93) = 1;
        *(undefined1 *)(plVar17 + 0x90) = 1;
        *(undefined1 *)(plVar17 + 0x99) = 1;
        *(undefined1 *)(plVar17 + 0x9a) = 1;
        *(undefined4 *)((long)plVar17 + 0x4a4) = 5;
        *(undefined1 *)(plVar17 + 0x94) = 1;
        *(undefined1 *)((long)plVar17 + 0x4dd) = 1;
        *(undefined1 *)((long)plVar17 + 0x4e1) = 1;
        *(undefined4 *)((long)plVar17 + 0x48c) = 0;
        plVar17[1] = (long)plVar12;
        plVar17[2] = (long)plVar17;
        plVar17[3] = 0x6b0;
        plVar17[4] = 0x10;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        if (plVar17 != (long *)0x0) {
          lVar16 = plVar17[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar12 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          plVar12 = plVar17 + 9;
        }
        (**(code **)(*plVar12 + 0xb8))(plVar12,lVar18);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_009ad580(&local_80,lVar18 + 0x318);
        (**(code **)(*plVar12 + 0xc0))(plVar12,&local_80);
        puVar19 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_80[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_70[0] = (long *)*puVar19;
            FUN_02a44274(lVar16 + 0xd8,local_70);
          }
        }
        (**(code **)(*plVar12 + 200))(plVar12,*(undefined1 *)(lVar18 + 0x33b));
        (**(code **)(*plVar12 + 0x90))(plVar12);
        local_70[0] = plVar17;
        FUN_02a4dad4(lVar18 + 0xf0,local_70);
        if (local_70[0] != (long *)0x0) {
          lVar18 = local_70[0][0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 2:
        plVar17 = (long *)FUN_01ce0a2c(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 3:
        plVar17 = (long *)FUN_01ce0d98(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 4:
        plVar17 = (long *)FUN_01ce1108(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 5:
        plVar17 = (long *)FUN_01ce1478(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 6:
        plVar17 = (long *)FUN_01ce17e8(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 7:
        plVar17 = (long *)FUN_01ce1b58(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 8:
        lVar18 = *(long *)(param_1 + 0x68);
        plVar12 = *(long **)(lVar18 + 8);
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar4 = PTR_DAT_04379528;
          if (iVar10 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01cdbe1c;
        *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar12;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar17 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x6d0,0x10);
        if (plVar17 == (long *)0x0) {
          (**(code **)(*plVar12 + 0xb8))(plVar12);
        }
        FUN_01e8fb50(plVar17,&local_290);
        plVar17[0xd4] = (long)&DAT_cbf29ce484222645;
        plVar17[0xd5] = (long)&DAT_03996322;
        *(undefined4 *)((long)plVar17 + 0x4b4) = 2;
        *(undefined4 *)(plVar17 + 0xc9) = 0;
        *(undefined2 *)((long)plVar17 + 0x64c) = 0;
        plVar17[0xca] = 0;
        plVar17[0xcb] = 0;
        plVar17[0xcc] = 0;
        plVar17[0xcd] = 0;
        plVar17[0xce] = 0;
        plVar17[0xcf] = 0;
        plVar17[0xd6] = 0;
        plVar17[0xd7] = 0;
        plVar17[0xd8] = 0;
        *(undefined4 *)(plVar17 + 0xd9) = 0;
        *(undefined4 *)((long)plVar17 + 0x484) = 0;
        *(undefined1 *)(plVar17 + 0x90) = 1;
        *(undefined4 *)((long)plVar17 + 0x4a4) = 1;
        *(undefined1 *)(plVar17 + 0x94) = 1;
        plVar17[9] = (long)&PTR_LAB_042566c0;
        *(undefined1 *)(plVar17 + 0x96) = 1;
        *(undefined1 *)(plVar17 + 0x97) = 1;
        *(undefined1 *)(plVar17 + 0x98) = 1;
        *(undefined1 *)(plVar17 + 0x9a) = 1;
        plVar17[10] = (long)&PTR_LAB_042567a0;
        *(undefined4 *)((long)plVar17 + 0x4bc) = 3;
        plVar17[0x3e] = (long)&PTR_LAB_042567c8;
        *(undefined4 *)((long)plVar17 + 0x4c4) = 4;
        *(undefined4 *)((long)plVar17 + 0x4d4) = 5;
        *(undefined1 *)((long)plVar17 + 0x6cc) = 0;
        plVar17[2] = (long)plVar17;
        plVar17[3] = 0x6d0;
        plVar17[4] = 0x10;
        *plVar17 = (long)&PTR_LAB_04256520;
        plVar17[1] = (long)plVar12;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        if (plVar17 != (long *)0x0) {
          lVar16 = plVar17[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar12 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          plVar12 = plVar17 + 9;
        }
        (**(code **)(*plVar12 + 0xb8))(plVar12,lVar18);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_009ad580(&local_80,lVar18 + 0x318);
        (**(code **)(*plVar12 + 0xc0))(plVar12,&local_80);
        puVar19 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_80[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_70[0] = (long *)*puVar19;
            FUN_02a44274(lVar16 + 0xd8,local_70);
          }
        }
        (**(code **)(*plVar12 + 200))(plVar12,*(undefined1 *)(lVar18 + 0x33b));
        (**(code **)(*plVar12 + 0x90))(plVar12);
        local_70[0] = plVar17;
        FUN_02a4dad4(lVar18 + 0xf0,local_70);
        if (local_70[0] != (long *)0x0) {
          lVar18 = local_70[0][0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      default:
        plVar17 = (long *)FUN_01ce06bc(*(long *)(param_1 + 0x68),
                                       *(undefined8 *)(*(long *)(param_1 + 0x68) + 8),&local_290);
        if (plVar17 != (long *)0x0) {
          lVar18 = plVar17[0xb];
          if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01cdbe04;
          if (*(long *)(lVar18 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      plVar12 = *(long **)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x130) = 0;
      if (plVar12 != (long *)0x0) {
        lVar18 = plVar12[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
        }
      }
      *(long **)(param_1 + 0x130) = plVar17;
      (**(code **)(*plVar17 + 0xf8))(plVar17);
      (**(code **)(**(long **)(param_1 + 0x130) + 0x100))();
      (**(code **)(**(long **)(param_1 + 0x130) + 0x108))();
      pcVar8 = local_108;
      if (local_108 != (code *)0x0) {
        local_100 = (undefined1 *)0x0;
        puStack_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        local_108 = (code *)0x0;
        (*pcVar8)(local_f0);
      }
      pcVar8 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (undefined1 *)0x0;
        puStack_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar8)(local_170);
      }
      pcVar8 = local_208;
      if (local_208 != (code *)0x0) {
        local_200 = (undefined1 *)0x0;
        puStack_1f8 = (undefined1 *)0x0;
        local_210 = (undefined1 *)0x0;
        local_208 = (code *)0x0;
        (*pcVar8)(local_1f0);
      }
      if (local_228 != (long *)0x0) {
        (**(code **)(*local_228 + 0x20))();
      }
      puVar19 = local_250;
      if (local_250 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_250 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_250[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_80 = (undefined8 *)*puVar19;
          FUN_02a44274(lVar18 + 0xd8,&local_80);
        }
      }
      puVar19 = local_260;
      if (local_260 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_260 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_260[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_80 = (undefined8 *)*puVar19;
          FUN_02a44274(lVar18 + 0xd8,&local_80);
        }
      }
      puVar19 = local_270;
      if (local_270 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_270 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_270[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_80 = (undefined8 *)*puVar19;
          FUN_02a44274(lVar18 + 0xd8,&local_80);
        }
      }
      puVar19 = local_280;
      if (local_280 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_280 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_280[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_80 = (undefined8 *)*puVar19;
          FUN_02a44274(lVar18 + 0xd8,&local_80);
        }
      }
      puVar19 = local_290;
      if (local_290 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_290 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_290[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_80 = (undefined8 *)*puVar19;
          FUN_02a44274(lVar18 + 0xd8,&local_80);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  else {
    bVar9 = *(int *)(param_1 + 0x120) == 1;
  }
  return bVar9;
}


