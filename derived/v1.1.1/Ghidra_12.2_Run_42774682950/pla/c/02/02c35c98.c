/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c35c98; name: FUN_02c35c98
 */


void FUN_02c35c98(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1 + 8) = 0;
      lVar3 = *(long *)(param_1 + 0x98);
      lVar4 = *(long *)(lVar3 + lVar1);
      if (*(char *)(lVar4 + 0x7c) != '\0') {
        **(undefined2 **)(lVar4 + 0x58) = 0;
        *(undefined2 *)(lVar4 + 0x7a) = 0;
        lVar3 = *(long *)(param_1 + 0x98);
      }
      lVar3 = lVar3 + lVar1;
      lVar1 = lVar1 + 0x18;
      *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x90));
  }
  return;
}


