/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c918; name: FUN_02f0c918
 */


void FUN_02f0c918(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = FUN_02f0d50c();
  if ((uVar2 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = *param_2 / uVar2;
    }
    lVar3 = (ulong)(*param_2 - uVar1 * uVar2) * 8;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(*param_1 + lVar3);
    *(uint **)(*param_1 + lVar3) = param_2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}


