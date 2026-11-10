/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837368; name: FUN_02837368
 */


void FUN_02837368(long param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    *(undefined2 *)(lVar5 + 0x19c) = 0;
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    lVar6 = *(long *)PTR_DAT_0437b188;
    *(long *)PTR_DAT_0437b190 = lVar6;
    bVar2 = *(byte *)(lVar6 + 0x50);
    if (bVar2 < 8 && (1 << (ulong)(bVar2 & 0x1f) & 0xbcU) != 0) {
      puVar7 = &DAT_0388a3d0;
    }
    else {
      puVar7 = &DAT_03889380;
    }
    uVar1 = *(undefined4 *)(&DAT_038894b0 + (long)param_2 * 4);
    *(char *)(lVar5 + 0x9d) = (char)uVar1;
    *(char *)(lVar5 + 0xa5) = (char)uVar1;
    uVar3 = puVar7[(long)param_2 * 4];
    *(undefined1 *)(lVar5 + 0xa4) = uVar3;
    *(undefined1 *)(lVar5 + 0xa6) = uVar3;
  }
  return;
}


