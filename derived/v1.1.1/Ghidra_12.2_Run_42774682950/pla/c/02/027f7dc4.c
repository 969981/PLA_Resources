/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f7dc4; name: FUN_027f7dc4
 */


undefined8 FUN_027f7dc4(long param_1,long *param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x168) != 0) {
LAB_027f7ea0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar7 = *param_2;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_027f7ea0;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6 = *(long **)(param_1 + 0x168);
    *(long *)(param_1 + 0x168) = lVar7;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(byte *)(param_1 + 0x178) = param_4 & 1;
  *(undefined4 *)(param_1 + 0x174) = param_3;
  *(undefined1 *)(param_1 + 0x17a) = 0;
  return 1;
}


