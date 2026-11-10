/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e8f28; name: FUN_002e8f28
 */


void FUN_002e8f28(undefined8 *param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = &DAT_03996322;
  if ((*param_2 & 2) != 0) {
    puVar1 = &DAT_038d0274;
  }
                    /* try { // try from 002e8f60 to 002e8fe7 has its CatchHandler @ 002e8ff4 */
  FUN_002e4094(param_1,puVar1,*param_2 >> 1 & 1);
  puVar2 = &DAT_03996322;
  if ((*param_2 & 4) != 0) {
    puVar2 = &DAT_039408ce;
  }
  FUN_002e4094(param_1,puVar2,*param_2 >> 2 & 1);
  puVar2 = &DAT_03996322;
  if ((*param_2 & 8) != 0) {
    puVar2 = &DAT_038bdc00;
  }
  FUN_002e4094(param_1,puVar2,*param_2 >> 3 & 1);
  puVar2 = &DAT_03996322;
  if ((*param_2 & 0x10) != 0) {
    puVar2 = &DAT_038aa602;
  }
  FUN_002e4094(param_1,puVar2,*param_2 >> 4 & 1);
  puVar1 = &DAT_03996322;
  if ((*param_2 & 0x20) != 0) {
    puVar1 = &DAT_0390f9d5;
  }
  FUN_002e4094(param_1,puVar1,*param_2 >> 5 & 1);
  return;
}


