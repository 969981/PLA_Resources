/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cabcc; name: FUN_010cabcc
 */


void FUN_010cabcc(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + 8);
  if (*(long *)(param_2 + 0x90) == lVar5) {
    lVar5 = 0;
  }
  else if (*(long *)(param_2 + 0x130) == lVar5) {
    lVar5 = 1;
  }
  else if (*(long *)(param_2 + 0x1d0) == lVar5) {
    lVar5 = 2;
  }
  else if (*(long *)(param_2 + 0x270) == lVar5) {
    lVar5 = 3;
  }
  else if (*(long *)(param_2 + 0x310) == lVar5) {
    lVar5 = 4;
  }
  else if (*(long *)(param_2 + 0x3b0) == lVar5) {
    lVar5 = 5;
  }
  else if (*(long *)(param_2 + 0x450) == lVar5) {
    lVar5 = 6;
  }
  else if (*(long *)(param_2 + 0x4f0) == lVar5) {
    lVar5 = 7;
  }
  else if (*(long *)(param_2 + 0x590) == lVar5) {
    lVar5 = 8;
  }
  else if (*(long *)(param_2 + 0x630) == lVar5) {
    lVar5 = 9;
  }
  else if (*(long *)(param_2 + 0x6d0) == lVar5) {
    lVar5 = 10;
  }
  else if (*(long *)(param_2 + 0x770) == lVar5) {
    lVar5 = 0xb;
  }
  else if (*(long *)(param_2 + 0x810) == lVar5) {
    lVar5 = 0xc;
  }
  else if (*(long *)(param_2 + 0x8b0) == lVar5) {
    lVar5 = 0xd;
  }
  else if (*(long *)(param_2 + 0x950) == lVar5) {
    lVar5 = 0xe;
  }
  else if (*(long *)(param_2 + 0x9f0) == lVar5) {
    lVar5 = 0xf;
  }
  else {
    if (*(long *)(param_2 + 0xa90) != lVar5) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_010cad58;
    }
    lVar5 = 0x10;
  }
  *param_1 = (long)(PTR_DAT_0437e410 + 0x10);
  lVar6 = param_2 + lVar5 * 0xa0;
  FUN_010a1a20(param_1 + 1,lVar6 + 0xf8);
  lVar6 = *(long *)(lVar6 + 0x108);
  param_1[3] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(param_2 + lVar5 * 0xa0 + 0x110);
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *(long *)(param_2 + lVar5 * 0xa0 + 0x118);
  param_1[5] = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_010cad58:
  *param_1 = (long)(PTR_DAT_0437a510 + 0x10);
  return;
}


