/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c61828; name: FUN_02c61828
 */


undefined8 FUN_02c61828(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if ((&DAT_03a84b1c)[lVar2] == param_2) {
LAB_02c61870:
      uVar1 = FUN_02c76514(*(undefined8 *)(param_1 + 0x98),lVar2);
      return uVar1;
    }
    if (lVar2 == 0x3c) {
      return 0;
    }
    if ((&DAT_03a84b20)[lVar2] == param_2) {
      lVar2 = lVar2 + 1;
      goto LAB_02c61870;
    }
    lVar2 = lVar2 + 2;
  } while( true );
}


