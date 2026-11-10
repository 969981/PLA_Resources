/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032931e4; name: FUN_032931e4
 */


/* WARNING: Removing unreachable block (ram,0x0329350c) */

void FUN_032931e4(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 int param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [24];
  ulong *local_70;
  uint local_68;
  uint local_64;
  undefined8 *local_60;
  int local_58;
  uint local_54;
  
  FUN_0333e3f0(auStack_88);
  puVar1 = PTR_PTR_0434a080;
  if ((local_64 & 0x3ffffffc) < 0xc) {
    uVar4 = (local_64 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    if (uVar4 < 0xd) {
      uVar4 = 0xc;
    }
    local_70 = (ulong *)FUN_032bd1d4(PTR_PTR_0434a080,uVar4,0x10,local_70,local_68,&local_64);
  }
  fVar10 = (float)param_1 * 0.5257311;
  fVar13 = (float)param_1 * 0.8506508;
  if (local_68 != 0xc) {
    local_68 = 0xc;
  }
  fVar11 = -fVar10;
  fVar12 = -fVar13;
  uVar9 = (ulong)(uint)fVar11;
  uVar7 = (ulong)(uint)fVar10;
  local_70[1] = (ulong)(uint)fVar13;
  *local_70 = uVar9;
  local_70[3] = (ulong)(uint)fVar13;
  local_70[2] = uVar7;
  local_70[9] = uVar7;
  local_70[8] = (ulong)(uint)fVar13 << 0x20;
  local_70[0xb] = uVar9;
  local_70[10] = (ulong)(uint)fVar13 << 0x20;
  local_70[0x11] = 0;
  local_70[0x10] = CONCAT44(fVar10,fVar13);
  local_70[0x13] = 0;
  local_70[0x12] = CONCAT44(fVar10,fVar12);
  local_70[5] = (ulong)(uint)fVar12;
  local_70[4] = uVar9;
  local_70[7] = (ulong)(uint)fVar12;
  local_70[6] = uVar7;
  local_70[0xd] = uVar7;
  local_70[0xc] = (ulong)(uint)fVar12 << 0x20;
  local_70[0xf] = uVar9;
  local_70[0xe] = (ulong)(uint)fVar12 << 0x20;
  local_70[0x15] = 0;
  local_70[0x14] = CONCAT44(fVar11,fVar13);
  local_70[0x17] = 0;
  local_70[0x16] = CONCAT44(fVar11,fVar12);
  if ((local_54 & 0x3ffffffc) < 0x14) {
    uVar4 = (local_54 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    if (uVar4 < 0x15) {
      uVar4 = 0x14;
    }
    local_60 = (undefined8 *)FUN_032bd1d4(puVar1,uVar4,0x10,local_60,local_58,&local_54);
  }
  if (local_58 != 0x14) {
    local_58 = 0x14;
  }
  iVar2 = local_58;
  *local_60 = 0x400000001;
  local_60[1] = 0xffffffff00000000;
  local_60[2] = 0x900000004;
  local_60[3] = 0xffffffff00000000;
  local_60[4] = 0x500000004;
  local_60[5] = 0xffffffff00000009;
  local_60[6] = 0x500000008;
  local_60[7] = 0xffffffff00000004;
  local_60[10] = 0xa00000001;
  local_60[0xb] = 0xffffffff00000008;
  local_60[0xe] = 0x300000008;
  local_60[0xf] = 0xffffffff00000005;
  local_60[8] = 0x800000001;
  local_60[9] = 0xffffffff00000004;
  local_60[0x14] = 0xa00000003;
  local_60[0x15] = 0xffffffff00000007;
  local_60[0x12] = 0x700000003;
  local_60[0x13] = 0xffffffff00000002;
  local_60[0xc] = 0x30000000a;
  local_60[0xd] = 0xffffffff00000008;
  local_60[0x10] = 0x200000003;
  local_60[0x11] = 0xffffffff00000005;
  local_60[0x16] = 0x60000000a;
  local_60[0x17] = 0xffffffff00000007;
  local_60[0x18] = 0xb00000006;
  local_60[0x19] = 0xffffffff00000007;
  local_60[0x1a] = 6;
  local_60[0x1b] = 0xffffffff0000000b;
  local_60[0x1c] = 0x100000006;
  local_60[0x1d] = 0xffffffff00000000;
  local_60[0x1e] = 0x10000000a;
  local_60[0x1f] = 0xffffffff00000006;
  local_60[0x20] = 0xb;
  local_60[0x21] = 0xffffffff00000009;
  local_60[0x22] = 0xb00000002;
  local_60[0x23] = 0xffffffff00000009;
  local_60[0x24] = 0x200000005;
  local_60[0x25] = 0xffffffff00000009;
  local_60[0x26] = 0x20000000b;
  local_60[0x27] = 0xffffffff00000007;
  if (0 < local_58) {
    iVar6 = 0;
    do {
      FUN_03293630(param_1,auStack_88,iVar6,param_3);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  if (0 < (int)local_68) {
    if (local_68 == 1) {
      lVar5 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar5 = lVar3 + 2;
        uVar9 = (local_70 + lVar3 * 2)[1];
        uVar7 = local_70[lVar3 * 2];
        uVar8 = *param_2;
        (local_70 + lVar3 * 2)[1] =
             CONCAT44((float)(uVar9 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                      (float)uVar9 + (float)param_2[1]);
        local_70[lVar3 * 2] =
             CONCAT44((float)(uVar7 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                      (float)uVar7 + (float)uVar8);
        uVar8 = *param_2;
        local_70[lVar3 * 2 + 3] =
             CONCAT44((float)(local_70[lVar3 * 2 + 3] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                      (float)local_70[lVar3 * 2 + 3] + (float)param_2[1]);
        local_70[lVar3 * 2 + 2] =
             CONCAT44((float)(local_70[lVar3 * 2 + 2] >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                      (float)local_70[lVar3 * 2 + 2] + (float)uVar8);
        lVar3 = lVar5;
      } while ((ulong)local_68 - ((ulong)local_68 & 1) != lVar5);
      if ((local_68 & 1) == 0) goto LAB_03293570;
    }
    uVar8 = *param_2;
    uVar9 = (local_70 + lVar5 * 2)[1];
    uVar7 = local_70[lVar5 * 2];
    (local_70 + lVar5 * 2)[1] =
         CONCAT44((float)(uVar9 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                  (float)uVar9 + (float)param_2[1]);
    local_70[lVar5 * 2] =
         CONCAT44((float)(uVar7 >> 0x20) + (float)((ulong)uVar8 >> 0x20),(float)uVar7 + (float)uVar8
                 );
  }
LAB_03293570:
  if ((param_5 != -1) && (0 < local_58)) {
    lVar3 = 0;
    lVar5 = 0xc;
    do {
      *(int *)((long)local_60 + lVar5) = param_5;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 < local_58);
  }
  FUN_0333e7f0(param_4,auStack_88,0);
  FUN_0333e688(auStack_88);
  return;
}


