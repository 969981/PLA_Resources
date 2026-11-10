/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b4b538; name: FUN_02b4b538
 */


void FUN_02b4b538(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  uVar14 = *param_1;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar5 = PTR_DAT_04379528;
    if (iVar7 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  *param_2 = &PTR_LAB_04284e60;
  puVar1 = (undefined8 *)(param_3 + 0x10);
  param_2[2] = 0;
  plVar15 = param_2 + 1;
  *plVar15 = 0;
  do {
    uVar14 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar9 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  lVar12 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  *plVar15 = lVar12;
  FUN_02b483f0(local_58,uVar14);
  puVar1 = local_58[0];
  puVar5 = PTR_DAT_04388150;
  if ((local_58[0] == (undefined8 *)0x0) || (*(int *)((long)local_58[0] + 0xc) == 0)) {
LAB_02b4b6e8:
    plVar9 = (long *)0x0;
  }
  else {
    piVar2 = (int *)((long)local_58[0] + 0xc);
    puVar13 = PTR_DAT_04388158;
    iVar7 = *(int *)((long)local_58[0] + 0xc);
    do {
      plVar9 = (long *)puVar1[2];
      if ((*puVar5 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(puVar5);
        puVar13 = PTR_DAT_04388158;
        if (iVar6 != 0) {
          uVar10 = FUN_00986b1c();
          *(undefined8 *)PTR_DAT_04388158 = uVar10;
          __cxa_guard_release(puVar5);
          puVar13 = PTR_DAT_04388158;
        }
      }
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_02b4b6e8;
        if (plVar9 == (long *)puVar13) break;
        plVar9 = (long *)*plVar9;
      }
      iVar6 = *piVar2;
      if (iVar6 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = puVar1[3];
          plVar9 = (long *)0x0;
          if (lVar12 != 0) {
            plVar9 = (long *)(lVar12 + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar9 = (long *)0x0;
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
  plVar11 = (long *)*plVar15;
  if (plVar11 != plVar9) {
    *plVar15 = 0;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 1) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    uVar14 = 0;
  }
  param_2[2] = uVar14;
  puVar1 = local_58[0];
  if (plVar9 != (long *)0x0) {
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      puVar1 = local_58[0];
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar1 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      puVar1[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = *puVar1;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  uVar14 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = 0;
  param_2[3] = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  param_2[4] = uVar14;
  uVar14 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = 0;
  param_2[5] = uVar14;
  *param_2 = &PTR_LAB_04284e40;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


