/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba1690; name: FUN_01ba1690
 */


/* WARNING: Type propagation algorithm not settling */

byte FUN_01ba1690(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  
  if (*(char *)(param_1 + 0xb10) != '\0') {
    bVar7 = 0;
    goto LAB_01ba17fc;
  }
  uVar12 = (uint)*(ulong *)(param_1 + 0xb08);
  if ((*(ulong *)(param_1 + 0xb08) & 1) == 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ac3fa4(&local_78,param_1 + 0x248);
    FUN_0099c748(&local_60,&local_78);
    puVar4 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
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
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (local_60 == (long *)0x0) {
      bVar7 = 0;
      uVar12 = (uint)*(undefined8 *)(param_1 + 0xb08);
    }
    else {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00ae8374(&local_78,local_60 + 0x44);
      puVar4 = local_78;
      puVar6 = PTR_DAT_04379e80;
      puVar5 = PTR_DAT_04379e78;
      if (local_78 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar10 = *(int *)((long)local_78 + 0xc);
          do {
            plVar14 = (long *)puVar4[2];
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              uVar11 = FUN_0095a420();
              *(undefined8 *)puVar6 = uVar11;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_01ba1920;
              if (plVar14 == (long *)puVar6) break;
              plVar14 = (long *)*plVar14;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar13 = puVar4[3];
                plVar14 = (long *)0x0;
                puVar4 = local_78;
                if (lVar13 != 0) {
                  plVar14 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x01ba1944;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01ba1920:
        plVar14 = (long *)0x0;
        puVar4 = local_78;
joined_r0x01ba1944:
        local_78 = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar4 + 1);
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
            puVar4[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_58 = *puVar4;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        if (plVar14 == (long *)0x0) {
          bVar7 = 0;
        }
        else {
          FUN_00aae1c0(&local_78,plVar14);
          puVar4 = local_78;
          bVar7 = 0;
          if (local_78 != (undefined8 *)0x0) {
            if (*(int *)((long)local_78 + 0xc) != 0) {
              piVar1 = (int *)((long)local_78 + 0xc);
              iVar10 = *(int *)((long)local_78 + 0xc);
              do {
                plVar15 = (long *)puVar4[2];
                lVar13 = FUN_00a3edb8();
                while( true ) {
                  if (plVar15 == (long *)0x0) goto LAB_01ba1ac4;
                  if (plVar15 == (long *)lVar13) break;
                  plVar15 = (long *)*plVar15;
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar10) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar13 = puVar4[3];
                    plVar15 = (long *)0x0;
                    puVar4 = local_78;
                    if (lVar13 != 0) {
                      plVar15 = (long *)(lVar13 + -0x50);
                    }
                    goto joined_r0x01ba1abc;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar10 = iVar9;
              } while (iVar9 != 0);
            }
LAB_01ba1ac4:
            plVar15 = (long *)0x0;
            puVar4 = local_78;
joined_r0x01ba1abc:
            local_78 = puVar4;
            if (puVar4 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar4 + 1);
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
                puVar4[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_58 = *puVar4;
                FUN_02a44274(lVar13 + 0xd8,&local_58);
              }
            }
            if (plVar15 == (long *)0x0) {
              bVar7 = 0;
            }
            else {
              bVar7 = FUN_02a9d160(plVar15);
              lVar13 = plVar15[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
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
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
              }
            }
          }
          lVar13 = plVar14[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      if (local_60 != (long *)0x0) {
        lVar13 = local_60[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
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
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
          uVar12 = (uint)*(undefined8 *)(param_1 + 0xb08);
          goto joined_r0x01ba1820;
        }
      }
      uVar12 = (uint)*(undefined8 *)(param_1 + 0xb08);
    }
  }
  else {
    bVar7 = 1;
  }
joined_r0x01ba1820:
  if ((uVar12 >> 1 & 1) == 0) {
    bVar7 = bVar7 & *(char *)(param_1 + 0x956) == '\0';
  }
  if ((uVar12 >> 2 & 1) == 0) {
    bVar7 = bVar7 & *(char *)(param_1 + 0xa90) == '\0';
  }
  if ((uVar12 >> 3 & 1) == 0) {
    bVar7 = bVar7 & *(int *)(param_1 + 0x8cc) != 4;
  }
  if ((uVar12 >> 4 & 1) == 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_0095aa3c(&local_78,param_1 + 0x560);
    puVar4 = local_78;
    puVar6 = PTR_DAT_043794d8;
    puVar5 = PTR_DAT_043794d0;
    if (local_78 == (undefined8 *)0x0) goto LAB_01ba17e8;
    local_68 = *(long **)(param_1 + 0x570);
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar10 = *(int *)((long)local_78 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        plVar14 = local_68;
        if (((*puVar5 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(puVar5), plVar14 = local_68, iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
          plVar14 = local_68;
        }
        while( true ) {
          local_68 = plVar14;
          if (plVar15 == (long *)0x0) goto LAB_01ba1ce8;
          if (plVar15 == (long *)puVar6) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar4[3];
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -8);
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
              (**(code **)(*plVar15 + 0x18))(plVar15);
              puVar4 = local_78;
              goto joined_r0x01ba1c3c;
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
LAB_01ba1ce8:
    plVar14 = (long *)0x0;
    puVar4 = local_78;
joined_r0x01ba1c3c:
    local_78 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (plVar14 == (long *)0x0) goto LAB_01ba17e8;
    bVar8 = FUN_0180952c(plVar14);
    bVar7 = bVar7 & (bVar8 ^ 1);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    bVar8 = *(byte *)(param_1 + 0xb08);
  }
  else {
LAB_01ba17e8:
    bVar8 = *(byte *)(param_1 + 0xb08);
  }
  if ((bVar8 >> 5 & 1) == 0) {
    bVar7 = bVar7 & (*(byte *)(param_1 + 0x81d) ^ 0xff) & 1;
  }
LAB_01ba17fc:
  return bVar7 & 1;
}


