/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02040e40; name: FUN_02040e40
 */


long FUN_02040e40(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04383d80;
  if (((*PTR_DAT_04383d78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04383d78), iVar2 != 0))
  {
    *(undefined8 *)puVar1 = 8;
    __cxa_guard_release(PTR_DAT_04383d78);
  }
  if (((*PTR_DAT_04383d88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04383d88), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_04383d90 = 0xf;
    __cxa_guard_release(PTR_DAT_04383d88);
  }
  uVar6 = *(ulong *)puVar1;
  lVar3 = FUN_00153520(param_1,uVar6);
  lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar6 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar6 = *(ulong *)PTR_DAT_04383d90;
    lVar3 = FUN_00153520(param_1,uVar6);
    lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
    if (uVar6 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar4 = (byte *)FUN_020410b0();
      if ((*pbVar4 & 1) == 0) {
        pbVar4 = pbVar4 + 1;
      }
      else {
        pbVar4 = *(byte **)(pbVar4 + 0x10);
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar4);
      lVar5 = 0;
    }
  }
  return lVar5;
}


