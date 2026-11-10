/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e44b74; name: FUN_01e44b74
 */


void FUN_01e44b74(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long **pplVar7;
  long *plVar8;
  long lVar9;
  long *local_40;
  long *local_38;
  long *local_28;
  
  pplVar7 = &local_40;
  if (param_2 == 0) {
    plVar8 = (long *)*param_3;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      puVar5 = *(undefined8 **)(lVar9 + 0x18);
      local_28 = plVar8;
      if (puVar5 == (undefined8 *)0x0) goto LAB_01e44d3c;
      if (*(long *)(lVar9 + 0x10) == 0) {
        puVar5 = (undefined8 *)(**(code **)*puVar5)();
        *(undefined8 **)(lVar9 + 0x10) = puVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01e44d68(puVar5,2,&local_28,param_4);
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01e44bfc;
    }
    pplVar7 = &local_28;
    local_28 = (long *)0x0;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return;
      }
      plVar8 = (long *)*param_3;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        puVar5 = *(undefined8 **)(lVar9 + 0x18);
        local_40 = plVar8;
        if (puVar5 == (undefined8 *)0x0) goto LAB_01e44d3c;
        if (*(long *)(lVar9 + 0x10) == 0) {
          puVar5 = (undefined8 *)(**(code **)*puVar5)();
          *(undefined8 **)(lVar9 + 0x10) = puVar5;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_01e44d68(puVar5,4,&local_40,param_4);
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          bVar4 = *piVar1 + -1 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_01e44bfc;
      }
      uVar6 = 4;
      local_40 = (long *)0x0;
      goto LAB_01e44d30;
    }
    plVar8 = (long *)*param_3;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      puVar5 = *(undefined8 **)(lVar9 + 0x18);
      local_38 = plVar8;
      if (puVar5 == (undefined8 *)0x0) {
LAB_01e44d3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        puVar5 = (undefined8 *)(**(code **)*puVar5)();
        *(undefined8 **)(lVar9 + 0x10) = puVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01e44d68(puVar5,2,&local_38,param_4);
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        bVar4 = *piVar1 + -1 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01e44bfc:
      if (bVar4) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e44c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x20))(plVar8);
        return;
      }
      return;
    }
    pplVar7 = &local_38;
    local_38 = (long *)0x0;
  }
  uVar6 = 2;
LAB_01e44d30:
  FUN_01e44d68(param_1,uVar6,pplVar7,param_4);
  return;
}


