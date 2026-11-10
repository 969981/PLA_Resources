/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ced70; name: FUN_017ced70
 */


undefined8 FUN_017ced70(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_001511d0(param_1,1);
  plVar2 = *(long **)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7));
  if (plVar2[10] != 0) {
    FUN_02a43934();
  }
  if (plVar2[8] != 0) {
    FUN_02a43934();
  }
  if (plVar2[6] != 0) {
    FUN_02a43934();
  }
  if (plVar2[4] != 0) {
    FUN_02a43934();
  }
  if (plVar2[2] != 0) {
    FUN_02a43934();
  }
  if (*plVar2 != 0) {
    FUN_02a43934();
  }
  return 0;
}


