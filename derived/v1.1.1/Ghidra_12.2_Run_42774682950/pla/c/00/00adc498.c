/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00adc498; name: FUN_00adc498
 */


void FUN_00adc498(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  
  plVar7 = *(long **)(param_1 + 0x78);
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar7 != plVar2) {
    do {
      lVar8 = *plVar7;
      if (*(int *)(lVar8 + 0x118) == 0) {
        puVar10 = *(undefined8 **)(lVar8 + 0xe0);
        puVar3 = *(undefined8 **)(lVar8 + 0xe8);
        if ((puVar10 != puVar3) &&
           ((**(code **)(*(long *)*puVar10 + 0x80))(), puVar10 + 1 != puVar3)) {
          (**(code **)(*(long *)puVar10[1] + 0x80))();
          for (puVar10 = puVar10 + 2; puVar10 != puVar3; puVar10 = puVar10 + 1) {
            (**(code **)(*(long *)*puVar10 + 0x80))();
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    plVar2 = *(long **)(param_1 + 0x80);
    for (plVar7 = *(long **)(param_1 + 0x78); plVar7 != plVar2; plVar7 = plVar7 + 1) {
      puVar10 = *(undefined8 **)(*plVar7 + 0xe0);
      puVar3 = *(undefined8 **)(*plVar7 + 0xe8);
      if ((puVar10 != puVar3) && ((**(code **)(*(long *)*puVar10 + 0x70))(), puVar10 + 1 != puVar3))
      {
        (**(code **)(*(long *)puVar10[1] + 0x70))();
        for (puVar10 = puVar10 + 2; puVar10 != puVar3; puVar10 = puVar10 + 1) {
          (**(code **)(*(long *)*puVar10 + 0x70))();
        }
      }
    }
  }
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  uVar9 = *(undefined8 *)(lVar8 + 200);
  if ((*(char *)(param_1 + 0x2d8) != '\x1f') &&
     (FUN_00995ec4(&local_50,uVar9,param_1 + 0x2d8), local_50 != (long *)0x0)) {
    lVar8 = FUN_009ab5b8(local_50 + 0x1e,&local_68);
    iVar6 = *(int *)(lVar8 + 0x474) + -1;
    *(int *)(lVar8 + 0x474) = iVar6;
    if (iVar6 < 1) {
      plVar7 = (long *)FUN_0095992c(local_50 + 0x1e,&local_68);
      if (plVar7 != (long *)0x0) {
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        FUN_01a2bf84(&local_68,plVar7 + 0xb9);
        FUN_009c685c(&local_58,&local_68);
        FUN_01a56fa4(local_58,1);
        puVar10 = local_68;
        if (local_58 != (long *)0x0) {
          lVar8 = local_58[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
            puVar10 = local_68;
          }
        }
        local_68 = puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar10 + 1);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            puVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_48 = *puVar10;
            FUN_02a44274(lVar8 + 0xd8,&local_48);
          }
        }
        (**(code **)(*plVar7 + 0x100))(plVar7,PTR_DAT_0437a330);
      }
      lVar8 = FUN_009b0eac(local_50 + 0x1e,&local_68);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x1fc) = 1;
      }
    }
    if (local_50 != (long *)0x0) {
      lVar8 = local_50[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x2d9) != '\x1f') &&
     (FUN_00995ec4(&local_50,uVar9,param_1 + 0x2d9), local_50 != (long *)0x0)) {
    lVar8 = FUN_009ab5b8(local_50 + 0x1e,&local_68);
    if ((lVar8 != 0) &&
       (iVar6 = *(int *)(lVar8 + 0x474) + -1, *(int *)(lVar8 + 0x474) = iVar6, iVar6 < 1)) {
      plVar7 = (long *)FUN_0095992c(local_50 + 0x1e,&local_68);
      if (plVar7 != (long *)0x0) {
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        FUN_01a2bf84(&local_68,plVar7 + 0xb9);
        FUN_009c685c(&local_58,&local_68);
        FUN_01a56fa4(local_58,1);
        puVar10 = local_68;
        if (local_58 != (long *)0x0) {
          lVar8 = local_58[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
            puVar10 = local_68;
          }
        }
        local_68 = puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar10 + 1);
          do {
            iVar6 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 + -1 == 0) {
            puVar10[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_48 = *puVar10;
            FUN_02a44274(lVar8 + 0xd8,&local_48);
          }
        }
        (**(code **)(*plVar7 + 0x100))(plVar7,PTR_DAT_0437a330);
      }
      lVar8 = FUN_009b0eac(local_50 + 0x1e,&local_68);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x1fc) = 1;
      }
    }
    if (local_50 != (long *)0x0) {
      lVar8 = local_50[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x302) = 0;
  return;
}


