/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3ccb4; name: FUN_02f3ccb4
 */


void FUN_02f3ccb4(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0x5a) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0)) {
    FUN_02f3c930(param_1,param_2 - *(int *)(param_1 + 8));
    return;
  }
  plVar6 = (long *)(param_1 + 0x10);
  lVar5 = *plVar6;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xfc;
  if (lVar5 != 0) {
    do {
      if (*(int *)(lVar5 + 8) == 1) {
        FUN_02f38238(*(undefined8 *)(lVar5 + 0x10));
      }
      bVar3 = *plVar6 != lVar5;
      lVar5 = *(long *)(lVar5 + 0x18);
      plVar1 = plVar6;
      if (bVar3) {
        plVar1 = (long *)&DAT_00000018;
      }
      *plVar1 = lVar5;
      (*DAT_0442d150)(0);
    } while (lVar5 != 0);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x80) = 0;
    plVar6 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar2 = (int)plVar6[9] + -1, *(int *)(plVar6 + 9) = iVar2, iVar2 == 0)) {
      if (plVar6[2] == 0) {
        FUN_02f37eb4(plVar6);
      }
      else {
        FUN_02f3b8c0(plVar6[2],plVar6);
        plVar6[2] = 0;
      }
      (**(code **)(*plVar6 + 0x50))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x02f3cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,plVar6);
      return;
    }
  }
  return;
}


