/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00279a20; name: FUN_00279a20
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00279a20(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10,void *param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  
  *(int *)(param_1 + 0x10) = param_5;
  *(uint *)(param_1 + 0x14) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  bVar3 = param_6 != (undefined4 *)0x0;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  uVar6 = (ulong)bVar3;
  if (param_7 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar6 = (ulong)(bVar3 + 1);
    *(uint *)(param_1 + 0xc) = bVar3 + 1;
    *(ulong *)(param_1 + 0x78) = (ulong)bVar3 << 4;
  }
  if (param_8 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    lVar8 = uVar6 << 4;
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    *(long *)(param_1 + 0x80) = lVar8;
  }
  if (param_9 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    lVar8 = uVar6 << 4;
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    *(long *)(param_1 + 0x88) = lVar8;
  }
  if (param_10 == (undefined4 *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = uVar6 << 4;
    uVar1 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  *(long *)(param_1 + 0x90) = lVar8;
  lVar8 = (long)param_5 * uVar6 * 0x10;
  *(ulong *)(param_1 + 0x20) = uVar6 << 4;
  *(long *)(param_1 + 0x28) = lVar8;
  uVar6 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2;
  *(ulong *)(param_1 + 0x30) = uVar6;
  lVar13 = *(long *)(param_2 + 0x1a0);
  uVar6 = ((uVar6 + lVar8 + *(long *)(param_2 + 0x188)) - 1 & -*(long *)(param_2 + 0x188)) + lVar13;
  if (uVar6 <= *(ulong *)(param_2 + 0x48)) {
    puVar2 = (undefined4 *)(*(long *)(param_2 + 0x1a8) + lVar13);
    *(ulong *)(param_2 + 0x1a0) = uVar6;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x58) = param_6;
      *(undefined4 **)(param_1 + 0x60) = param_7;
      puVar12 = puVar2;
      if (0 < param_5) {
        puVar7 = param_8;
        puVar9 = param_7;
        puVar10 = param_10;
        puVar11 = param_9;
        if (param_6 == (undefined4 *)0x0) {
          do {
            if (param_7 != (undefined4 *)0x0) {
              *puVar12 = *puVar9;
              puVar12[1] = puVar9[1];
              puVar12[2] = puVar9[2];
              puVar12[3] = puVar9[3];
              puVar9 = puVar9 + 4;
              puVar12 = puVar12 + 4;
            }
            if (param_8 != (undefined4 *)0x0) {
              *puVar12 = *puVar7;
              puVar12[1] = puVar7[1];
              puVar12[2] = puVar7[2];
              puVar12[3] = puVar7[3];
              puVar7 = puVar7 + 4;
              puVar12 = puVar12 + 4;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar12 = *puVar11;
              puVar12[1] = puVar11[1];
              puVar12[2] = puVar11[2];
              puVar12[3] = puVar11[3];
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar12 = *puVar10;
              puVar12[1] = puVar10[1];
              puVar12[2] = puVar10[2];
              puVar12[3] = puVar10[3];
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        else {
          do {
            *puVar12 = *param_6;
            puVar12[1] = param_6[1];
            puVar12[2] = param_6[2];
            puVar12[3] = param_6[3];
            if (param_7 == (undefined4 *)0x0) {
              puVar12 = puVar12 + 4;
            }
            else {
              puVar12[4] = *puVar9;
              puVar12[5] = puVar9[1];
              puVar12[6] = puVar9[2];
              puVar12[7] = puVar9[3];
              puVar9 = puVar9 + 4;
              puVar12 = puVar12 + 8;
            }
            if (param_8 != (undefined4 *)0x0) {
              *puVar12 = *puVar7;
              puVar12[1] = puVar7[1];
              puVar12[2] = puVar7[2];
              puVar12[3] = puVar7[3];
              puVar7 = puVar7 + 4;
              puVar12 = puVar12 + 4;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar12 = *puVar11;
              puVar12[1] = puVar11[1];
              puVar12[2] = puVar11[2];
              puVar12[3] = puVar11[3];
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar12 = *puVar10;
              puVar12[1] = puVar10[1];
              puVar12[2] = puVar10[2];
              puVar12[3] = puVar10[3];
              puVar10 = puVar10 + 4;
              puVar12 = puVar12 + 4;
            }
            param_5 = param_5 + -1;
            param_6 = param_6 + 4;
          } while (param_5 != 0);
        }
      }
      memcpy(puVar12,param_11,*(size_t *)(param_1 + 0x30));
      *(void **)(param_1 + 0x68) = param_11;
      uVar4 = *(undefined8 *)(param_2 + 0x198);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 400);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 400);
      uVar5 = *(undefined8 *)(param_2 + 0x198);
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar13;
      *(long *)(param_1 + 0x48) =
           (long)puVar12 + *(long *)(param_1 + 0x48) + (lVar13 - (long)puVar2);
      return 1;
    }
  }
  return 0;
}


