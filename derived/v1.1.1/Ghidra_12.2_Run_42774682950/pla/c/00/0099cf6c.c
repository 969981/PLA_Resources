/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099cf6c; name: FUN_0099cf6c
 */


void FUN_0099cf6c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *local_50;
  undefined1 local_44 [4];
  
  plVar8 = *(long **)(param_1 + 0x98);
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_0099cf94:
  do {
    lVar6 = plVar8[2];
    plVar7 = (long *)plVar8[3];
    if (plVar7 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else {
      lVar9 = plVar7[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0099d0d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
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
      lVar9 = plVar7[0xb];
      local_50 = plVar7;
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0099d0d0;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
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
    local_44[0] = (char)lVar6;
    (*(code *)*param_2)(param_2 + 4,local_44,&local_50);
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return;
        }
        goto LAB_0099cf94;
      }
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
  } while( true );
}


