/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155450; name: FUN_00155450
 */


undefined8 FUN_00155450(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = getc(*(FILE **)(param_1 + 2));
  if (iVar1 == -1) {
LAB_0015552c:
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0xef) {
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      *(undefined1 *)((long)param_1 + (long)iVar1 + 0x10) = 0xef;
      iVar1 = getc(*(FILE **)(param_1 + 2));
      if (iVar1 == -1) goto LAB_0015552c;
      if (iVar1 == 0xbb) {
        iVar1 = *param_1;
        *param_1 = iVar1 + 1;
        *(undefined1 *)((long)param_1 + (long)iVar1 + 0x10) = 0xbb;
        iVar1 = getc(*(FILE **)(param_1 + 2));
        if (iVar1 == -1) goto LAB_0015552c;
        if (iVar1 == 0xbf) {
          *(undefined1 *)((long)param_1 + (long)*param_1 + 0x10) = 0xbf;
          *param_1 = 0;
          iVar1 = getc(*(FILE **)(param_1 + 2));
        }
      }
    }
    *param_2 = iVar1;
    if (iVar1 != 0x23) {
      return 0;
    }
    do {
      iVar1 = getc(*(FILE **)(param_1 + 2));
    } while (iVar1 != 10 && iVar1 != -1);
    iVar1 = getc(*(FILE **)(param_1 + 2));
    uVar2 = 1;
  }
  *param_2 = iVar1;
  return uVar2;
}


