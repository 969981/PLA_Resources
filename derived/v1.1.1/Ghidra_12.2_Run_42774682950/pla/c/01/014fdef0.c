/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fdef0; name: FUN_014fdef0
 */


void FUN_014fdef0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  *(undefined4 *)(param_1 + 0x640) = uVar1;
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x640),&DAT_043c6568,0,
               uVar2 & 1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x640),&DAT_043c6a68,0,
               uVar2 & 1);
  uVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
  *(undefined4 *)(param_1 + 0x644) = uVar1;
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x644),&DAT_043c66a8,0,
               uVar2 & 1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x644),&DAT_043c6ba8,0,
               uVar2 & 1);
  uVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
  *(undefined4 *)(param_1 + 0x648) = uVar1;
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x648),&DAT_043c67e8,0,
               uVar2 & 1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x648),&DAT_043c6ce8,0,
               uVar2 & 1);
  uVar1 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
  *(undefined4 *)(param_1 + 0x64c) = uVar1;
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x64c),&DAT_043c6928,0,
               uVar2 & 1);
  FUN_014f1490(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x64c),&DAT_043c6e28,0,
               uVar2 & 1);
  return;
}


