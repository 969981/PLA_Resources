/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155e1c0; name: FUN_0155e1c0
 */


void FUN_0155e1c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_00dbe81c(*(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x260));
  lVar4 = *(long *)(param_1 + 0x3b0);
  if ((((*(undefined1 **)(lVar4 + 0x7f0) == &DAT_cbf29ce484222645) &&
       (*(undefined1 **)(lVar4 + 0x7f8) == &DAT_cbf29ce484222645)) &&
      (*(undefined1 **)(lVar4 + 0x800) == &DAT_cbf29ce484222645)) &&
     ((*(undefined1 **)(lVar4 + 0x808) == &DAT_cbf29ce484222645 &&
      (*(undefined1 **)(lVar4 + 0x810) == &DAT_cbf29ce484222645)))) {
    if (*(int *)(lVar4 + 0x7ec) < 0) {
      *(undefined4 *)(lVar4 + 0x7ec) = 0;
      iVar1 = *(int *)(param_1 + 0x3bc);
      goto joined_r0x0155e240;
    }
    *(int *)(lVar4 + 0x7ec) = *(int *)(lVar4 + 0x7ec) + 2;
  }
  iVar1 = *(int *)(param_1 + 0x3bc);
joined_r0x0155e240:
  if (iVar1 == 0) {
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar2 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar2;
    uVar3 = FUN_00d26428(uVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_0155e2f8(param_1);
  *(undefined8 *)(param_1 + 0x3b8) = 5;
  return;
}


