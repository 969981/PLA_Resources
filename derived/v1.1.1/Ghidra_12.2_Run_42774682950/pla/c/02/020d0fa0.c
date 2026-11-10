/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020d0fa0; name: FUN_020d0fa0
 */


long FUN_020d0fa0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_04384860;
  if (((*PTR_DAT_04384858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04384858), iVar2 != 0))
  {
    *(undefined8 *)puVar1 = 8;
    __cxa_guard_release(PTR_DAT_04384858);
  }
  if (((*PTR_DAT_04384868 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04384868), iVar2 != 0))
  {
    *(undefined8 *)PTR_DAT_04384870 = 0xf;
    __cxa_guard_release(PTR_DAT_04384868);
  }
  uVar7 = *(ulong *)puVar1;
  lVar3 = FUN_00153520(param_1,uVar7);
  lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
  if (uVar7 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar7 = *(ulong *)PTR_DAT_04384870;
    lVar3 = FUN_00153520(param_1,uVar7);
    lVar5 = lVar3 + ((ulong)(uint)-(int)lVar3 & 7);
    if (uVar7 < ((ulong)(uint)-(int)lVar3 & 7 | 8) || lVar5 == 0) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar4 = (byte *)FUN_020d1210();
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


