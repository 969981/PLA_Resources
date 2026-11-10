/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099516c; name: FUN_0099516c
 */


void FUN_0099516c(long param_1,byte param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long *local_90;
  ulong *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  byte local_4c [4];
  long *local_48;
  
  lVar1 = param_1 + 0x68;
  local_4c[0] = param_2;
  local_58 = (long *)FUN_00994624(lVar1,local_4c);
  local_58 = (long *)*local_58;
  if (local_58 != (long *)0x0) {
    lVar17 = local_58[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0099582c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00aaf7b0(&local_88,&local_58);
  if (local_58 == (long *)0x0) {
LAB_00995214:
    if (local_88 != (ulong *)0x0) goto LAB_0099521c;
LAB_00995708:
    uVar18 = 0x3f800000;
    uVar8 = 1;
    uVar19 = 0x3f800000;
  }
  else {
    lVar17 = local_58[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00995214;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*local_58 + 0x20))();
    if (local_88 == (ulong *)0x0) goto LAB_00995708;
LAB_0099521c:
    uVar8 = (**(code **)(*local_88 + 0xf0))();
    uVar18 = FUN_00d8326c(local_88,0);
    uVar19 = FUN_00d83e48(local_88);
    if (local_88 != (ulong *)0x0) {
      uVar12 = local_88[0xb];
      piVar2 = (int *)(uVar12 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(uVar12 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  lVar17 = FUN_00994624(lVar1,local_4c);
  *(undefined1 *)(lVar17 + 0xc) = uVar8;
  lVar17 = FUN_00994624(lVar1,local_4c);
  *(undefined4 *)(lVar17 + 0x10) = uVar18;
  lVar17 = FUN_00994624(lVar1,local_4c);
  *(undefined4 *)(lVar17 + 0x14) = uVar19;
  local_68 = (long *)FUN_00994624(lVar1,local_4c);
  local_68 = (long *)*local_68;
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0099582c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00aada94(&local_88,&local_68);
  FUN_009983e4(&local_60,&local_88);
  puVar7 = local_88;
  if (local_88 != (ulong *)0x0) {
    puVar3 = local_88 + 1;
    do {
      iVar9 = (int)*puVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar5) {
        *(int *)puVar3 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_48 = (long *)*puVar7;
      FUN_02a44274(lVar17 + 0xd8,&local_48);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_60 != (long *)0x0) {
    plVar13 = (long *)local_60[0x4a];
    if (plVar13 == (long *)local_60[0x4b]) {
      plVar13 = *(long **)(*plVar13 + 0x68);
    }
    else {
      do {
        lVar17 = *plVar13;
        plVar13 = plVar13 + 1;
      } while (*(undefined1 **)(lVar17 + 0x158) != &DAT_afc4d6c05abef19e);
      plVar13 = *(long **)(lVar17 + 0x68);
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      local_88 = (ulong *)&DAT_4955b49339758aca;
      pcStack_80 = "battle_wait_switch";
      local_78 = 0x12;
      local_70 = (long *)0x0;
      plVar11 = (long *)(**(code **)(*plVar13 + 0x98))(plVar13,&local_88);
      local_48 = plVar11;
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))(local_70);
        plVar11 = (long *)((ulong)local_48 & 0xff);
      }
      if (((ulong)plVar11 & 0xff) != 0) {
        (**(code **)(*plVar13 + 0xa8))(plVar13,&local_48,1);
      }
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (local_60 != (long *)0x0) {
      lVar17 = local_60[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  if ((param_3 & 1) == 0) {
    plVar13 = (long *)FUN_00994624(lVar1,local_4c);
    plVar13 = (long *)FUN_0095992c(*plVar13 + 0xf0,&local_88);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x200))(0);
      FUN_01a8b7b8(plVar13);
    }
  }
  uVar12 = *(ulong *)(param_1 + 0x70);
  if (uVar12 != 0) {
    uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar14 = (ulong)local_4c[0];
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (int)uVar12 - 1 & uVar14;
    }
    else {
      uVar16 = uVar14;
      if (uVar12 <= uVar14) {
        uVar16 = 0;
        if (uVar12 != 0) {
          uVar16 = uVar14 / uVar12;
        }
        uVar16 = uVar14 - uVar16 * uVar12;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x68) + uVar16 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar13[1] == uVar14) {
            if (*(byte *)(plVar13 + 2) == local_4c[0]) goto LAB_009955c4;
          }
          else if ((plVar13[1] & uVar12 - 1) != uVar16) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar13[1];
          if (uVar15 == uVar14) {
            if (*(byte *)(plVar13 + 2) == local_4c[0]) goto LAB_009955c4;
          }
          else {
            if (uVar12 <= uVar15) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar6 * uVar12;
            }
            if (uVar15 != uVar16) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_009955d8:
  plVar13 = (long *)FUN_00994624(lVar1,local_4c);
  plVar13 = (long *)FUN_009abf14(*plVar13 + 0xf0,&local_88);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0xf0))();
  }
  return;
LAB_009955c4:
  if ((((int)plVar13[4] == 0) && (*(char *)(param_1 + 0x568) != '\0')) && ((param_3 & 1) == 0)) {
    local_90 = (long *)FUN_00994624(lVar1,local_4c);
    local_90 = (long *)*local_90;
    if (local_90 != (long *)0x0) {
      lVar17 = local_90[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0099582c;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar10;
      }
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00aaf430(&local_88,&local_90,1);
    if (local_88 == (ulong *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      FUN_009b17f0(&local_48);
      plVar13 = local_48;
      puVar7 = local_88;
      if (local_88 != (ulong *)0x0) {
        puVar3 = local_88 + 1;
        do {
          iVar9 = (int)*puVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *(int *)puVar3 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_48 = (long *)*puVar7;
          FUN_02a44274(lVar17 + 0xd8,&local_48);
        }
      }
    }
    if (local_90 != (long *)0x0) {
      lVar17 = local_90[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    if (plVar13 != (long *)0x0) {
      FUN_01c0ed40(plVar13,1);
      lVar17 = plVar13[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  goto LAB_009955d8;
}


