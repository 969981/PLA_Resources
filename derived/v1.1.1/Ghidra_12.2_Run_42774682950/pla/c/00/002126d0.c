/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002126d0; name: FUN_002126d0
 */


int FUN_002126d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_04372808;
  if (*(int *)PTR_DAT_04372808 == 0) {
    iVar4 = -1;
  }
  else {
    puVar1 = PTR_DAT_04372808 + 0x38;
    nnosLockMutex(puVar1);
    iVar3 = FUN_001e3860(*(undefined8 *)(puVar2 + 0x58));
    iVar4 = FUN_001e3860(*(undefined8 *)(puVar2 + 0x60));
    iVar4 = iVar4 + iVar3;
    nnosUnlockMutex(puVar1);
  }
  return iVar4;
}


