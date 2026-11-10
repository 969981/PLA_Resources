/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01734df0; name: FUN_01734df0
 */


void FUN_01734df0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar4,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar4) {
      FUN_0014fe00(*param_1,lVar4,1);
    }
  }
  lVar4 = *param_1;
  uVar1 = *param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = FUN_0014fef0(lVar4);
  uVar5 = *puVar2;
  FUN_00151490(lVar4);
  FUN_00151810(lVar4,uVar5);
  FUN_001516f0(lVar4,FUN_01734ebc,2);
  FUN_00152550(lVar4,uVar3,uVar1);
  FUN_0014ff10(*param_1,0xfffffffe);
  return;
}


