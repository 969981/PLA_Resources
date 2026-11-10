/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02780914; name: FUN_02780914
 */


undefined8 * FUN_02780914(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar3) {
      FUN_02764bc8(param_1 + 3,param_2,param_3);
      param_1[1] = param_1[1] + 0x18;
    }
    else {
      FUN_02780a28(param_1,param_2,puVar3,param_2 + 3);
      puVar3 = param_3;
      if ((param_2 <= param_3) && (puVar3 = param_3 + 3, (undefined8 *)param_1[1] <= param_3)) {
        puVar3 = param_3;
      }
      uVar1 = *puVar3;
      uVar2 = puVar3[2];
      param_2[1] = puVar3[1];
      param_2[2] = uVar2;
      *param_2 = uVar1;
    }
  }
  else {
    uVar1 = FUN_0277f7a0(param_1,((long)puVar3 - *param_1 >> 3) * -0x5555555555555555 + 1);
    FUN_02764d14(auStack_58,uVar1,((long)param_2 - *param_1 >> 3) * -0x5555555555555555,param_1 + 3)
    ;
    FUN_02780acc(auStack_58,param_3);
    param_2 = (undefined8 *)FUN_02780c44(param_1,auStack_58,param_2);
    FUN_02764e4c(auStack_58);
  }
  return param_2;
}


