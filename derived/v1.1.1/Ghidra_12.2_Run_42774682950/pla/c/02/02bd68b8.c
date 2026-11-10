/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd68b8; name: FUN_02bd68b8
 */


void FUN_02bd68b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  long *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  ulong *local_70;
  undefined8 local_68;
  
  puVar11 = *(undefined1 **)(param_2 + 0x110);
  local_88 = param_4;
  if (puVar11 != (undefined1 *)0x0) {
    uVar13 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar11 + -1) & (ulong)param_4);
    }
    else {
      puVar14 = param_4;
      if (puVar11 <= param_4) {
        uVar4 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar4 = (ulong)param_4 / (ulong)puVar11;
        }
        puVar14 = param_4 + -(uVar4 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0x108) + (long)puVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == param_4) {
            if ((undefined1 *)plVar15[2] == param_4) goto LAB_02bd6bfc;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == param_4) {
            if ((undefined1 *)plVar15[2] == param_4) goto LAB_02bd6bfc;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar13 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar13 * (long)puVar11);
            }
            if (puVar16 != puVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)FUN_02be0128(*(undefined8 *)(param_2 + 8),param_3,&local_88);
  local_90 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02bd6e9c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_4 = local_88;
  }
  if (param_4 == &DAT_cbf29ce484222645) {
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_008802f0(&local_80,plVar15 + 0xb);
    do {
      uVar8 = local_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar3) {
        local_78 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar5 = PTR_DAT_043794a8;
    uVar9 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar9;
    FUN_02a44e0c(&local_70,uVar9,uVar8);
    puVar6 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
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
        puVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)puVar5 = lVar17;
        local_68 = *puVar6;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    puVar10 = local_70;
    puVar6 = local_80;
    if (local_70 != (ulong *)0x0) {
      local_70 = (ulong *)0x0;
    }
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
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)puVar5 = lVar17;
        local_68 = *puVar6;
        FUN_02a44274(lVar17 + 0xd8,&local_68);
      }
    }
    if (puVar10 == (ulong *)0x0) {
      local_88 = (undefined1 *)0x0;
    }
    else {
      puVar12 = puVar10 + 1;
      local_88 = (undefined1 *)*puVar10;
      do {
        iVar7 = (int)*puVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar3) {
          *(int *)puVar12 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        puVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)puVar5 = lVar17;
        local_80 = (undefined8 *)*puVar10;
        FUN_02a44274(lVar17 + 0xd8,&local_80);
      }
    }
  }
  FUN_02bdfe6c((long *)(param_2 + 0x108),&local_88,&local_90);
  if (plVar15 != (long *)0x0) {
    lVar17 = plVar15[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
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
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
LAB_02bd6bfc:
  puVar10 = (ulong *)FUN_02bdfce8(*(undefined8 *)(param_2 + 8),&local_88,param_5,param_6,param_7);
  local_70 = puVar10;
  if (puVar10 != (ulong *)0x0) {
    uVar13 = puVar10[0xb];
    if (*(undefined8 **)(uVar13 + 0x18) == (undefined8 *)0x0) {
LAB_02bd6e9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(uVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(uVar13 + 0x18))();
      *(undefined8 *)(uVar13 + 0x10) = uVar8;
    }
    piVar1 = (int *)(uVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02bdc3c0(param_2 + 0x160,&local_70);
  *(undefined1 *)(param_2 + 0x260) = 1;
  puVar12 = (ulong *)0x0;
  if (puVar10 != (ulong *)0x0) {
    puVar12 = puVar10 + 0xd;
  }
  (**(code **)(*puVar12 + 0x20))(&local_80,puVar12);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01800100(param_1,&local_80);
  puVar6 = local_80;
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
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *puVar6;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  param_1[2] = puVar12;
  if (puVar10 != (ulong *)0x0) {
    uVar13 = puVar10[0xb];
    piVar1 = (int *)(uVar13 + 0xc);
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
      *(undefined8 *)(uVar13 + 0x18) = 0;
      (**(code **)(*puVar10 + 0x20))(puVar10);
    }
  }
  return;
}


