/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267998; name: FUN_03267998
 */


void FUN_03267998(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0432d1b8;
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[0x43] != 0) {
    lVar2 = param_1[0x42];
    lVar4 = (long)(int)param_1[0x43] * 0xf0;
    do {
      FUN_032677cc(lVar2 + -0xf0 + lVar4);
      lVar4 = lVar4 + -0xf0;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    FUN_032cf244(puVar1,param_1[0x42],0xf0,*(uint *)((long)param_1 + 0x21c) & 0x3fffffff);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  FUN_032c7b9c(param_1 + 0x41);
  FUN_032c7b9c(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1e4)) && (param_1[0x3b] != 0)) {
    FUN_032cf244(puVar1,param_1[0x3b],0x10,*(uint *)((long)param_1 + 0x1e4) & 0x3fffffff);
  }
  param_1[0x3b] = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    FUN_032cf244(puVar1,param_1[0x24],8,*(uint *)((long)param_1 + 300) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  param_1[0x24] = 0;
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
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    FUN_032cf244(puVar1,param_1[0x16],0x20,*(uint *)((long)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    FUN_032cf244(puVar1,param_1[0x14],0x10,*(uint *)((long)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


