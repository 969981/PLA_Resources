/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e1e4; name: FUN_0329e1e4
 */


void FUN_0329e1e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_LAB_04341a48;
  if ((int)param_1[5] != 0) {
    lVar2 = param_1[4];
    lVar3 = (long)(int)param_1[5] * 8;
    lVar1 = *(long *)(lVar2 + -8 + lVar3);
    while( true ) {
      if (lVar1 != 0) {
        FUN_032d647c();
      }
      if (lVar3 == 8) break;
      lVar3 = lVar3 + -8;
      lVar1 = *(long *)(lVar2 + -8 + lVar3);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[4],8,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_032c7b9c(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


