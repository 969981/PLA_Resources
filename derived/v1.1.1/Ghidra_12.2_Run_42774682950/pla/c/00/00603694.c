/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603694; name: FUN_00603694
 */


byte * FUN_00603694(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 auVar12 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar5 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar4 = PTR_LAB_043730d0;
  puVar3 = PTR_FUN_04373078;
  if ((uVar5 & 1) == 0) {
    do {
      pbVar8 = local_58 + 1;
      uVar7 = (uint)*local_58;
      if ((char)*local_58 < '\0') {
        uVar7 = (uVar7 + (uint)*pbVar8 * 0x80) - 0x80;
        if (-1 < (char)*pbVar8) {
          pbVar8 = local_58 + 2;
          goto LAB_00603738;
        }
        auVar12 = FUN_00323230();
        if (auVar12._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar7 = auVar12._8_4_;
      }
      else {
LAB_00603738:
        auVar12._8_4_ = uVar7;
        auVar12._0_8_ = pbVar8;
        auVar12._12_4_ = 0;
      }
      local_58 = auVar12._0_8_;
      if (uVar7 == 10) {
        local_58 = local_58 + -1;
        do {
          local_58 = local_58 + 1;
          piVar9 = *(int **)(param_1 + 0x20);
          if (piVar9 == (int *)0x0) {
            iVar10 = *(int *)(param_1 + 0x1c);
LAB_006037ec:
            FUN_0032bcac((long *)(param_1 + 0x10),iVar10 + 1);
            piVar9 = *(int **)(param_1 + 0x20);
            iVar10 = *piVar9;
LAB_00603800:
            *piVar9 = iVar10 + 1;
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 == 0) {
              pbVar8 = (byte *)FUN_002e2e80(puVar3,0x18);
              if (pbVar8 == (byte *)0x0) {
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar8[0] = 0;
                pbVar8[1] = 0;
                pbVar8[2] = 0;
                pbVar8[3] = 0;
                pbVar8[4] = 0;
                pbVar8[5] = 0;
                pbVar8[6] = 0;
                pbVar8[7] = 0;
                pbVar8[8] = 0;
                pbVar8[9] = 0;
                pbVar8[10] = 0;
                pbVar8[0xb] = 0;
                pbVar8[0xc] = 0;
                pbVar8[0xd] = 0;
                pbVar8[0xe] = 0;
                pbVar8[0xf] = 0;
                pbVar8[0x10] = 0;
                pbVar8[0x11] = 0;
                pbVar8[0x12] = 0;
                pbVar8[0x13] = 0;
                pbVar8[0x14] = 0;
                pbVar8[0x15] = 0;
                pbVar8[0x16] = 0;
                pbVar8[0x17] = 0;
                pbVar11 = pbVar8;
              }
            }
            else {
              if (*(long *)(lVar6 + 0x70) != 0) {
                FUN_0032cf88(lVar6,0,0x18);
              }
              pbVar8 = (byte *)FUN_0032c850(lVar6,0x18,puVar4);
              pbVar8[0] = 0;
              pbVar8[1] = 0;
              pbVar8[2] = 0;
              pbVar8[3] = 0;
              pbVar8[4] = 0;
              pbVar8[5] = 0;
              pbVar8[6] = 0;
              pbVar8[7] = 0;
              pbVar8[8] = 0;
              pbVar8[9] = 0;
              pbVar8[10] = 0;
              pbVar8[0xb] = 0;
              pbVar8[0xc] = 0;
              pbVar8[0xd] = 0;
              pbVar8[0xe] = 0;
              pbVar8[0xf] = 0;
              pbVar8[0x10] = 0;
              pbVar8[0x11] = 0;
              pbVar8[0x12] = 0;
              pbVar8[0x13] = 0;
              pbVar8[0x14] = 0;
              pbVar8[0x15] = 0;
              pbVar8[0x16] = 0;
              pbVar8[0x17] = 0;
              pbVar11 = pbVar8;
            }
            iVar10 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar10 + 1;
            *(byte **)(*(long *)(param_1 + 0x20) + (long)iVar10 * 8 + 8) = pbVar11;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x18);
            iVar10 = *piVar9;
            if (iVar10 <= iVar2) {
              if (iVar10 == *(int *)(param_1 + 0x1c)) goto LAB_006037ec;
              goto LAB_00603800;
            }
            *(int *)(param_1 + 0x18) = iVar2 + 1;
            pbVar8 = *(byte **)(piVar9 + (long)iVar2 * 2 + 2);
            pbVar11 = pbVar8;
          }
          local_58 = (byte *)FUN_003234c0(pbVar8,local_58,param_3);
          bVar1 = *pbVar11;
          pbVar11 = *(byte **)(pbVar8 + 0x10);
          if ((bVar1 & 1) == 0) {
            pbVar11 = pbVar8 + 1;
          }
          if ((bVar1 & 1) == 0) {
            uVar5 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar5 = *(ulong *)(pbVar8 + 8);
            if ((long)uVar5 < 0) {
              FUN_0031f284(uVar5,"size_t to int conversion");
            }
          }
          uVar5 = FUN_00323380(pbVar11,uVar5,"google.protobuf.FieldMask.paths");
          if ((uVar5 & 1) == 0) {
            return (byte *)0x0;
          }
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((local_58 < (byte *)*param_3) && (*local_58 == 10));
      }
      else {
        uVar7 = auVar12._8_4_;
        if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar7 - 1;
          return local_58;
        }
        uVar5 = *(ulong *)(param_1 + 8);
        if ((uVar5 & 1) == 0) {
          lVar6 = FUN_0030c8c0((ulong *)(param_1 + 8));
        }
        else {
          lVar6 = (uVar5 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_0030e020(auVar12._8_8_ & 0xffffffff,lVar6,local_58,param_3);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar5 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar5 & 1) == 0);
  }
  return local_58;
}


