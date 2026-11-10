/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329eb50; name: FUN_0329eb50
 */


void FUN_0329eb50(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0433ec38;
  FUN_032c7b9c(param_1 + 9);
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],4,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar2,param_1[5],2,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if ((int)param_1[4] != 0) {
    lVar4 = (long)(int)param_1[4] * 0x38;
    lVar3 = param_1[3];
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -0x1c)) && (*(long *)(lVar1 + -0x28) != 0)) {
        FUN_032cf244(puVar2,*(long *)(lVar1 + -0x28),2,*(uint *)(lVar1 + -0x1c) & 0x3fffffff);
      }
      *(undefined8 *)(lVar1 + -0x28) = 0;
      *(undefined4 *)(lVar1 + -0x1c) = 0x80000000;
      if (*(long *)(lVar1 + -0x30) != 0) {
        FUN_032d647c();
      }
      if (*(long *)(lVar1 + -0x38) != 0) {
        FUN_032d647c();
      }
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar2,param_1[3],0x38,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


