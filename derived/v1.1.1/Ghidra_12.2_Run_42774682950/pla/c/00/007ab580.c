/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ab580; name: FUN_007ab580
 */


void FUN_007ab580(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  
  *param_1 = (long)(PTR_DAT_043770e8 + 0x10);
                    /* try { // try from 007ab59c to 007ab59f has its CatchHandler @ 007ab648 */
  FUN_007ab65c();
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    puVar1 = (uint *)param_1[4];
  }
  else {
    if ((*(byte *)(plVar2 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar2[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar2);
    puVar1 = (uint *)param_1[4];
  }
  if ((puVar1 != (uint *)0x0) && (param_1[2] == 0)) {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        FUN_007b5354(*(undefined8 *)puVar1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[4];
    }
    FUN_002ee710(puVar1);
  }
  param_1[4] = 0;
  if (param_1[2] != 0) {
                    /* try { // try from 007ab600 to 007ab603 has its CatchHandler @ 007ab644 */
    FUN_0032ce8c();
  }
  return;
}


