/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193053c; name: FUN_0193053c
 */


uint FUN_0193053c(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *local_38;
  
  uVar7 = FUN_019313e0(param_1,param_3);
  if ((uVar7 & 1) != 0) {
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar7 == 0)) {
      uVar7 = FUN_01931540(0);
    }
    else {
      puVar2 = (uint *)((long)param_1 + uVar7);
      uVar7 = FUN_01931540((long)puVar2 + (ulong)*puVar2);
    }
    if ((uVar7 & 1) != 0) {
      plVar9 = (long *)*param_2;
      local_38 = plVar9;
      if (plVar9 == (long *)0x0) {
        uVar6 = FUN_0193143c(param_1,&local_38,param_3);
      }
      else {
        lVar10 = plVar9[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar6 = FUN_0193143c(param_1,&local_38,param_3);
        lVar10 = plVar9[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
      goto LAB_0193056c;
    }
  }
  uVar6 = 0;
LAB_0193056c:
  return uVar6 & 1;
}


