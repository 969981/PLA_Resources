/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002046b4; name: FUN_002046b4
 */


byte FUN_002046b4(long param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  int local_14;
  
  local_14 = 0;
  bVar1 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298);
    bVar1 = 0;
    if (lVar3 != 0) {
      uVar2 = nnsslConnectionPending(lVar3,&local_14);
      bVar1 = nnResultIsSuccess(uVar2);
      bVar1 = bVar1 & 0 < local_14;
    }
  }
  return bVar1;
}


