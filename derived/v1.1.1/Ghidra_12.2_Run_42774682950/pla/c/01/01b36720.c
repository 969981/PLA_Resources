/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b36720; name: FUN_01b36720
 */


void FUN_01b36720(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  plVar4 = (long *)param_2[4];
  param_1[4] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  FUN_01b34b24(param_1 + 5,param_2 + 5);
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  plVar4 = (long *)param_2[0x51];
  param_1[0x51] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar4 = (long *)param_2[0x52];
  param_1[0x52] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  plVar4 = (long *)param_2[0x56];
  param_1[0x56] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  plVar4 = (long *)param_2[0x58];
  param_1[0x58] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  plVar4 = (long *)param_2[0x5c];
  param_1[0x5c] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  plVar4 = (long *)param_2[0x5e];
  param_1[0x5e] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x5f] = param_2[0x5f];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  plVar4 = (long *)param_2[0x62];
  param_1[0x62] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  plVar4 = (long *)param_2[0x67];
  param_1[0x67] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  param_1[0x6a] = param_2[0x6a];
  plVar4 = (long *)param_2[0x6b];
  param_1[0x6b] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  lVar6 = param_2[0x6c];
  param_1[0x6c] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_01b369c4;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = param_2[0x6d];
  param_1[0x6d] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_01b369c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  return;
}


