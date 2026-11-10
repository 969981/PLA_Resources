/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a14c0; name: FUN_032a14c0
 */


void FUN_032a14c0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined1 local_25;
  undefined3 uStack_24;
  
  param_2 = param_2 & 0xffffffff;
LAB_032a14e8:
  iVar11 = (int)param_2;
  uVar1 = iVar11 + param_3;
  uVar2 = (int)uVar1 >> 1;
  pbVar9 = (byte *)(param_1 +
                   ((-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) -
                   ((long)((ulong)uVar1 << 0x20) >> 0x21)));
  bVar5 = *pbVar9;
  bVar6 = pbVar9[1];
  uVar8 = (ulong)param_3;
LAB_032a1524:
  pbVar9 = (byte *)(param_1 +
                   ((-(param_2 >> 0x1f) & 0xfffffff800000000 | param_2 << 3) - (long)(int)param_2));
  do {
    iVar12 = (int)param_2;
    if (*pbVar9 == bVar5) {
      if (bVar6 <= pbVar9[1]) break;
    }
    else if (bVar5 <= *pbVar9) break;
    param_2 = (ulong)(iVar12 + 1);
    pbVar9 = pbVar9 + 7;
  } while( true );
  pbVar10 = (byte *)(param_1 +
                    ((-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3) - (long)(int)uVar8));
  do {
    iVar7 = (int)uVar8;
    if (bVar5 == *pbVar10) {
      if (pbVar10[1] <= bVar6) break;
    }
    else if (*pbVar10 <= bVar5) break;
    uVar8 = (ulong)(iVar7 - 1);
    pbVar10 = pbVar10 + -7;
  } while( true );
  if (iVar12 <= iVar7) {
    if (iVar12 != iVar7) {
      uVar3 = *(undefined4 *)pbVar10;
      uStack_24 = (undefined3)((uint)*(undefined4 *)(pbVar10 + 3) >> 8);
      uVar4 = *(undefined4 *)pbVar9;
      *(undefined4 *)(pbVar10 + 3) = *(undefined4 *)(pbVar9 + 3);
      *(undefined4 *)pbVar10 = uVar4;
      local_25 = (undefined1)((uint)uVar3 >> 0x18);
      *(uint *)(pbVar9 + 3) = CONCAT31(uStack_24,local_25);
      *(undefined4 *)pbVar9 = uVar3;
    }
    uVar8 = (ulong)(iVar7 - 1);
    param_2 = (ulong)(iVar12 + 1);
  }
  if ((int)uVar8 < (int)param_2) goto LAB_032a15d8;
  goto LAB_032a1524;
LAB_032a15d8:
  if (iVar11 < (int)uVar8) {
    FUN_032a14c0(param_1);
  }
  if ((int)param_3 <= (int)param_2) {
    return;
  }
  goto LAB_032a14e8;
}


