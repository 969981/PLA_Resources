/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158ef94; name: FUN_0158ef94
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0158ef94(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x6d8) == 3) {
    iVar7 = 4;
  }
  else {
    uVar9 = 1;
    switch(*(int *)(param_1 + 0x6d8)) {
    case 0:
      uVar6 = FUN_01837164(1);
      *(undefined4 *)(param_1 + 0x774) = uVar6;
      FUN_0183a190(0);
      if (*(long *)(param_1 + 0x5c0) == 0) {
        local_58 = (long *)0x0;
LAB_0158f038:
        puVar10 = (undefined8 *)FUN_02ad8108();
        FUN_02b219a8(*puVar10);
joined_r0x0158f27c:
        if (local_58 != (long *)0x0) goto LAB_0158f04c;
      }
      else {
        FUN_015196f8(&local_58);
        if (local_58 == (long *)0x0) goto LAB_0158f038;
        if (*(int *)(param_1 + 0x634) == 0) {
          FUN_019cc758(&local_80);
          if (local_80 == (undefined8 *)0x0) {
            local_60 = (long *)0x0;
          }
          else {
            FUN_0151986c(&local_60);
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_48 = *local_80;
                FUN_02a44274(lVar13 + 0xd8,&local_48);
              }
            }
          }
          if (local_60 != (long *)0x0) {
            FUN_019befe4();
            FUN_019bf1f4(local_60);
            if (local_60 != (long *)0x0) {
              lVar13 = local_60[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              goto LAB_0158f264;
            }
          }
          goto joined_r0x0158f27c;
        }
        if (*(int *)(param_1 + 0x634) == 1) {
          FUN_019cc758(&local_80);
          if (local_80 == (undefined8 *)0x0) {
            local_60 = (long *)0x0;
          }
          else {
            FUN_0151986c(&local_60);
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_48 = *local_80;
                FUN_02a44274(lVar13 + 0xd8,&local_48);
              }
            }
          }
          if ((local_60 != (long *)0x0) && (FUN_019befe4(), local_60 != (long *)0x0)) {
            lVar13 = local_60[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar7 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_0158f264:
            if (iVar7 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_60 + 0x20))();
            }
          }
          goto joined_r0x0158f27c;
        }
LAB_0158f04c:
        lVar13 = local_58[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      local_80 = (undefined8 *)0xdca5acb5512330bd;
      pcStack_78 = "HayabusaSkyEnable";
      local_70 = 0x1f;
      local_68 = (long *)0x0;
      local_48 = CONCAT44(local_48._4_4_,1);
      FUN_02ad63f8(&local_80,&local_48);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      puVar5 = PTR_DAT_0437c680;
      puVar4 = PTR_DAT_0437c678;
      if (*(int *)(param_1 + 0x630) == 1) {
        FUN_0158f5f8(param_1);
LAB_0158f0c8:
        *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + 1;
        goto switchD_0158f018_caseD_1;
      }
      if (*(int *)(param_1 + 0x630) != 2) goto LAB_0158f0c8;
      lVar13 = *(long *)(param_1 + 0x5d0);
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
        piVar1 = (int *)(lVar13 + 0xc);
        iVar7 = *(int *)(lVar13 + 0xc);
        do {
          plVar12 = *(long **)(lVar13 + 0x10);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar9 = FUN_009311a8();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_0158f1c4;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = *(long *)(lVar13 + 0x18);
              if (lVar13 != 0) {
                plVar12 = (long *)(lVar13 + -0x50);
                FUN_01e5c2d0(plVar12);
                lVar13 = *(long *)(lVar13 + 8);
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_0158f1c4:
      iVar7 = *(int *)(param_1 + 0x6d8) + 1;
      goto LAB_0158f1cc;
    case 1:
switchD_0158f018_caseD_1:
      puVar5 = PTR_DAT_0437c680;
      puVar4 = PTR_DAT_0437c678;
      if (((*(int *)(param_1 + 0x630) == 2) && (lVar13 = *(long *)(param_1 + 0x5d0), lVar13 != 0))
         && (*(int *)(lVar13 + 0xc) != 0)) {
        piVar1 = (int *)(lVar13 + 0xc);
        iVar7 = *(int *)(lVar13 + 0xc);
        do {
          plVar12 = *(long **)(lVar13 + 0x10);
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar9 = FUN_009311a8();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_0158f0e0;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_0158f510;
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + -0x50);
              uVar11 = FUN_01e560b4(plVar12);
              lVar13 = *(long *)(lVar13 + 8);
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 == 1) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                bVar3 = true;
                if ((uVar11 & 1) == 0) goto LAB_0158f5b0;
LAB_0158f590:
                if (bVar3) {
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                }
                break;
              }
              bVar3 = false;
              if ((uVar11 & 1) != 0) goto LAB_0158f590;
LAB_0158f5b0:
              if (bVar3) {
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              goto switchD_0158f018_caseD_3;
            }
            break;
          }
          ClearExclusiveLocal();
LAB_0158f510:
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_0158f0e0:
      *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + 1;
    case 2:
      uVar11 = FUN_02bcddc0();
      if ((uVar11 & 1) == 0) {
        uVar9 = FUN_0158fd68(DAT_043c9a70,*(undefined8 *)(param_1 + 0x690),
                             *(undefined8 *)(param_1 + 0x78));
      }
      else {
        uVar9 = FUN_0158fca8();
      }
      *(undefined8 *)(param_1 + 0x6f8) = uVar9;
      FUN_00d16158(&local_80,uVar9);
      *(char **)(param_1 + 0x6f0) = pcStack_78;
      *(undefined8 **)(param_1 + 0x6e8) = local_80;
      FUN_0158fdfc(&local_80,*(undefined8 *)(param_1 + 0x6f8),param_1 + 0x6f8);
      plVar12 = *(long **)(param_1 + 0x6e0);
      *(undefined8 *)(param_1 + 0x6e0) = 0;
      if (plVar12 != (long *)0x0) {
        lVar13 = plVar12[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
        }
      }
      *(undefined8 **)(param_1 + 0x6e0) = local_80;
      FUN_0158fe7c(param_1);
      iVar7 = *(int *)(param_1 + 0x6d8) + 2;
      *(int *)(param_1 + 0x6d8) = *(int *)(param_1 + 0x6d8) + 1;
      break;
    default:
      goto switchD_0158f018_caseD_3;
    case 4:
      goto switchD_0158f018_caseD_4;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x6e0) + 0x3b8) == 2) {
LAB_0158f1cc:
    *(int *)(param_1 + 0x6d8) = iVar7;
  }
switchD_0158f018_caseD_3:
  uVar9 = 0;
switchD_0158f018_caseD_4:
  return uVar9;
}


