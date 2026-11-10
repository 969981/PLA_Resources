/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00910af0; name: FUN_00910af0
 */


void FUN_00910af0(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  pbVar1 = (byte *)*param_2;
  plVar2 = (long *)param_2[1];
  FUN_0014fef0(uVar5);
  (*(code *)**(undefined8 **)*plVar2)((undefined8 *)*plVar2,uVar5);
  plVar3 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  pbVar4 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar4 = pbVar1 + 1;
  }
  FUN_001522a0(uVar5,pbVar4);
  return;
}


