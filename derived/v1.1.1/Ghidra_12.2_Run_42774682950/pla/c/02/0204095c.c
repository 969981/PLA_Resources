/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0204095c; name: FUN_0204095c
 */


void FUN_0204095c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long local_78 [2];
  long *local_68;
  
  if ((*(long *)(param_2 + 0x10) == 0) || (FUN_017dca7c(&local_68), local_68 == (long *)0x0))
  goto LAB_02040988;
  FUN_01a73640(local_78);
  lVar13 = local_78[0];
  puVar10 = PTR_DAT_04379e90;
  puVar9 = PTR_DAT_04379e88;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] == 0) {
LAB_020409d8:
    bVar4 = false;
  }
  else {
    if (*(int *)(local_78[0] + 0xc) != 0) {
      piVar1 = (int *)(local_78[0] + 0xc);
      iVar14 = *(int *)(local_78[0] + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_02040b28;
          if (plVar15 == (long *)puVar10) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar14) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            plVar15 = (long *)0x0;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x02040ac0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar11;
      } while (iVar11 != 0);
    }
LAB_02040b28:
    plVar15 = (long *)0x0;
joined_r0x02040ac0:
    if (local_78[0] != 0) {
      FUN_02a43934();
    }
    if (plVar15 == (long *)0x0) goto LAB_020409d8;
    FUN_01a82160(local_78,plVar15);
    if (local_78[0] == 0) {
      *param_1 = 0;
    }
    else {
      FUN_00ba1e00(param_1);
      if (local_78[0] != 0) {
        FUN_02a43934();
      }
    }
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 == 1) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    bVar4 = true;
  }
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (bVar4) {
    return;
  }
LAB_02040988:
  *param_1 = 0;
  return;
}


