/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155a20; name: FUN_00155a20
 */


void FUN_00155a20(undefined8 param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  iVar1 = FUN_0014fd20(param_1,param_3);
  if (iVar1 == 0) {
    FUN_00154110(param_1,"stack overflow (%s)","too many upvalues");
    lVar2 = *param_2;
  }
  else {
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    if ((int)param_3 < 1) {
      do {
        plVar3 = param_2 + 2;
        FUN_001516f0(param_1,param_2[1],param_3);
        FUN_00152550(param_1,-2 - param_3,*param_2);
        param_2 = plVar3;
      } while (*plVar3 != 0);
    }
    else {
      do {
        uVar4 = param_3;
        do {
          FUN_00150260(param_1,-param_3);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        FUN_001516f0(param_1,param_2[1],param_3);
        FUN_00152550(param_1,-2 - param_3,*param_2);
        param_2 = param_2 + 2;
      } while (*param_2 != 0);
    }
  }
  FUN_0014ff10(param_1,~param_3);
  return;
}


