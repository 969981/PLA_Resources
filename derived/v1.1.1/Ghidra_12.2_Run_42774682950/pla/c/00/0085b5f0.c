/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b5f0; name: FUN_0085b5f0
 */


void FUN_0085b5f0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  if (*(int *)(param_1 + 0x60) == 1) {
    FUN_007e5da4();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = FUN_007e5f0c();
    while ((uVar1 & 1) != 0) {
      FUN_007ec500(*(undefined8 *)(param_1 + 0x90),2);
      uVar1 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0x90));
    }
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_007ee578(auStack_30,local_40);
      FUN_007e5cac(piVar2,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


