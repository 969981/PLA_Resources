/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3660; name: FUN_031f3660
 */


void FUN_031f3660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint local_34;
  
  param_1[2] = 1;
  param_1[3] = param_3;
  *param_1 = &PTR_LAB_04303050;
  param_1[1] = 0xffffffff;
  uVar8 = (ulong)(param_6 - (long)param_5) >> 4;
  param_1[5] = param_4[1];
  uVar6 = *param_4;
  uVar7 = (uint)uVar8;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[4] = uVar6;
  local_34 = uVar7;
  if ((int)uVar7 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar2 = (undefined8 *)FUN_032cf190(PTR_PTR_0434a080,0x10,&local_34);
    param_1[6] = puVar2;
    *(uint *)(param_1 + 7) = uVar7;
    *(uint *)((long)param_1 + 0x3c) = local_34;
    if (uVar7 != 1) {
      iVar5 = uVar7 - (uVar7 & 1);
      puVar3 = puVar2;
      do {
        puVar3[1] = param_5[1];
        *puVar3 = *param_5;
        puVar3[3] = param_5[3];
        puVar1 = param_5 + 2;
        puVar2 = puVar3 + 4;
        param_5 = param_5 + 4;
        iVar5 = iVar5 + -2;
        puVar3[2] = *puVar1;
        puVar3 = puVar2;
      } while (iVar5 != 0);
    }
    if ((uVar8 & 1) != 0) {
      puVar2[1] = param_5[1];
      *puVar2 = *param_5;
    }
  }
  lVar4 = *param_7;
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    FUN_032d645c();
  }
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_031f5088(param_2,param_1 + 9);
  return;
}


