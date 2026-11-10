/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0bbec; name: FUN_01f0bbec
 */


long * FUN_01f0bbec(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  plVar7 = param_2 + 1;
  do {
    lVar10 = *plVar7;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar8 = *param_2;
  *param_2 = 0;
  *param_1 = lVar8;
  FUN_00987fd4(local_58,lVar10);
  puVar5 = local_58[0];
  plVar7 = (long *)0x0;
  if (local_58[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_58[0] + 0xc) == 0) {
LAB_01f0be38:
      plVar7 = (long *)0x0;
    }
    else {
      piVar1 = (int *)((long)local_58[0] + 0xc);
      iVar6 = *(int *)((long)local_58[0] + 0xc);
      do {
        plVar11 = (long *)puVar5[2];
        plVar9 = (long *)FUN_013d8b30();
        if (plVar11 == (long *)0x0) goto LAB_01f0be38;
        while (plVar11 != plVar9) {
          plVar11 = (long *)*plVar11;
          plVar7 = (long *)0x0;
          if (plVar11 == (long *)0x0) goto LAB_01f0bc68;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = puVar5[3];
            plVar7 = (long *)0x0;
            if (lVar8 != 0) {
              plVar7 = (long *)(lVar8 + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar7 = (long *)0x0;
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
  }
LAB_01f0bc68:
  plVar9 = (long *)*param_1;
  if (plVar9 != plVar7) {
    *param_1 = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 1) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    lVar10 = 0;
  }
  param_1[1] = lVar10;
  puVar5 = local_58[0];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
      puVar5 = local_58[0];
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  return param_1;
}


