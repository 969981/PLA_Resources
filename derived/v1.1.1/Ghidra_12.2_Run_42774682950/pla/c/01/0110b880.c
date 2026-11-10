/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0110b880; name: FUN_0110b880
 */


void FUN_0110b880(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)(param_2 + 4);
  lVar5 = 100;
  pcVar4 = (char *)(param_1 + 0xdd18);
  do {
    if (*pcVar4 == '\0') {
      if (*(char *)((long)puVar3 + -4) != '\0') {
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *(undefined8 *)(pcVar4 + 0x14) = puVar3[2];
        *(undefined8 *)(pcVar4 + 0xc) = uVar2;
        *(undefined8 *)(pcVar4 + 4) = uVar1;
        uVar1 = puVar3[3];
        uVar6 = puVar3[4];
        uVar2 = puVar3[5];
        *(undefined8 *)(pcVar4 + 0x34) = puVar3[6];
        *(undefined8 *)(pcVar4 + 0x2c) = uVar2;
        *(undefined8 *)(pcVar4 + 0x24) = uVar6;
        *(undefined8 *)(pcVar4 + 0x1c) = uVar1;
        uVar1 = puVar3[7];
        uVar6 = puVar3[8];
        uVar2 = puVar3[9];
        *(undefined8 *)(pcVar4 + 0x54) = puVar3[10];
        *(undefined8 *)(pcVar4 + 0x4c) = uVar2;
        *(undefined8 *)(pcVar4 + 0x44) = uVar6;
        *(undefined8 *)(pcVar4 + 0x3c) = uVar1;
        uVar1 = puVar3[0xb];
        uVar2 = puVar3[0xc];
        uVar6 = puVar3[0xd];
        *(undefined4 *)(pcVar4 + 0x74) = *(undefined4 *)(puVar3 + 0xe);
        *(undefined8 *)(pcVar4 + 0x6c) = uVar6;
        *(undefined8 *)(pcVar4 + 100) = uVar2;
        *(undefined8 *)(pcVar4 + 0x5c) = uVar1;
        *pcVar4 = '\x01';
      }
    }
    else if (*(char *)((long)puVar3 + -4) == '\0') {
      *pcVar4 = '\0';
    }
    else {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      *(undefined8 *)(pcVar4 + 0x14) = puVar3[2];
      *(undefined8 *)(pcVar4 + 0xc) = uVar2;
      *(undefined8 *)(pcVar4 + 4) = uVar1;
      uVar1 = puVar3[3];
      uVar6 = puVar3[4];
      uVar2 = puVar3[5];
      *(undefined8 *)(pcVar4 + 0x34) = puVar3[6];
      *(undefined8 *)(pcVar4 + 0x2c) = uVar2;
      *(undefined8 *)(pcVar4 + 0x24) = uVar6;
      *(undefined8 *)(pcVar4 + 0x1c) = uVar1;
      uVar1 = puVar3[7];
      uVar6 = puVar3[8];
      uVar2 = puVar3[9];
      *(undefined8 *)(pcVar4 + 0x54) = puVar3[10];
      *(undefined8 *)(pcVar4 + 0x4c) = uVar2;
      *(undefined8 *)(pcVar4 + 0x44) = uVar6;
      *(undefined8 *)(pcVar4 + 0x3c) = uVar1;
      uVar1 = puVar3[0xb];
      uVar2 = puVar3[0xc];
      uVar6 = puVar3[0xd];
      *(undefined4 *)(pcVar4 + 0x74) = *(undefined4 *)(puVar3 + 0xe);
      *(undefined8 *)(pcVar4 + 0x6c) = uVar6;
      *(undefined8 *)(pcVar4 + 100) = uVar2;
      *(undefined8 *)(pcVar4 + 0x5c) = uVar1;
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 0xf;
    pcVar4 = pcVar4 + 0x78;
  } while (lVar5 != 0);
  return;
}


