/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f1da0; name: FUN_027f1da0
 */


long FUN_027f1da0(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_043eaf88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043eaf88), iVar3 != 0)) {
    DAT_043eaf80 = 8;
    __cxa_guard_release(&DAT_043eaf88);
  }
  if (((DAT_043eaf98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_043eaf98), iVar3 != 0)) {
    DAT_043eaf90 = 0xf;
    __cxa_guard_release(&DAT_043eaf98);
  }
  uVar2 = DAT_043eaf80;
  lVar4 = FUN_00153520(param_1,DAT_043eaf80);
  lVar5 = lVar4 + ((ulong)(uint)-(int)lVar4 & 7);
  if (uVar2 < ((ulong)(uint)-(int)lVar4 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar2 = DAT_043eaf90;
    lVar5 = FUN_00153520(param_1,DAT_043eaf90);
    if ((uVar2 < ((ulong)(uint)-(int)lVar5 & 7 | 8)) ||
       (lVar5 = lVar5 + ((ulong)(uint)-(int)lVar5 & 7), lVar5 == 0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_027ee980();
      puVar1 = DAT_043eadb0;
      if ((DAT_043eada0 & 1) == 0) {
        puVar1 = &DAT_043eada1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar1);
      lVar5 = 0;
    }
  }
  return lVar5;
}


