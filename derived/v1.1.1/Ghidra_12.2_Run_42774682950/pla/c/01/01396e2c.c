/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396e2c; name: FUN_01396e2c
 */


void FUN_01396e2c(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[2];
    plVar2 = (long *)param_1[3];
    param_1[1] = lVar4;
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


