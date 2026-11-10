/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212b04; name: FUN_00212b04
 */


undefined8 FUN_00212b04(long param_1)

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
  FUN_001e3718(*(long *)(puVar2 + 0x58),*(undefined8 *)(*(long *)(puVar2 + 0x58) + 8),param_1,
               param_1 + 0x1d8);
  nnosUnlockMutex(puVar1);
  return 0;
}


