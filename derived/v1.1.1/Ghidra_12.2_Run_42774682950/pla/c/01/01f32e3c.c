/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f32e3c; name: FUN_01f32e3c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f32e3c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char local_70;
  undefined7 uStack_6f;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  long *local_38;
  
  if (*(long *)(param_1 + 0x138) == 0) {
LAB_01f32e60:
    cVar3 = *(char *)(param_1 + 0x130);
  }
  else {
    FUN_01f37cc8(&local_70);
    plVar9 = (long *)CONCAT71(uStack_6f,local_70);
    if (plVar9 == (long *)0x0) goto LAB_01f32e60;
    FUN_0257e578(plVar9,1);
    *(undefined1 *)(param_1 + 0x148) = 1;
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f32e60;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
    cVar3 = *(char *)(param_1 + 0x130);
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x70) + (*(ulong *)(param_1 + 0xa8) / 0x66) * 8);
  uVar10 = *(ulong *)(param_1 + 0xa8) % 0x66;
  if (lVar8 + uVar10 * 0x28 == 0) {
    return;
  }
  local_70 = '\0';
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_008c4b3c(&local_68);
  lVar8 = lVar8 + uVar10 * 0x28;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00b63bec(&local_58,lVar8 + 0x10);
  puVar6 = local_58;
  local_48 = *(undefined1 *)(lVar8 + 0x20);
  local_70 = '\x01';
  if (local_58 == (undefined8 *)0x0) {
LAB_01f32ef0:
    plVar9 = (long *)0x0;
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_01f32ef8;
LAB_01f33348:
    FUN_01f37e80(&local_38);
    plVar12 = local_38;
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (FUN_01f37e80(&local_38), plVar11 = local_38, local_38 != (long *)0x0)) {
      FUN_0146719c(local_38);
      lVar8 = plVar11[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (plVar9 != (long *)0x0) goto LAB_01f32f04;
LAB_01f32f54:
    if (plVar12 == (long *)0x0) goto LAB_01f32f74;
LAB_01f32f58:
    lVar8 = plVar12[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f32f74;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    if (plVar9 != (long *)0x0) goto LAB_01f32f78;
LAB_01f32f94:
    if (local_58 == (undefined8 *)0x0) goto LAB_01f32fa0;
LAB_01f330f8:
    puVar6 = local_58;
    if (*(int *)((long)local_58 + 0xc) != 0) {
      piVar1 = (int *)((long)local_58 + 0xc);
      iVar7 = *(int *)((long)local_58 + 0xc);
      do {
        uVar10 = FUN_01a49bec(puVar6[2]);
        if ((uVar10 & 1) == 0) goto LAB_01f333bc;
        iVar4 = *piVar1;
        if (iVar4 == iVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = puVar6[3];
            plVar9 = (long *)0x0;
            if (lVar8 != 0) {
              plVar9 = (long *)(lVar8 + -0x50);
            }
            lVar8 = *(long *)(param_1 + 0x160);
            goto joined_r0x01f33170;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar4;
      } while (iVar4 != 0);
      goto LAB_01f32fa0;
    }
LAB_01f333bc:
    plVar9 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x160);
  }
  else {
    if (*(int *)((long)local_58 + 0xc) != 0) {
      piVar1 = (int *)((long)local_58 + 0xc);
      iVar7 = *(int *)((long)local_58 + 0xc);
      do {
        uVar10 = FUN_01a49bec(puVar6[2]);
        if ((uVar10 & 1) == 0) goto LAB_01f333cc;
        iVar4 = *piVar1;
        if (iVar4 == iVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = puVar6[3];
            plVar9 = (long *)0x0;
            if (lVar8 != 0) {
              plVar9 = (long *)(lVar8 + -0x50);
            }
            lVar8 = *(long *)(param_1 + 0x150);
            goto joined_r0x01f33344;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar4;
      } while (iVar4 != 0);
      goto LAB_01f32ef0;
    }
LAB_01f333cc:
    plVar9 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x150);
joined_r0x01f33344:
    if (lVar8 != 0) goto LAB_01f33348;
LAB_01f32ef8:
    plVar12 = (long *)0x0;
    if (plVar9 == (long *)0x0) goto LAB_01f32f54;
LAB_01f32f04:
    if (plVar12 == (long *)0x0) goto LAB_01f32f54;
    local_38 = (long *)plVar9[0xbd];
    if (local_38 != (long *)0x0) {
      plVar11 = local_38 + 10;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0146a850(plVar12,&local_38);
    if (local_38 == (long *)0x0) goto LAB_01f32f54;
    plVar11 = local_38 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_01f32f54;
    (**(code **)(*local_38 + 0x10))();
    if (plVar12 != (long *)0x0) goto LAB_01f32f58;
LAB_01f32f74:
    if (plVar9 == (long *)0x0) goto LAB_01f32f94;
LAB_01f32f78:
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01f32f94;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
    if (local_58 != (undefined8 *)0x0) goto LAB_01f330f8;
LAB_01f32fa0:
    plVar9 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x160);
  }
joined_r0x01f33170:
  if (lVar8 != 0) {
    FUN_0193471c(&local_38);
    plVar12 = local_38;
    if ((plVar9 == (long *)0x0) || (local_38 == (long *)0x0)) {
      if (local_38 == (long *)0x0) goto joined_r0x01f331f8;
    }
    else {
      plVar11 = *(long **)((long)plVar9 + 0x5e8);
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 10;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_0113219c(local_38,plVar11);
      plVar2 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    lVar8 = plVar12[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
joined_r0x01f331f8:
  puVar6 = local_58;
  if (plVar9 != (long *)0x0) {
    lVar8 = *(long *)((long)plVar9 + 0x58);
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      puVar6 = local_58;
    }
  }
  if (local_70 != '\0') {
    local_58 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        puVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = (long *)*puVar6;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = (long *)*puVar6;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
  }
  return;
}


