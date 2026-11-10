/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02582818; name: FUN_02582818
 */


void FUN_02582818(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if ((*PTR_DAT_043796b8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_043796b8);
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
  }
  lVar6 = *(long *)PTR_DAT_043796c0;
  *(long *)PTR_DAT_043796c8 = lVar6;
  lVar5 = *(long *)(param_1 + 0x60);
  if (*(char *)(lVar5 + 0x62) == '\0') {
    uVar2 = *(ulong *)(lVar6 + 0x118);
    uVar1 = *(undefined8 *)(lVar6 + 0x120);
    uVar3 = *(ulong *)(lVar6 + 0x128);
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar6 + 0x110);
    *(ulong *)(lVar5 + 0x78) = uVar2;
    *(undefined8 *)(lVar5 + 0x80) = uVar1;
    *(ulong *)(lVar5 + 0x88) = uVar3 | uVar2;
    lVar5 = *(long *)(param_1 + 0x60);
  }
  FUN_028314e8(lVar5);
  return;
}


