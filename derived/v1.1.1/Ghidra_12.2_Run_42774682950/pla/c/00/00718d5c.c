/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00718d5c; name: FUN_00718d5c
 */


void FUN_00718d5c(long *param_1)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = (long)(PTR_DAT_043766d0 + 0x10);
                    /* try { // try from 00718d78 to 00718d7b has its CatchHandler @ 00718e80 */
  FUN_00718e9c();
  if (((param_1[1] & 1U) == 0) ||
     (plVar3 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar3 != 0 || plVar3 == (long *)0x0)) {
    puVar1 = (uint *)param_1[7];
  }
  else {
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar3[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar3);
    puVar1 = (uint *)param_1[7];
  }
  if ((puVar1 != (uint *)0x0) && (param_1[5] == 0)) {
    uVar4 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        FUN_007264b8(*(undefined8 *)puVar1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar1 = (uint *)param_1[7];
    }
    FUN_002ee710(puVar1);
  }
  param_1[7] = 0;
  if (param_1[5] != 0) {
                    /* try { // try from 00718ddc to 00718ddf has its CatchHandler @ 00718e7c */
    FUN_0032ce8c();
  }
  puVar1 = (uint *)param_1[4];
  if ((puVar1 == (uint *)0x0) || (param_1[2] != 0)) {
    lVar2 = param_1[2];
    param_1[4] = 0;
  }
  else {
    uVar4 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        FUN_00726218(*(undefined8 *)puVar1);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar1 = (uint *)param_1[4];
    }
    FUN_002ee710(puVar1);
    lVar2 = param_1[2];
    param_1[4] = 0;
  }
  if (lVar2 != 0) {
                    /* try { // try from 00718dfc to 00718dff has its CatchHandler @ 00718e78 */
    FUN_0032ce8c();
  }
  return;
}


