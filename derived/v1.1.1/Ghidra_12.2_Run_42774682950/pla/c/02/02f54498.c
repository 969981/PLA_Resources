/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f54498; name: FUN_02f54498
 */


void FUN_02f54498(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x78) + 0x10);
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x90) + 0x108);
  uVar8 = (ulong)uVar2;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x100);
joined_r0x02f544bc:
  do {
    if ((int)uVar2 < 1) {
      puVar5 = puVar7;
LAB_02f54504:
      FUN_02f54590(param_1,puVar5,lVar6,0,0);
      return;
    }
    uVar2 = (int)uVar8 - 1;
    uVar8 = (ulong)uVar2;
    puVar5 = puVar7 + uVar8 * 0xc;
    uVar3 = *(uint *)(puVar5 + 1);
  } while (uVar3 == 0);
  puVar9 = (uint *)*puVar5;
  if (*puVar9 != 0xffffffff) {
    puVar10 = puVar9;
    uVar11 = uVar3;
    do {
      puVar12 = puVar10 + (uVar11 >> 1);
      uVar4 = *puVar12;
      if (uVar4 == uVar1) goto LAB_02f54550;
      puVar12 = puVar12 + 1;
      if (uVar4 >= uVar1) {
        puVar12 = puVar10;
      }
      uVar11 = uVar11 - (uVar4 < uVar1) >> 1;
      puVar10 = puVar12;
    } while (uVar11 != 0);
    puVar12 = puVar9 + uVar3;
LAB_02f54550:
    if (puVar12 == puVar9 + uVar3) goto joined_r0x02f544bc;
  }
  uVar3 = *(uint *)(puVar7 + uVar8 * 0xc + 3);
  if (uVar3 != 0) {
    if (*(int *)puVar7[uVar8 * 0xc + 2] == -1) goto LAB_02f54504;
    uVar11 = uVar3;
    do {
      uVar11 = uVar11 >> 1;
      if (((int *)puVar7[uVar8 * 0xc + 2])[uVar11] == 0) {
        if (uVar11 != uVar3) goto LAB_02f54504;
        break;
      }
    } while (uVar11 != 0);
  }
  goto joined_r0x02f544bc;
}


