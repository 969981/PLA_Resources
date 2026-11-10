/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00df92d0; name: FUN_00df92d0
 */


long FUN_00df92d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  puVar4 = PTR_DAT_0437bdb0;
  if (((*PTR_DAT_0437bda8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437bda8), iVar1 != 0))
  {
    *(undefined8 *)puVar4 = 8;
    __cxa_guard_release(PTR_DAT_0437bda8);
  }
  if (((*PTR_DAT_0437bdb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437bdb8), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_0437bdc0 = 0xf;
    __cxa_guard_release(PTR_DAT_0437bdb8);
  }
  uVar5 = *(ulong *)puVar4;
  lVar2 = FUN_00153520(param_1,uVar5);
  lVar3 = lVar2 + ((ulong)(uint)-(int)lVar2 & 7);
  if (uVar5 < ((ulong)(uint)-(int)lVar2 & 7 | 8) || lVar3 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar5 = *(ulong *)PTR_DAT_0437bdc0;
    lVar2 = FUN_00153520(param_1,uVar5);
    lVar3 = lVar2 + ((ulong)(uint)-(int)lVar2 & 7);
    if (uVar5 < ((ulong)(uint)-(int)lVar2 & 7 | 8) || lVar3 == 0) {
      FUN_0014ff10(param_1,0xfffffffe);
      if (((*PTR_DAT_0437bd98 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_0437bd98), puVar4 = PTR_DAT_0437bda0, iVar1 != 0)) {
        FUN_00df9630(PTR_DAT_0437bda0);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437bd98);
      }
      puVar4 = *(undefined **)(PTR_DAT_0437bda0 + 0x10);
      if ((*PTR_DAT_0437bda0 & 1) == 0) {
        puVar4 = PTR_DAT_0437bda0 + 1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      lVar3 = 0;
    }
  }
  return lVar3;
}


