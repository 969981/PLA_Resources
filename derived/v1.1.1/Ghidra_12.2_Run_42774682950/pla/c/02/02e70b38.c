/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70b38; name: FUN_02e70b38
 */


void FUN_02e70b38(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x14);
    while ((bVar1 & 7) != 0) {
      FUN_02e71178(param_1,lVar2,1);
      FUN_02e6cbb4(param_1,lVar2,1);
      FUN_02e71a48(*(undefined8 *)(param_1 + 0x50));
      lVar2 = *(long *)(param_1 + 0xd0);
      if (lVar2 == 0) {
        return;
      }
      bVar1 = *(byte *)(lVar2 + 0x14);
    }
  }
  return;
}


