/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec2adc; name: FUN_02ec2adc
 */


undefined8 FUN_02ec2adc(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
    if (*(int *)(puVar5 + 2) != *(int *)((long)puVar5 + 0x14)) goto LAB_02ec2b84;
    param_2[1] = puVar5;
    puVar4 = (undefined8 *)*puVar5;
    *param_2 = puVar4;
    if (puVar4 != (undefined8 *)0x0) goto LAB_02ec2b84;
  }
  puVar4 = (undefined8 *)FUN_02f59e30(0,0x38);
  if (puVar4 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar4[5] = 0;
  puVar4[6] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  iVar2 = FUN_02ec315c();
  if (iVar2 != 1) {
    FUN_02ec2cac(puVar4);
    FUN_02f59e60(0,puVar4);
    return 0x34;
  }
  *puVar4 = 0;
  plVar1 = (long *)(param_1 + 4);
  if (*(long *)(param_1 + 4) != 0) {
    plVar1 = *(long **)(param_1 + 2);
  }
  *plVar1 = (long)puVar4;
  *(undefined8 **)(param_1 + 2) = puVar4;
  *param_1 = *param_1 + 1;
  *param_2 = puVar4;
  param_2[1] = puVar5;
LAB_02ec2b84:
  uVar3 = FUN_02ec31c4(puVar4 + 1);
  FUN_02ec3284(param_3,uVar3);
  return 1;
}


