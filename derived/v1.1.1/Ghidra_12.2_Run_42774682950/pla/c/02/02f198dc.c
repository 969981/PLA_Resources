/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f198dc; name: FUN_02f198dc
 */


void FUN_02f198dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  *param_1 = &PTR_FUN_042abf28;
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 3) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 3) << 5;
      lVar1 = lVar1 + 8;
      do {
        FUN_02f19760(lVar1);
        lVar2 = lVar2 + -0x20;
        lVar1 = lVar1 + 0x20;
      } while (lVar2 != 0);
      lVar1 = param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    (*DAT_0442d150)(0,lVar1);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


