/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8acc; name: FUN_02ec8acc
 */


void FUN_02ec8acc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int *local_18;
  
  piVar3 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  local_18 = piVar3;
  if ((uVar2 != 0) && (*piVar3 != param_2)) {
    lVar5 = (ulong)uVar2 * 0x18;
    piVar4 = piVar3;
    do {
      lVar5 = lVar5 + -0x18;
      if (lVar5 == 0) {
        local_18 = piVar3 + (ulong)uVar2 * 6;
        goto LAB_02ec8af8;
      }
      local_18 = piVar4 + 6;
      piVar1 = piVar4 + 6;
      piVar4 = local_18;
    } while (*piVar1 != param_2);
  }
LAB_02ec8af8:
  if (piVar3 + (ulong)uVar2 * 6 != local_18) {
    FUN_02ecadfc(param_1,&local_18);
  }
  return;
}


