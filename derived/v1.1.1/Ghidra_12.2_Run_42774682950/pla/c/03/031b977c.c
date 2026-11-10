/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b977c; name: FUN_031b977c
 */


void FUN_031b977c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_LAB_042f0c90;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,param_1[0xf],
               ((ulong)*(uint *)((long)param_1 + 0x84) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  lVar5 = param_1[10];
  param_1[0xf] = 0;
  if (lVar5 == param_1[8]) {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  lVar1 = param_1[0xb];
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  lVar3 = *(long *)(lVar6 + 8);
  uVar4 = (long)(int)lVar1 * 0x80;
  if (((*(ulong *)(lVar3 + 0x10) < uVar4) || (*(long *)(lVar3 + 0x18) != uVar4 + lVar5)) ||
     (*(long *)(lVar3 + 0x28) == lVar5)) {
    if (lVar5 != 0) {
      if (*(ulong *)(lVar3 + 0x10) < uVar4) {
        *(int *)(*(long *)(lVar3 + 8) + 0x20) = *(int *)(*(long *)(lVar3 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar3 + 0x40) + 0x18))(*(long **)(lVar3 + 0x40),lVar5);
      }
      else if (*(long *)(lVar3 + 0x18) == uVar4 + lVar5) {
        *(long *)(lVar3 + 0x18) = lVar5;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar3,lVar5);
      }
    }
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar5;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[8],
               ((ulong)*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) << 7);
  }
  param_1[8] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


