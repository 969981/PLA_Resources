/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239728; name: FUN_01239728
 */


void FUN_01239728(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar4 = param_1[1];
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        if (*(long **)(lVar4 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x20) + 0x20))();
        }
        if (*(long **)(lVar4 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x30) + 0x20))();
        }
        if (*(long **)(lVar4 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x38) + 0x20))();
        }
        plVar2 = (long *)(lVar4 + -0x48);
        lVar4 = lVar4 + -0x50;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *param_1;
    }
    lVar1 = param_1[2];
    plVar2 = (long *)param_1[3];
    param_1[1] = lVar5;
    uVar3 = FUN_02bcc75c(plVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
    }
    else {
      FUN_02bcc824(plVar2,lVar4,lVar1 - lVar4,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return;
}


