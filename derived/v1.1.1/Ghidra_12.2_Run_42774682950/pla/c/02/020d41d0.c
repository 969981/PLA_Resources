/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020d41d0; name: FUN_020d41d0
 */


long FUN_020d41d0(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (((DAT_043d99f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d99f8), iVar2 != 0)) {
    DAT_043d99f0 = 8;
    __cxa_guard_release(&DAT_043d99f8);
  }
  if (((DAT_043d9a08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043d9a08), iVar2 != 0)) {
    DAT_043d9a00 = 0xf;
    __cxa_guard_release(&DAT_043d9a08);
  }
  uVar1 = DAT_043d99f0;
  lVar3 = FUN_00153520(param_1,DAT_043d99f0);
  lVar4 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar1 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar4 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar1 = DAT_043d9a00;
    lVar4 = FUN_00153520(param_1,DAT_043d9a00);
    if ((uVar1 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
       (lVar4 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7), lVar4 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar5 = (byte *)FUN_020d4430();
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar6);
      lVar4 = 0;
    }
  }
  return lVar4;
}


