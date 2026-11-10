/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293c4dc; name: FUN_0293c4dc
 */


undefined2 FUN_0293c4dc(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8 + 0x120);
  FUN_0295e190(puVar1[1],*puVar1);
  **(undefined8 **)(puVar1[5] + 0x10) = 0;
  lVar5 = *(long *)(*(long *)(puVar1[5] + 0x130) + 0xa40);
  uVar3 = FUN_0296eaa8(*(undefined8 *)(lVar5 + 0x38));
  uVar3 = FUN_0296ed7c(*(undefined8 *)(lVar5 + 0x38),*(undefined1 *)(lVar4 + 0x7d),uVar3);
  uVar2 = FUN_02977520(*(undefined8 *)(lVar5 + 0x38),lVar4,1,uVar3);
  return uVar2;
}


