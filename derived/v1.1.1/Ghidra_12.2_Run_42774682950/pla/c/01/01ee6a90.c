/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee6a90; name: FUN_01ee6a90
 */


void FUN_01ee6a90(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_00d894e4();
  *param_1 = &PTR_LAB_04258d58;
  param_1[9] = &PTR_LAB_04258dc8;
  param_1[10] = &PTR_LAB_04258e10;
  param_1[0x10] = *param_2;
  param_1[0x11] = param_2[1];
  param_1[0x12] = param_2[2];
  plVar5 = (long *)param_2[3];
  param_1[0x13] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0x14] = param_2[4];
  param_1[0x15] = param_2[5];
  param_1[0x16] = param_2[6];
  plVar5 = (long *)param_2[7];
  param_1[0x17] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  lVar7 = param_2[8];
  param_1[0x18] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  FUN_0095e070(param_1 + 0x19,param_2 + 9);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_0195799c(param_1 + 0x1b,param_2 + 0xb);
  uVar2 = *(undefined1 *)(param_2 + 0x13);
  param_1[0x21] = param_2[0x11];
  param_1[0x1f] = param_2[0xf];
  param_1[0x1e] = param_2[0xe];
  uVar6 = param_2[0x10];
  uVar8 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x23) = uVar2;
  param_1[0x22] = uVar8;
  param_1[0x20] = uVar6;
  return;
}


