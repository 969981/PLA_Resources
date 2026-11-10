/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3b8c0; name: FUN_02f3b8c0
 */


void FUN_02f3b8c0(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1[6];
  lVar5 = 0;
  lVar4 = lVar3;
  if ((((lVar3 != 0) && (lVar3 != param_2)) &&
      (lVar4 = *(long *)(lVar3 + 8), lVar5 = lVar3, lVar4 != 0)) && (lVar4 != param_2)) {
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 8);
    } while (lVar4 != 0 && lVar4 != param_2);
  }
  if (lVar4 != 0) {
    plVar1 = param_1 + 6;
    if (lVar4 != lVar3) {
      plVar1 = (long *)(lVar5 + 8);
    }
    *plVar1 = *(long *)(lVar4 + 8);
    iVar2 = (int)param_1[9] + -1;
    *(int *)(param_1 + 9) = iVar2;
    if (iVar2 == 0) {
      if (param_1[2] == 0) {
        FUN_02f37eb4(param_1);
      }
      else {
        FUN_02f3b8c0(param_1[2],param_1);
        param_1[2] = 0;
      }
      (**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x02f3b994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,param_1);
      return;
    }
  }
  return;
}


