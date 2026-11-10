/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba5d8; name: FUN_031ba5d8
 */


void FUN_031ba5d8(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 1) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 0x30);
    uVar4 = *puVar2;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar2 + 1);
    *param_3 = uVar4;
    uVar4 = puVar2[2];
    param_3[3] = puVar2[3];
    param_3[2] = uVar4;
    uVar4 = puVar2[4];
    param_3[5] = puVar2[5];
    param_3[4] = uVar4;
    return;
  }
  lVar3 = *(long *)(param_1 + 2) + (long)param_1[4] * 0x30;
  uVar4 = *(undefined8 *)(lVar3 + -0x30);
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(lVar3 + -0x28);
  *param_3 = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + -0x20);
  param_3[3] = *(undefined8 *)(lVar3 + -0x18);
  param_3[2] = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + -0x10);
  param_3[5] = *(undefined8 *)(lVar3 + -8);
  param_3[4] = uVar4;
  param_1[4] = param_1[4] + -1;
  return;
}


