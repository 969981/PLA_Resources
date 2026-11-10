/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02148990; name: FUN_02148990
 */


long FUN_02148990(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043db5a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043db5a8), iVar3 != 0)) {
    DAT_043db5a0 = 8;
    __cxa_guard_release(&DAT_043db5a8);
  }
  if (((DAT_043db5b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043db5b8), iVar3 != 0)) {
    DAT_043db5b0 = 0xf;
    __cxa_guard_release(&DAT_043db5b8);
  }
  uVar2 = DAT_043db5a0;
  lVar4 = FUN_00153520(param_1,DAT_043db5a0);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043db5b0;
    lVar5 = FUN_00153520(param_1,DAT_043db5b0);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_021402d0();
      uVar1 = DAT_043db298;
      if (((byte)DAT_043db288 & 1) == 0) {
        uVar1 = 0x43db289;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",uVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


