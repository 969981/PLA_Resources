/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7378; name: FUN_007f7378
 */


void FUN_007f7378(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04377550;
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x1150) != '\0')) {
    if (param_2 == 2) {
      FUN_0082afd8(lVar1);
      return;
    }
    if (param_2 == 1) {
      FUN_0082afc8(lVar1,param_3);
      FUN_0082abd8(lVar1,param_3,0xffffffff);
      return;
    }
  }
  return;
}


