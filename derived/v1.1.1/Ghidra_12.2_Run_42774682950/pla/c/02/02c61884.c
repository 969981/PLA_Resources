/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c61884; name: FUN_02c61884
 */


void FUN_02c61884(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_03a84b1c)[lVar1] == param_2) {
LAB_02c618c8:
      FUN_02c870fc(*(undefined8 *)(param_1 + 0x98),lVar1,1);
      return;
    }
    if (lVar1 == 0x3c) {
      return;
    }
    if ((&DAT_03a84b20)[lVar1] == param_2) {
      lVar1 = lVar1 + 1;
      goto LAB_02c618c8;
    }
    lVar1 = lVar1 + 2;
  } while( true );
}


