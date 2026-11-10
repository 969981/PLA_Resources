/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ff2b8; name: FUN_020ff2b8
 */


void FUN_020ff2b8(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_28 [8];
  
  iVar2 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar2 + 1;
  uVar3 = FUN_00150da0(param_1,iVar2 + 2,auStack_28);
  pcVar4 = (code *)*param_3;
  plVar1 = (long *)(param_4 + (param_3[1] >> 1));
  if ((param_3[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  (*pcVar4)(plVar1,uVar3);
  return;
}


