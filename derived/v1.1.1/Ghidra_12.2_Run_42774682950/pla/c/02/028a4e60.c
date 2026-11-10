/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a4e60; name: FUN_028a4e60
 */


void FUN_028a4e60(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_38;
  undefined1 auStack_28 [8];
  
  lVar7 = *(long *)(param_2 + 8);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x1e1) != '\0')) {
    piVar1 = (int *)((long)*(uint **)(lVar7 + 0x250) + (ulong)**(uint **)(lVar7 + 0x250));
    local_38 = 0;
    if (piVar1 == (int *)0x0) goto LAB_028a4ed0;
    if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 != 0)) {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      local_38 = (long)puVar2 + (ulong)*puVar2;
      goto LAB_028a4ed0;
    }
  }
  local_38 = 0;
LAB_028a4ed0:
  lVar7 = FUN_028a623c(auStack_28,*(undefined8 *)(param_1 + 8),&local_38);
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
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
  plVar5 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = lVar7 + 0x48;
  }
  *(long *)(param_1 + 0x68) = lVar9;
  return;
}


