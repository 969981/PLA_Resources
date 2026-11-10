/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003beac4; name: FUN_003beac4
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_003beac4(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  size_t __n;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  uVar9 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar9) {
    if (param_2 < (byte *)*param_3) {
      if (param_2 < (byte *)*param_3) goto LAB_003beb40;
    }
    else {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
      if (param_2 < (byte *)*param_3) goto LAB_003beb40;
    }
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x35a);
                    /* try { // try from 003beb1c to 003beb2f has its CatchHandler @ 003bee80 */
    uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: ptr < end_: ");
                    /* try { // try from 003beb30 to 003beb37 has its CatchHandler @ 003bee7c */
    FUN_0030f41c(auStack_38,uVar3);
    FUN_0030f658(auStack_70);
LAB_003beb40:
    pbVar8 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar9) {
      pbVar5 = pbVar8;
      uVar10 = uVar9;
      do {
        uVar9 = uVar10 >> 7;
        uVar2 = uVar10 >> 0xe;
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar10 | 0x80;
        pbVar5 = pbVar8;
        uVar10 = uVar9;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar9;
    puVar11 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar11 + *(int *)(param_1 + 0x18);
    if (param_2 < (byte *)*param_3) goto LAB_003beb88;
LAB_003bebec:
    param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    puVar12 = puVar11 + 1;
    uVar9 = *puVar11;
    if (uVar9 < 0x80) goto LAB_003beb70;
    do {
      *param_2 = (byte)uVar9 | 0x80;
      uVar4 = (ulong)(long)(int)uVar9 >> 7;
      puVar11 = puVar12;
      if (((ulong)(long)(int)uVar9 >> 0xe & 0x3ffff) == 0) {
        param_2[1] = (byte)uVar4;
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 2;
        do {
          pbVar8 = param_2;
          uVar6 = uVar4 >> 7;
          pbVar8[-1] = (byte)uVar4 | 0x80;
          param_2 = pbVar8 + 1;
          uVar7 = uVar4 >> 0xe;
          uVar4 = uVar6;
        } while (uVar7 != 0);
        *pbVar8 = (byte)uVar6;
      }
      while( true ) {
        if (puVar1 <= puVar11) goto LAB_003bec0c;
        if ((byte *)*param_3 <= param_2) goto LAB_003bebec;
LAB_003beb88:
        puVar12 = puVar11 + 1;
        uVar9 = *puVar11;
        if (0x7f < uVar9) break;
LAB_003beb70:
        *param_2 = (byte)uVar9;
        puVar11 = puVar12;
        param_2 = param_2 + 1;
      }
    } while( true );
  }
LAB_003bec0c:
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 1) == 0) goto joined_r0x003becd0;
  pbVar8 = *(byte **)(param_1 + 0x30);
  if ((*pbVar8 & 1) == 0) {
    pbVar5 = pbVar8 + 1;
    uVar4 = (ulong)(*pbVar8 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar8 + 8);
    pbVar5 = *(byte **)(pbVar8 + 0x10);
  }
  FUN_0033b628(pbVar5,uVar4,1,"google.protobuf.GeneratedCodeInfo.Annotation.source_file");
  pbVar8 = *(byte **)(param_1 + 0x30);
  if ((*pbVar8 & 1) == 0) {
    __n = (size_t)(*pbVar8 >> 1);
LAB_003bec8c:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (byte)__n;
      pbVar5 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar5 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar5,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x003becd0;
    }
  }
  else {
    __n = *(size_t *)(pbVar8 + 8);
    if ((long)__n < 0x80) goto LAB_003bec8c;
  }
  param_2 = (byte *)FUN_003112b4(param_3,2,pbVar8,param_2);
joined_r0x003becd0:
  if ((uVar9 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    }
    uVar10 = *(uint *)(param_1 + 0x38);
    *param_2 = 0x18;
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      uVar4 = (ulong)(long)(int)uVar10 >> 7;
      if (((ulong)(long)(int)uVar10 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (byte)uVar4;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          pbVar8 = param_2;
          uVar6 = uVar4 >> 7;
          pbVar8[-1] = (byte)uVar4 | 0x80;
          param_2 = pbVar8 + 1;
          uVar7 = uVar4 >> 0xe;
          uVar4 = uVar6;
        } while (uVar7 != 0);
        *pbVar8 = (byte)uVar6;
      }
    }
  }
  if ((uVar9 >> 2 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_00310ec4(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x3c);
    *param_2 = 0x20;
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      uVar4 = (ulong)(long)(int)uVar9 >> 7;
      if (((ulong)(long)(int)uVar9 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (byte)uVar4;
        param_2 = param_2 + 3;
        uVar4 = *(ulong *)(param_1 + 8);
      }
      else {
        param_2 = param_2 + 3;
        do {
          pbVar8 = param_2;
          uVar6 = uVar4 >> 7;
          pbVar8[-1] = (byte)uVar4 | 0x80;
          param_2 = pbVar8 + 1;
          uVar7 = uVar4 >> 0xe;
          uVar4 = uVar6;
        } while (uVar7 != 0);
        *pbVar8 = (byte)uVar6;
        uVar4 = *(ulong *)(param_1 + 8);
      }
    }
  }
  if ((uVar4 & 1) != 0) {
    param_2 = (byte *)FUN_00311a94((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  }
  return param_2;
}


