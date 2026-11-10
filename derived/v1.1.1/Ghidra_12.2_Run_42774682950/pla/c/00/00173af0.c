/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173af0; name: FUN_00173af0
 */


undefined8 FUN_00173af0(long param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = (int)((ulong)*(uint *)(param_2 + 1) & 0xf);
  if (iVar6 == 7) {
    lVar2 = *(long *)(*param_2 + 0x10);
  }
  else if (iVar6 == 5) {
    lVar2 = *(long *)(*param_2 + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_2 + 1) & 0xf) * 8 + 0x1a0)
    ;
  }
  if (lVar2 == 0) {
    puVar3 = &DAT_039c5c28;
    iVar6 = (int)DAT_039c5c30;
  }
  else {
    puVar3 = (undefined8 *)
             FUN_001723b0(lVar2,*(undefined8 *)
                                 (*(long *)(param_1 + 0x18) + (ulong)param_5 * 8 + 0xe0));
    iVar6 = *(int *)(puVar3 + 1);
  }
  if (iVar6 == 0) {
    iVar6 = (int)((ulong)*(uint *)(param_3 + 1) & 0xf);
    if (iVar6 == 7) {
      lVar2 = *(long *)(*param_3 + 0x10);
    }
    else if (iVar6 == 5) {
      lVar2 = *(long *)(*param_3 + 0x28);
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(param_3 + 1) & 0xf) * 8 +
                       0x1a0);
    }
    if (lVar2 == 0) {
      puVar3 = &DAT_039c5c28;
      iVar6 = (int)DAT_039c5c30;
    }
    else {
      puVar3 = (undefined8 *)
               FUN_001723b0(lVar2,*(undefined8 *)
                                   (*(long *)(param_1 + 0x18) + (ulong)param_5 * 8 + 0xe0));
      iVar6 = *(int *)(puVar3 + 1);
    }
  }
  else {
    iVar6 = *(int *)(puVar3 + 1);
  }
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x38);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar4;
    lVar2 = param_2[1];
    puVar5[2] = *param_2;
    puVar5[3] = lVar2;
    lVar2 = param_3[1];
    puVar5[4] = *param_3;
    puVar5[5] = lVar2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x42) >> 1 & 1) == 0) {
      FUN_0015b160(param_1,puVar5,1);
    }
    else {
      FUN_0015b0e0(param_1,puVar5,1);
    }
    lVar2 = *(long *)(param_1 + 0x10);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (param_4 - lVar7));
    uVar4 = 1;
    *(long *)(param_1 + 0x10) = lVar2 + -0x10;
    uVar1 = *(undefined8 *)(lVar2 + -8);
    *puVar3 = *(undefined8 *)(lVar2 + -0x10);
    puVar3[1] = uVar1;
  }
  return uVar4;
}


