/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d58e54; name: FUN_00d58e54
 */


undefined4 FUN_00d58e54(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x6d8) != 2) {
    iVar1 = *(int *)(param_1 + 0x6d8);
  }
  lVar4 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  if (*(uint *)(param_1 + 0x5b4) < 7) {
    lVar4 = *(long *)(lVar4 + 0x8b0);
    piVar2 = (int *)(lVar4 + 0x20);
    if (*(int *)(lVar4 + 0x28) != 0) {
      piVar2 = (int *)(lVar4 + 0x24);
    }
    uVar3 = *(undefined4 *)
             (*(long *)(*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60 + 0x638
                                           ) + 0xa8) +
                       (ulong)(uint)(*(int *)(lVar4 + 0x14) + *piVar2 * *(int *)(lVar4 + 0x10)) *
                       0x10) + (ulong)*(uint *)(param_1 + 0x5b4) * 4 + 0x2c);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


