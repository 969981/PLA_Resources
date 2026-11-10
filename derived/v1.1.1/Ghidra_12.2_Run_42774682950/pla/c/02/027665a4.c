/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027665a4; name: FUN_027665a4
 */


void FUN_027665a4(int *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_38 [2];
  long local_28;
  
  local_28 = 0;
  FUN_02765cd8(local_38,&local_28);
  if (local_38[0] == 0) {
    if (local_28 == 0x1a) {
      puVar1 = (undefined8 *)(*param_3 + param_3[2]);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      *(undefined2 *)(param_2 + 3) = *(undefined2 *)(puVar1 + 3);
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_3[2] = param_3[2] + 0x1a;
      *param_1 = 0;
    }
    else {
      *param_1 = 4;
    }
  }
  else {
    *param_1 = local_38[0];
  }
  return;
}


