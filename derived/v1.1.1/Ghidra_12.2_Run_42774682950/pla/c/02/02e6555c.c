/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6555c; name: FUN_02e6555c
 */


void FUN_02e6555c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = (ulong)DAT_0440a0c0;
  if (DAT_0440a0c0 != 0) {
    puVar7 = DAT_0440a0b8 + uVar3 * 2;
    puVar4 = DAT_0440a0b8;
    puVar1 = DAT_0440a0b8;
    do {
      if (puVar1[1] == param_2) {
        uVar2 = (uint)uVar3;
        if (puVar1 < puVar7 + -2) {
          uVar5 = (long)puVar7 + (-0x11 - (long)puVar1);
          uVar2 = ((uint)(uVar5 >> 4) & 0xfffffff) + 1;
          uVar3 = (ulong)uVar2 & 3;
          puVar4 = puVar1;
          if ((uVar2 & 3) != 0) {
            puVar6 = puVar1;
            do {
              puVar4 = puVar6 + 2;
              uVar3 = uVar3 - 1;
              *puVar6 = *puVar4;
              puVar6[1] = puVar6[3];
              puVar6 = puVar4;
            } while (uVar3 != 0);
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
              puVar6 = puVar4 + 8;
              puVar4[6] = *puVar6;
              puVar4 = puVar6;
            } while (puVar6 < puVar7 + -2);
          }
          puVar4 = DAT_0440a0b8;
          uVar2 = DAT_0440a0c0;
        }
        DAT_0440a0c0 = uVar2 - 1;
        uVar3 = (ulong)DAT_0440a0c0;
      }
      else {
        puVar1 = puVar1 + 2;
      }
      puVar7 = puVar4 + uVar3 * 2;
    } while (puVar7 != puVar1);
  }
  return;
}


