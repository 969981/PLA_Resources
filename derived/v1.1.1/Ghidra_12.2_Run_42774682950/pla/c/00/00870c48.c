/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870c48; name: FUN_00870c48
 */


void FUN_00870c48(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  if ((*(long *)(param_1 + 0x6e8) != 0) && (0 < *(int *)(*(long *)(param_1 + 0x6e8) + 4))) {
    uVar1 = *(undefined2 *)(param_1 + 0x60);
    FUN_007e3400(auStack_40);
    FUN_00874c48(param_1,6,auStack_40,uVar1,0);
    FUN_007e34a4(auStack_40);
    FUN_007eb8b0(auStack_40,*(undefined8 *)(param_1 + 0x6e8));
  }
  lVar2 = *(long *)(param_1 + 0x6f0);
  *(undefined1 *)(lVar2 + 0x48) = 1;
  FUN_007ec500(lVar2,2);
  FUN_00876a28(*(undefined8 *)(param_1 + 0x6f0));
  FUN_00870388(param_1);
  return;
}


