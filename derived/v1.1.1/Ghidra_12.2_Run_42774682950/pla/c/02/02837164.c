/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837164; name: FUN_02837164
 */


void FUN_02837164(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  long local_a0 [12];
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  if ((*param_2 != 0) && (FUN_010ba024(local_40), local_40[0] != (undefined8 *)0x0)) {
    iVar3 = *(int *)((long)local_40[0] + 0xc);
    if (local_40[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *local_40[0];
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
    if (iVar3 != 0) {
      if (*(long *)(*param_2 + 0x58) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)(*param_2 + 0x58) + 0x68);
        if (lVar8 != 0) {
          piVar1 = (int *)(lVar8 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      plVar7 = *(long **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar3 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(long *)(param_1 + 0x88) = lVar8;
      lVar8 = *param_2;
      pcVar9 = *(code **)(lVar8 + 0x68);
      local_a0[0] = param_1;
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar8 + 0x70) = 0;
        *(undefined8 *)(lVar8 + 0x78) = 0;
        *(undefined8 *)(lVar8 + 0x60) = 0;
        *(undefined8 *)(lVar8 + 0x68) = 0;
        (*pcVar9)(lVar8 + 0x80);
      }
      FUN_02838920(local_a0,lVar8 + 0x80);
      *(code **)(lVar8 + 0x68) = FUN_028384c8;
      *(undefined1 **)(lVar8 + 0x78) = &LAB_0283892c;
      *(code **)(lVar8 + 0x70) = FUN_02838920;
      *(undefined8 *)(lVar8 + 0x60) = FUN_0283832c;
      FUN_028384c8(local_a0);
    }
  }
  return;
}


