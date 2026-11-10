/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009986ec; name: FUN_009986ec
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_009986ec(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  byte bVar14;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  local_78 = (long *)*param_1;
  if (local_78 == (long *)0x0) {
    return false;
  }
  lVar11 = local_78[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00998b38;
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00aade28(local_70,&local_78);
  puVar4 = local_70[0];
  puVar6 = PTR_DAT_0437a150;
  puVar5 = PTR_DAT_0437a148;
  if (local_70[0] == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
LAB_0099876c:
    if (local_78 == (long *)0x0) goto LAB_00998790;
LAB_00998774:
    lVar11 = local_78[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00998790;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_78 + 0x20))();
    if (plVar12 == (long *)0x0) goto LAB_009989dc;
LAB_00998794:
    bVar7 = (int)plVar12[0x3f] == 3;
  }
  else {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar9 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar12 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009b19b4();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00998bd4;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar4[3];
            plVar12 = (long *)0x0;
            puVar4 = local_70[0];
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x00998bac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00998bd4:
    plVar12 = (long *)0x0;
    puVar4 = local_70[0];
joined_r0x00998bac:
    local_70[0] = puVar4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_0099876c;
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_0099876c;
    puVar4[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar11 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar11;
    local_58 = *puVar4;
    FUN_02a44274(lVar11 + 0xd8,&local_58);
    if (local_78 != (long *)0x0) goto LAB_00998774;
LAB_00998790:
    if (plVar12 != (long *)0x0) goto LAB_00998794;
LAB_009989dc:
    bVar7 = false;
  }
  local_88 = (long *)*param_1;
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00998b38;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00aada94(local_70,&local_88);
  FUN_009983e4(&local_80,local_70);
  puVar4 = local_70[0];
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_70[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if (local_88 == (long *)0x0) {
LAB_00998884:
    bVar14 = 0;
    if (local_80 != (long *)0x0) {
LAB_0099888c:
      plVar13 = local_80;
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      bVar14 = *(byte *)(plVar13 + 0x61) & 1;
    }
  }
  else {
    lVar11 = local_88[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 != 0) goto LAB_00998884;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
    if (local_80 != (long *)0x0) goto LAB_0099888c;
    bVar14 = 0;
  }
  local_90 = (long *)*param_1;
  if (local_90 != (long *)0x0) {
    lVar11 = local_90[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00998b38:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00aae64c(local_70,&local_90);
  puVar4 = local_70[0];
  puVar6 = PTR_DAT_0437a140;
  puVar5 = PTR_DAT_0437a138;
  if (local_70[0] == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar9 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009b19b4();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00998d04;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_70[0];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x00998cdc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_00998d04:
    plVar13 = (long *)0x0;
    puVar4 = local_70[0];
joined_r0x00998cdc:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
  }
  if (local_90 != (long *)0x0) {
    lVar11 = *(long *)((long)local_90 + 0x58);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (plVar13 == (long *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = (bVar14 & bVar7 & *(int *)((long)plVar13 + 0x200) == 2) != 0;
    lVar11 = *(long *)((long)plVar13 + 0x58);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (local_80 != (long *)0x0) {
    lVar11 = local_80[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return bVar7;
}


