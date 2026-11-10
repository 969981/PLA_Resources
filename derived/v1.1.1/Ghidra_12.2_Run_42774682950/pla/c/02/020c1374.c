/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020c1374; name: FUN_020c1374
 */


void FUN_020c1374(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_44;
  
  iVar1 = param_2[1] + 1;
  *param_2 = 1;
  param_2[1] = iVar1;
  iVar3 = FUN_001504d0(param_1,iVar1);
  if (iVar3 == 0) {
    dVar2 = (double)FUN_00150a90(param_1,iVar1,0);
    lVar4 = llround(dVar2);
    local_44 = (undefined4)lVar4;
  }
  else {
    local_44 = FUN_00150ba0(param_1,iVar1,0);
  }
  iVar1 = param_2[1];
  *param_2 = 1;
  param_2[1] = iVar1 + 1;
  dVar2 = (double)FUN_00150a90(param_1,iVar1 + 1,0);
  (*(code *)*param_3)((float)dVar2,param_4,*param_5,&local_44);
  return;
}


