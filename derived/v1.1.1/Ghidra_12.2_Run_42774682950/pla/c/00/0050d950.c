/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d950; name: FUN_0050d950
 */


void FUN_0050d950(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)*param_3;
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar2 = *puVar3;
      puVar1 = (undefined8 *)(param_2 + lVar4);
      puVar1[1] = puVar3[1];
      *puVar1 = uVar2;
      uVar6 = puVar3[3];
      uVar2 = puVar3[2];
      uVar8 = puVar3[5];
      uVar7 = puVar3[4];
      uVar9 = puVar3[6];
      uVar11 = puVar3[9];
      uVar10 = puVar3[8];
      puVar1[7] = puVar3[7];
      puVar1[6] = uVar9;
      puVar1[9] = uVar11;
      puVar1[8] = uVar10;
      puVar1[3] = uVar6;
      puVar1[2] = uVar2;
      puVar1[5] = uVar8;
      puVar1[4] = uVar7;
      uVar10 = puVar3[0xf];
      uVar9 = puVar3[0xe];
      uVar6 = puVar3[0xb];
      uVar2 = puVar3[10];
      uVar8 = puVar3[0xd];
      uVar7 = puVar3[0xc];
      *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
      puVar1[0xd] = uVar8;
      puVar1[0xc] = uVar7;
      puVar1[0xf] = uVar10;
      puVar1[0xe] = uVar9;
      puVar1[0xb] = uVar6;
      puVar1[10] = uVar2;
                    /* try { // try from 0050d9b4 to 0050d9b7 has its CatchHandler @ 0050d9ec */
      uVar2 = FUN_002e45d0(puVar3[0x11]);
      puVar1[0x11] = uVar2;
      lVar5 = lVar5 + 1;
      puVar3 = (undefined8 *)(*param_3 + 0x90);
      lVar4 = lVar4 + 0x90;
      *param_3 = (long)puVar3;
    } while (param_4 != lVar5);
  }
  return;
}


