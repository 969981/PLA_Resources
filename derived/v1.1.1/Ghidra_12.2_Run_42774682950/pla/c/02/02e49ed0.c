/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49ed0; name: FUN_02e49ed0
 */


undefined8 FUN_02e49ed0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_3 + 0x280);
  if (0xf < iVar2) {
    uVar3 = FUN_02e4a1f8(param_1,param_3,param_2);
    return uVar3;
  }
  uVar3 = param_2[3];
  puVar1 = (undefined8 *)(param_3 + (long)iVar2 * 0x20);
  puVar1[1] = param_2[1];
  puVar1[3] = uVar3;
  uVar3 = *param_2;
  puVar1[2] = param_2[2];
  *puVar1 = uVar3;
  if (*(int *)(param_3 + 0x284) < 1) {
    uVar3 = param_2[5];
  }
  else {
    uVar3 = param_2[4];
  }
  *(undefined8 *)(param_3 + (long)iVar2 * 8 + 0x200) = uVar3;
  *(int *)(param_3 + 0x280) = *(int *)(param_3 + 0x280) + 1;
  return 0;
}


