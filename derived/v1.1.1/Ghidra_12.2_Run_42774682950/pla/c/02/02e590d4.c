/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e590d4; name: FUN_02e590d4
 */


void FUN_02e590d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_14 [4];
  
  puVar3 = (undefined8 *)FUN_02e59d6c(param_1,*param_2,param_2[1],auStack_14);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar1;
    uVar1 = param_2[5];
    puVar3[4] = param_2[4];
    puVar3[5] = uVar1;
    uVar2 = *(undefined4 *)(param_2 + 3);
    *(undefined2 *)((long)puVar3 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
    *(undefined4 *)(puVar3 + 3) = uVar2;
  }
  return;
}


