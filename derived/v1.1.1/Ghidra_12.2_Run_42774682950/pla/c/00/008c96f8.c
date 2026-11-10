/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c96f8; name: FUN_008c96f8
 */


void FUN_008c96f8(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar2,0xfff0b9d8,(long)(int)plVar4[1]);
    if (*plVar4 != lVar2) {
      FUN_0014fe00(*plVar4,lVar2,1);
    }
  }
  lVar3 = *plVar4;
  FUN_00151a70(lVar3,0xffffffff,param_2[1]);
  FUN_00151a70(*plVar4,0xffffffff,param_2[2]);
  FUN_00151a70(*plVar4,0xffffffff,param_2[3]);
  lVar2 = *plVar4;
  *param_1 = lVar2;
  FUN_00150260(lVar2,0xffffffff);
  uVar1 = FUN_00155070(lVar2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  FUN_0014ff10(lVar3,0xfffffffc);
  FUN_0014ff10(*plVar4,0xfffffffe);
  return;
}


