/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008cf770; name: FUN_008cf770
 */


long FUN_008cf770(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043a7650 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043a7650), iVar3 != 0)) {
    DAT_043a7648 = 8;
    __cxa_guard_release(&DAT_043a7650);
  }
  if (((DAT_043a7660 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043a7660), iVar3 != 0)) {
    DAT_043a7658 = 0xf;
    __cxa_guard_release(&DAT_043a7660);
  }
  uVar2 = DAT_043a7648;
  lVar4 = FUN_00153520(param_1,DAT_043a7648);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043a7658;
    lVar5 = FUN_00153520(param_1,DAT_043a7658);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_008cf9d0();
      puVar1 = DAT_043a7678;
      if ((DAT_043a7668 & 1) == 0) {
        puVar1 = &DAT_043a7669;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


