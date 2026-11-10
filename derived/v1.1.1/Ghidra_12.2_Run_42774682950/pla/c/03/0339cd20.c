/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339cd20; name: FUN_0339cd20
 */


void FUN_0339cd20(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0436fad8;
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[8] != 0) {
    lVar3 = param_1[7];
    lVar4 = (long)(int)param_1[8] * 8;
    lVar2 = *(long *)(lVar3 + -8 + lVar4);
    while( true ) {
      if (lVar2 != 0) {
        FUN_032d647c();
      }
      if (lVar4 == 8) break;
      lVar4 = lVar4 + -8;
      lVar2 = *(long *)(lVar3 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar1,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  param_1[7] = 0;
  if ((int)param_1[6] != 0) {
    lVar3 = param_1[5];
    lVar4 = (long)(int)param_1[6] * 8;
    lVar2 = *(long *)(lVar3 + -8 + lVar4);
    while( true ) {
      if (lVar2 != 0) {
        FUN_032d647c();
      }
      if (lVar4 == 8) break;
      lVar4 = lVar4 + -8;
      lVar2 = *(long *)(lVar3 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar1,param_1[5],8,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  FUN_032c7b9c(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


