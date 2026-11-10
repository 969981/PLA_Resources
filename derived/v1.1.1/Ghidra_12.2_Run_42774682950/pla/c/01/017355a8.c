/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017355a8; name: FUN_017355a8
 */


void FUN_017355a8(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined2 *)FUN_01735600();
  *puVar1 = *param_3;
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  FUN_0173579c(param_2);
  return;
}


