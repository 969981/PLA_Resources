/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f48f0; name: FUN_031f48f0
 */


void FUN_031f48f0(long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [64];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 != param_3) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x40);
    local_60 = *puVar1;
    uStack_58 = puVar1[1];
    FUN_031f64a8(auStack_a0,&local_60);
    uVar3 = param_2 - 1;
    uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar3 << 6;
    uVar7 = ~(long)(int)uVar3 + (long)param_3;
    do {
      iVar5 = FUN_031f5e80(*(long *)(param_1 + 0x18) + uVar8 + 0x10);
      if (iVar5 != 0) {
        param_4 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar8);
        goto LAB_031f491c;
      }
      FUN_031f685c(auStack_a0,*(long *)(param_1 + 0x18) + uVar8 + 0x10);
      bVar4 = 0xfffffffffffffffe < uVar7;
      uVar7 = uVar7 + 1;
      if (bVar4) {
        uVar7 = FUN_031f68b4(auStack_a0,param_4);
        if ((uVar7 & 1) == 0) {
          param_4 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x40);
        }
        goto LAB_031f491c;
      }
      lVar2 = *(long *)(param_1 + 0x18) + uVar8;
      uVar8 = uVar8 - 0x40;
      uVar6 = FUN_031f68b4(auStack_a0,lVar2 + -0x40);
    } while ((uVar6 & 1) != 0);
    param_4 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 + 0x40);
  }
LAB_031f491c:
  uVar9 = *param_4;
  param_5[1] = param_4[1];
  *param_5 = uVar9;
  return;
}


