/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03006410; name: FUN_03006410
 */


undefined8 FUN_03006410(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_03006490(param_1,0);
  puVar2 = (undefined8 *)FUN_03006490(param_1,1);
  if ((puVar1 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0x80040200;
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    uVar4 = *puVar1;
    uVar3 = 0;
    param_2[1] = puVar1[1];
    *param_2 = uVar4;
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
  }
  param_3[1] = uVar5;
  *param_3 = uVar4;
  return uVar3;
}


