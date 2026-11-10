/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d3038; name: FUN_027d3038
 */


void FUN_027d3038(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  pcVar6 = (code *)param_1[1];
  if (pcVar6 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar6)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  param_1[8] = param_2[4];
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  param_1[0xb] = param_2[7];
  plVar4 = (long *)param_2[8];
  param_1[0xc] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  lVar7 = param_2[9];
  param_1[0xd] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_027d3184;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar7 = param_2[10];
  param_1[0xe] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_027d3184:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = &LAB_027d319c;
  param_1[1] = &LAB_027d31a0;
  param_1[2] = &LAB_027d35a8;
  param_1[3] = &LAB_027d36cc;
  return;
}


