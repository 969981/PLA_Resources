/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033492bc; name: FUN_033492bc
 */


void FUN_033492bc(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xd);
  *param_1 = (long)&PTR_LAB_0435ea20;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      FUN_032d647c(*(undefined8 *)(param_1[0xc] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if (param_1[0xf] != 0) {
    FUN_032d647c();
  }
  uVar6 = param_1[0x10];
  if ((uVar6 & 1) != 0) {
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    *(undefined8 *)(uVar6 - 0x11) = 0;
    (**(code **)(*plVar4 + 0x18))
              (plVar4,(undefined8 *)(uVar6 - 0x11),(long)*(int *)(uVar6 - 9) + 0x10);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  puVar3 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


