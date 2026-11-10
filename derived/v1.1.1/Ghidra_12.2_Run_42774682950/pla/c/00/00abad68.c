/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00abad68; name: FUN_00abad68
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00abad68(long param_1)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *local_88;
  undefined8 *local_80;
  ulong local_78;
  long *local_70;
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043794d0;
  puVar8 = PTR_DAT_043794c8;
  puVar7 = PTR_DAT_043794b8;
  puVar6 = PTR_DAT_043794b0;
  if (*(char *)(param_1 + 0x220) == '\0') {
    lVar18 = *(long *)(param_1 + 0x1a8);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) {
LAB_00abb270:
      plVar19 = (long *)0x0;
    }
    else {
      piVar2 = (int *)(lVar18 + 0xc);
      iVar11 = *(int *)(lVar18 + 0xc);
      do {
        puVar21 = *(undefined8 **)(lVar18 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(puVar6);
        }
        if (puVar21 == (undefined8 *)0x0) goto LAB_00abb270;
        while (puVar21 != (undefined8 *)puVar7) {
          puVar21 = (undefined8 *)*puVar21;
          plVar19 = (long *)0x0;
          if (puVar21 == (undefined8 *)0x0) goto LAB_00abb274;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar19 = (long *)0x0;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar19 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar19 = (long *)0x0;
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_00abb274:
    lVar18 = FUN_0095992c(plVar19 + 0x1e,&local_88);
    if (plVar19 != (long *)0x0) {
      lVar14 = plVar19[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    if (lVar18 != 0) {
      FUN_01a82160(&local_88,lVar18);
      puVar21 = local_88;
      puVar9 = PTR_DAT_0437a3d0;
      puVar8 = PTR_DAT_0437a3c8;
      puVar7 = PTR_DAT_043795e0;
      puVar6 = PTR_DAT_043794d0;
      if (local_88 != (undefined8 *)0x0) {
        if (*(int *)((long)local_88 + 0xc) != 0) {
          piVar2 = (int *)((long)local_88 + 0xc);
          iVar11 = *(int *)((long)local_88 + 0xc);
          do {
            plVar19 = (long *)puVar21[2];
            if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar12 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)puVar7 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar19 == (long *)0x0) goto LAB_00abb574;
              if (plVar19 == (long *)puVar9) break;
              plVar19 = (long *)*plVar19;
            }
            iVar12 = *piVar2;
            if (iVar12 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar14 = puVar21[3];
                plVar19 = (long *)0x0;
                puVar21 = local_88;
                if (lVar14 != 0) {
                  plVar19 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x00abb4a0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar12;
          } while (iVar12 != 0);
        }
LAB_00abb574:
        plVar19 = (long *)0x0;
        puVar21 = local_88;
joined_r0x00abb4a0:
        local_88 = puVar21;
        if (puVar21 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar21 + 1);
          do {
            iVar11 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            puVar21[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_68 = *puVar21;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        if (plVar19 != (long *)0x0) {
          FUN_01a4fa84(&local_88,plVar19);
          puVar21 = local_88;
          puVar8 = PTR_DAT_0437a698;
          puVar7 = PTR_DAT_0437a690;
          puVar6 = PTR_DAT_043794d0;
          if (local_88 != (undefined8 *)0x0) {
            if (*(int *)((long)local_88 + 0xc) != 0) {
              piVar2 = (int *)((long)local_88 + 0xc);
              iVar11 = *(int *)((long)local_88 + 0xc);
              do {
                plVar20 = (long *)puVar21[2];
                if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
                  if (((*PTR_DAT_0437a6a0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a6a0), iVar12 != 0)) {
                    if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0))
                    {
                      uVar13 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                      __cxa_guard_release(puVar6);
                    }
                    *(undefined **)PTR_DAT_0437a6a8 = PTR_DAT_043794d8;
                    __cxa_guard_release(PTR_DAT_0437a6a0);
                  }
                  *(undefined **)puVar8 = PTR_DAT_0437a6a8;
                  __cxa_guard_release(puVar7);
                }
                while( true ) {
                  if (plVar20 == (long *)0x0) goto LAB_00abb87c;
                  if (plVar20 == (long *)puVar8) break;
                  plVar20 = (long *)*plVar20;
                }
                iVar12 = *piVar2;
                if (iVar12 == iVar11) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar11 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar14 = puVar21[3];
                    plVar20 = (long *)0x0;
                    puVar21 = local_88;
                    if (lVar14 != 0) {
                      plVar20 = (long *)(lVar14 + -0x50);
                    }
                    goto joined_r0x00abb690;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar12;
              } while (iVar12 != 0);
            }
LAB_00abb87c:
            plVar20 = (long *)0x0;
            puVar21 = local_88;
joined_r0x00abb690:
            local_88 = puVar21;
            if (puVar21 != (undefined8 *)0x0) {
              piVar2 = (int *)(puVar21 + 1);
              do {
                iVar11 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                puVar21[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = *puVar21;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            if (plVar20 != (long *)0x0) {
              FUN_02a4754c(&local_88,param_1 + 0x1f0);
              uVar13 = FUN_028aadac(plVar20,plVar20 + 0x15,&local_88);
              *(undefined8 *)(param_1 + 0x208) = uVar13;
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              FUN_01a82160(&local_88,lVar18);
              FUN_00abc168(param_1 + 0x228,&local_88);
              if (local_88 != (undefined8 *)0x0) {
                piVar2 = (int *)(local_88 + 1);
                do {
                  iVar11 = *piVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar4) {
                    *piVar2 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_68 = *local_88;
                  FUN_02a44274(lVar18 + 0xd8,&local_68);
                }
              }
              *(undefined1 *)(param_1 + 0x220) = 1;
              FUN_00abb904(param_1);
              lVar18 = plVar20[0xb];
              piVar2 = (int *)(lVar18 + 0xc);
              do {
                iVar11 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar18 + 0x18) = 0;
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
            }
          }
          lVar18 = plVar19[0xb];
          piVar2 = (int *)(lVar18 + 0xc);
          do {
            iVar11 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
        }
      }
    }
    return;
  }
  iVar11 = *(int *)(param_1 + 0x238);
  iVar12 = iVar11 + -1;
  *(int *)(param_1 + 0x238) = iVar12;
  puVar10 = PTR_DAT_0437a3d0;
  puVar9 = PTR_DAT_0437a3c8;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d0;
  if (iVar12 != 0 && 0 < iVar11) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x228);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
    return;
  }
  piVar2 = (int *)(lVar18 + 0xc);
  iVar11 = *(int *)(lVar18 + 0xc);
  do {
    plVar19 = *(long **)(lVar18 + 0x10);
    if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar8 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar10 = puVar8;
      __cxa_guard_release(puVar9);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) {
        return;
      }
      if (plVar19 == (long *)puVar10) break;
      plVar19 = (long *)*plVar19;
    }
    iVar12 = *piVar2;
    if (iVar12 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        plVar19 = (long *)(lVar18 + -0x50);
        FUN_01a4fa84(&local_80,plVar19);
        puVar21 = local_80;
        puVar8 = PTR_DAT_0437a698;
        puVar7 = PTR_DAT_0437a690;
        if (local_80 == (undefined8 *)0x0) goto LAB_00abae90;
        if (*(int *)((long)local_80 + 0xc) == 0) goto LAB_00abb0e4;
        piVar2 = (int *)((long)local_80 + 0xc);
        iVar11 = *(int *)((long)local_80 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar12;
    if (iVar12 == 0) {
      return;
    }
  } while( true );
LAB_00abaf68:
  plVar20 = (long *)puVar21[2];
  if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
    if (((*PTR_DAT_0437a6a0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a6a0), iVar12 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
        uVar13 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar13;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)PTR_DAT_0437a6a8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437a6a0);
    }
    *(undefined **)puVar8 = PTR_DAT_0437a6a8;
    __cxa_guard_release(puVar7);
  }
  while( true ) {
    if (plVar20 == (long *)0x0) goto LAB_00abb0e4;
    if (plVar20 == (long *)puVar8) break;
    plVar20 = (long *)*plVar20;
  }
  iVar12 = *piVar2;
  if (iVar12 == iVar11) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar14 = puVar21[3];
      plVar20 = (long *)0x0;
      puVar21 = local_80;
      if (lVar14 != 0) {
        plVar20 = (long *)(lVar14 + -0x50);
      }
      goto joined_r0x00abb0ec;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar11 = iVar12;
  if (iVar12 == 0) {
LAB_00abb0e4:
    plVar20 = (long *)0x0;
    puVar21 = local_80;
joined_r0x00abb0ec:
    local_80 = puVar21;
    if (puVar21 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar21 + 1);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        puVar21[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar21;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if (plVar20 != (long *)0x0) {
      local_80 = (undefined8 *)&DAT_f4b17a579f18960;
      local_78 = 0x82a2b175229d6a5b;
      local_70 = (long *)0x0;
      FUN_00db84c4(&local_80);
      iVar11 = *(int *)(param_1 + 0x214);
      iVar12 = *(int *)(param_1 + 0x218) - iVar11;
      if (iVar12 == 0) {
        uVar15 = 0;
      }
      else {
        uVar1 = iVar12 + 1;
        if (uVar1 == 0) {
          uVar15 = (int)local_78 + (int)local_80;
          uVar17 = local_78 ^ (ulong)local_80;
          local_78 = uVar17 >> 0x1b | uVar17 << 0x25;
          local_80 = (undefined8 *)
                     (uVar17 ^ ((ulong)local_80 >> 0x28 | (long)local_80 << 0x18) ^ uVar17 << 0x10);
        }
        else {
          do {
            lVar14 = 0x1f;
            if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
              lVar14 = 0x20;
            }
            uVar16 = lVar14 - LZCOUNT(uVar1);
            uVar17 = uVar16 >> 6;
            if ((uVar16 & 0x3f) != 0) {
              uVar17 = uVar17 + 1;
            }
            if (uVar16 < uVar17) {
              uVar15 = 0;
            }
            else {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar16 / uVar17;
              }
              uVar15 = (uint)(0xffffffffffffffff >> (-uVar5 & 0x3f));
            }
            uVar17 = (ulong)local_80 ^ local_78;
            iVar12 = (int)local_78;
            local_78 = uVar17 >> 0x1b | uVar17 << 0x25;
            uVar15 = (int)local_80 + iVar12 & uVar15;
            local_80 = (undefined8 *)
                       (uVar17 ^ ((ulong)local_80 >> 0x28 | (long)local_80 << 0x18) ^ uVar17 << 0x10
                       );
          } while (uVar1 <= uVar15);
        }
      }
      iVar12 = uVar15 + iVar11;
      if (iVar12 != *(int *)(param_1 + 0x218)) {
        iVar11 = iVar12 + 1;
      }
      if (*(int *)(param_1 + 0x210) == iVar12) {
        iVar12 = iVar11;
      }
      FUN_028ab494(plVar20,param_1 + 0x208,iVar12);
      *(int *)(param_1 + 0x210) = iVar12;
      FUN_00abb904(param_1);
      lVar14 = plVar20[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
LAB_00abae90:
    lVar18 = *(long *)(lVar18 + 8);
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    return;
  }
  goto LAB_00abaf68;
}


