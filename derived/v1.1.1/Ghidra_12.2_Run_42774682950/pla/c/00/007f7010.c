/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7010; name: FUN_007f7010
 */


void FUN_007f7010(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(long *)(param_1 + 0x138) != 0) && (uVar1 = FUN_007e5f0c(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x138);
    FUN_007ee578(auStack_30,param_2);
    FUN_007ee660(lVar2 + 0x60,auStack_30);
  }
  if ((*(long *)(param_1 + 0x140) != 0) && (uVar1 = FUN_007e5f0c(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x140);
    FUN_007ee578(auStack_40,param_2);
    FUN_007ee660(lVar2 + 0x60,auStack_40);
  }
  if ((*(long *)(param_1 + 0x158) != 0) && (uVar1 = FUN_007e5f0c(), (uVar1 & 1) != 0)) {
    lVar2 = *(long *)(param_1 + 0x158);
    FUN_007ee578(auStack_50,param_2);
    FUN_007ee660(lVar2 + 0x60,auStack_50);
  }
  return;
}


