/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bf57c; name: FUN_010bf57c
 */


void FUN_010bf57c(long param_1,int param_2,ushort param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  
  *(ushort *)(param_1 + 0x19c) = param_3 & 1;
  if ((*PTR_DAT_0437b180 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_0437b180);
    if (iVar7 != 0) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
  }
  lVar8 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar8;
  uVar5 = *(byte *)(lVar8 + 0x50) - 2;
  bVar6 = (0x2fU >> (ulong)(uVar5 & 0x1f) & (uint)(uVar5 < 6)) == 0;
  puVar1 = &UNK_0388a190;
  if (bVar6) {
    puVar1 = &DAT_03889950;
  }
  puVar2 = &DAT_0388a3d0;
  if (bVar6) {
    puVar2 = &DAT_03889380;
  }
  bVar6 = (param_3 & 1) == 0;
  if (bVar6) {
    puVar1 = puVar2;
  }
  puVar2 = &DAT_03889cf0;
  if (bVar6) {
    puVar2 = &DAT_038894b0;
  }
  uVar3 = puVar2[(long)param_2 * 4];
  *(undefined1 *)(param_1 + 0x9d) = uVar3;
  uVar4 = puVar1[(long)param_2 * 4];
  *(undefined1 *)(param_1 + 0xa5) = uVar3;
  *(undefined1 *)(param_1 + 0xa4) = uVar4;
  *(undefined1 *)(param_1 + 0xa6) = uVar4;
  return;
}


