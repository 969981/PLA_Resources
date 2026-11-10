/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8b464; name: FUN_00e8b464
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8b464(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar14 = *(long **)(lVar12 + 0xc0);
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00e8b7cc;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00e8b8e8(&local_70,plVar14);
  if (local_70 != (long *)0x0) {
    if (local_70[0x1a] == 0) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
    }
    else {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_019d08dc(&local_80,local_70[0x1a] + 0x1c0);
      puVar4 = local_80;
      puVar8 = PTR_DAT_0437c670;
      puVar7 = PTR_DAT_0437c668;
      puVar6 = PTR_DAT_043794d8;
      puVar5 = PTR_DAT_043794d0;
      if (local_80 != (undefined8 *)0x0) {
        if (*(int *)((long)local_80 + 0xc) != 0) {
          piVar1 = (int *)((long)local_80 + 0xc);
          iVar10 = *(int *)((long)local_80 + 0xc);
          do {
            plVar16 = (long *)puVar4[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar11 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar11;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar8 = puVar6;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar16 == (long *)0x0) goto LAB_00e8b864;
              if (plVar16 == (long *)puVar8) break;
              plVar16 = (long *)*plVar16;
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
                lVar12 = puVar4[3];
                plVar16 = (long *)0x0;
                puVar4 = local_80;
                if (lVar12 != 0) {
                  plVar16 = (long *)(lVar12 + -0x50);
                }
                goto joined_r0x00e8b684;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_00e8b864:
        plVar16 = (long *)0x0;
        puVar4 = local_80;
joined_r0x00e8b684:
        local_80 = puVar4;
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
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_68 = *puVar4;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
        if (plVar16 != (long *)0x0) {
          plVar15 = (long *)plVar16[0xe];
          if (plVar15 == (long *)0x0) {
            if (_DAT_00000210 != 2) {
LAB_00e8b800:
              lVar12 = plVar16[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
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
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              goto LAB_00e8b524;
            }
            *param_1 = 0;
          }
          else {
            lVar12 = plVar15[0xb];
            if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_00e8b7cc:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar12 + 0x10) == 0) {
              uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
              *(undefined8 *)(lVar12 + 0x10) = uVar11;
            }
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar13 = plVar15[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            lVar12 = plVar15[0x42];
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
            if ((int)lVar12 != 2) goto LAB_00e8b800;
            lVar12 = plVar16[0xe];
            *param_1 = lVar12;
            if (lVar12 != 0) {
              lVar12 = *(long *)(lVar12 + 0x58);
              if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00e8b7cc;
              if (*(long *)(lVar12 + 0x10) == 0) {
                uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                *(undefined8 *)(lVar12 + 0x10) = uVar11;
              }
              piVar1 = (int *)(lVar12 + 0xc);
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
          lVar12 = plVar16[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          goto joined_r0x00e8b52c;
        }
      }
    }
  }
LAB_00e8b524:
  *param_1 = 0;
joined_r0x00e8b52c:
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


