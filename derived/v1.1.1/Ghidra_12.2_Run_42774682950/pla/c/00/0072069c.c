/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0072069c; name: FUN_0072069c
 */


void FUN_0072069c(long *param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = (uint *)param_1[2];
  if ((puVar1 == (uint *)0x0) || (*param_1 != 0)) {
    lVar2 = *param_1;
    param_1[2] = 0;
  }
  else {
    uVar3 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      do {
        puVar1 = puVar1 + 2;
        FUN_00728778(*(undefined8 *)puVar1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar1 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar1);
    lVar2 = *param_1;
    param_1[2] = 0;
  }
  if (lVar2 != 0) {
                    /* try { // try from 007206c4 to 007206c7 has its CatchHandler @ 0072070c */
    FUN_0032ce8c();
  }
  return;
}


