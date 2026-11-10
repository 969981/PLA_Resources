/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00699528; name: FUN_00699528
 */


byte * FUN_00699528(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auVar13 [12];
  byte *local_58;
  
  local_58 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar6 = PTR_LAB_043730d0;
  puVar5 = PTR_FUN_04373078;
  if ((uVar7 & 1) == 0) {
    do {
      bVar2 = *local_58;
      auVar13[8] = bVar2;
      auVar13._0_8_ = local_58 + 1;
      auVar13._9_3_ = 0;
      if ((char)bVar2 < '\0') {
        bVar1 = local_58[1];
        iVar10 = (uint)bVar2 + (uint)bVar1 * 0x80 + -0x80;
        if ((char)bVar1 < '\0') {
          auVar13 = FUN_00323230(local_58,iVar10);
          if (auVar13._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar13._8_4_ = iVar10;
          auVar13._0_8_ = local_58 + 2;
        }
      }
      uVar4 = auVar13._8_4_;
      local_58 = auVar13._0_8_;
      if (uVar4 == 10) {
        local_58 = local_58 + -1;
        do {
          local_58 = local_58 + 1;
          piVar9 = *(int **)(param_1 + 0x20);
          if (piVar9 == (int *)0x0) {
            iVar10 = *(int *)(param_1 + 0x1c);
LAB_0069967c:
            FUN_0032bcac((long *)(param_1 + 0x10),iVar10 + 1);
            piVar9 = *(int **)(param_1 + 0x20);
            iVar10 = *piVar9;
LAB_00699690:
            *piVar9 = iVar10 + 1;
            lVar8 = *(long *)(param_1 + 0x10);
            if (lVar8 == 0) {
              pbVar12 = (byte *)FUN_002e2e80(puVar5,0x18);
              if (pbVar12 == (byte *)0x0) {
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
                pbVar12[8] = 0;
                pbVar12[9] = 0;
                pbVar12[10] = 0;
                pbVar12[0xb] = 0;
                pbVar12[0xc] = 0;
                pbVar12[0xd] = 0;
                pbVar12[0xe] = 0;
                pbVar12[0xf] = 0;
                pbVar12[0x10] = 0;
                pbVar12[0x11] = 0;
                pbVar12[0x12] = 0;
                pbVar12[0x13] = 0;
                pbVar12[0x14] = 0;
                pbVar12[0x15] = 0;
                pbVar12[0x16] = 0;
                pbVar12[0x17] = 0;
                pbVar11 = pbVar12;
              }
            }
            else {
              if (*(long *)(lVar8 + 0x70) != 0) {
                FUN_0032cf88(lVar8,0,0x18);
              }
              pbVar12 = (byte *)FUN_0032c850(lVar8,0x18,puVar6);
              pbVar12[0] = 0;
              pbVar12[1] = 0;
              pbVar12[2] = 0;
              pbVar12[3] = 0;
              pbVar12[4] = 0;
              pbVar12[5] = 0;
              pbVar12[6] = 0;
              pbVar12[7] = 0;
              pbVar12[8] = 0;
              pbVar12[9] = 0;
              pbVar12[10] = 0;
              pbVar12[0xb] = 0;
              pbVar12[0xc] = 0;
              pbVar12[0xd] = 0;
              pbVar12[0xe] = 0;
              pbVar12[0xf] = 0;
              pbVar12[0x10] = 0;
              pbVar12[0x11] = 0;
              pbVar12[0x12] = 0;
              pbVar12[0x13] = 0;
              pbVar12[0x14] = 0;
              pbVar12[0x15] = 0;
              pbVar12[0x16] = 0;
              pbVar12[0x17] = 0;
              pbVar11 = pbVar12;
            }
            iVar10 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar10 + 1;
            *(byte **)(*(long *)(param_1 + 0x20) + (long)iVar10 * 8 + 8) = pbVar11;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x18);
            iVar10 = *piVar9;
            if (iVar10 <= iVar3) {
              if (iVar10 == *(int *)(param_1 + 0x1c)) goto LAB_0069967c;
              goto LAB_00699690;
            }
            *(int *)(param_1 + 0x18) = iVar3 + 1;
            pbVar12 = *(byte **)(piVar9 + (long)iVar3 * 2 + 2);
            pbVar11 = pbVar12;
          }
          local_58 = (byte *)FUN_003234c0(pbVar12,local_58,param_3);
          bVar2 = *pbVar11;
          pbVar11 = *(byte **)(pbVar12 + 0x10);
          if ((bVar2 & 1) == 0) {
            pbVar11 = pbVar12 + 1;
          }
          if ((bVar2 & 1) == 0) {
            uVar7 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar7 = *(ulong *)(pbVar12 + 8);
            if ((long)uVar7 < 0) {
              FUN_0031f284(uVar7,"size_t to int conversion");
            }
          }
          uVar7 = FUN_00323380(pbVar11,uVar7,0);
          if ((uVar7 & 1) == 0) {
            return (byte *)0x0;
          }
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((local_58 < (byte *)*param_3) && (*local_58 == 10));
      }
      else {
        if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar4 - 1;
          return local_58;
        }
        uVar7 = *(ulong *)(param_1 + 8);
        if ((uVar7 & 1) == 0) {
          lVar8 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar8 = (uVar7 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_00323c60(uVar4,lVar8,local_58,param_3);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_58;
}


