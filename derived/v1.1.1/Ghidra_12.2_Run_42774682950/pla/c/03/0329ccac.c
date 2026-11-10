/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ccac; name: FUN_0329ccac
 */


void FUN_0329ccac(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  *param_1 = (long)&PTR_LAB_0433e178;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1[3] + uVar3 * 8) != 0) {
        FUN_032d647c();
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar2,param_1[5],0x40,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar2,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


