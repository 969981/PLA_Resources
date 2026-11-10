/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5c2c8; name: FUN_02e5c2c8
 */


void FUN_02e5c2c8(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[6];
  *param_1 = (long)&PTR_FUN_042a5eb8;
  if (lVar3 == 0) {
    lVar3 = param_1[4];
  }
  else {
    if (*(uint *)(param_1 + 7) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 7) << 7;
      do {
        FUN_02e4499c(lVar3);
        lVar3 = lVar3 + 0x80;
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
      lVar3 = param_1[6];
    }
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_02f59e60(9,lVar3);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    lVar3 = param_1[4];
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_02f59e60(9);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  *param_1 = (long)(PTR_DAT_04388740 + 0x10);
  if (param_1[2] == 0) {
    lVar3 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar3 = param_1[2];
  }
  puVar2 = PTR_DAT_043885f8;
  lVar4 = param_1[3];
  plVar1 = (long *)(PTR_DAT_043885f8 + 0x10);
  if (*(long **)(PTR_DAT_043885f8 + 0x10) != param_1) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = lVar3;
  if (*(long **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar4;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


