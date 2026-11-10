/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148ff4; name: FUN_03148ff4
 */


void FUN_03148ff4(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)&PTR_LAB_042cf268;
  FUN_03149108();
  if (param_1[0xc] != 0) {
    uVar2 = FUN_03038700(param_1[0xc],3,0xffffffffffffffff);
    FUN_03340d04(uVar2,param_1);
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_032cf244(puVar1,param_1[10],8,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  param_1[10] = 0;
  *param_1 = (long)&PTR_LAB_042dadc0;
  if ((int)param_1[7] != 0) {
    lVar4 = param_1[6];
    lVar5 = (long)(int)param_1[7] * 8;
    lVar3 = *(long *)(lVar4 + -8 + lVar5);
    while( true ) {
      if (lVar3 != 0) {
        FUN_032d647c();
      }
      if (lVar5 == 8) break;
      lVar5 = lVar5 + -8;
      lVar3 = *(long *)(lVar4 + -8 + lVar5);
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(puVar1,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  FUN_032c7b9c(param_1 + 4);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


