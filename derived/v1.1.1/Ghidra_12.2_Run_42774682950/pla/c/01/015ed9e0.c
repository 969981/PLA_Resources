/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015ed9e0; name: FUN_015ed9e0
 */


long FUN_015ed9e0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_04380480;
  if (((*PTR_DAT_04380478 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04380478), iVar2 != 0))
  {
    *(undefined8 *)puVar1 = 8;
    __cxa_guard_release(PTR_DAT_04380478);
  }
  if (((*PTR_DAT_04380488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04380488), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_04380490 = 0xf;
    __cxa_guard_release(PTR_DAT_04380488);
  }
  uVar7 = *(ulong *)puVar1;
  lVar3 = FUN_00153520(param_1,uVar7);
  lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar7 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar7 = *(ulong *)PTR_DAT_04380490;
    lVar3 = FUN_00153520(param_1,uVar7);
    lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
    if (uVar7 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar4 = (byte *)FUN_015edc50();
      pbVar6 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar6 = pbVar4 + 1;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar6);
      lVar5 = 0;
    }
  }
  return lVar5;
}


