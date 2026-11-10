/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f53dd4; name: FUN_02f53dd4
 */


long FUN_02f53dd4(long *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined8 local_50;
  
  *param_2 = 0;
  if (((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0) && ((char)param_1[0x18] != '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17);
    uVar2 = *(undefined4 *)((long)param_1 + 0xbc);
    FUN_02f4de50(param_1 + 0x13);
    lVar7 = param_1[0xf];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_02f53ec8;
      uVar8 = *(uint *)(*(long *)(*(long *)(lVar7 + 0x18) + 0x78) + 0x10);
    }
    uVar3 = *(uint *)(param_1[0x12] + 0x108);
    uVar11 = (ulong)uVar3;
    puVar10 = *(undefined8 **)(param_1[0x12] + 0x100);
joined_r0x02f53e40:
    do {
      do {
        if ((int)uVar3 < 1) {
          lVar9 = puVar10[10];
          puVar6 = puVar10;
          goto joined_r0x02f53f3c;
        }
        uVar3 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar3;
        puVar6 = puVar10 + uVar11 * 0xc;
        uVar4 = *(uint *)(puVar6 + 1);
      } while (uVar4 == 0);
      puVar12 = (uint *)*puVar6;
      if (*puVar12 != 0xffffffff) {
        puVar13 = puVar12;
        uVar14 = uVar4;
        do {
          puVar15 = puVar13 + (uVar14 >> 1);
          uVar5 = *puVar15;
          if (uVar5 == uVar8) goto LAB_02f53f20;
          puVar15 = puVar15 + 1;
          if (uVar5 >= uVar8) {
            puVar15 = puVar13;
          }
          uVar14 = uVar14 - (uVar5 < uVar8) >> 1;
          puVar13 = puVar15;
        } while (uVar14 != 0);
        puVar15 = puVar12 + uVar4;
LAB_02f53f20:
        if (puVar15 == puVar12 + uVar4) goto joined_r0x02f53e40;
      }
      uVar4 = *(uint *)(puVar10 + uVar11 * 0xc + 3);
      if (uVar4 == 0) goto joined_r0x02f53e40;
      puVar12 = (uint *)puVar10[uVar11 * 0xc + 2];
      if (*puVar12 == 0xffffffff) break;
      puVar13 = puVar12;
      uVar14 = uVar4;
      do {
        puVar15 = puVar13 + (uVar14 >> 1);
        uVar5 = *puVar15;
        if (uVar5 == uVar1) goto LAB_02f54074;
        puVar15 = puVar15 + 1;
        if (uVar5 >= uVar1) {
          puVar15 = puVar13;
        }
        uVar14 = uVar14 - (uVar5 < uVar1) >> 1;
        puVar13 = puVar15;
      } while (uVar14 != 0);
      puVar15 = puVar12 + uVar4;
LAB_02f54074:
    } while (puVar15 == puVar12 + uVar4);
    lVar9 = puVar6[10];
joined_r0x02f53f3c:
    if (lVar9 == 0) {
      *param_2 = *(byte *)(puVar6 + 9) >> 6 & 1;
      lVar7 = FUN_02f54590(param_1,puVar6,lVar7,uVar1,uVar2);
      return lVar7;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = puVar6[4];
    local_78 = puVar6[5];
    local_70 = *(byte *)(puVar6 + 6);
    local_50 = 0;
    lVar9 = puVar6[10];
    local_6c = *(undefined8 *)(lVar9 + 4);
    local_64 = *(undefined4 *)(lVar9 + 0xc);
    uStack_60 = 0;
    cStack_58 = (*(byte *)(lVar9 + 0x1c) & 1) << 6;
    *param_2 = *(byte *)(lVar9 + 0x1c) & 1;
    lVar7 = FUN_02f54590(param_1,&local_a0,lVar7,*(undefined4 *)puVar6[10],0);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x18) == 0) {
        lVar7 = (**(code **)(*param_1 + 0x120))(param_1);
      }
      else {
        lVar9 = puVar6[10];
        local_80 = *(undefined8 *)(lVar9 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar9 + 0x18));
        local_70 = (*(byte *)(lVar9 + 0x1c) & 2) << 4 | local_70 & 0xc0 | 7;
        local_6c = *(undefined8 *)((long)puVar6 + 0x34);
        uStack_5c = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x41) >> 0x18);
        cStack_58 = (char)((ulong)*(undefined8 *)((long)puVar6 + 0x41) >> 0x38);
        local_64 = (undefined4)*(undefined8 *)((long)puVar6 + 0x3c);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar6 + 0x3c) >> 0x20);
        FUN_02f54590(param_1,&local_a0,lVar7,uVar1,uVar2);
      }
    }
    FUN_02f4acb4(&local_a0);
  }
  else {
LAB_02f53ec8:
    lVar7 = 0;
  }
  return lVar7;
}


