/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008475a8; name: FUN_008475a8
 */


void FUN_008475a8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04378000;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if ((int)param_1[4] == 0) {
    return;
  }
  lVar2 = FUN_007e9088(param_1 + 2);
  if (lVar2 != 0) goto LAB_008475f8;
  do {
    puVar3 = (undefined8 *)0x0;
    while( true ) {
      (**(code **)*puVar3)(puVar3);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_0081a840(puVar3);
        FUN_0081a800(puVar3);
      }
      if ((int)param_1[4] == 0) {
        return;
      }
      lVar2 = FUN_007e9088(param_1 + 2);
      if (lVar2 == 0) break;
LAB_008475f8:
      puVar3 = (undefined8 *)(lVar2 - *(int *)((long)param_1 + 0x24));
    }
  } while( true );
}


