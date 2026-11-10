/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396d78; name: FUN_01396d78
 */


void FUN_01396d78(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 != *(long **)(param_2 + 0x18)) {
    lVar5 = *param_1;
    param_1[1] = lVar5;
    lVar2 = param_1[2];
    uVar1 = FUN_02bcc75c(plVar4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar2 - lVar5,8);
    }
    else {
      FUN_02bcc824(plVar4,lVar5,lVar2 - lVar5,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar2;
  param_1[4] = lVar5;
  param_1[5] = lVar3;
  return;
}


