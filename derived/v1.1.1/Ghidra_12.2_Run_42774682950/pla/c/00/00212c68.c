/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212c68; name: FUN_00212c68
 */


void FUN_00212c68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04372808;
  if (*(int *)PTR_DAT_04372808 == 0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortFormatImpl(&DAT_03996322,&DAT_03996322,&DAT_03996322,0,&DAT_03996322);
  }
  puVar1 = PTR_DAT_04372808 + 0x38;
  nnosLockMutex(puVar1);
  *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + -1;
  nnosUnlockMutex(puVar1);
  nnosSignalEvent(puVar2 + 0x10);
  nnosWaitThread(*(undefined8 *)(puVar2 + 8));
  if (*(long *)(puVar2 + 0x60) != 0) {
    FUN_001e381c(*(long *)(puVar2 + 0x60),0);
    FUN_002044d4(*(undefined8 *)(puVar2 + 0x60));
    *(undefined8 *)(puVar2 + 0x60) = 0;
  }
  if (*(long *)(puVar2 + 0x58) != 0) {
    FUN_001e381c(*(long *)(puVar2 + 0x58),0);
    FUN_002044d4(*(undefined8 *)(puVar2 + 0x58));
    *(undefined8 *)(puVar2 + 0x58) = 0;
  }
  nnosFinalizeMutex(puVar2 + 0x38);
  nnosFinalizeEvent(puVar2 + 0x10);
  if (*(long *)(puVar2 + 8) != 0) {
    FUN_002128ac();
    *(undefined8 *)(puVar2 + 8) = 0;
  }
  *(undefined4 *)puVar2 = 0;
  memset(puVar2 + 0x10,0,0x58);
  return;
}


