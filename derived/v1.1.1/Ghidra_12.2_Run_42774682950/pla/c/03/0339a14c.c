/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a14c; name: FUN_0339a14c
 */


void FUN_0339a14c(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  bVar1 = *pbVar2;
  do {
    if (bVar1 == 0) {
      FUN_0339a7b4(param_1 + 0x18,0x100);
      pbVar2 = *(byte **)(param_1 + 0x38);
      bVar1 = *pbVar2;
    }
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      return;
    }
    if (pbVar2 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_0339a180:
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 0x38) = pbVar2;
    }
    else {
      FUN_0339a7b4(param_1 + 0x18,0x100);
      pbVar2 = *(byte **)(param_1 + 0x38);
      if (pbVar2 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)))
      goto LAB_0339a180;
    }
    bVar1 = *pbVar2;
  } while( true );
}


