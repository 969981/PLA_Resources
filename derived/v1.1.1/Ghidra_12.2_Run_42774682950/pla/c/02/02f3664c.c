/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3664c; name: FUN_02f3664c
 */


undefined8 FUN_02f3664c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined1 local_28;
  
  uVar2 = 0;
  lVar1 = DAT_0442c008;
  if (DAT_0442c008 != 0) {
    do {
      lVar3 = *(long *)(lVar1 + 0x70);
      local_30 = 0x400000000;
      local_28 = 0;
      FUN_02f3c048(lVar1,&local_30,0);
      lVar1 = lVar3;
    } while (lVar3 != 0);
    uVar2 = 1;
  }
  return uVar2;
}


