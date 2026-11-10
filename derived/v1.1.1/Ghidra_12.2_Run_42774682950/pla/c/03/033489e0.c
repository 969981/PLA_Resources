/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033489e0; name: FUN_033489e0
 */


void FUN_033489e0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_043893d0 + 0x10);
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1f],4,*(uint *)((long)param_1 + 0x104) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  param_1[0x1f] = 0;
  if ((int)param_1[0x1e] != 0) {
    lVar3 = param_1[0x1d];
    lVar4 = (long)(int)param_1[0x1e] * 0x30;
    lVar2 = *(long *)(lVar3 + -8 + lVar4);
    while( true ) {
      if (lVar2 != 0) {
        FUN_032d647c();
      }
      if (lVar4 == 0x30) break;
      lVar4 = lVar4 + -0x30;
      lVar2 = *(long *)(lVar3 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1d],0x30,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1b],4,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_032cf244(puVar1,param_1[0x19],4,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_032cf244(puVar1,param_1[0x17],1,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  FUN_03348e0c(param_1 + 0xe);
  FUN_03348c54(param_1 + 5);
  FUN_032c7b9c(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


