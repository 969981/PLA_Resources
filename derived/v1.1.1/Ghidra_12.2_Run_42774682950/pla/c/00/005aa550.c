/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa550; name: FUN_005aa550
 */


void FUN_005aa550(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04374f60;
  param_1[3] = 0x7fffffff;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0x7fffffff;
  param_1[1] = 0x7fffffff;
  uVar1 = DAT_0388a7d0;
  *(undefined8 *)(param_2 + 0xe48) = DAT_0388a7d0;
  *(undefined8 *)(param_2 + 0xe80) = uVar1;
  *(undefined8 *)(param_2 + 0xe9c) = uVar1;
  return;
}


