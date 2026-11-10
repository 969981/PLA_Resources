/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b2b3c; name: FUN_008b2b3c
 */


undefined8 FUN_008b2b3c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *local_40;
  long *local_38;
  long *local_28;
  
  if (*(int *)(param_1 + 0x7c) == 1) {
    plVar9 = *(long **)(param_1 + 0x80);
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar9[0xd] == 0) {
        local_28 = (long *)0x0;
LAB_008b2bac:
        bVar5 = true;
      }
      else {
        FUN_009c66e4(&local_28);
        if (local_28 == (long *)0x0) goto LAB_008b2bac;
        bVar5 = (int)local_28[0xd] == 3;
        lVar10 = local_28[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if (!bVar5) goto LAB_008b2bd0;
    }
    FUN_008b319c(param_1);
    uVar6 = 2;
    goto LAB_008b2d3c;
  }
  uVar7 = 2;
  switch(*(int *)(param_1 + 0x7c)) {
  case 0:
    FUN_008b2e50(param_1);
    FUN_008b2eb8(param_1);
    FUN_008b2efc(param_1);
    FUN_008b30c0(param_1);
    uVar6 = 1;
    break;
  default:
    goto switchD_008b2c0c_caseD_1;
  case 2:
    if (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90)) {
      if (0 < *(int *)(param_1 + 0xc0)) {
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
        return 0;
      }
      uVar6 = FUN_008b3254();
      *(undefined4 *)(param_1 + 0xc0) = uVar6;
      FUN_008b33b4(param_1);
      goto LAB_008b2bd0;
    }
    uVar6 = 3;
    break;
  case 3:
    uVar8 = FUN_008b34ac(param_1);
    if ((uVar8 & 1) != 0) {
      lVar10 = FUN_00923bb4(**(undefined8 **)(param_1 + 0x70));
      uVar6 = 6;
      if (*(undefined1 **)(lVar10 + 0x338) != &DAT_cbf29ce484222645) {
        uVar6 = 4;
      }
      *(undefined4 *)(param_1 + 0x7c) = uVar6;
      return 0;
    }
    goto LAB_008b2bd0;
  case 4:
    uVar7 = FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    FUN_009a3764(&local_38,uVar7,2);
    if (local_38 != (long *)0x0) {
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    FUN_008b35c0(param_1);
    uVar6 = 5;
    break;
  case 5:
    uVar8 = FUN_008b3678(2);
    if ((uVar8 & 1) == 0) goto LAB_008b2bd0;
    uVar7 = FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    FUN_009a3764(&local_40,uVar7,3);
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    uVar6 = 6;
    break;
  case 6:
    FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    uVar8 = FUN_009a8be0();
    if ((uVar8 & 1) != 0) {
      FUN_008b37a0(param_1);
      FUN_008b3844(param_1);
      FUN_008b38b8(param_1);
      return 2;
    }
LAB_008b2bd0:
    uVar7 = 0;
    goto switchD_008b2c0c_caseD_1;
  }
LAB_008b2d3c:
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
switchD_008b2c0c_caseD_1:
  return uVar7;
}


