/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f47d8; name: FUN_031f47d8
 */


void FUN_031f47d8(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [64];
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar6 = (long)param_2;
  lVar5 = lVar6 + 1;
  iVar2 = FUN_031f5e80(*(long *)(param_1 + 0x18) + lVar5 * 0x40 + 0x10);
  if (iVar2 == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6 * 0x40);
    local_60 = *puVar1;
    uStack_58 = puVar1[1];
    FUN_031f64a8(auStack_a0,&local_60);
    FUN_031f64bc(auStack_a0,*(long *)(param_1 + 0x18) + lVar5 * 0x40 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    lVar6 = lVar6 + 2;
    uVar3 = FUN_031f68b4(auStack_a0,lVar7 + lVar6 * 0x40);
    if ((uVar3 & 1) != 0) {
      lVar4 = lVar6 * 0x40;
      lVar6 = lVar6 << 0x20;
      do {
        lVar5 = lVar6;
        lVar4 = lVar4 + 0x40;
        lVar6 = lVar7 + lVar4 + -0x30;
        iVar2 = FUN_031f5e80(lVar6);
        if (iVar2 != 0) break;
        FUN_031f64bc(auStack_a0,lVar6);
        lVar7 = *(long *)(param_1 + 0x18);
        uVar3 = FUN_031f68b4(auStack_a0,lVar7 + lVar4);
        lVar6 = lVar5 + 0x100000000;
      } while ((uVar3 & 1) != 0);
      lVar5 = lVar5 >> 0x20;
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5 * 0x40);
    uVar9 = puVar1[1];
    uVar8 = *puVar1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18) + lVar5 * 0x40;
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
  }
  param_3[1] = uVar9;
  *param_3 = uVar8;
  return;
}


