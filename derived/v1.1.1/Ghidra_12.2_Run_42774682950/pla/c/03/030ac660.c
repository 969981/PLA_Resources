/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ac660; name: FUN_030ac660
 */


void FUN_030ac660(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x21);
  *param_1 = &PTR_LAB_042b4470;
  if (iVar1 != 0) {
    lVar3 = param_1[0x20];
    lVar2 = lVar3 + (long)iVar1 * 0x500 + -0x500;
    FUN_030ac8e0(lVar2);
    if (lVar2 != lVar3) {
      lVar2 = (long)iVar1 * 0x500;
      do {
        FUN_030ac8e0(lVar3 + -0xa00 + lVar2);
        lVar2 = lVar2 + -0x500;
      } while (lVar2 != 0x500);
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[0x20],
               ((ulong)*(uint *)((long)param_1 + 0x10c) & 0x3fffffff) * 0x500);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  FUN_030ac7bc(param_1 + 0x16);
  FUN_030ac7bc(param_1 + 0xc);
  FUN_030ac7bc(param_1 + 2);
  return;
}


