/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00985e44; name: FUN_00985e44
 */


void FUN_00985e44(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = FUN_00985ebc();
  uVar2 = FUN_00985614(param_2,uVar1);
  FUN_00985f28(param_2,uVar2,uVar1,lVar4,param_4);
  *param_1 = *(long *)(param_2 + 0x20) + (lVar4 - lVar3);
  return;
}


