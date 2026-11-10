/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01360e54; name: FUN_01360e54
 */


void FUN_01360e54(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1[3] != *(long *)(param_2 + 0x18)) {
    FUN_01360f0c(param_1,*param_1);
    lVar1 = param_1[2];
    plVar2 = (long *)param_1[3];
    lVar5 = *param_1;
    uVar3 = FUN_02bcc75c(plVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
    }
    else {
      FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar1;
  param_1[4] = lVar5;
  param_1[5] = lVar4;
  return;
}


