/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135b058; name: FUN_0135b058
 */


void FUN_0135b058(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_28 [2];
  
  lVar5 = FUN_0135b33c(local_28,*(undefined8 *)(param_2 + 0x68));
  *param_1 = lVar5;
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0135b310;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_28[0] = 0;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x70);
  local_28[0] = 1;
  FUN_00b0b864(lVar5,local_28,param_2 + 0xa0);
  local_28[0] = 2;
  FUN_00b0b864(lVar5,local_28,param_2 + 0xd0);
  local_28[0] = 3;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x100);
  local_28[0] = 4;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x130);
  local_28[0] = 5;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x160);
  local_28[0] = 6;
  FUN_00b0b864(lVar5,local_28,param_2 + 400);
  local_28[0] = 7;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x1c0);
  local_28[0] = 8;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x1f0);
  local_28[0] = 9;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x220);
  local_28[0] = 10;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x250);
  local_28[0] = 0xb;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x280);
  local_28[0] = 0xc;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x2b0);
  local_28[0] = 0xd;
  FUN_00b0b864(lVar5,local_28,param_2 + 0x2e0);
  plVar8 = *(long **)(param_2 + 0x310);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar9 = plVar8[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0135b214;
      }
    }
LAB_0135b310:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_0135b214:
  plVar7 = *(long **)(lVar5 + 0x230);
  *(long **)(lVar5 + 0x230) = plVar8;
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar5 = plVar8[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return;
}


