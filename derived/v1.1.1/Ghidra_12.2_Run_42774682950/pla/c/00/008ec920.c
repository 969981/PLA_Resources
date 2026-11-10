/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ec920; name: FUN_008ec920
 */


long FUN_008ec920(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar2 = PTR_DAT_04379b28;
  if (((*PTR_DAT_04379b20 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379b20), iVar3 != 0))
  {
    *(undefined8 *)puVar2 = 0x7c;
    __cxa_guard_release(PTR_DAT_04379b20);
  }
  if (((*PTR_DAT_04379b30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379b30), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_04379b38 = 0x83;
    __cxa_guard_release(PTR_DAT_04379b30);
  }
  uVar12 = *(ulong *)puVar2;
  lVar4 = FUN_00153520(param_1,uVar12);
  uVar8 = (ulong)(uint)-(int)lVar4 & 7;
  plVar7 = (long *)(lVar4 + uVar8);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar12 && plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    uVar11 = (ulong)(uint)-(int)plVar9;
    if ((uVar11 & 3 | 0x74) <= (uVar12 - uVar8) - 8) goto LAB_008ec9a8;
  }
  FUN_0014ff10(param_1,0xfffffffe);
  uVar8 = *(ulong *)PTR_DAT_04379b38;
  lVar4 = FUN_00153520(param_1,uVar8);
  if (((ulong)(uint)-(int)lVar4 & 7 | 8) <= uVar8) {
    uVar12 = (ulong)(uint)-(int)lVar4 & 7;
    plVar7 = (long *)(lVar4 + uVar12);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      uVar11 = (ulong)(uint)-(int)plVar9;
      if ((uVar11 & 3 | 0x74) <= (uVar8 - uVar12) - 8) {
LAB_008ec9a8:
        lVar4 = (long)plVar9 + (uVar11 & 3);
        *plVar7 = lVar4;
        return lVar4;
      }
      bVar1 = false;
      goto LAB_008eca88;
    }
  }
  bVar1 = true;
LAB_008eca88:
  FUN_0014ff10(param_1,0xfffffffe);
  pbVar5 = (byte *)FUN_008ecc30();
  pbVar10 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar10 = pbVar5 + 1;
  }
  if (bVar1) {
    pcVar6 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar6 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(param_1,pcVar6,pbVar10);
  return 0;
}


