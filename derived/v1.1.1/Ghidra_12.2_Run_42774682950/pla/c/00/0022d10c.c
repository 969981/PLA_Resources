/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d10c; name: FUN_0022d10c
 */


void FUN_0022d10c(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = param_3;
  if ((param_3 & 0xff) <= (uint)*(byte *)(param_1 + 1)) {
    uVar4 = (uint)*(byte *)(param_1 + 1);
  }
  *(char *)(param_1 + 1) = (char)uVar4;
  if (0 < (int)param_3) {
    lVar6 = 0;
    uVar7 = (ulong)param_3;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + lVar6);
      uVar5 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar5 = puVar1[3];
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      *(undefined4 *)(lVar3 + 8) = puVar1[2];
      *(undefined4 *)(lVar3 + 0xc) = uVar5;
      uVar5 = puVar1[5];
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      *(undefined4 *)(lVar3 + 0x10) = puVar1[4];
      *(undefined4 *)(lVar3 + 0x14) = uVar5;
      lVar3 = *(long *)(param_1 + 8) + lVar6;
      uVar5 = puVar1[7];
      lVar6 = lVar6 + 0x20;
      uVar7 = uVar7 - 1;
      *(undefined4 *)(lVar3 + 0x18) = puVar1[6];
      *(undefined4 *)(lVar3 + 0x1c) = uVar5;
    } while (uVar7 != 0);
  }
  return;
}


