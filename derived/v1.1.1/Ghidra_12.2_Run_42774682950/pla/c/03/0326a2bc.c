/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0326a2bc; name: FUN_0326a2bc
 */


void FUN_0326a2bc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0432d2f0;
  FUN_032c7b9c(param_1 + 0x23);
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[0x21] != 0) {
    lVar3 = param_1[0x20];
    lVar4 = (long)(int)param_1[0x21] * 8;
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
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    FUN_032cf244(puVar1,param_1[0x20],8,*(uint *)((long)param_1 + 0x10c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x10c) = 0x80000000;
  param_1[0x20] = 0;
  if ((int)param_1[0x1f] != 0) {
    lVar3 = param_1[0x1e];
    lVar4 = (long)(int)param_1[0x1f] * 8;
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
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1e],8,*(uint *)((long)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1b],0xc,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_032cf244(puVar1,param_1[0x17],0x10,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


