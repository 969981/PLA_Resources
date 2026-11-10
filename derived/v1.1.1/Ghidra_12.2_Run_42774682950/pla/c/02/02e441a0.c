/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e441a0; name: FUN_02e441a0
 */


void FUN_02e441a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[6];
  *param_1 = &PTR_FUN_042a5d18;
  if (lVar1 == 0) {
    lVar1 = param_1[4];
  }
  else {
    if (*(uint *)(param_1 + 7) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 7) << 7;
      do {
        FUN_02e4499c(lVar1);
        lVar1 = lVar1 + 0x80;
        lVar2 = lVar2 + -0x80;
      } while (lVar2 != 0);
      lVar1 = param_1[6];
    }
    *(undefined4 *)(param_1 + 7) = 0;
    (*DAT_0442d150)(9,lVar1);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    lVar1 = param_1[4];
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (*DAT_0442d150)(9);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  FUN_02e443b8(param_1);
  return;
}


