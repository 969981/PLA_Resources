/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ef44; name: FUN_0082ef44
 */


undefined8 FUN_0082ef44(ushort *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = FUN_0082dcbc(*(undefined8 *)(param_1 + 8));
  if (bVar3 == 0xff) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    *(byte *)(param_1 + 3) = bVar3;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    bVar4 = 0;
    if (bVar3 != 0) goto LAB_0082efa8;
LAB_0082ef90:
    bVar4 = bVar4 + 1;
    if (bVar4 < uVar2) {
      while (bVar4 != bVar3) {
LAB_0082efa8:
        lVar1 = *(long *)(*(long *)(param_1 + 8) + 8) + (ulong)bVar4 * 0x20;
        if ((*(long *)(lVar1 + 0x10) == 0) || (*(char *)(lVar1 + 0x1c) == -1)) break;
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + (ulong)bVar3 * 8) + (ulong)bVar4) = 1;
        bVar4 = bVar4 + 1;
        if (uVar2 <= bVar4) {
          return 1;
        }
      }
      goto LAB_0082ef90;
    }
  }
  return 1;
}


