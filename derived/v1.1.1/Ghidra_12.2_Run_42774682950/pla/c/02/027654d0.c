/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027654d0; name: FUN_027654d0
 */


long FUN_027654d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  
  plVar3 = (long *)FUN_0276557c(param_1,&local_38,param_2);
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),0x60,8);
    param_3 = (undefined8 *)*param_3;
    uVar4 = param_3[2];
    uVar1 = param_3[3];
    uVar2 = param_3[1];
    *(undefined8 *)(lVar5 + 0x20) = *param_3;
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    *(undefined8 *)(lVar5 + 0x30) = uVar4;
    *(undefined8 *)(lVar5 + 0x38) = uVar1;
    param_3[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    uVar4 = FUN_00612290();
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = uVar4;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    FUN_02765624(param_1,local_38,plVar3,lVar5);
  }
  return lVar5;
}


