/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013065d0; name: FUN_013065d0
 */


void FUN_013065d0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  
  if (99 < param_2) {
    return;
  }
  lVar16 = param_1 + (long)(int)param_2 * 0xd0;
  plVar19 = (long *)(lVar16 + 0x20);
  *(undefined1 *)(lVar16 + 0xb0) = 1;
  uVar14 = *param_3;
  uVar5 = param_3[1];
  pbVar18 = (byte *)(lVar16 + 0xb8);
  *(undefined8 *)pbVar18 = uVar14;
  uVar3 = param_3[2];
  uVar6 = param_3[3];
  uVar4 = param_3[4];
  uVar7 = param_3[5];
  puVar17 = (undefined8 *)(lVar16 + 0xc0);
  *puVar17 = uVar5;
  *(undefined8 *)(lVar16 + 0xd8) = uVar4;
  *(undefined8 *)(lVar16 + 0xe0) = uVar7;
  *(undefined8 *)(lVar16 + 200) = uVar3;
  *(undefined8 *)(lVar16 + 0xd0) = uVar6;
  FUN_01308270(*(undefined8 *)(*(long *)(param_1 + 8) + 400),uVar14,*plVar19,0,0);
  lVar11 = *plVar19;
  uVar8 = *(undefined4 *)puVar17;
  *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar16 + 0xbc);
  *(undefined4 *)(lVar11 + 0x34) = uVar8;
  *(undefined4 *)(lVar11 + 0x38) = 0;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  lVar11 = *plVar19;
  uVar14 = *(undefined8 *)(lVar16 + 0xc4);
  *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(lVar16 + 0xcc);
  *(undefined8 *)(lVar11 + 0x3c) = uVar14;
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  *(byte *)(*plVar19 + 0x58) = *(byte *)(*plVar19 + 0x58) | 1;
  bVar10 = *pbVar18;
  if ((bVar10 & 0xfe) != 2) goto joined_r0x01306718;
  lVar20 = (long)(int)param_2;
  plVar15 = (long *)(param_1 + lVar20 * 0xd0 + 0x28);
  lVar11 = *plVar15;
  if (lVar11 == 0) {
    puVar2 = (uint *)(param_1 + 0x5300);
    uVar9 = *puVar2;
    if (uVar9 < 3) {
      lVar11 = param_1 + (ulong)uVar9 * 0x80;
      lVar12 = param_1 + lVar20 * 0xd0;
      *plVar15 = *(long *)(param_1 + (ulong)uVar9 * 8 + 0x5160);
      puVar1 = (undefined8 *)(lVar12 + 0x30);
      pcVar13 = *(code **)(lVar12 + 0x38);
      if (pcVar13 != (code *)0x0) {
        *(undefined8 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *puVar1 = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        (*pcVar13)(param_1 + lVar20 * 0xd0 + 0x50);
      }
      if (*(code **)(lVar11 + 0x5190) != (code *)0x0) {
        (**(code **)(lVar11 + 0x5190))(lVar11 + 0x51a0,param_1 + lVar20 * 0xd0 + 0x50);
        uVar14 = *(undefined8 *)(lVar11 + 0x5180);
        uVar3 = *(undefined8 *)(lVar11 + 0x5188);
        uVar4 = *(undefined8 *)(lVar11 + 0x5198);
        *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar11 + 0x5190);
        *(undefined8 *)(lVar12 + 0x48) = uVar4;
        *puVar1 = uVar14;
        *(undefined8 *)(lVar12 + 0x38) = uVar3;
      }
      (*(code *)*puVar1)(param_1 + lVar20 * 0xd0 + 0x50);
      *(byte *)(*plVar15 + 0x58) = *(byte *)(*plVar15 + 0x58) | 1;
      *puVar2 = *puVar2 + 1;
      lVar11 = *plVar15;
      if (lVar11 != 0) goto LAB_013066f0;
    }
  }
  else {
LAB_013066f0:
    uVar14 = *(undefined8 *)(*plVar19 + 0x30);
    *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(*plVar19 + 0x38);
    *(undefined8 *)(lVar11 + 0x30) = uVar14;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  }
  bVar10 = *pbVar18;
joined_r0x01306718:
  if ((bVar10 == 1) && (lVar11 = *(long *)(param_1 + 0x5308), lVar11 != 0)) {
    uVar8 = *(undefined4 *)puVar17;
    *(undefined4 *)(lVar11 + 0x30) = *(undefined4 *)(lVar16 + 0xbc);
    *(undefined4 *)(lVar11 + 0x34) = uVar8;
    *(undefined4 *)(lVar11 + 0x38) = 0;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
                    /* WARNING: Could not recover jumptable at 0x01306768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x5310))(param_1 + 0x5330);
    return;
  }
  return;
}


