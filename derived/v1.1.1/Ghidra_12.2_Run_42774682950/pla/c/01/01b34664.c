/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b34664; name: FUN_01b34664
 */


void FUN_01b34664(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  plVar9 = param_2 + 1;
  do {
    lVar13 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)*param_1;
  *param_1 = 0;
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  lVar11 = *param_2;
  *param_2 = 0;
  *param_1 = lVar11;
  FUN_00987ac8(local_68,lVar13);
  puVar4 = local_68[0];
  puVar6 = PTR_DAT_0437a0b0;
  puVar5 = PTR_DAT_0437a0a8;
  plVar9 = (long *)0x0;
  if (local_68[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_68[0] + 0xc) == 0) {
LAB_01b348f0:
      plVar9 = (long *)0x0;
    }
    else {
      piVar1 = (int *)((long)local_68[0] + 0xc);
      iVar7 = *(int *)((long)local_68[0] + 0xc);
      do {
        puVar14 = (undefined8 *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_00987804();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        if (puVar14 == (undefined8 *)0x0) goto LAB_01b348f0;
        while (puVar14 != (undefined8 *)puVar6) {
          puVar14 = (undefined8 *)*puVar14;
          plVar9 = (long *)0x0;
          if (puVar14 == (undefined8 *)0x0) goto LAB_01b346e4;
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
            lVar11 = puVar4[3];
            plVar9 = (long *)0x0;
            if (lVar11 != 0) {
              plVar9 = (long *)(lVar11 + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar9 = (long *)0x0;
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
  }
LAB_01b346e4:
  plVar12 = (long *)*param_1;
  if (plVar12 != plVar9) {
    *param_1 = 0;
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
      if (iVar7 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    lVar13 = 0;
  }
  param_1[1] = lVar13;
  puVar4 = local_68[0];
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
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
      (**(code **)(*plVar9 + 0x20))();
      puVar4 = local_68[0];
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
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
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar4;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  return;
}


