/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b694; name: FUN_0085b694
 */


undefined8 FUN_0085b694(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_007ee578(auStack_30,param_1 + 100);
    puVar1 = auStack_30;
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      return 5;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) != 2) {
      FUN_007ee578(auStack_50,param_1 + 100);
      FUN_007e5cac(uVar2,auStack_50);
      goto LAB_0085b720;
    }
    FUN_007ee578(auStack_40,param_1 + 100);
    puVar1 = auStack_40;
  }
  FUN_007e5c40(uVar2,puVar1);
LAB_0085b720:
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


