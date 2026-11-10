/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033738cc; name: FUN_033738cc
 */


void FUN_033738cc(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_30;
  ulong uStack_28;
  ulong local_20;
  ulong uStack_18;
  
  uVar7 = param_2[1];
  uVar11 = (long)uVar7 >> 0x3f;
  uVar8 = param_3[1];
  uVar15 = (long)uVar8 >> 0x3f;
  uVar10 = (*param_2 ^ uVar11) - uVar11;
  uVar14 = (*param_3 ^ uVar15) - uVar15;
  uVar16 = uVar10 & 0xffffffff;
  uVar10 = uVar10 >> 0x20;
  uVar19 = uVar14 & 0xffffffff;
  uVar14 = uVar14 >> 0x20;
  uVar17 = ((uVar15 ^ uVar8) - uVar15) - (ulong)((*param_3 ^ uVar15) < uVar15);
  uVar9 = uVar17 & 0xffffffff;
  uVar17 = uVar17 >> 0x20;
  uVar12 = ((uVar11 ^ uVar7) - uVar11) - (ulong)((*param_2 ^ uVar11) < uVar11);
  uVar13 = uVar12 & 0xffffffff;
  uVar12 = uVar12 >> 0x20;
  uVar18 = uVar19 * uVar12 + (uVar19 * uVar13 >> 0x20);
  uVar15 = uVar19 * uVar10 + (uVar19 * uVar16 >> 0x20);
  uVar11 = uVar14 * uVar16 + (uVar15 & 0xffffffff);
  uVar1 = uVar14 * uVar10 + (uVar15 >> 0x20) + (uVar11 >> 0x20);
  uVar2 = uVar9 * uVar10 + (uVar9 * uVar16 >> 0x20);
  uVar15 = uVar17 * uVar16 + (uVar2 & 0xffffffff);
  uVar10 = uVar17 * uVar10 + (uVar2 >> 0x20) + (uVar15 >> 0x20);
  uVar5 = uVar9 * uVar16 & 0xffffffff | uVar15 << 0x20;
  uVar3 = uVar5 + uVar1;
  uVar4 = uVar9 * uVar12 + (uVar9 * uVar13 >> 0x20);
  uVar15 = uVar17 * uVar13 + (uVar4 & 0xffffffff);
  uVar2 = uVar14 * uVar13 + (uVar18 & 0xffffffff);
  uVar6 = uVar19 * uVar13 & 0xffffffff | uVar2 << 0x20;
  uVar9 = uVar9 * uVar13 & 0xffffffff | uVar15 << 0x20;
  uVar13 = (ulong)CARRY8(uVar5,uVar1);
  uVar1 = uVar9 + uVar10;
  uVar5 = uVar1 + uVar13;
  uVar2 = uVar14 * uVar12 + (uVar18 >> 0x20) + (uVar2 >> 0x20);
  uStack_28 = uVar3 + uVar6;
  local_30 = uVar19 * uVar16 & 0xffffffff | uVar11 << 0x20;
  uVar18 = (ulong)CARRY8(uVar3,uVar6);
  uVar11 = uVar5 + uVar2;
  local_20 = uVar11 + uVar18;
  uStack_18 = uVar17 * uVar12 + (uVar4 >> 0x20) + (uVar15 >> 0x20) +
              (ulong)(CARRY8(uVar9,uVar10) || CARRY8(uVar1,uVar13)) +
              (ulong)(CARRY8(uVar5,uVar2) || CARRY8(uVar11,uVar18));
  if ((long)(uVar8 ^ uVar7) < 0) {
    FUN_0337380c(param_1,&local_30);
  }
  else {
    param_1[2] = local_20;
    param_1[3] = uStack_18;
    *param_1 = local_30;
    param_1[1] = uStack_28;
  }
  return;
}


