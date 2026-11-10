/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124e380; name: FUN_0124e380
 */


undefined8 FUN_0124e380(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    lVar2 = *(long *)(param_1 + 0x90);
    if (*(long *)(lVar2 + 0x5c0) == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = *(byte *)(*(long *)(lVar2 + 0x5c0) + 0x58) ^ 1;
    }
    if ((bVar4 & *(int *)(*(long *)(lVar2 + 0x5b0) + 0x80) == 6) != 0) {
      FUN_00d6802c(lVar2,1);
      iVar1 = FUN_00d686a0(*(undefined8 *)(param_1 + 0x90));
      uVar5 = 1;
      if (iVar1 != 0) {
        uVar5 = 2;
      }
      *(undefined4 *)(param_1 + 0xb4) = uVar5;
      *(char *)(param_1 + 0xb0) = *(char *)(param_1 + 0xb0) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xb0) == '\x01') &&
          (uVar3 = FUN_00d6868c(*(undefined8 *)(param_1 + 0x90)), (uVar3 & 1) != 0)) {
    return 1;
  }
  return 0;
}


