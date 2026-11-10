/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb4fd0; name: FUN_02eb4fd0
 */


void FUN_02eb4fd0(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  param_1[0xc] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x8e) = *(ushort *)((long)param_1 + 0x8e) & 0xfc00;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1c8);
  param_1[0x3a] = *(undefined8 *)((long)param_2 + 0x1d0);
  param_1[0x39] = *(undefined8 *)((long)param_2 + 0x1c8);
  param_1[0x3a] = *(undefined8 *)((long)param_2 + 0x1d0);
  memcpy(param_1,param_2,0x90);
  uVar6 = *(undefined8 *)((long)param_2 + 0xa0);
  uVar10 = *(undefined8 *)((long)param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((long)param_2 + 0xb0);
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar10;
  uVar8 = *(uint *)((long)param_2 + 0x98);
  if (uVar8 != 0) {
    uVar9 = FUN_02eb51a4(param_1 + 0x12,(ulong)uVar8);
    if ((uVar9 & 1) != 0) {
      lVar11 = 0;
      do {
        puVar4 = (undefined8 *)(*(long *)((long)param_2 + 0x90) + lVar11);
        uVar6 = *puVar4;
        uVar10 = puVar4[2];
        puVar5 = (undefined8 *)(param_1[0x12] + lVar11);
        lVar11 = lVar11 + 0x18;
        puVar5[1] = puVar4[1];
        puVar5[2] = uVar10;
        *puVar5 = uVar6;
      } while ((ulong)uVar8 * 0x18 != lVar11);
    }
  }
  uVar8 = *(uint *)((long)param_2 + 0x1c0);
  if ((uVar8 != 0) && (uVar9 = FUN_02eb5214(param_1 + 0x17,uVar8), (uVar9 & 1) != 0)) {
    plVar1 = param_1 + 0x37;
    if (uVar8 == 1) {
      lVar11 = 0;
    }
    else {
      lVar12 = 0;
      lVar11 = 0;
      do {
        puVar4 = (undefined8 *)(*(long *)((long)param_2 + 0x1b8) + lVar12);
        uVar6 = *puVar4;
        uVar10 = puVar4[1];
        puVar5 = (undefined8 *)(*plVar1 + lVar12);
        uVar7 = puVar4[3];
        lVar11 = lVar11 + 2;
        puVar5[2] = puVar4[2];
        puVar5[3] = uVar7;
        *puVar5 = uVar6;
        puVar5[1] = uVar10;
        lVar2 = *(long *)((long)param_2 + 0x1b8) + lVar12;
        lVar3 = *plVar1 + lVar12;
        uVar6 = *(undefined8 *)(lVar2 + 0x20);
        uVar10 = *(undefined8 *)(lVar2 + 0x28);
        lVar12 = lVar12 + 0x40;
        uVar7 = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
        *(undefined8 *)(lVar3 + 0x38) = uVar7;
        *(undefined8 *)(lVar3 + 0x20) = uVar6;
        *(undefined8 *)(lVar3 + 0x28) = uVar10;
      } while ((ulong)uVar8 - ((ulong)uVar8 & 1) != lVar11);
      if ((uVar8 & 1) == 0) {
        return;
      }
    }
    puVar4 = (undefined8 *)(*(long *)((long)param_2 + 0x1b8) + lVar11 * 0x20);
    puVar5 = (undefined8 *)(*plVar1 + lVar11 * 0x20);
    uVar6 = *puVar4;
    uVar10 = puVar4[1];
    uVar7 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar7;
    *puVar5 = uVar6;
    puVar5[1] = uVar10;
  }
  return;
}


