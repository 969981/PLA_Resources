/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01794390; name: FUN_01794390
 */


undefined8 FUN_01794390(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001511d0(param_1,1);
  lVar1 = *(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7));
  if (*(long *)(lVar1 + 0xa8) != 0) {
    FUN_02a43934();
  }
  if (*(long *)(lVar1 + 0x90) != 0) {
    FUN_02a43934();
  }
  if (*(long *)(lVar1 + 0x80) != 0) {
    FUN_02a43934();
  }
  if (*(long *)(lVar1 + 0x70) != 0) {
    FUN_02a43934();
  }
  return 0;
}


