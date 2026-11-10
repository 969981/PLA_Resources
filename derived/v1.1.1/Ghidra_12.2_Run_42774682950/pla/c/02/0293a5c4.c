/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a5c4; name: FUN_0293a5c4
 */


ulong FUN_0293a5c4(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8 + 0x120);
  if (lVar3 != 0) {
    lVar1 = 2;
    if (*(byte *)(lVar3 + 0x493) != 0) {
      lVar1 = -1;
    }
    lVar1 = lVar1 + (ulong)*(byte *)(lVar3 + 0x493);
    cVar2 = *(char *)(lVar3 + lVar1 + 0x490);
    if (cVar2 != '\0') {
      return (ulong)*(byte *)(lVar3 + lVar1 * 0x48 + (ulong)(byte)(cVar2 - 1) * 0xc + 0x3c1);
    }
  }
  return 0xffffffff;
}


