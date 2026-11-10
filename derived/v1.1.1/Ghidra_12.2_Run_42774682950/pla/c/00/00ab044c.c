/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab044c; name: FUN_00ab044c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ab044c(long *param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  local_68 = (long *)*param_1;
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_00aae454(local_60,&local_68);
  puVar7 = local_60[0];
  puVar9 = PTR_DAT_04379e80;
  puVar8 = PTR_DAT_04379e78;
  if (local_60[0] == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar12 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar15 = (long *)puVar7[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          uVar13 = FUN_0095a420();
          *(undefined8 *)puVar9 = uVar13;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00ab06d8;
          if (plVar15 == (long *)puVar9) break;
          plVar15 = (long *)*plVar15;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar14 = puVar7[3];
            plVar15 = (long *)0x0;
            puVar7 = local_60[0];
            if (lVar14 != 0) {
              plVar15 = (long *)(lVar14 + -0x50);
            }
            goto joined_r0x00ab06fc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00ab06d8:
    plVar15 = (long *)0x0;
    puVar7 = local_60[0];
joined_r0x00ab06fc:
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        puVar7[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_48 = *puVar7;
        FUN_02a44274(lVar14 + 0xd8,&local_48);
      }
    }
  }
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  uVar3 = *(uint *)((long)plVar15 + 0x214);
  uVar2 = uVar3 & 0xfffffff7;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar3 | 8;
  }
  bVar6 = (uVar3 != 0) != (uVar2 != 0);
  if ((((uVar2 == uVar3) || (((uVar2 != 0 ^ param_2) & 1) == 0)) ||
      (iVar12 = *(int *)((long)plVar15 + 0x21c), iVar12 == 0)) ||
     (*(int *)((long)plVar15 + 0x224) == 0)) {
    if (bVar6) goto LAB_00ab05b0;
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar10 = iVar12 == 2;
    }
    else {
      uVar10 = (iVar12 == 1 & param_2) != 0;
    }
    if (bVar6 || (bool)uVar10) {
LAB_00ab05b0:
      *(undefined8 *)((long)plVar15 + 0x21c) = 0;
      *(undefined4 *)((long)plVar15 + 0x224) = 0;
      uVar4 = *(undefined4 *)((long)plVar15 + 0x22c);
      *(undefined4 *)(plVar15 + 0x45) = uVar4;
      if (uVar2 == 0) {
        *(undefined4 *)(plVar15 + 0x45) = uVar4;
        FUN_01bdb280(uVar4,plVar15);
        if ((int)plVar15[0x42] != 0) {
          *(undefined4 *)(plVar15 + 0x42) = 0;
          goto LAB_00ab05e8;
        }
      }
      else {
        *(undefined4 *)(plVar15 + 0x45) = 0;
        FUN_01bdb280(0,plVar15);
        if (*(uint *)(plVar15 + 0x42) != uVar2) {
          *(uint *)(plVar15 + 0x42) = uVar2;
LAB_00ab05e8:
          FUN_01bdb4e8(plVar15);
        }
      }
      *(uint *)((long)plVar15 + 0x214) = uVar2;
      goto LAB_00ab053c;
    }
  }
  *(uint *)((long)plVar15 + 0x214) = uVar2;
  if ((*(uint *)(plVar15 + 0x42) != uVar2) && (*(int *)((long)plVar15 + 0x21c) == 0)) {
    *(uint *)(plVar15 + 0x42) = uVar2;
  }
LAB_00ab053c:
  lVar14 = plVar15[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


