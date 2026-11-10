/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1395c; name: FUN_02f1395c
 */


void FUN_02f1395c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  puVar1 = DAT_0440ae30;
  uVar4 = (ulong)DAT_0440ae38;
  if (DAT_0440ae38 != 0) {
    puVar9 = DAT_0440ae30 + uVar4;
    uVar10 = ~(ulong)DAT_0440ae30;
    do {
      puVar8 = (undefined8 *)*puVar1;
      uVar3 = (uint)uVar4;
      if (puVar1 < puVar9 + -1) {
        uVar6 = (long)puVar9 + (uVar10 - 8);
        uVar3 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
        uVar4 = (ulong)uVar3 & 7;
        puVar5 = puVar1;
        if ((uVar3 & 7) != 0) {
          puVar7 = puVar1;
          do {
            puVar5 = puVar7 + 1;
            *puVar7 = *puVar5;
            uVar4 = uVar4 - 1;
            puVar7 = puVar5;
          } while (uVar4 != 0);
        }
        if (0x37 < uVar6) {
          do {
            *puVar5 = puVar5[1];
            puVar5[1] = puVar5[2];
            puVar5[2] = puVar5[3];
            puVar5[3] = puVar5[4];
            puVar5[4] = puVar5[5];
            puVar5[5] = puVar5[6];
            puVar5[6] = puVar5[7];
            puVar7 = puVar5 + 8;
            puVar5[7] = *puVar7;
            puVar5 = puVar7;
          } while (puVar7 < puVar9 + -1);
        }
        uVar3 = DAT_0440ae38;
      }
      DAT_0440ae38 = uVar3 - 1;
      FUN_02f2b7ac(puVar8,0);
      plVar2 = (long *)puVar8[0x26];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,0);
        puVar9 = (undefined8 *)puVar8[0x26];
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9);
          (*DAT_0442d150)(5,puVar9);
        }
        puVar8[0x26] = 0;
      }
      (**(code **)*puVar8)(puVar8);
      (*DAT_0442d150)(5,puVar8);
      uVar4 = (ulong)DAT_0440ae38;
      puVar9 = DAT_0440ae30 + uVar4;
    } while (puVar1 != puVar9);
  }
  FUN_02f13adc();
  FUN_02eb3194();
  return;
}


