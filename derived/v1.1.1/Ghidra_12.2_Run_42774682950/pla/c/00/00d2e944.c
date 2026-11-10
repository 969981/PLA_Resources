/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e944; name: FUN_00d2e944
 */


undefined8 FUN_00d2e944(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x2c0) == 0) {
    uVar8 = 0;
  }
  else {
    plVar9 = *(long **)(*(long *)(param_1 + 0x2c0) + 0x58);
    uVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00d2eb08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      plVar9 = *(long **)(*(long *)(param_1 + 0x2c0) + 0x58);
      if (plVar9 != (long *)0x0) {
        lVar10 = plVar9[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d2eb08;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uVar8 = *param_2;
      uVar4 = param_2[1];
      uVar3 = param_2[2];
      plVar5 = (long *)param_2[3];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_68 = &local_38;
      local_38 = 0;
      uStack_60 = uVar8;
      local_58 = uVar4;
      uStack_50 = uVar3;
      local_48 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_00d36468(plVar9,&local_68,0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      uVar8 = local_38;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plVar9 != (long *)0x0) {
        lVar10 = plVar9[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    }
  }
  return uVar8;
}


