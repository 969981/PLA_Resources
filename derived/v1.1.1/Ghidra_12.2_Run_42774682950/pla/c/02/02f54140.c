/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f54140; name: FUN_02f54140
 */


long FUN_02f54140(long *param_1,int param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined1 auStack_34 [4];
  
  plVar1 = param_1 + 0x13;
  FUN_02f4c804(plVar1);
  uVar3 = FUN_02f4e704(plVar1,param_3 + 8);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02f54210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (**(code **)(*param_1 + 0x120))(param_1);
    return lVar4;
  }
  FUN_02f4f868(param_1);
  if ((char)param_1[0x18] != '\0') {
    if ((param_1[0xf] == 0) || (*(long *)(param_1[0xf] + 0x18) == 0)) {
      bVar2 = (int)param_1[0x17] == 0;
    }
    else {
      bVar2 = false;
    }
    bVar5 = bVar2;
    if ((param_2 != 3) || (bVar5 = true, bVar2)) {
      if (!bVar5) goto LAB_02f541b4;
    }
    else {
      thunk_FUN_02f4cea4(plVar1);
      if ((char)param_1[0x18] != '\0') {
        if (param_1[0xf] == 0) {
          if ((int)param_1[0x17] == 0) goto LAB_02f54254;
        }
        else if (((int)param_1[0x17] == 0) && (*(long *)(param_1[0xf] + 0x18) == 0))
        goto LAB_02f54254;
LAB_02f541b4:
        lVar4 = FUN_02f53dd4(param_1,auStack_34);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) == 0)) {
          FUN_02f4f868(param_1);
          lVar4 = 0;
        }
        return lVar4;
      }
    }
  }
LAB_02f54254:
  lVar4 = FUN_02f54498(param_1);
  return lVar4;
}


