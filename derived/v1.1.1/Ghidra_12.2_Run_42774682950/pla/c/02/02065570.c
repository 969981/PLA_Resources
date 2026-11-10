/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02065570; name: FUN_02065570
 */


long FUN_02065570(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  
  if (((DAT_043d8268 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d8268), iVar2 != 0)) {
    DAT_043d8260 = 8;
    __cxa_guard_release(&DAT_043d8268);
  }
  if (((DAT_043d8278 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d8278), iVar2 != 0)) {
    DAT_043d8270 = 0xf;
    __cxa_guard_release(&DAT_043d8278);
  }
  uVar1 = DAT_043d8260;
  lVar3 = FUN_00153520(param_1,DAT_043d8260);
  lVar4 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar1 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar4 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar1 = DAT_043d8270;
    lVar4 = FUN_00153520(param_1,DAT_043d8270);
    if ((uVar1 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
       (lVar4 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7), lVar4 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar5 = (byte *)FUN_020657d0();
      if ((*pbVar5 & 1) == 0) {
        pbVar5 = pbVar5 + 1;
      }
      else {
        pbVar5 = *(byte **)(pbVar5 + 0x10);
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar5);
      lVar4 = 0;
    }
  }
  return lVar4;
}


