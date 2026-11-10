/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0090f780; name: FUN_0090f780
 */


long FUN_0090f780(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043a8360 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043a8360), iVar3 != 0)) {
    DAT_043a8358 = 0xf0;
    __cxa_guard_release(&DAT_043a8360);
  }
  if (((DAT_043a8370 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043a8370), iVar3 != 0)) {
    DAT_043a8368 = 0xf7;
    __cxa_guard_release(&DAT_043a8370);
  }
  uVar2 = DAT_043a8358;
  lVar4 = FUN_00153520(param_1,DAT_043a8358);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 0xf0) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043a8368;
    lVar5 = FUN_00153520(param_1,DAT_043a8368);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 0xf0)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0090f910();
      puVar1 = DAT_043a8388;
      if ((DAT_043a8378 & 1) == 0) {
        puVar1 = &DAT_043a8379;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


