/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336fe68; name: FUN_0336fe68
 */


void FUN_0336fe68(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  
  uVar5 = *(uint *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  puVar8 = *(undefined4 **)(param_2 + 0x18);
  if ((int)(uVar5 & 0x3fffffff) < (int)uVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    uVar5 = (uVar5 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    puVar3 = (undefined4 *)FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,uVar4,0);
    *(undefined4 **)(param_1 + 0x18) = puVar3;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x18);
  }
  if (uVar1 != 0) {
    lVar7 = (long)(int)uVar1 << 2;
    do {
      lVar7 = lVar7 + -4;
      *puVar3 = *puVar8;
      puVar3 = puVar3 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  lVar6 = 0x2c;
  lVar7 = 0x94;
  do {
    puVar8 = (undefined4 *)(param_2 + lVar7);
    *(undefined4 *)(param_1 + lVar6) = *(undefined4 *)(param_2 + lVar6);
    puVar3 = (undefined4 *)(param_1 + lVar7);
    lVar7 = lVar7 + 0x80;
    *puVar3 = *puVar8;
    puVar3[1] = puVar8[1];
    puVar3[2] = puVar8[2];
    puVar3[3] = puVar8[3];
    puVar3[4] = puVar8[4];
    puVar3[5] = puVar8[5];
    puVar3[6] = puVar8[6];
    puVar3[7] = puVar8[7];
    puVar3[8] = puVar8[8];
    puVar3[9] = puVar8[9];
    puVar3[10] = puVar8[10];
    puVar3[0xb] = puVar8[0xb];
    puVar3[0xc] = puVar8[0xc];
    puVar3[0xd] = puVar8[0xd];
    puVar3[0xe] = puVar8[0xe];
    puVar3[0xf] = puVar8[0xf];
    puVar3[0x10] = puVar8[0x10];
    puVar3[0x11] = puVar8[0x11];
    puVar3[0x12] = puVar8[0x12];
    puVar3[0x13] = puVar8[0x13];
    puVar3[0x14] = puVar8[0x14];
    puVar3[0x15] = puVar8[0x15];
    puVar3[0x16] = puVar8[0x16];
    puVar3[0x17] = puVar8[0x17];
    puVar3[0x18] = puVar8[0x18];
    puVar3[0x19] = puVar8[0x19];
    puVar3[0x1a] = puVar8[0x1a];
    puVar3[0x1b] = puVar8[0x1b];
    puVar3[0x1c] = puVar8[0x1c];
    puVar3[0x1d] = puVar8[0x1d];
    puVar3[0x1e] = puVar8[0x1e];
    lVar6 = lVar6 + 4;
    puVar3[0x1f] = puVar8[0x1f];
  } while (lVar6 != 0x94);
  return;
}


