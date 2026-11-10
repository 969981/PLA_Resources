/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c0cb0; name: FUN_013c0cb0
 */


void FUN_013c0cb0(long *param_1,long *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)*param_3;
  if ((puVar4 != puVar3) && (*(char *)(puVar3 + 0xe) == '\0')) {
    do {
      puVar5 = puVar3 + 0xf;
      if (puVar4 == puVar5) {
        puVar3 = puVar4;
        break;
      }
      pcVar1 = (char *)(puVar3 + 0x1d);
      puVar3 = puVar5;
    } while (*pcVar1 == '\0');
  }
  *param_2 = (long)puVar3;
  puVar4 = (undefined8 *)*param_3;
  if ((puVar4 != puVar3) && (puVar5 = puVar3 + 0xf, puVar5 != puVar4)) {
    do {
      if (*(char *)(puVar5 + 0xe) == '\0') {
        uVar2 = *puVar5;
        uVar6 = puVar5[2];
        puVar3[1] = puVar5[1];
        puVar3[2] = uVar6;
        *puVar3 = uVar2;
        uVar2 = puVar5[3];
        uVar6 = puVar5[4];
        uVar7 = puVar5[6];
        puVar3[5] = puVar5[5];
        puVar3[6] = uVar7;
        puVar3[3] = uVar2;
        puVar3[4] = uVar6;
        uVar2 = puVar5[7];
        uVar6 = puVar5[8];
        uVar7 = puVar5[10];
        puVar3[9] = puVar5[9];
        puVar3[10] = uVar7;
        puVar3[7] = uVar2;
        puVar3[8] = uVar6;
        uVar7 = puVar5[0xd];
        uVar2 = puVar5[0xb];
        uVar6 = puVar5[0xc];
        *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar5 + 0xe);
        puVar3[0xc] = uVar6;
        puVar3[0xd] = uVar7;
        puVar3[0xb] = uVar2;
        puVar3 = (undefined8 *)(*param_2 + 0x78);
        *param_2 = (long)puVar3;
        puVar4 = (undefined8 *)*param_3;
      }
      puVar5 = puVar5 + 0xf;
    } while (puVar5 != puVar4);
  }
  *param_1 = (long)puVar3;
  return;
}


