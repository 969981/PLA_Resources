/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158ff9c; name: FUN_0158ff9c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0158ff9c(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_60;
  long *local_58;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_0437c680;
  puVar3 = PTR_DAT_0437c678;
  switch(*(undefined4 *)(param_1 + 0x6d8)) {
  case 4:
  case 5:
    FUN_0155e1b4(*(undefined8 *)(param_1 + 0x6e0));
    iVar6 = 6;
    goto LAB_01590170;
  case 6:
    if (*(int *)(*(long *)(param_1 + 0x6e0) + 0x3b8) != 7) {
      return 0;
    }
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    if (((lVar11 != 0) && (lVar11 = FUN_00d8c974(), lVar11 != 0)) &&
       (iVar6 = FUN_00dc3e3c(), iVar6 == 6)) {
      FUN_00dc3e58(lVar11);
    }
    FUN_0183a190(*(undefined4 *)(param_1 + 0x774));
    plVar13 = *(long **)(param_1 + 0x6e0);
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    if (plVar13 == (long *)0x0) {
LAB_0159012c:
      if (*(long *)(param_1 + 0x5c0) == 0) goto LAB_01590134;
LAB_015901dc:
      FUN_015196f8(&local_58);
      if (local_58 == (long *)0x0) goto LAB_01590138;
      if (*(int *)(param_1 + 0x634) == 0) {
        FUN_019cc758(&local_70);
        if (CONCAT44(uStack_6c,local_70) == 0) {
          local_60 = (long *)0x0;
        }
        else {
          FUN_0151986c(&local_60);
          puVar8 = (undefined8 *)CONCAT44(uStack_6c,local_70);
          if (puVar8 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar8 + 1);
            do {
              iVar6 = *piVar1;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 + -1 == 0) {
              puVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = *puVar8;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
        }
        if (local_60 != (long *)0x0) {
          FUN_019bf2e4();
          FUN_019bf0f4(local_60);
          if (local_60 != (long *)0x0) {
            lVar11 = local_60[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar6 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_0159023c;
          }
        }
        goto joined_r0x01590254;
      }
      if (*(int *)(param_1 + 0x634) == 1) {
        FUN_019cc758(&local_70);
        if (CONCAT44(uStack_6c,local_70) == 0) {
          local_60 = (long *)0x0;
        }
        else {
          FUN_0151986c(&local_60);
          puVar8 = (undefined8 *)CONCAT44(uStack_6c,local_70);
          if (puVar8 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar8 + 1);
            do {
              iVar6 = *piVar1;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 + -1 == 0) {
              puVar8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_48 = *puVar8;
              FUN_02a44274(lVar11 + 0xd8,&local_48);
            }
          }
        }
        if ((local_60 != (long *)0x0) && (FUN_019bf0f4(), local_60 != (long *)0x0)) {
          lVar11 = local_60[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar6 = *piVar1 + -1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_0159023c:
          if (iVar6 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
        goto joined_r0x01590254;
      }
    }
    else {
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 != 0) goto LAB_0159012c;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
      if (*(long *)(param_1 + 0x5c0) != 0) goto LAB_015901dc;
LAB_01590134:
      local_58 = (long *)0x0;
LAB_01590138:
      puVar8 = (undefined8 *)FUN_02ad8108();
      FUN_02b21b70(*puVar8);
joined_r0x01590254:
      if (local_58 == (long *)0x0) break;
    }
    lVar11 = local_58[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      pcVar12 = *(code **)(*local_58 + 0x20);
      plVar13 = local_58;
LAB_015901bc:
      (*pcVar12)(plVar13);
    }
    break;
  case 7:
    uVar9 = FUN_00d16168(param_1 + 0x6e8,0);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    local_70 = 0;
    FUN_015905e8(DAT_043c9a70,&local_70);
    puVar4 = PTR_DAT_0437c680;
    puVar3 = PTR_DAT_0437c678;
    if (((*(int *)(param_1 + 0x630) == 2) && (lVar11 = *(long *)(param_1 + 0x5d0), lVar11 != 0)) &&
       (*(int *)(lVar11 + 0xc) != 0)) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar6 = *(int *)(lVar11 + 0xc);
      do {
        plVar13 = *(long **)(lVar11 + 0x10);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          uVar10 = FUN_009311a8();
          *(undefined8 *)puVar4 = uVar10;
          __cxa_guard_release(puVar3);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01590168;
          if (plVar13 == (long *)puVar4) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar6) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01590448;
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + -0x50);
            FUN_01e5c544(plVar13);
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar6 = *piVar1;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              pcVar12 = *(code **)(*plVar13 + 0x20);
              goto LAB_015901bc;
            }
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01590448:
        iVar6 = iVar7;
      } while (iVar7 != 0);
    }
    break;
  case 8:
    if (((*(int *)(param_1 + 0x630) == 2) && (lVar11 = *(long *)(param_1 + 0x5d0), lVar11 != 0)) &&
       (*(int *)(lVar11 + 0xc) != 0)) {
      piVar1 = (int *)(lVar11 + 0xc);
      iVar6 = *(int *)(lVar11 + 0xc);
      do {
        plVar13 = *(long **)(lVar11 + 0x10);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          uVar10 = FUN_009311a8();
          *(undefined8 *)puVar4 = uVar10;
          __cxa_guard_release(puVar3);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01590090;
          if (plVar13 == (long *)puVar4) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar6) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x18);
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
              uVar9 = FUN_01e560b4(plVar13);
              lVar11 = *(long *)(lVar11 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              bVar5 = iVar6 == 1;
              if (bVar5) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
              }
              if ((uVar9 & 1) == 0) {
                if (bVar5) {
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                  return 0;
                }
                return 0;
              }
              if (bVar5) {
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01590090:
    *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + 1;
  case 9:
    if (*(int *)(param_1 + 0x630) == 1) {
      FUN_01590724(param_1);
    }
    return 1;
  default:
    return 0;
  }
LAB_01590168:
  iVar6 = *(int *)(param_1 + 0x6d8) + 1;
LAB_01590170:
  *(int *)(param_1 + 0x6d8) = iVar6;
  return 0;
}


