/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d62c; name: FUN_02e4d62c
 */


void FUN_02e4d62c(long param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,long param_5,
                 undefined4 *param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  bVar2 = (param_4 & 1) == 0;
  *(undefined4 *)(param_5 + 0x40) = 0;
  puVar1 = param_3;
  if (bVar2) {
    puVar1 = param_2;
  }
  *param_6 = *puVar1;
  param_6[1] = puVar1[1];
  param_6[2] = puVar1[2];
  if (bVar2) {
    param_2 = param_3;
  }
  param_6[0x1b] = *param_2;
  param_6[0x1c] = param_2[1];
  param_6[0x1d] = param_2[2];
  param_6[0x1e] = (int)*(char *)(param_1 + 0x4b);
  if ((param_4 & 1) == 0) {
    iVar6 = -1;
    do {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      piVar3 = (int *)FUN_02e4d874(param_5 + 0x38,0);
      if (piVar3 != (int *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *piVar3 = (int)*(char *)(param_1 + 0x48);
        piVar3[4] = 0;
        piVar3[5] = 0;
        *(undefined8 *)(piVar3 + 6) = uVar4;
      }
      uVar5 = iVar6 + param_6[0x1e];
      if (uVar5 < 8) {
        param_6[(ulong)uVar5 * 3 + 3] = *(undefined4 *)(param_1 + 0xc);
        param_6[(ulong)uVar5 * 3 + 4] = *(undefined4 *)(param_1 + 0x10);
        param_6[(ulong)uVar5 * 3 + 5] = *(undefined4 *)(param_1 + 0x14);
        FUN_02e4d790(param_6,*(undefined8 *)(param_1 + 0x18));
      }
      param_1 = *(long *)(param_1 + 0x20);
      iVar6 = iVar6 + -1;
    } while (param_1 != 0);
  }
  else {
    uVar5 = 0;
    do {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      piVar3 = (int *)FUN_02e4d800(param_5 + 0x38);
      if (piVar3 != (int *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *piVar3 = (int)*(char *)(param_1 + 0x48);
        piVar3[4] = 0;
        piVar3[5] = 0;
        *(undefined8 *)(piVar3 + 6) = uVar4;
      }
      if (uVar5 < 8) {
        param_6[(ulong)uVar5 * 3 + 3] = *(undefined4 *)(param_1 + 0xc);
        param_6[(ulong)uVar5 * 3 + 4] = *(undefined4 *)(param_1 + 0x10);
        param_6[(ulong)uVar5 * 3 + 5] = *(undefined4 *)(param_1 + 0x14);
        FUN_02e4d790(param_6,*(undefined8 *)(param_1 + 0x18));
      }
      param_1 = *(long *)(param_1 + 0x20);
      uVar5 = uVar5 + 1;
    } while (param_1 != 0);
  }
  return;
}


