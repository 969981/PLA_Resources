/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e6270; name: FUN_032e6270
 */


void FUN_032e6270(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_032e2598(param_2[1]);
    lVar3 = param_2[1];
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    FUN_032db67c(&local_38,param_2,lVar3);
    iVar2 = FUN_032dc480(&local_38,param_2);
    if (iVar2 < 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      if ((local_28 & 1) != 0) {
        FUN_032e0c40(local_28 & 0xfffffffffffffffe);
      }
    }
    else {
      param_1[2] = local_28;
      *param_1 = local_38;
      param_1[1] = local_30;
    }
  }
  return;
}


