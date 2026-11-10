/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023feac0; name: FUN_023feac0
 */


long FUN_023feac0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043e4a20 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e4a20), iVar3 != 0)) {
    DAT_043e4a18 = 8;
    __cxa_guard_release(&DAT_043e4a20);
  }
  if (((DAT_043e4a30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e4a30), iVar3 != 0)) {
    DAT_043e4a28 = 0xf;
    __cxa_guard_release(&DAT_043e4a30);
  }
  uVar2 = DAT_043e4a18;
  lVar4 = FUN_00153520(param_1,DAT_043e4a18);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043e4a28;
    lVar5 = FUN_00153520(param_1,DAT_043e4a28);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_023fc140();
      uVar1 = DAT_043e4830;
      if (((byte)DAT_043e4820 & 1) == 0) {
        uVar1 = 0x43e4821;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",uVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


