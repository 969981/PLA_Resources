/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863464; name: FUN_00863464
 */


void FUN_00863464(long *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_007ff5d8();
  puVar2 = PTR_DAT_04378240;
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar2 + 0x50);
  puVar2 = PTR_DAT_043773c0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined2 *)(*(long *)puVar2 + 0x50);
  uVar3 = FUN_007e336c();
  lVar4 = FUN_0081a750(0x30,uVar3);
  if (lVar4 != 0) {
    FUN_0085e200(lVar4,uVar1);
  }
  param_1[0x11] = lVar4;
  return;
}


