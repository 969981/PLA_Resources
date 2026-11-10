/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051ff5c; name: FUN_0051ff5c
 */


void FUN_0051ff5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    if (*(char *)(lVar1 + 0x50) != '\0') {
      if (*(char *)(lVar1 + 0x70) != '\0') {
        if ((*(byte *)(lVar1 + 0x78) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar1 + 0x88));
        }
        *(undefined1 *)(lVar1 + 0x70) = 0;
      }
      if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar1 + 0x68));
      }
      *(undefined1 *)(lVar1 + 0x50) = 0;
    }
    FUN_0051fffc(lVar1 + 0x38,*(undefined8 *)(lVar1 + 0x40));
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(lVar1 + 0x30));
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


