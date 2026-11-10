/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a5610; name: FUN_009a5610
 */


void FUN_009a5610(undefined8 param_1,long param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long *local_68;
  long *local_58;
  
  uVar11 = *(ulong *)(param_2 + 0x70);
  uVar13 = *(undefined8 *)(param_2 + 8);
  uVar10 = (ulong)param_3;
  if ((uVar11 & uVar11 - 1) == 0) {
    plVar12 = *(long **)(*(long *)(param_2 + 0x68) + ((int)uVar11 - 1 & uVar10) * 8);
    do {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12[1] != uVar10);
    } while (*(byte *)(plVar12 + 2) != param_3);
  }
  else {
    if (uVar10 < uVar11) {
      uVar11 = uVar10;
    }
    else {
      uVar8 = 0;
      if (uVar11 != 0) {
        uVar8 = uVar10 / uVar11;
      }
      uVar11 = uVar10 - uVar8 * uVar11;
    }
    plVar12 = *(long **)(*(long *)(param_2 + 0x68) + uVar11 * 8);
    do {
      do {
        plVar12 = (long *)*plVar12;
      } while (plVar12[1] != uVar10);
    } while (*(byte *)(plVar12 + 2) != param_3);
  }
  local_68 = *(long **)((long)plVar12 + 0x18);
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_009a5904;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_009a591c(&local_58,uVar13,&local_68);
  if (local_68 != (long *)0x0) {
    lVar14 = local_68[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  local_68 = local_58;
  lVar14 = local_58[0xb];
  if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    plVar12 = local_68;
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(undefined4 *)(local_68 + 0xd) = 1;
    FUN_0099ae98(param_2 + 0x4a0,&local_68);
    if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0))
        && (*(int *)(param_2 + 0x7b8) == 1)) && (lVar14 = FUN_0099d310(plVar12 + 10), lVar14 != 0))
    {
      uVar16 = *(undefined4 *)(param_2 + 0x7c0);
      *(undefined4 *)(lVar14 + 0xf0) = uVar16;
      plVar4 = *(long **)(lVar14 + 0x80);
      for (plVar3 = *(long **)(lVar14 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
        puVar15 = *(undefined8 **)(*plVar3 + 0xe0);
        puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
        if ((puVar15 != puVar5) &&
           ((**(code **)(*(long *)*puVar15 + 0x90))(uVar16), puVar15 + 1 != puVar5)) {
          (**(code **)(*(long *)puVar15[1] + 0x90))(uVar16);
          for (puVar15 = puVar15 + 2; puVar15 != puVar5; puVar15 = puVar15 + 1) {
            (**(code **)(*(long *)*puVar15 + 0x90))(uVar16);
          }
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    FUN_009a5994(param_1,*(undefined8 *)(param_2 + 8),&local_58);
    if (local_58 != (long *)0x0) {
      lVar14 = local_58[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    return;
  }
LAB_009a5904:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


