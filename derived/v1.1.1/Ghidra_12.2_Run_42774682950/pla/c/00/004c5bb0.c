/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5bb0; name: FUN_004c5bb0
 */


void FUN_004c5bb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = *(int *)((long)puVar2 + 0x24);
    while( true ) {
      if ((iVar1 == 0) && ((code *)puVar2[3] != (code *)0x0)) {
        (*(code *)puVar2[3])(param_1,*puVar2,*(undefined4 *)(puVar2 + 1),puVar2[2]);
      }
      puVar3 = (undefined8 *)puVar2[5];
      FUN_00400420(puVar2,"external/openssl/crypto/async/async_wait.c",0x25);
      if (puVar3 == (undefined8 *)0x0) break;
      iVar1 = *(int *)((long)puVar3 + 0x24);
      puVar2 = puVar3;
    }
  }
  FUN_00400420(param_1,"external/openssl/crypto/async/async_wait.c",0x29);
  return;
}


