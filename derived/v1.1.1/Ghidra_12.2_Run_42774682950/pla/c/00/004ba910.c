/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ba910; name: FUN_004ba910
 */


void FUN_004ba910(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  
  uVar13 = *(uint *)(param_1 + 0x80);
  uVar1 = -(int)param_3 & 7;
  uVar8 = *(ulong *)(param_1 + 0x88);
  uVar14 = uVar13 & 7;
  *(ulong *)(param_1 + 0x88) = uVar8 + param_3;
  if (((CARRY8(uVar8,param_3)) &&
      (lVar9 = *(long *)(param_1 + 0x90), *(long *)(param_1 + 0x90) = lVar9 + 1, lVar9 == -1)) &&
     (lVar9 = *(long *)(param_1 + 0x98), *(long *)(param_1 + 0x98) = lVar9 + 1, lVar9 == -1)) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  }
  pbVar11 = param_2;
  if (uVar1 == 0 && uVar14 == 0) {
LAB_004bab28:
    if (param_3 != 0) {
      if (uVar13 != 0) goto LAB_004bab64;
      while( true ) {
        if (param_3 >> 9 == 0) {
LAB_004bab64:
          uVar1 = 0x200 - uVar13;
          if (param_3 < uVar1) {
            memcpy((void *)(param_1 + (ulong)(uVar13 >> 3) + 0x40),pbVar11,param_3 >> 3);
            *(uint *)(param_1 + 0x80) = uVar13 + (int)param_3;
            return;
          }
          memcpy((void *)(param_1 + (ulong)(uVar13 >> 3) + 0x40),pbVar11,(ulong)(uVar1 >> 3));
          pbVar11 = pbVar11 + (uVar1 >> 3);
          FUN_004bad90(param_1,param_1 + 0x40,1);
          *(undefined4 *)(param_1 + 0x80) = 0;
          param_3 = param_3 - uVar1;
        }
        else {
          FUN_004bad90(param_1,pbVar11);
          uVar8 = param_3 >> 3;
          param_3 = param_3 & 0x1ff;
          pbVar11 = pbVar11 + (uVar8 & 0x1fffffffffffffc0);
        }
        if (param_3 == 0) break;
        uVar13 = 0;
      }
      return;
    }
  }
  else if (param_3 != 0) {
    lVar9 = param_1 + 0x40;
    do {
      uVar4 = 8 - uVar14;
      uVar8 = (ulong)(uVar13 >> 3);
      if (uVar14 == uVar1) {
LAB_004baae0:
        pbVar11 = param_2 + 1;
        uVar13 = uVar4 + uVar13;
        param_3 = param_3 - uVar4;
        *(byte *)(param_1 + uVar8 + 0x40) =
             *(byte *)(param_1 + uVar8 + 0x40) | *param_2 & (byte)(0xff >> (ulong)uVar14);
        if (uVar13 == 0x200) {
          FUN_004bad90(param_1,lVar9,1);
          uVar13 = 0;
        }
        *(uint *)(param_1 + 0x80) = uVar13;
        goto LAB_004bab28;
      }
      uVar5 = param_3;
      pbVar11 = param_2;
      uVar2 = uVar13;
LAB_004ba9c0:
      pbVar15 = pbVar11 + 1;
      uVar12 = uVar5 - 8;
      uVar3 = (uint)*pbVar11 << (ulong)uVar1;
      if (uVar14 != 0) {
        if (uVar5 < 9) {
          *(byte *)(param_1 + uVar8 + 0x40) =
               *(byte *)(param_1 + uVar8 + 0x40) | (byte)((uVar3 & 0xff) >> (ulong)uVar14);
          iVar10 = (int)uVar12 + uVar2;
          if (iVar10 == 0x1f8) {
            FUN_004bad90(param_1,lVar9,1);
            iVar10 = 0;
            uVar13 = 0;
          }
          else {
            uVar13 = (int)uVar8 + 1;
            iVar10 = iVar10 + 8;
          }
          *(char *)(param_1 + (ulong)uVar13 + 0x40) =
               (char)((uVar3 & 0xff) << (ulong)(uVar4 & 0x1f));
          *(int *)(param_1 + 0x80) = iVar10;
          return;
        }
LAB_004ba9e0:
        bVar6 = *pbVar15 >> (ulong)(8 - uVar1 & 0x1f);
        if (uVar14 == 0) {
          *(byte *)(param_1 + uVar8 + 0x40) = bVar6 | (byte)uVar3;
          if (0x1ff < uVar2 + 8) goto LAB_004baa14;
LAB_004baa4c:
          uVar2 = uVar2 + 8;
          uVar7 = (int)uVar8 + 1;
        }
        else {
          *(byte *)(param_1 + uVar8 + 0x40) =
               *(byte *)(param_1 + uVar8 + 0x40) |
               (byte)(((uint)bVar6 | uVar3 & 0xff) >> (ulong)uVar14);
          if (uVar2 + 8 < 0x200) goto LAB_004baa4c;
LAB_004baa14:
          FUN_004bad90(param_1,lVar9,1);
          uVar7 = 0;
          uVar2 = uVar2 + 8 & 0x1ff;
        }
        if (uVar14 == 0) goto LAB_004baac0;
        uVar8 = (ulong)(uVar2 >> 3);
        *(char *)(param_1 + (ulong)uVar7 + 0x40) =
             (char)(((uint)bVar6 | uVar3 & 0xff) << (ulong)(uVar4 & 0x1f));
        *(uint *)(param_1 + 0x80) = uVar2;
        uVar5 = uVar12;
        pbVar11 = pbVar15;
        if (uVar14 == uVar1) goto LAB_004baae0;
        goto LAB_004ba9c0;
      }
      if (8 < uVar5) goto LAB_004ba9e0;
      *(byte *)(param_1 + uVar8 + 0x40) = (byte)uVar3;
      iVar10 = (int)uVar12 + uVar2;
      pbVar15 = pbVar11;
      if (iVar10 == 0x1f8) {
        FUN_004bad90(param_1,lVar9,1);
        uVar12 = 0;
        uVar2 = 0;
      }
      else {
        uVar12 = 0;
        uVar2 = iVar10 + 8;
      }
LAB_004baac0:
      uVar13 = uVar2;
      param_2 = pbVar15;
      uVar14 = 0;
      *(uint *)(param_1 + 0x80) = uVar13;
      param_3 = uVar12;
    } while (uVar12 != 0);
  }
  return;
}


