/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f4118; name: FUN_001f4118
 */


undefined4 FUN_001f4118(void)

{
  int iVar1;
  long lVar2;
  long *in_x3;
  undefined4 uVar3;
  
  lVar2 = nnsocketRecv();
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    uVar3 = 0x51;
    if (iVar1 != 4 && iVar1 != 0xb) {
      uVar3 = 0x38;
    }
  }
  else {
    uVar3 = 0;
    *in_x3 = lVar2;
  }
  return uVar3;
}


