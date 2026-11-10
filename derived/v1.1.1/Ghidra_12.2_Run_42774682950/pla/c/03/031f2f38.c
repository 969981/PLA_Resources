/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f2f38; name: FUN_031f2f38
 */


void FUN_031f2f38(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_031f5010(*(undefined8 *)(param_1 + 0x160),param_2,&local_40,&local_50);
  auVar5 = FUN_031f5034(*(undefined8 *)(param_1 + 0x160),param_2 & 0xffffffff,
                        *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x130));
  iVar3 = *(int *)(param_1 + 0x1a8);
  lVar2 = *(long *)(param_1 + 0x1a0);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_031f35d8(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(long *)(param_1 + 0x1a0) = lVar2;
  }
  puVar4 = (undefined4 *)(lVar2 + (long)iVar3 * 0x50);
  *(int *)(param_1 + 0x1a8) = iVar1;
  *(undefined1 (*) [16])(puVar4 + 0xc) = auVar5;
  *(undefined8 *)(puVar4 + 6) = uStack_38;
  *(undefined8 *)(puVar4 + 4) = local_40;
  *puVar4 = 5;
  *(undefined8 *)(puVar4 + 10) = uStack_48;
  *(undefined8 *)(puVar4 + 8) = local_50;
  return;
}


