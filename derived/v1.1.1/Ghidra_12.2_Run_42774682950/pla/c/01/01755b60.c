/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01755b60; name: FUN_01755b60
 */


void FUN_01755b60(undefined8 param_1,undefined8 param_2,undefined4 *param_3,long *param_4,
                 long param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_38 [8];
  
  iVar2 = param_3[1];
  *param_3 = 1;
  param_3[1] = iVar2 + 1;
  uVar3 = FUN_00150da0(param_2,iVar2 + 2,auStack_38);
  pcVar4 = (code *)*param_4;
  plVar1 = (long *)(param_5 + (param_4[1] >> 1));
  if ((param_4[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  (*pcVar4)(param_1,plVar1,*param_6,*param_7,uVar3);
  return;
}


