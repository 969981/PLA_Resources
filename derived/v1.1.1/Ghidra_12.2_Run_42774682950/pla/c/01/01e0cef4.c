/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0cef4; name: FUN_01e0cef4
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_01e0cef4(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 in_q3 [16];
  undefined8 uVar21;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  long *local_98;
  char local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  
  puVar8 = PTR_DAT_0437c680;
  puVar7 = PTR_DAT_0437c678;
  uVar21 = in_q3._8_8_;
  uVar20 = in_q3._0_8_;
  if ((((param_2 & 1) != 0) && (lVar16 = param_1[0xe], lVar16 != 0)) &&
     (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar10 = *(int *)(lVar16 + 0xc);
    do {
      plVar18 = *(long **)(lVar16 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        uVar11 = FUN_009311a8();
        *(undefined8 *)puVar8 = uVar11;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01e0cf24;
        if (plVar18 == (long *)puVar8) break;
        plVar18 = (long *)*plVar18;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            plVar18 = (long *)(lVar16 + -0x50);
            FUN_01e5b50c(&local_90,plVar18,param_3);
            puVar8 = PTR_DAT_0437c670;
            puVar7 = PTR_DAT_0437c668;
            lVar12 = CONCAT71(uStack_8f,local_90);
            if (lVar12 == 0) {
              plVar14 = (long *)0x0;
              goto LAB_01e0cfdc;
            }
            if (*(int *)(lVar12 + 0xc) == 0) goto LAB_01e0d218;
            piVar1 = (int *)(lVar12 + 0xc);
            iVar10 = *(int *)(lVar12 + 0xc);
            goto LAB_01e0d0b4;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_01e0cf24;
LAB_01e0d0b4:
  do {
    plVar14 = *(long **)(lVar12 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_01e0d218;
      if (plVar14 == (long *)puVar8) break;
      plVar14 = (long *)*plVar14;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar14 = (long *)0x0;
        if (*(long *)(lVar12 + 0x18) != 0) {
          plVar14 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
        }
        puVar6 = (undefined8 *)CONCAT71(uStack_8f,local_90);
        goto joined_r0x01e0d0f8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01e0d218:
  plVar14 = (long *)0x0;
  puVar6 = (undefined8 *)CONCAT71(uStack_8f,local_90);
joined_r0x01e0d0f8:
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = (long *)*puVar6;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (plVar14 == (long *)0x0) {
LAB_01e0cfdc:
    uVar15 = (uint)param_4;
    bVar4 = false;
  }
  else {
    plVar13 = (long *)plVar14[0xe];
    if (plVar13 == (long *)0x0) {
LAB_01e0d298:
      bVar4 = false;
      if (plVar13 != (long *)0x0) goto LAB_01e0d37c;
LAB_01e0d39c:
      uVar15 = (uint)param_4;
    }
    else {
      lVar12 = plVar13[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e0d72c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0199c138(&local_70,plVar13);
      puVar7 = PTR_DAT_043794b8;
      if (local_70 == (long *)0x0) {
        param_4 = 0;
        bVar4 = true;
      }
      else {
        lVar12 = local_70[0x35];
        piVar1 = (int *)(lVar12 + 0xc);
        iVar10 = *(int *)(lVar12 + 0xc);
        do {
          while( true ) {
            plVar17 = *(long **)(lVar12 + 0x10);
            if (((*PTR_DAT_043794b0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar9 != 0)) {
              if (((*PTR_DAT_043794c0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar9 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043794c0);
              }
              *(undefined **)puVar7 = PTR_DAT_043794c8;
              __cxa_guard_release(PTR_DAT_043794b0);
            }
            for (; plVar17 != (long *)puVar7; plVar17 = (long *)*plVar17) {
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar9;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          iVar10 = iVar9;
        } while (cVar3 != '\0');
        lVar12 = *(long *)(lVar12 + 0x18);
        plVar17 = (long *)0x0;
        if (lVar12 != 0) {
          plVar17 = (long *)(lVar12 + -0x50);
        }
        (**(code **)(*plVar17 + 0x40))(plVar17);
        if (lVar12 != 0) {
          lVar12 = plVar17[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
        FUN_0199c220(&local_90,plVar13);
        puVar7 = PTR_DAT_0437a0e8;
        lVar12 = CONCAT71(uStack_8f,local_90);
        if (lVar12 == 0) {
LAB_01e0d340:
          param_4 = 0;
          bVar4 = true;
        }
        else {
          if (*(int *)(lVar12 + 0xc) != 0) {
            piVar1 = (int *)(lVar12 + 0xc);
            iVar10 = *(int *)(lVar12 + 0xc);
            do {
              plVar17 = *(long **)(lVar12 + 0x10);
              if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                  uVar11 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar17 == (long *)0x0) goto LAB_01e0d51c;
                if (plVar17 == (long *)PTR_DAT_0437a0f0) break;
                plVar17 = (long *)*plVar17;
              }
              iVar9 = *piVar1;
              if (iVar9 == iVar10) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  plVar17 = (long *)0x0;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    plVar17 = (long *)(*(long *)(lVar12 + 0x18) + -0x50);
                  }
                  puVar6 = (undefined8 *)CONCAT71(uStack_8f,local_90);
                  goto joined_r0x01e0d5b0;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = iVar9;
            } while (iVar9 != 0);
          }
LAB_01e0d51c:
          plVar17 = (long *)0x0;
          puVar6 = (undefined8 *)CONCAT71(uStack_8f,local_90);
joined_r0x01e0d5b0:
          if (puVar6 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar6 + 1);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              puVar6[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_68 = (long *)*puVar6;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
          if (plVar17 == (long *)0x0) goto LAB_01e0d340;
          FUN_01847290(&local_68,plVar17);
          if (local_68 == (long *)0x0) {
            bVar4 = false;
          }
          else {
            local_98 = local_68;
            lVar12 = local_68[0xb];
            if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e0d72c;
            if (*(long *)(lVar12 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
              *(undefined8 *)(lVar12 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            (**(code **)(*param_1 + 0x58))(&local_90,param_1,&local_98,param_4);
            if (local_98 != (long *)0x0) {
              lVar12 = local_98[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_98 + 0x20))();
              }
            }
            if (local_90 == '\0') {
              bVar4 = false;
            }
            else {
              local_b0 = (float)uVar20;
              fStack_ac = (float)((ulong)uVar20 >> 0x20);
              fStack_a8 = (float)uVar21;
              fStack_a4 = (float)((ulong)uVar21 >> 0x20);
              local_b0 = (float)local_80 - local_b0;
              fStack_ac = (float)((ulong)local_80 >> 0x20) - fStack_ac;
              fStack_a8 = (float)uStack_78 - fStack_a8;
              fStack_a4 = (float)((ulong)uStack_78 >> 0x20) - fStack_a4;
              local_b0 = local_b0 * local_b0;
              fStack_ac = fStack_ac * fStack_ac;
              fStack_a8 = fStack_a8 * fStack_a8;
              fStack_a4 = fStack_a4 * fStack_a4;
              auVar19._4_4_ = fStack_ac;
              auVar19._0_4_ = local_b0;
              auVar19._8_4_ = fStack_a8;
              auVar19._12_4_ = fStack_a4;
              auVar5._4_4_ = fStack_ac;
              auVar5._0_4_ = local_b0;
              auVar5._8_4_ = fStack_a8;
              auVar5._12_4_ = fStack_a4;
              auVar19 = NEON_ext(auVar19,auVar5,8,1);
              bVar4 = auVar19._0_4_ + local_b0 + auVar19._4_4_ + fStack_ac <= 2500.0;
            }
            if (local_68 != (long *)0x0) {
              lVar12 = local_68[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          lVar12 = plVar17[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 1) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          param_4 = 1;
        }
        if (local_70 != (long *)0x0) {
          lVar12 = local_70[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
          }
        }
        if (!bVar4) goto LAB_01e0d298;
        bVar4 = true;
        if (plVar13 == (long *)0x0) goto LAB_01e0d39c;
      }
LAB_01e0d37c:
      uVar15 = (uint)param_4;
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 != 0) goto LAB_01e0d39c;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
    if (!bVar4) goto LAB_01e0cfdc;
    bVar4 = true;
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  lVar16 = *(long *)(lVar16 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (bVar4) goto LAB_01e0cf28;
LAB_01e0cf24:
  uVar15 = 0;
LAB_01e0cf28:
  return uVar15 & 1;
}


