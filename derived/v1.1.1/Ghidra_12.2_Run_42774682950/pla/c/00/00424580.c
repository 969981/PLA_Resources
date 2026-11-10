/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424580; name: FUN_00424580
 */


void FUN_00424580(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = FUN_0040c070();
  }
  uVar2 = FUN_0040c070(*(undefined8 *)(param_1 + 8));
  FUN_0040d150(uVar2,iVar1);
  return;
}


