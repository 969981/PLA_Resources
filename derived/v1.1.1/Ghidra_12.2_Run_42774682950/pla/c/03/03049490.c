/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03049490; name: FUN_03049490
 */


void FUN_03049490(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((*(char *)(param_1 + 8) == '\x02') && (2 < *(byte *)(param_1 + 9))) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = (ulong)*(ushort *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    iVar2 = (uint)*(byte *)(lVar1 + 3) * 0x10;
    if (iVar2 + *(int *)(param_2 + 0x18) < 0xee1) {
      lVar3 = *(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20;
    }
    else {
      lVar3 = FUN_032bf82c(param_2);
    }
    FUN_032c4a00(lVar3,lVar1,iVar2);
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + iVar2;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    *(long *)(lVar3 + 0x20) = param_1;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(short *)(param_1 + 0x28) = (short)lVar3 - (short)uVar4;
  }
  return;
}


