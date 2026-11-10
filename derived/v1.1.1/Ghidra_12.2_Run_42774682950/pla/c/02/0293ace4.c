/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293ace4; name: FUN_0293ace4
 */


undefined1 FUN_0293ace4(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  FUN_0295e190(puVar2[1],*puVar2);
  **(undefined8 **)(puVar2[5] + 0x10) = 0;
  uVar1 = FUN_0296eaa8(*(undefined8 *)(*(long *)(*(long *)(puVar2[5] + 0x130) + 0xce0) + 0x38));
  return uVar1;
}


