/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027644dc; name: FUN_027644dc
 */


void FUN_027644dc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar2;
  if (param_2[1] - *param_2 == 0) {
    return;
  }
  FUN_027641b0(param_1,(param_2[1] - *param_2 >> 3) * 0x6db6db6db6db6db7);
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    puVar4 = (undefined8 *)param_1[1];
    do {
      *puVar4 = &PTR_LAB_0426b9b8;
      FUN_0276429c(puVar4 + 1,lVar3 + 8);
      FUN_006e4bd8(puVar4 + 5,lVar3 + 0x28);
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      puVar4 = (undefined8 *)(param_1[1] + 0x38);
      param_1[1] = puVar4;
    } while (lVar1 != lVar3);
  }
  return;
}


