/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebd140; name: FUN_02ebd140
 */


bool FUN_02ebd140(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar2 = (*param_2)(param_1 + 8,param_3,param_5), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar8 = puVar6;
    do {
      *param_4 = puVar8[1];
      uVar2 = (*param_2)(puVar8,param_3,param_5);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x20);
        puVar8 = puVar8 + 2;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x10 + -0x10);
        if (puVar8 < puVar6) {
          uVar5 = (*(long *)(param_1 + 0x18) + ((ulong)uVar3 * 0x10 - (long)puVar8)) - 0x11;
          uVar3 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
          uVar2 = (ulong)uVar3 & 3;
          puVar4 = puVar8;
          if ((uVar3 & 3) != 0) {
            puVar7 = puVar8;
            do {
              puVar4 = puVar7 + 2;
              uVar2 = uVar2 - 1;
              *puVar7 = *puVar4;
              puVar7[1] = puVar7[3];
              puVar7 = puVar4;
            } while (uVar2 != 0);
          }
          if (0x2f < uVar5) {
            do {
              *puVar4 = puVar4[2];
              puVar4[1] = puVar4[3];
              puVar4[2] = puVar4[4];
              puVar4[3] = puVar4[5];
              puVar4[4] = puVar4[6];
              puVar4[5] = puVar4[7];
              puVar4[7] = puVar4[9];
              puVar7 = puVar4 + 8;
              puVar4[6] = *puVar7;
              puVar4 = puVar7;
            } while (puVar7 < puVar6);
          }
          uVar3 = *(uint *)(param_1 + 0x20);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_1 + 0x20) = uVar3;
      }
      puVar6 = *(undefined8 **)(param_1 + 0x18);
    } while (puVar6 + (ulong)uVar3 * 2 != puVar8);
  }
  if ((puVar6 != (undefined8 *)0x0) && (uVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (*DAT_0442d150)(0,puVar6);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar1 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


