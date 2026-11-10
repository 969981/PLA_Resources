/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01734cf8; name: FUN_01734cf8
 */


void FUN_01734cf8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 extraout_x1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_00151fe0(lVar2,0,1);
  *param_1 = lVar2;
  FUN_00150260(lVar2,0xffffffff);
  uVar1 = FUN_00155070(lVar2,0xfff0b9d8);
  *(undefined4 *)(param_1 + 1) = uVar1;
  local_60 = param_4;
  uStack_58 = param_5;
  FUN_01734df0(param_1,extraout_x1,&local_60);
  FUN_0014ff10(lVar2,0xfffffffe);
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_0014fef0(lVar2);
  if (*param_1 == 0) {
    FUN_00151490(lVar2);
  }
  else {
    FUN_00151e00(*param_1,0xfff0b9d8,(long)(int)param_1[1]);
    if (*param_1 != lVar2) {
      FUN_0014fe00(*param_1,lVar2,1);
    }
  }
  FUN_001522a0(lVar2,param_3);
  return;
}


