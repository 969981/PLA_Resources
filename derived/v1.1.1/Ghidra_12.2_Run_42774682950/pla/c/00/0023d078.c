/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023d078; name: FUN_0023d078
 */


void FUN_0023d078(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xc00) == 0) {
    uVar3 = *(undefined4 *)PTR_DAT_04372c98;
  }
  else {
    lVar5 = (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8) +
            ((ulong)(uVar2 >> 2) & 3) * 0x14;
    lVar1 = *(long *)(param_1 + 0x18) + lVar5;
    lVar5 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar5 + 4);
    if ((uVar2 & 0xc00) != 0x800) {
      lVar5 = lVar1;
    }
    uVar3 = FUN_0022e8d8(lVar1,lVar5);
  }
  uVar4 = FUN_0022e8c8(*(undefined8 *)(param_2 + 0xb8),uVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  return;
}


