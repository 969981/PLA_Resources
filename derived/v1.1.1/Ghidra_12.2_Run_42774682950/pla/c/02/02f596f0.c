/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f596f0; name: FUN_02f596f0
 */


void FUN_02f596f0(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  
  *(uint *)((long)param_4 + 0x2c) = *(uint *)((long)param_4 + 0x2c) & 0xfffffffb;
  lVar3 = (ulong)param_5 * 8 + (long)param_1 * 0x820;
  *(uint *)((long)param_4 + 0x14) = param_5;
  param_4[8] = param_2;
  *(uint *)(param_4 + 2) = (uint)*(ushort *)(&DAT_0442c0e0 + lVar3 + 0x8c);
  *(undefined4 *)(param_4 + 5) = *(undefined4 *)(&DAT_0442c0e0 + lVar3 + 0x88);
  *(undefined4 *)(param_4 + 1) = 0;
  *param_4 = 0;
  uVar4 = *(ushort *)(&DAT_0442c0e0 + lVar3 + 0x8c);
  uVar7 = (uint)uVar4;
  plVar9 = param_4 + 0xc;
  if (uVar4 < 2) {
    puVar6 = param_3;
  }
  else {
    uVar7 = *(uint *)(&DAT_0442c0e0 + lVar3 + 0x88);
    uVar5 = (ulong)uVar7;
    uVar1 = (long)plVar9 + (ulong)(uVar7 * uVar4);
    uVar8 = *(ulong *)(&DAT_0442c120 + (long)param_1 * 0x820);
    uVar2 = (long)param_4 + uVar8;
    puVar6 = (undefined8 *)((long)plVar9 + uVar5);
    *param_3 = puVar6;
    if (uVar1 <= uVar2 || uVar8 >> 1 <= uVar5) {
      uVar2 = uVar1;
    }
    if ((long)puVar6 + uVar5 < uVar2) {
      uVar7 = 2;
      do {
        lVar3 = (long)plVar9 + uVar5 * 2;
        plVar9 = (long *)((long)plVar9 + uVar5);
        *plVar9 = lVar3;
        uVar7 = uVar7 + 1;
      } while ((long)plVar9 + uVar5 * 2 < uVar2);
      puVar6 = (undefined8 *)((long)plVar9 + uVar5);
    }
    else {
      uVar7 = 2;
    }
  }
  *puVar6 = 0;
  *(uint *)(param_4 + 3) = uVar7;
  *(undefined4 *)((long)param_4 + 0x1c) = 0;
  param_4[4] = 0;
  if (param_3[1] == 0) {
    param_4[9] = 0;
    puVar6 = param_4;
  }
  else {
    param_4[9] = param_3[1];
    param_4[10] = *(undefined8 *)(param_3[1] + 0x50);
    puVar6 = (undefined8 *)param_3[1];
  }
  puVar6[10] = param_4;
  param_3[1] = param_4;
  return;
}


