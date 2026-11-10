/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044eb50; name: FUN_0044eb50
 */


undefined8 FUN_0044eb50(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00406f10();
  iVar1 = FUN_00407950();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_00407970(uVar3,iVar1);
      FUN_00466c20();
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(uVar3);
    } while (iVar1 < iVar2);
  }
  return uVar3;
}


