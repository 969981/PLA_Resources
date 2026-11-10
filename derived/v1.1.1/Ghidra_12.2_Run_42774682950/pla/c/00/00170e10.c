/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00170e10; name: FUN_00170e10
 */


void FUN_00170e10(long *param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((int)(uint)*(byte *)((long)param_1 + 0x24) <= param_2) {
    if (param_2 == 0) {
      FUN_001514f0(param_1[3],param_3,param_4 - param_3);
      return;
    }
    FUN_00154110(param_1[3],"invalid capture index %%%d",param_2 + 1);
    return;
  }
  lVar3 = param_1[(long)param_2 * 2 + 6];
  if (lVar3 == -1) {
    FUN_00154110(param_1[3],"unfinished capture");
    lVar1 = param_1[3];
    lVar2 = param_1[(long)param_2 * 2 + 5];
  }
  else {
    lVar1 = param_1[3];
    lVar2 = param_1[(long)param_2 * 2 + 5];
    if (lVar3 == -2) {
      FUN_001514d0(lVar1,(lVar2 - *param_1) + 1);
      return;
    }
  }
  FUN_001514f0(lVar1,lVar2,lVar3);
  return;
}


