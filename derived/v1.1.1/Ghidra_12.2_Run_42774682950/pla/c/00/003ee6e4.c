/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ee6e4; name: FUN_003ee6e4
 */


void FUN_003ee6e4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    plVar2 = (long *)(lVar1 + 0x70);
    if (*plVar2 != 0) {
      FUN_003eea08(plVar2);
      FUN_002e2ea0(PTR_LAB_04373088,*plVar2);
    }
    FUN_003e9f80(lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x60));
    if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar1 + 0x50));
    }
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar1 + 0x30));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


