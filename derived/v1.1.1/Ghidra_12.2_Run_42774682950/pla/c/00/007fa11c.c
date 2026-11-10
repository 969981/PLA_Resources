/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fa11c; name: FUN_007fa11c
 */


void FUN_007fa11c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_3 == 0) || (*(short *)(param_1 + 0x114e) == 0)) {
    return;
  }
  lVar3 = 0;
  uVar1 = param_3 & 1;
  do {
    if ((uVar1 == 0) ||
       (uVar2 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + lVar3 * 8) + 0x10),
       (uVar2 & 1) == 0)) {
      if ((ulong)*(ushort *)(param_1 + 0x114e) <= lVar3 + 1U) {
        return;
      }
    }
    else {
      FUN_007f9fcc(param_1,param_2,*(long *)(*(long *)(param_1 + 0x88) + lVar3 * 8) + 0x10);
      if ((ulong)*(ushort *)(param_1 + 0x114e) <= lVar3 + 1U) {
        return;
      }
    }
    lVar3 = lVar3 + 1;
    uVar1 = 1 << (ulong)((uint)lVar3 & 0x1f) & param_3;
  } while( true );
}


