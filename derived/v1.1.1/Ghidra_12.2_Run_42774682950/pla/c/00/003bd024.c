/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bd024; name: FUN_003bd024
 */


byte * FUN_003bd024(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  size_t sVar16;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [48];
  
  uVar11 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar11) {
    if (param_2 < (byte *)*param_3) {
      if (param_2 < (byte *)*param_3) goto LAB_003bd0a8;
    }
    else {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
      if (param_2 < (byte *)*param_3) goto LAB_003bd0a8;
    }
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 003bd084 to 003bd097 has its CatchHandler @ 003bd5e4 */
    uVar5 = FUN_0030f3ac(auStack_90,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003bd098 to 003bd09f has its CatchHandler @ 003bd5e0 */
    FUN_0030f41c(auStack_98,uVar5);
    FUN_0030f658(auStack_90);
LAB_003bd0a8:
    pbVar10 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar11) {
      pbVar6 = pbVar10;
      uVar13 = uVar11;
      do {
        uVar11 = uVar13 >> 7;
        uVar3 = uVar13 >> 0xe;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = (byte)uVar13 | 0x80;
        pbVar6 = pbVar10;
        uVar13 = uVar11;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar11;
    puVar14 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar14 + *(int *)(param_1 + 0x18);
    if (param_2 < (byte *)*param_3) goto LAB_003bd0f0;
LAB_003bd154:
    param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    puVar15 = puVar14 + 1;
    uVar11 = *puVar14;
    if (uVar11 < 0x80) goto LAB_003bd0d8;
    do {
      *param_2 = (byte)uVar11 | 0x80;
      uVar7 = (ulong)(long)(int)uVar11 >> 7;
      puVar14 = puVar15;
      if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 2;
        do {
          pbVar10 = param_2;
          uVar8 = uVar7 >> 7;
          pbVar10[-1] = (byte)uVar7 | 0x80;
          param_2 = pbVar10 + 1;
          uVar9 = uVar7 >> 0xe;
          uVar7 = uVar8;
        } while (uVar9 != 0);
        *pbVar10 = (byte)uVar8;
      }
      while( true ) {
        if (puVar1 <= puVar14) goto LAB_003bd174;
        if ((byte *)*param_3 <= param_2) goto LAB_003bd154;
LAB_003bd0f0:
        puVar15 = puVar14 + 1;
        uVar11 = *puVar14;
        if (0x7f < uVar11) break;
LAB_003bd0d8:
        *param_2 = (byte)uVar11;
        puVar14 = puVar15;
        param_2 = param_2 + 1;
      }
    } while( true );
  }
LAB_003bd174:
  uVar11 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar11) {
    if (param_2 < (byte *)*param_3) {
      if (param_2 < (byte *)*param_3) goto LAB_003bd1d0;
    }
    else {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
      if (param_2 < (byte *)*param_3) goto LAB_003bd1d0;
    }
    FUN_0030f640(auStack_90,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 003bd1ac to 003bd1bf has its CatchHandler @ 003bd5dc */
    uVar5 = FUN_0030f3ac(auStack_90,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003bd1c0 to 003bd1c7 has its CatchHandler @ 003bd5d8 */
    FUN_0030f41c(auStack_98,uVar5);
    FUN_0030f658(auStack_90);
LAB_003bd1d0:
    pbVar10 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar11) {
      pbVar6 = pbVar10;
      uVar13 = uVar11;
      do {
        uVar11 = uVar13 >> 7;
        uVar3 = uVar13 >> 0xe;
        pbVar10 = pbVar6 + 1;
        *pbVar6 = (byte)uVar13 | 0x80;
        pbVar6 = pbVar10;
        uVar13 = uVar11;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar11;
    puVar14 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar14 + *(int *)(param_1 + 0x30);
    if (param_2 < (byte *)*param_3) goto LAB_003bd218;
LAB_003bd27c:
    param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    puVar15 = puVar14 + 1;
    uVar11 = *puVar14;
    if (uVar11 < 0x80) goto LAB_003bd200;
    do {
      *param_2 = (byte)uVar11 | 0x80;
      uVar7 = (ulong)(long)(int)uVar11 >> 7;
      puVar14 = puVar15;
      if (((ulong)(long)(int)uVar11 >> 0xe & 0x3ffff) == 0) {
        param_2[1] = (byte)uVar7;
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 2;
        do {
          pbVar10 = param_2;
          uVar8 = uVar7 >> 7;
          pbVar10[-1] = (byte)uVar7 | 0x80;
          param_2 = pbVar10 + 1;
          uVar9 = uVar7 >> 0xe;
          uVar7 = uVar8;
        } while (uVar9 != 0);
        *pbVar10 = (byte)uVar8;
      }
      while( true ) {
        if (puVar1 <= puVar14) goto LAB_003bd29c;
        if ((byte *)*param_3 <= param_2) goto LAB_003bd27c;
LAB_003bd218:
        puVar15 = puVar14 + 1;
        uVar11 = *puVar14;
        if (0x7f < uVar11) break;
LAB_003bd200:
        *param_2 = (byte)uVar11;
        puVar14 = puVar15;
        param_2 = param_2 + 1;
      }
    } while( true );
  }
LAB_003bd29c:
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x60);
    if ((*pbVar10 & 1) == 0) {
      pbVar6 = pbVar10 + 1;
      uVar7 = (ulong)(*pbVar10 >> 1);
    }
    else {
      uVar7 = *(ulong *)(pbVar10 + 8);
      pbVar6 = *(byte **)(pbVar10 + 0x10);
    }
    FUN_0033b628(pbVar6,uVar7,1,"google.protobuf.SourceCodeInfo.Location.leading_comments");
    pbVar10 = *(byte **)(param_1 + 0x60);
    if ((*pbVar10 & 1) == 0) {
      sVar16 = (size_t)(*pbVar10 >> 1);
LAB_003bd304:
      if ((long)sVar16 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x1a;
        param_2[1] = (byte)sVar16;
        pbVar6 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar6 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar16);
        param_2 = param_2 + 2 + sVar16;
        goto joined_r0x003bd4e0;
      }
    }
    else {
      sVar16 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar16 < 0x80) goto LAB_003bd304;
    }
    param_2 = (byte *)FUN_003112b4(param_3,3,pbVar10,param_2);
  }
joined_r0x003bd4e0:
  if ((uVar11 >> 1 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    goto joined_r0x003bd2b0;
  }
  pbVar10 = *(byte **)(param_1 + 0x68);
  if ((*pbVar10 & 1) == 0) {
    pbVar6 = pbVar10 + 1;
    uVar7 = (ulong)(*pbVar10 >> 1);
  }
  else {
    uVar7 = *(ulong *)(pbVar10 + 8);
    pbVar6 = *(byte **)(pbVar10 + 0x10);
  }
  FUN_0033b628(pbVar6,uVar7,1,"google.protobuf.SourceCodeInfo.Location.trailing_comments");
  pbVar10 = *(byte **)(param_1 + 0x68);
  if ((*pbVar10 & 1) == 0) {
    sVar16 = (size_t)(*pbVar10 >> 1);
LAB_003bd398:
    if ((long)sVar16 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x22;
      param_2[1] = (byte)sVar16;
      pbVar6 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar6 = pbVar10 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar16);
      param_2 = param_2 + 2 + sVar16;
      iVar2 = *(int *)(param_1 + 0x50);
      goto joined_r0x003bd2b0;
    }
  }
  else {
    sVar16 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar16 < 0x80) goto LAB_003bd398;
  }
  param_2 = (byte *)FUN_003112b4(param_3,4,pbVar10,param_2);
  iVar2 = *(int *)(param_1 + 0x50);
joined_r0x003bd2b0:
  if (0 < iVar2) {
    iVar12 = 0;
    do {
      while( true ) {
        pbVar6 = (byte *)FUN_0032b79c(param_1 + 0x48,iVar12);
        pbVar10 = *(byte **)(pbVar6 + 0x10);
        bVar4 = (*pbVar6 & 1) == 0;
        if (bVar4) {
          pbVar10 = pbVar6 + 1;
        }
        uVar11 = (uint)(*pbVar6 >> 1);
        if (!bVar4) {
          uVar11 = *(uint *)(pbVar6 + 8);
        }
        FUN_0033b628(pbVar10,uVar11,1,
                     "google.protobuf.SourceCodeInfo.Location.leading_detached_comments");
        if ((*pbVar6 & 1) == 0) break;
        sVar16 = *(size_t *)(pbVar6 + 8);
        if ((long)sVar16 < 0x80) goto LAB_003bd450;
LAB_003bd4a4:
        param_2 = (byte *)FUN_00311488(param_3,6,pbVar6,param_2);
        iVar12 = iVar12 + 1;
        if (iVar2 == iVar12) goto LAB_003bd508;
      }
      sVar16 = (size_t)(*pbVar6 >> 1);
LAB_003bd450:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar16) goto LAB_003bd4a4;
      *param_2 = 0x32;
      param_2[1] = (byte)sVar16;
      pbVar10 = pbVar6 + 1;
      if ((*pbVar6 & 1) != 0) {
        pbVar10 = *(byte **)(pbVar6 + 0x10);
      }
      memcpy(param_2 + 2,pbVar10,sVar16);
      param_2 = param_2 + 2 + sVar16;
      iVar12 = iVar12 + 1;
    } while (iVar2 != iVar12);
  }
LAB_003bd508:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_00311a94((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,
                                   param_3);
  }
  return param_2;
}


