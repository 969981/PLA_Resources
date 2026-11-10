/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df1350; name: FUN_02df1350
 */


undefined8
FUN_02df1350(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int *param_5,
            long param_6,int param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  undefined8 *puVar11;
  int iVar12;
  
  *(uint *)(param_6 + 0x58) =
       *(int *)(param_6 + 0x58) +
       ((*(byte *)(param_1 + 0x1b) + 1) * (uint)*(ushort *)((long)param_5 + 10) + -2) * param_5[10];
  uVar1 = *(ushort *)((long)param_5 + 10);
  uVar7 = (ulong)uVar1;
  if (uVar7 == 0) {
    iVar12 = 0x100;
  }
  else {
    if (uVar1 == 1) {
      lVar9 = 0;
      uVar6 = 0xff;
    }
    else {
      lVar9 = 0;
      uVar6 = 0xff;
      do {
        bVar10 = *(byte *)(param_2 + lVar9);
        uVar8 = (uint)bVar10;
        if (bVar10 == 0 || (uVar6 == bVar10 || uVar6 < bVar10)) {
          uVar8 = uVar6;
        }
        bVar10 = *(byte *)(param_2 + lVar9 + 1);
        uVar6 = uVar8;
        if ((bVar10 != 0) && (uVar8 != bVar10 && bVar10 <= uVar8)) {
          uVar6 = (uint)bVar10;
        }
        lVar9 = lVar9 + 2;
      } while (uVar7 - (uVar7 & 1) != lVar9);
    }
    if ((uVar1 & 1) != 0) {
      bVar10 = *(byte *)(param_2 + lVar9);
      if ((bVar10 != 0) && (uVar6 != bVar10 && bVar10 <= uVar6)) {
        uVar6 = (uint)bVar10;
      }
    }
    iVar12 = uVar6 + 1;
  }
  do {
    iVar12 = iVar12 + 1;
    iVar4 = FUN_02def8d0(param_1,param_2,param_3,param_4,param_5,param_6,iVar12);
  } while (iVar4 == 1);
  if (iVar4 == 2) {
    uVar5 = 0xffffff75;
  }
  else {
    if ((param_5[9] == 1) && (*(char *)(*(long *)(param_1 + 0x10) + 0x50) != '\0')) {
      uVar6 = -param_5[3] - 8;
      *(int *)(*(long *)(param_1 + 0x10) + 0x34) =
           *param_5 << (ulong)(-(0x18U - param_5[1] & 0x1f) & 0x1f) |
           *param_5 >> (0x18U - param_5[1] & 0x1f);
      *(int *)(*(long *)(param_1 + 0x10) + 0x38) =
           ~(-1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f));
      iVar12 = *(int *)(*(long *)(param_1 + 0x10) + 0x40);
      *(int *)(*(long *)(param_1 + 0x10) + 0x3c) =
           iVar12 << (ulong)(-(uVar6 & 0x1f) & 0x1f) | iVar12 >> (uVar6 & 0x1f);
      if (*(byte *)(param_1 + 0x1a) == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 1;
        } while (1 << (ulong)(uVar8 & 0x1f) != (uint)*(byte *)(param_1 + 0x1a));
      }
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) =
           *(undefined8 *)
            ((ulong)*(byte *)(param_1 + 0x1b) * 0x40 + ((long)param_7 + -1) * 0x20 +
             (ulong)uVar8 * 8 + 0x429f140);
      bVar10 = *(byte *)(param_1 + 0x1a);
      if ((bVar10 < 9) && ((1 << (ulong)(bVar10 & 0x1f) & 0x114U) != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar3 = *(undefined4 *)((long)puVar11 + 0x34);
        puVar11[1] = CONCAT44(uVar3,uVar3);
        *puVar11 = CONCAT44(uVar3,uVar3);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x38);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x38) << (ulong)(*(byte *)(lVar9 + 0x50) & 0x1f);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x18) =
             *(int *)(lVar9 + 0x38) << (ulong)((*(byte *)(lVar9 + 0x50) & 0xf) << 1);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x1c) =
             *(int *)(lVar9 + 0x38) << (ulong)((uint)*(byte *)(lVar9 + 0x50) * 3 & 0x1f);
        bVar10 = *(byte *)(param_1 + 0x1a);
      }
      if (bVar10 == 8) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x3c);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x3c) >> (*(byte *)(lVar9 + 0x50) & 0x1f);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x3c) >> ((*(byte *)(lVar9 + 0x50) & 0xf) << 1);
        lVar9 = *(long *)(param_1 + 0x10);
        *(int *)(lVar9 + 0x2c) =
             *(int *)(lVar9 + 0x3c) >> ((uint)*(byte *)(lVar9 + 0x50) * 3 & 0x1f);
        bVar10 = *(byte *)(param_1 + 0x1a);
      }
      if ((bVar10 == 2) || (bVar10 == 4)) {
        lVar9 = *(long *)(param_1 + 0x10);
        uVar2 = (uint)*(byte *)(lVar9 + 0x50) * -3 - param_5[3];
        iVar12 = uVar6 - uVar2;
        if (iVar12 < 1) {
          *(undefined4 *)(lVar9 + 0x30) = 0;
          uVar6 = *(uint *)(lVar9 + 0x3c);
          lVar9 = *(long *)(param_1 + 0x10);
        }
        else {
          *(int *)(lVar9 + 0x30) = iVar12;
          lVar9 = *(long *)(param_1 + 0x10);
          uVar6 = *(int *)(lVar9 + 0x40) >> (uVar2 & 0x1f);
        }
        *(uint *)(lVar9 + 0x20) = uVar6;
        *(uint *)(*(long *)(param_1 + 0x10) + 0x24) =
             uVar6 >> (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x28) =
             uVar6 >> (ulong)((*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0xf) << 1);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x2c) =
             uVar6 >> (ulong)((uint)*(byte *)(*(long *)(param_1 + 0x10) + 0x50) * 3 & 0x1f);
        if (0xffff < uVar6 * ~(-1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f))) {
          *(undefined **)(*(long *)(param_1 + 0x10) + 0x48) =
               (&PTR_LAB_0429f1c0)
               [(ulong)uVar8 + ((long)param_7 + -1) * 4 + (ulong)*(byte *)(param_1 + 0x1b) * 8];
          return 0;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


