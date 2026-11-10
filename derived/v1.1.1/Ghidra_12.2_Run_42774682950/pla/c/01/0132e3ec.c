/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132e3ec; name: FUN_0132e3ec
 */


void FUN_0132e3ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04205548;
  pcVar2 = (code *)param_1[0xa63];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa65] = 0;
    param_1[0xa64] = 0;
    param_1[0xa63] = 0;
    param_1[0xa62] = 0;
    (*pcVar2)(param_1 + 0xa66);
  }
  pcVar2 = (code *)param_1[0xa51];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa53] = 0;
    param_1[0xa52] = 0;
    param_1[0xa51] = 0;
    param_1[0xa50] = 0;
    (*pcVar2)(param_1 + 0xa54);
  }
  pcVar2 = (code *)param_1[0xa41];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa43] = 0;
    param_1[0xa42] = 0;
    param_1[0xa41] = 0;
    param_1[0xa40] = 0;
    (*pcVar2)(param_1 + 0xa44);
  }
  pcVar2 = (code *)param_1[0xa31];
  if (pcVar2 != (code *)0x0) {
    param_1[0xa33] = 0;
    param_1[0xa32] = 0;
    param_1[0xa31] = 0;
    param_1[0xa30] = 0;
    (*pcVar2)(param_1 + 0xa34);
  }
  lVar3 = -0x5140;
  pcVar2 = (code *)param_1[0xa15];
  puVar1 = param_1 + 0xa18;
  while( true ) {
    if (pcVar2 != (code *)0x0) {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      (*pcVar2)(puVar1);
    }
    lVar3 = lVar3 + 0xd0;
    if (lVar3 == 0) break;
    pcVar2 = (code *)puVar1[-0x1d];
    puVar1 = puVar1 + -0x1a;
  }
  return;
}


