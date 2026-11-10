/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00920f30; name: FUN_00920f30
 */


ulong FUN_00920f30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00920e80();
  if (*(int *)((long)param_4 + 4) < *(int *)((long)param_5 + 4)) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (int)uVar2;
    if (*(int *)((long)param_3 + 4) < *(int *)((long)param_4 + 4)) {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      if (*(int *)((long)param_2 + 4) < *(int *)((long)param_3 + 4)) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        if (*(int *)((long)param_1 + 4) < *(int *)((long)param_2 + 4)) {
          uVar3 = *param_1;
          uVar2 = (ulong)(iVar1 + 4);
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
        else {
          uVar2 = (ulong)(iVar1 + 3);
        }
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}


