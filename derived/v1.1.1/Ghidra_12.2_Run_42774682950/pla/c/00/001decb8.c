/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001decb8; name: FUN_001decb8
 */


undefined8 FUN_001decb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_14 [4];
  
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    if (*(int *)(param_1 + 600) == -1) {
      return 0;
    }
    lVar1 = nnsocketRecv(*(int *)(param_1 + 600),auStack_14,1,2);
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = thunk_FUN_0020462c();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


