/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03017acc; name: FUN_03017acc
 */


void FUN_03017acc(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  iVar4 = (int)((ulong)(param_3 - param_2) >> 4) * -0x49249249;
  if (iVar4 != 0) {
    iVar7 = 0;
    do {
      puVar6 = (undefined8 *)(*param_1 + (long)iVar7 * 0x70);
      puVar8 = (undefined8 *)(param_2 + (long)iVar7 * 0x70);
      cVar3 = *(char *)(puVar6 + 7);
      if (*(char *)(puVar8 + 7) == -1) {
        if (cVar3 != -1) {
          *(undefined4 *)puVar6 = 0;
          FUN_03017c48(0x411cf5c3,puVar6,1);
          *(char *)(puVar6 + 7) = -1;
        }
        *(undefined4 *)puVar6 = *(undefined4 *)puVar8;
      }
      else if (cVar3 == -1) {
        uVar5 = puVar8[0xd];
        puVar6[0xb] = puVar8[0xb];
        puVar6[0xd] = uVar5;
        uVar5 = puVar8[9];
        puVar6[7] = puVar8[7];
        puVar6[9] = uVar5;
        uVar5 = puVar8[5];
        puVar6[3] = puVar8[3];
        puVar6[5] = uVar5;
        puVar6[1] = puVar8[1];
        *puVar6 = *puVar8;
        uVar5 = puVar8[2];
        puVar6[4] = puVar8[4];
        puVar6[2] = uVar5;
        uVar5 = puVar8[6];
        puVar6[8] = puVar8[8];
        puVar6[6] = uVar5;
        uVar5 = puVar8[10];
        puVar6[0xc] = puVar8[0xc];
        puVar6[10] = uVar5;
      }
      else {
        uVar5 = puVar8[1];
        *puVar6 = *puVar8;
        puVar6[1] = uVar5;
        uVar5 = puVar8[2];
        uVar1 = puVar8[3];
        uVar2 = puVar8[5];
        puVar6[4] = puVar8[4];
        puVar6[5] = uVar2;
        puVar6[2] = uVar5;
        puVar6[3] = uVar1;
        uVar5 = puVar8[6];
        uVar1 = puVar8[7];
        uVar2 = puVar8[9];
        puVar6[8] = puVar8[8];
        puVar6[9] = uVar2;
        puVar6[6] = uVar5;
        puVar6[7] = uVar1;
        uVar5 = puVar8[10];
        uVar1 = puVar8[0xb];
        uVar2 = puVar8[0xd];
        puVar6[0xc] = puVar8[0xc];
        puVar6[0xd] = uVar2;
        puVar6[10] = uVar5;
        puVar6[0xb] = uVar1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar4 != iVar7);
  }
  return;
}


