/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032ba34; name: FUN_0032ba34
 */


void FUN_0032ba34(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_90 [48];
  undefined1 auStack_58 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x6fb);
                    /* try { // try from 0032ba78 to 0032ba8b has its CatchHandler @ 0032bc98 */
    uVar6 = FUN_0030f3ac(auStack_90,"CHECK failed: (&other) != (this): ");
                    /* try { // try from 0032ba8c to 0032ba93 has its CatchHandler @ 0032bc94 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_90);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    lVar15 = param_2[2];
    lVar7 = FUN_0032beb0(param_1,iVar1);
    iVar2 = (int)param_1[1];
    iVar14 = *(int *)param_1[2];
    iVar3 = iVar14 - iVar2;
    if (0 < iVar3 && 0 < iVar1) {
      lVar12 = 0;
      do {
        pbVar11 = *(byte **)(lVar15 + 8 + lVar12 * 8);
        pbVar8 = *(byte **)(lVar7 + lVar12 * 8);
        if (pbVar8 != pbVar11) {
          if ((*pbVar11 & 1) == 0) {
            pbVar9 = pbVar11 + 1;
            uVar10 = (ulong)(*pbVar11 >> 1);
          }
          else {
            uVar10 = *(ulong *)(pbVar11 + 8);
            pbVar9 = *(byte **)(pbVar11 + 0x10);
          }
          FUN_00291910(pbVar8,pbVar9,uVar10);
        }
        lVar12 = lVar12 + 1;
      } while ((lVar12 < iVar3) && (lVar12 < iVar1));
    }
    puVar5 = PTR_LAB_043730d0;
    puVar4 = PTR_FUN_04373078;
    if (iVar3 < iVar1) {
      lVar13 = *param_1;
      lVar12 = (long)iVar3 * 8;
      if (lVar13 == 0) {
        puVar16 = (undefined8 *)(lVar12 + lVar15);
        iVar14 = (iVar2 + iVar1) - iVar14;
        puVar17 = (undefined8 *)(lVar7 + lVar12);
        do {
          puVar16 = puVar16 + 1;
          pbVar11 = (byte *)*puVar16;
          pbVar8 = (byte *)FUN_002e2e80(puVar4,0x18);
          if (pbVar8 != (byte *)0x0) {
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
          }
          if (pbVar11 != pbVar8) {
            if ((*pbVar11 & 1) == 0) {
              pbVar9 = pbVar11 + 1;
              uVar10 = (ulong)(*pbVar11 >> 1);
            }
            else {
              uVar10 = *(ulong *)(pbVar11 + 8);
              pbVar9 = *(byte **)(pbVar11 + 0x10);
            }
            FUN_00291910(pbVar8,pbVar9,uVar10);
          }
          iVar14 = iVar14 + -1;
          *puVar17 = pbVar8;
          puVar17 = puVar17 + 1;
        } while (iVar14 != 0);
      }
      else {
        puVar16 = (undefined8 *)(lVar12 + lVar15 + 8);
        iVar14 = (iVar2 + iVar1) - iVar14;
        pbVar8 = (byte *)*puVar16;
        lVar15 = *(long *)(lVar13 + 0x70);
        puVar17 = (undefined8 *)(lVar7 + lVar12);
        while( true ) {
          if (lVar15 != 0) {
            FUN_0032cf88(lVar13,0,0x18);
          }
          pbVar11 = (byte *)FUN_0032c850(lVar13,0x18,puVar5);
          pbVar11[0] = 0;
          pbVar11[1] = 0;
          pbVar11[2] = 0;
          pbVar11[3] = 0;
          pbVar11[4] = 0;
          pbVar11[5] = 0;
          pbVar11[6] = 0;
          pbVar11[7] = 0;
          pbVar11[8] = 0;
          pbVar11[9] = 0;
          pbVar11[10] = 0;
          pbVar11[0xb] = 0;
          pbVar11[0xc] = 0;
          pbVar11[0xd] = 0;
          pbVar11[0xe] = 0;
          pbVar11[0xf] = 0;
          pbVar11[0x10] = 0;
          pbVar11[0x11] = 0;
          pbVar11[0x12] = 0;
          pbVar11[0x13] = 0;
          pbVar11[0x14] = 0;
          pbVar11[0x15] = 0;
          pbVar11[0x16] = 0;
          pbVar11[0x17] = 0;
          if (pbVar8 != pbVar11) {
            if ((*pbVar8 & 1) == 0) {
              pbVar9 = pbVar8 + 1;
              uVar10 = (ulong)(*pbVar8 >> 1);
            }
            else {
              uVar10 = *(ulong *)(pbVar8 + 8);
              pbVar9 = *(byte **)(pbVar8 + 0x10);
            }
            FUN_00291910(pbVar11,pbVar9,uVar10);
          }
          puVar16 = puVar16 + 1;
          iVar14 = iVar14 + -1;
          *puVar17 = pbVar11;
          if (iVar14 == 0) break;
          pbVar8 = (byte *)*puVar16;
          lVar15 = *(long *)(lVar13 + 0x70);
          puVar17 = puVar17 + 1;
        }
      }
    }
    iVar1 = (int)param_1[1] + iVar1;
    *(int *)(param_1 + 1) = iVar1;
    if (*(int *)param_1[2] < iVar1) {
      *(int *)param_1[2] = iVar1;
    }
  }
  return;
}


