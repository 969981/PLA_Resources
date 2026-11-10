/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239400; name: FUN_01239400
 */


void FUN_01239400(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 != *(long **)(param_2 + 0x18)) {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    if (lVar5 == lVar1) {
      lVar5 = lVar1;
    }
    else {
      do {
        if (*(long **)(lVar5 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -0x20) + 0x20))();
        }
        if (*(long **)(lVar5 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -0x30) + 0x20))();
        }
        if (*(long **)(lVar5 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -0x38) + 0x20))();
        }
        plVar4 = (long *)(lVar5 + -0x48);
        lVar5 = lVar5 + -0x50;
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 0x20))();
        }
      } while (lVar1 != lVar5);
      lVar5 = *param_1;
      plVar4 = (long *)param_1[3];
    }
    lVar3 = param_1[2];
    param_1[1] = lVar1;
    uVar2 = FUN_02bcc75c(plVar4);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,8);
    }
    else {
      FUN_02bcc824(plVar4,lVar5,lVar3 - lVar5,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar1;
  param_1[4] = lVar5;
  param_1[5] = lVar3;
  return;
}


