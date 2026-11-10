/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a43c8; name: FUN_011a43c8
 */


undefined4 FUN_011a43c8(undefined8 param_1,short param_2)

{
  long lVar1;
  
  lVar1 = 0;
  switch(param_2) {
  case 0x464:
    break;
  case 0x465:
    lVar1 = 1;
    break;
  case 0x466:
    lVar1 = 2;
    break;
  case 0x467:
    lVar1 = 3;
    break;
  case 0x468:
    lVar1 = 4;
    break;
  default:
    if (param_2 != 0x32) {
      return 0;
    }
    lVar1 = 5;
  }
  return (&DAT_03a79930)[lVar1 * 2];
}


