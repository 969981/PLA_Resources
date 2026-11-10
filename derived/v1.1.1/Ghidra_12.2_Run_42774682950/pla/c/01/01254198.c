/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01254198; name: FUN_01254198
 */


void FUN_01254198(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long *local_38;
  
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar11 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_38);
  if (local_38 != (long *)0x0) {
    uVar8 = FUN_011171a4();
    *(undefined4 *)(param_1 + 0x1494) = uVar8;
  }
  plVar11 = (long *)plVar16[0x29];
  lVar15 = plVar16[0x2a];
  if ((lVar15 != 0) && (*plVar11 != -0x4c8359ff6e0bb84)) {
    plVar13 = plVar11 + lVar15 * 6;
    lVar15 = lVar15 * 0x30;
    do {
      lVar15 = lVar15 + -0x30;
      if (lVar15 == 0) {
        plVar11 = plVar13;
        break;
      }
      plVar3 = plVar11 + 6;
      plVar1 = plVar11 + 6;
      plVar11 = plVar3;
    } while (*plVar1 != -0x4c8359ff6e0bb84);
  }
  *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
  puVar12 = (undefined8 *)plVar16[0x29];
  lVar15 = plVar16[0x2a];
  if ((lVar15 != 0) && ((undefined1 *)*puVar12 != &DAT_ced9934ccf052522)) {
    puVar14 = puVar12 + lVar15 * 6;
    lVar15 = lVar15 * 0x30;
    do {
      lVar15 = lVar15 + -0x30;
      if (lVar15 == 0) {
        puVar12 = puVar14;
        break;
      }
      puVar4 = puVar12 + 6;
      puVar2 = puVar12 + 6;
      puVar12 = puVar4;
    } while ((undefined1 *)*puVar2 != &DAT_ced9934ccf052522);
  }
  *(byte *)(puVar12[4] + 0x58) = *(byte *)(puVar12[4] + 0x58) | 1;
  FUN_0124f208(&local_48,param_1,0);
  FUN_0124eff0(param_1);
  FUN_012544dc(param_1);
  lVar15 = param_1 + 0x5c0;
  FUN_012367fc(lVar15,*(undefined8 *)(param_1 + 8));
  FUN_01237e04(lVar15);
  FUN_01233ca8(param_1 + 0xb30,lVar15);
  FUN_01245fe8(param_1 + 0x13d8,plVar16);
  iVar9 = FUN_01236ca4(lVar15,7);
  FUN_01246018(param_1 + 0x13d8,1,iVar9 != 0);
  local_68 = &DAT_e2c06acab97c29c2;
  pcStack_60 = "CommonOptionBar";
  local_58 = 0xf;
  local_50 = (long *)0x0;
  uVar10 = FUN_00d6adf4(param_1 + 0x180,&local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_0124712c(param_1 + 0x1430,plVar16,local_48,uVar10);
  FUN_012547a8(param_1);
  FUN_0125484c(param_1);
  FUN_01254964(param_1);
  if (local_48 != (long *)0x0) {
    plVar16 = local_48 + 10;
    do {
      iVar9 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar15 = local_38[0xb];
    piVar5 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar7) {
        *piVar5 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


