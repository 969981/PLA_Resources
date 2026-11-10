/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023f4ea0; name: FUN_023f4ea0
 */


long FUN_023f4ea0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043e4670 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e4670), iVar3 != 0)) {
    DAT_043e4668 = 8;
    __cxa_guard_release(&DAT_043e4670);
  }
  if (((DAT_043e4680 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043e4680), iVar3 != 0)) {
    DAT_043e4678 = 0xf;
    __cxa_guard_release(&DAT_043e4680);
  }
  uVar2 = DAT_043e4668;
  lVar4 = FUN_00153520(param_1,DAT_043e4668);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043e4678;
    lVar5 = FUN_00153520(param_1,DAT_043e4678);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_023e79f0();
      puVar1 = DAT_043e3fe8;
      if ((DAT_043e3fd8 & 1) == 0) {
        puVar1 = &DAT_043e3fd9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


