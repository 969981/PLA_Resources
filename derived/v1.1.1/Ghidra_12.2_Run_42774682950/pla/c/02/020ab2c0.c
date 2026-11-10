/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ab2c0; name: FUN_020ab2c0
 */


void FUN_020ab2c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 local_50;
  undefined4 local_44;
  
  local_50 = 0;
  lVar3 = FUN_020aa950(param_1,1,&local_50);
  local_44 = FUN_00150ba0(param_1,2,0);
  dVar5 = (double)FUN_00150a90(param_1,3,0);
  uVar2 = FUN_00150ba0(param_1,4,0);
  dVar6 = (double)FUN_00150a90(param_1,5,0);
  dVar7 = (double)FUN_00150a90(param_1,6,0);
  pcVar4 = (code *)*param_2;
  plVar1 = (long *)(lVar3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  (*pcVar4)((float)dVar5,(float)dVar6,(float)dVar7,plVar1,&local_44,uVar2);
  FUN_0014ff10(param_1,0);
  return;
}


