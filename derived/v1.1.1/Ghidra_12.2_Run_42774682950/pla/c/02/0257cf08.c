/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257cf08; name: FUN_0257cf08
 */


void FUN_0257cf08(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  long local_40 [2];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = *(undefined4 *)(param_2 + 0x5ac);
  if (*(long *)(param_2 + 0x5c8) != *(long *)(param_2 + 0x5c0)) {
    puVar6 = (ushort *)(*(long *)(param_2 + 0x5c0) + (ulong)*(uint *)(param_2 + 0x6f8) * 6);
    uVar8 = (ulong)*puVar6;
    uVar4 = 0;
    if (((puVar6[2] & 1) != 0) && ((*(ulong *)(param_2 + 0x708) & 3) == 0)) {
      if (((*PTR_DAT_043795f8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar3 != 0)) {
        FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043795f8);
      }
      *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
      FUN_02c4fb44(local_40,uVar8);
      if (*(char *)(local_40[0] + 0x20) == '\x01') {
        uVar4 = (ulong)(*(byte *)(param_2 + 0x740) ^ 1) << 0x20;
      }
      else {
        uVar4 = 0x100000000;
      }
    }
    *(ulong *)(param_1 + 2) = uVar4 | uVar8;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  lVar5 = *(long *)(param_2 + 0x630);
  if (lVar5 != *(long *)(param_2 + 0x638)) {
    lVar7 = (ulong)*(uint *)(param_2 + 0x6fc) * 8;
    uVar1 = *(undefined4 *)(lVar5 + lVar7);
    local_40[0] = *(long *)(lVar5 + lVar7);
    uVar2 = FUN_0257b5d8(param_2,local_40);
    *(undefined1 *)(param_1 + 4) = 1;
    *(ulong *)(param_1 + 5) = CONCAT44(uVar2,uVar1) & 0x1ffffffff;
  }
  return;
}


