/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023cf9c; name: FUN_0023cf9c
 */


void FUN_0023cf9c(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0xc00) == 0) {
      iVar2 = *(int *)PTR_DAT_04372c98;
    }
    else {
      lVar4 = (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              ((ulong)(uVar1 >> 2) & 3) * 0x14;
      lVar5 = *(long *)(param_1 + 0x18) + lVar4;
      lVar4 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar4 + 4);
      if ((uVar1 & 0xc00) != 0x800) {
        lVar4 = lVar5;
      }
      iVar2 = FUN_0022e8d8(lVar5,lVar4);
    }
    if (iVar2 == 7) {
      uVar3 = FUN_0087dfd8(*(undefined8 *)(param_1 + 0x40));
      FUN_0087e1e8(*(undefined8 *)(param_1 + 0x40),param_2);
      FUN_00232674(uVar3);
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        FUN_0087dfc8(lVar5);
        FUN_00232674(lVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


