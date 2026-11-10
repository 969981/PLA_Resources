/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f57ef0; name: FUN_00f57ef0
 */


long FUN_00f57ef0(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043b5608 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b5608), iVar3 != 0)) {
    DAT_043b5600 = 8;
    __cxa_guard_release(&DAT_043b5608);
  }
  if (((DAT_043b5618 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043b5618), iVar3 != 0)) {
    DAT_043b5610 = 0xf;
    __cxa_guard_release(&DAT_043b5618);
  }
  uVar2 = DAT_043b5600;
  lVar4 = FUN_00153520(param_1,DAT_043b5600);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043b5610;
    lVar5 = FUN_00153520(param_1,DAT_043b5610);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_00f56e40();
      puVar1 = DAT_043b54a8;
      if ((DAT_043b5498 & 1) == 0) {
        puVar1 = &DAT_043b5499;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


