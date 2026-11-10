/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0216f1b0; name: FUN_0216f1b0
 */


void FUN_0216f1b0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = FUN_00150ba0(param_1,2,0);
  dVar5 = (double)FUN_00150a90(param_1,3,0);
  dVar6 = (double)FUN_00150a90(param_1,4,0);
  dVar7 = (double)FUN_00150a90(param_1,5,0);
  dVar8 = (double)FUN_00150a90(param_1,6,0);
  pcVar4 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  uVar3 = (*pcVar4)((float)dVar5,(float)dVar6,(float)dVar7,(float)dVar8,plVar1,uVar2);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar3 & 1);
  return;
}


