/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084763c; name: FUN_0084763c
 */


void FUN_0084763c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar1 = FUN_007e9088(param_1 + 0x10);
  if (lVar1 != 0) goto LAB_00847680;
  do {
    puVar2 = (undefined8 *)0x0;
    while( true ) {
      (**(code **)*puVar2)(puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_0081a840(puVar2);
        FUN_0081a800(puVar2);
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        return;
      }
      lVar1 = FUN_007e9088(param_1 + 0x10);
      if (lVar1 == 0) break;
LAB_00847680:
      puVar2 = (undefined8 *)(lVar1 - *(int *)(param_1 + 0x24));
    }
  } while( true );
}


