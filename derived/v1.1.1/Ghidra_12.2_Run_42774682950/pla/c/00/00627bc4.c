/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00627bc4; name: FUN_00627bc4
 */


ulong * FUN_00627bc4(long param_1,ulong *param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  
  if (param_2 == param_3) {
    return param_2;
  }
  puVar7 = *(ulong **)(param_1 + 8);
  puVar6 = (ulong *)((long)param_2 + ((long)param_3 - (long)param_2));
  puVar8 = param_2;
  if (puVar6 == puVar7) {
    if (puVar6 == param_2) goto LAB_00627d48;
  }
  else {
    lVar5 = (long)param_3 - (long)param_2 >> 3;
    do {
      puVar6 = puVar8 + lVar5;
      if (((long *)puVar8[3] == (long *)puVar6[3]) ||
         (uVar4 = (**(code **)(*(long *)puVar8[3] + 0x20))(), (uVar4 & 1) != 0)) {
        if ((*puVar8 & 1) == 0) {
          *(undefined2 *)puVar8 = 0;
        }
        else {
          *(undefined1 *)puVar8[2] = 0;
          puVar8[1] = 0;
          if ((*puVar8 & 1) != 0) {
            (**(code **)(*(long *)puVar8[3] + 0x18))
                      ((long *)puVar8[3],puVar8[2],*puVar8 & 0xfffffffffffffffe,1);
            *puVar8 = 0;
          }
        }
        uVar9 = puVar6[1];
        uVar4 = *puVar6;
        puVar8[2] = puVar6[2];
        puVar8[1] = uVar9;
        *puVar8 = uVar4;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
      }
      else if (puVar6 != puVar8) {
        uVar4 = puVar6[1];
        pbVar1 = (byte *)puVar6[2];
        if (((byte)*puVar6 & 1) == 0) {
          pbVar1 = (byte *)((long)puVar6 + 1);
          uVar4 = (ulong)(byte)((byte)*puVar6 >> 1);
        }
        FUN_02762710(puVar8,pbVar1,uVar4);
      }
      puVar8[4] = puVar6[4];
      puVar8 = puVar8 + 5;
    } while (puVar7 + -lVar5 != puVar8);
    puVar6 = *(ulong **)(param_1 + 8);
    if (puVar6 == puVar8) goto LAB_00627d48;
  }
  bVar2 = (byte)puVar6[-5];
  puVar7 = puVar6 + -5;
  while( true ) {
    puVar3 = puVar7;
    if ((bVar2 & 1) != 0) {
      (**(code **)(*(long *)puVar6[-2] + 0x18))
                ((long *)puVar6[-2],puVar6[-3],puVar6[-5] & 0xfffffffffffffffe,1);
    }
    if (puVar8 == puVar3) break;
    bVar2 = (byte)puVar3[-5];
    puVar7 = puVar3 + -5;
    puVar6 = puVar3;
  }
LAB_00627d48:
  *(ulong **)(param_1 + 8) = puVar8;
  return param_2;
}


