/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099f954; name: FUN_0099f954
 */


void FUN_0099f954(long *param_1,long param_2,byte param_3,byte param_4)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  long *local_70;
  long *local_68;
  long *local_58;
  
  uVar10 = *(ulong *)(param_2 + 0x70);
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar12 = (ulong)param_3;
  if (uVar11 < 2) {
    plVar13 = *(long **)(*(long *)(param_2 + 0x68) + ((int)uVar10 - 1 & uVar12) * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar12);
    } while (*(byte *)(plVar13 + 2) != param_3);
  }
  else {
    if (uVar12 < uVar10) {
      uVar14 = uVar12;
    }
    else {
      uVar14 = 0;
      if (uVar10 != 0) {
        uVar14 = uVar12 / uVar10;
      }
      uVar14 = uVar12 - uVar14 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x68) + uVar14 * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar12);
    } while (*(byte *)(plVar13 + 2) != param_3);
  }
  local_58 = *(long **)((long)plVar13 + 0x18);
  if (local_58 != (long *)0x0) {
    lVar15 = local_58[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0099fe90;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar10 = *(ulong *)(param_2 + 0x70);
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar12 = (ulong)param_4;
  if (uVar11 < 2) {
    plVar13 = *(long **)(*(long *)(param_2 + 0x68) + ((int)uVar10 - 1 & uVar12) * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar12);
    } while (*(byte *)(plVar13 + 2) != param_4);
  }
  else {
    if (uVar12 < uVar10) {
      uVar11 = uVar12;
    }
    else {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar12 / uVar10;
      }
      uVar11 = uVar12 - uVar11 * uVar10;
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x68) + uVar11 * 8);
    do {
      do {
        plVar13 = (long *)*plVar13;
      } while (plVar13[1] != uVar12);
    } while (*(byte *)(plVar13 + 2) != param_4);
  }
  local_68 = *(long **)((long)plVar13 + 0x18);
  if (local_68 != (long *)0x0) {
    lVar15 = local_68[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0099fe90;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar13;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x90,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_009cdf18(plVar9,&local_58,&local_68,0);
  plVar9[1] = (long)plVar13;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x90;
  plVar9[4] = 8;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0099fe90;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(plVar9 + 0xd) = 1;
  local_70 = plVar9;
  FUN_0099ae98(param_2 + 0x4a0,&local_70);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar15 = FUN_0099d310(plVar9 + 10), lVar15 != 0)) {
    uVar17 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar15 + 0xf0) = uVar17;
    plVar2 = *(long **)(lVar15 + 0x80);
    for (plVar13 = *(long **)(lVar15 + 0x78); plVar13 != plVar2; plVar13 = plVar13 + 1) {
      puVar16 = *(undefined8 **)(*plVar13 + 0xe0);
      puVar3 = *(undefined8 **)(*plVar13 + 0xe8);
      if ((puVar16 != puVar3) &&
         ((**(code **)(*(long *)*puVar16 + 0x90))(uVar17), puVar16 + 1 != puVar3)) {
        (**(code **)(*(long *)puVar16[1] + 0x90))(uVar17);
        for (puVar16 = puVar16 + 2; puVar16 != puVar3; puVar16 = puVar16 + 1) {
          (**(code **)(*(long *)*puVar16 + 0x90))(uVar17);
        }
      }
    }
  }
  lVar15 = FUN_009bb804(*(undefined8 *)(param_2 + 8),&local_70);
  *param_1 = lVar15;
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0099fe90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = local_70;
  }
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_68 != (long *)0x0) {
    lVar15 = local_68[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar15 = local_58[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


