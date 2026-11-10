/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00220c54; name: FUN_00220c54
 */


void FUN_00220c54(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  ScalableFontEngine *this;
  long lVar17;
  ulong uVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  void *pvVar28;
  long lVar29;
  ulong uVar30;
  size_t __n;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined1 uStack_9c7;
  undefined2 uStack_9c6;
  short sStack_9c4;
  short sStack_9c2;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined2 uStack_9b0;
  short local_9ae;
  undefined2 local_9ac;
  short sStack_9aa;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  long local_998;
  undefined8 uStack_990;
  ushort local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*param_3 & *param_3 - 1) == 0) && (*(long *)(param_3 + 2) != 0)) {
    puVar1 = param_3 + 0x5a86;
    uVar14 = *puVar1;
    if (uVar14 - 1 < 0x20) {
      uVar18 = 0;
      uVar27 = 0;
      while (lVar17 = uVar18 + 0x5a87, param_3[lVar17] - 1 < 0x10) {
        uVar18 = uVar18 + 1;
        uVar27 = (ulong)(param_3[lVar17] + (int)uVar27);
        if (uVar14 <= uVar18) {
          uVar18 = 0;
          iVar26 = 0;
          lVar17 = param_1 + 0x1888;
          if (uVar14 != 0) goto LAB_00220d38;
          do {
            *(undefined1 *)(lVar17 + uVar18) = 0;
            *(undefined8 *)(lVar17 + uVar18 * 8 + 0x20) = 0;
            while( true ) {
              if (uVar18 == 0x1f) {
                lVar17 = 0;
                pcVar19 = (char *)(param_1 + 0x19a9);
                do {
                  cVar11 = (char)lVar17;
                  pcVar19[-1] = cVar11;
                  *pcVar19 = cVar11 + '\x01';
                  lVar17 = lVar17 + 4;
                  pcVar19[1] = cVar11 + '\x02';
                  pcVar19[2] = cVar11 + '\x03';
                  pcVar19 = pcVar19 + 4;
                } while (lVar17 != 0x200);
                uVar14 = *puVar1;
                goto LAB_00220dbc;
              }
              uVar18 = uVar18 + 1;
              if (*puVar1 <= uVar18) break;
LAB_00220d38:
              *(char *)(lVar17 + uVar18) = (char)param_3[uVar18 + 0x5a87];
              *(ulong *)(lVar17 + uVar18 * 8 + 0x20) = param_1 + (ulong)(byte)iVar26 + 0x19a8;
              iVar26 = iVar26 + param_3[uVar18 + 0x5a87];
            }
          } while( true );
        }
      }
      uVar27 = 0;
LAB_00220dbc:
      *(uint *)(param_1 + 0x1884) = uVar14;
      *(char *)(param_1 + 0x1bd1) = (char)param_3[0x5cae];
      *(uint *)(param_1 + 0x1bd4) = param_3[0x5caf];
      puVar5 = PTR_GetCurrentCoreNumber_04372918;
      if (*(undefined **)(param_3 + 0x5cb0) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb0);
      }
      *(undefined **)(param_1 + 0x1bd8) = puVar5;
      puVar5 = PTR_LAB_04372920;
      if (*(undefined **)(param_3 + 0x5cb2) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb2);
      }
      *(undefined **)(param_1 + 0x1be0) = puVar5;
      puVar5 = PTR_LAB_04372928;
      if (*(undefined **)(param_3 + 0x5cb4) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5cb4);
      }
      *(undefined **)(param_1 + 0x1be8) = puVar5;
      iVar26 = (int)uVar27;
      uVar16 = (**(code **)(param_3 + 2))((long)(iVar26 * 0x32),4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x18) = uVar16;
      lVar29 = (long)iVar26;
      uVar16 = (**(code **)(param_3 + 2))((long)iVar26 * 0x1c,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf0) = uVar16;
      uVar30 = -(uVar27 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2;
      uVar16 = (**(code **)(param_3 + 2))(uVar30,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf8) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c00) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c08) = uVar16;
      uVar18 = -(uVar27 >> 0x1f) & 0xfffffffe00000000 | uVar27 << 1;
      uVar16 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c10) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c18) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(lVar29,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c20) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c28) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(uVar30,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c30) = uVar16;
      uVar18 = -(uVar27 >> 0x1f) & 0xffffffc000000000 | uVar27 << 6;
      uVar16 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c38) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))(uVar18,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c40) = uVar16;
      uVar16 = (**(code **)(param_3 + 2))
                         (-(uVar27 >> 0x1f) & 0xfffffff800000000 | uVar27 << 3,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c48) = uVar16;
      *(uint *)(param_1 + 0x28) = *param_3;
      *(uint *)(param_1 + 0x2c) = param_3[1];
      *(undefined4 *)(param_1 + 0x1ba8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1bcc) = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 0;
      *(undefined8 *)(param_1 + 0x1bac) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bb4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bbc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc4) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x1c50) = *(undefined1 *)((long)param_3 + 0x172d9);
      lVar17 = 0xb8;
      this = (ScalableFontEngine *)(**(code **)(param_3 + 2))(0xb8,4,*(undefined8 *)(param_3 + 4));
      *(ScalableFontEngine **)(param_1 + 8) = this;
      nn::fontll::ScalableFontEngine::ScalableFontEngine(this);
      if (*(char *)(param_1 + 0x1bd1) != '\0') {
        lVar17 = (ulong)*(uint *)(param_1 + 0x1bd4) * 0xb8;
      }
      uVar16 = (**(code **)(param_3 + 2))(lVar17,4,*(undefined8 *)(param_3 + 4));
      lVar17 = 0;
      uVar18 = 0;
      *(undefined8 *)(param_1 + 0x10) = uVar16;
      if (*(char *)(param_1 + 0x1bd1) == '\0') goto LAB_00220fe4;
      while (uVar18 < *(uint *)(param_1 + 0x1bd4)) {
        while( true ) {
          nn::fontll::ScalableFontEngine::ScalableFontEngine
                    ((ScalableFontEngine *)(*(long *)(param_1 + 0x10) + lVar17));
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0xb8;
          if (*(char *)(param_1 + 0x1bd1) != '\0') break;
LAB_00220fe4:
          bVar13 = uVar18 != 0;
          uVar18 = 0;
          if (bVar13) goto LAB_00221010;
        }
      }
LAB_00221010:
      pvVar28 = *(void **)(param_1 + 8);
      uVar14 = (**(code **)(param_3 + 2))
                         (*(undefined8 *)(param_3 + 0x5aa8),4,*(undefined8 *)(param_3 + 4));
      nn::fontll::ScalableFontEngine::Initialize(pvVar28,uVar14);
      nn::fontll::ScalableFontEngine::GetError();
      lVar17 = 0;
      uVar18 = 0;
      if (*(char *)(param_1 + 0x1bd1) == '\0') goto LAB_00221064;
      while (uVar18 < *(uint *)(param_1 + 0x1bd4)) {
        while( true ) {
          lVar23 = *(long *)(param_1 + 0x10);
          if ((char)param_3[0x5aac] == '\0') {
            uVar14 = (**(code **)(param_3 + 2))
                               (*(long *)(param_3 + 0x5aaa) * lVar29,4,*(undefined8 *)(param_3 + 4))
            ;
          }
          else {
            uVar14 = (**(code **)(param_3 + 2))
                               (*(long *)(param_3 + 0x5aaa),4,*(undefined8 *)(param_3 + 4));
          }
          nn::fontll::ScalableFontEngine::Initialize((void *)(lVar23 + lVar17),uVar14);
          nn::fontll::ScalableFontEngine::GetError();
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0xb8;
          if (*(char *)(param_1 + 0x1bd1) != '\0') break;
LAB_00221064:
          bVar13 = uVar18 != 0;
          uVar18 = 0;
          if (bVar13) goto LAB_002210e0;
        }
      }
LAB_002210e0:
      uVar14 = *(uint *)(param_1 + 0x1884);
      if (uVar14 != 0) {
        uVar18 = 0;
        uVar27 = 0;
        do {
          pbVar2 = (byte *)(param_1 + uVar18 + 0x1888);
          if (*pbVar2 != 0) {
            uVar30 = 0;
            do {
              pvVar28 = *(void **)(param_3 + uVar18 * 0x20 + uVar30 * 2 + 6);
              if ((param_3[uVar18 * 0x10 + uVar30 + 0xe86] & 0xfffffffe) == 2) {
                pvVar28 = (void *)nn::fontll::ScalableFontEngineHelper::Decode
                                            (pvVar28,param_3[uVar18 * 0x20 + uVar30 * 2 + 0x406]);
              }
              uVar21 = -(uVar27 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2;
              iVar26 = (int)uVar27;
              lVar23 = (long)iVar26;
              *(int *)(*(long *)(param_1 + 0x1bf8) + uVar21) =
                   (int)((float)param_3[uVar18 * 0x10 + uVar30 + 0x806] * 65536.0);
              lVar17 = uVar30 + uVar18 * 0x10;
              uVar22 = -(uVar27 >> 0x1f) & 0xfffffffe00000000 | uVar27 << 1;
              *(undefined1 *)(*(long *)(param_1 + 0x1c00) + lVar23) =
                   *(undefined1 *)((long)param_3 + lVar17 + 0x2818);
              pcVar19 = (char *)((long)param_3 + lVar17 + 0x4418);
              *(char *)(*(long *)(param_1 + 0x1c08) + lVar23) = *pcVar19;
              lVar29 = uVar30 * 2 + uVar18 * 0x20;
              *(undefined2 *)(*(long *)(param_1 + 0x1c10) + uVar22) =
                   *(undefined2 *)((long)param_3 + lVar29 + 0x4618);
              pcVar3 = (char *)((long)param_3 + lVar17 + 0x4a18);
              *(char *)(*(long *)(param_1 + 0x1c18) + lVar23) = *pcVar3;
              *(undefined1 *)(*(long *)(param_1 + 0x1c20) + lVar23) =
                   *(undefined1 *)((long)param_3 + lVar17 + 0x4c18);
              *(undefined2 *)(*(long *)(param_1 + 0x1c28) + uVar22) =
                   *(undefined2 *)((long)param_3 + lVar29 + 0x4e18);
              *(uint *)(*(long *)(param_1 + 0x1c30) + uVar21) =
                   param_3[uVar18 * 0x10 + uVar30 + 0x1886];
              uVar21 = -(uVar27 >> 0x1f) & 0xffffffc000000000 | uVar27 << 6;
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a86];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a86];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 4) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a87];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 4) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a87];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 8) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a88];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 8) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a88];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0xc) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a89];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0xc) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a89];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x10) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8a];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x10) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8a];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x14) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8b];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x14) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8b];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x18) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8c];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x18) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8c];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x1c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8d];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x1c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8d];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x20) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8e];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x20) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8e];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x24) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a8f];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x24) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a8f];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x28) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a90];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x28) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a90];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x2c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a91];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x2c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a91];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x30) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a92];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x30) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a92];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x34) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a93];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x34) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a93];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x38) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a94];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x38) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a94];
              *(uint *)(*(long *)(param_1 + 0x1c38) + uVar21 + 0x3c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x1a95];
              *(uint *)(*(long *)(param_1 + 0x1c40) + uVar21 + 0x3c) =
                   param_3[uVar18 * 0x100 + uVar30 * 0x10 + 0x3a95];
              nn::fontll::ScalableFontEngine::LoadFont
                        (*(char **)(param_1 + 8),
                         (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar26 * 0x32)),
                         (uint)pvVar28,param_3[uVar18 * 0x10 + uVar30 + 0x5aae]);
              nn::fontll::ScalableFontEngine::GetError();
              lVar17 = 0;
              uVar21 = 0;
              if (*(char *)(param_1 + 0x1bd1) == '\0') goto LAB_002214b0;
              while (uVar21 < *(uint *)(param_1 + 0x1bd4)) {
                while( true ) {
                  nn::fontll::ScalableFontEngine::LoadFont
                            ((char *)(*(long *)(param_1 + 0x10) + lVar17),
                             (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar26 * 0x32)),
                             (uint)pvVar28,param_3[uVar18 * 0x10 + uVar30 + 0x5aae]);
                  nn::fontll::ScalableFontEngine::GetError();
                  uVar21 = uVar21 + 1;
                  lVar17 = lVar17 + 0xb8;
                  if (*(char *)(param_1 + 0x1bd1) != '\0') break;
LAB_002214b0:
                  bVar13 = uVar21 != 0;
                  uVar21 = 0;
                  if (bVar13) goto LAB_002214f8;
                }
              }
LAB_002214f8:
              FUN_00221a20(param_1,uVar27);
              nn::fontll::ScalableFontEngine::GetFontMetrics(*(Metrics **)(param_1 + 8));
              nn::fontll::ScalableFontEngine::GetError();
              sVar12 = *(short *)((long)param_3 + lVar29 + 0x5a18);
              if (sVar12 != 0) {
                sStack_9c4 = sVar12;
                sStack_9aa = sVar12;
              }
              sVar12 = *(short *)((long)param_3 + lVar29 + 0x5e18);
              if (sVar12 != 0) {
                local_9ae = -sVar12;
                sStack_9c2 = sVar12;
              }
              fVar31 = (float)NEON_ucvtf((uint)local_98);
              lVar17 = lVar23 * 0x1c;
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 8) = (float)(int)sStack_9aa / fVar31
              ;
              fVar31 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 0xc) =
                   (float)((int)sStack_9aa - (int)local_9ae) / fVar31;
              fVar31 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar17) = (float)(int)sStack_9c4 / fVar31;
              fVar31 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 4) =
                   (float)((int)sStack_9c2 + (int)sStack_9c4) / fVar31;
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 0x10) =
                   param_3[uVar18 * 0x10 + uVar30 + 0xa86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 0x14) =
                   param_3[uVar18 * 0x10 + uVar30 + 0xc86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar17 + 0x18) =
                   param_3[uVar18 * 0x10 + uVar30 + 0x1486];
              if ((((param_3[uVar18 * 0x10 + uVar30 + 0xe86] | 2) == 3) && (*pcVar19 == '\0')) &&
                 (*pcVar3 == '\0')) {
                uVar16 = nn::fontll::ScalableFontEngine::InitializeOtfKerningTable
                                   (*(_func_void_ptr_ulong_ulong_void_ptr **)(param_1 + 8),
                                    *(void **)(param_3 + 2),SUB81(*(undefined8 *)(param_3 + 4),0));
              }
              else {
                uVar16 = 0;
              }
              *(undefined8 *)(*(long *)(param_1 + 0x1c48) + lVar23 * 8) = uVar16;
              uVar30 = uVar30 + 1;
              uVar27 = (ulong)(iVar26 + 1);
            } while (uVar30 < *pbVar2);
            uVar14 = *(uint *)(param_1 + 0x1884);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar14);
        if (uVar14 != 0) {
          lVar17 = 0;
          uVar20 = 0;
          pbVar2 = (byte *)(param_1 + 0x1888);
          bVar10 = *pbVar2;
          do {
            uVar24 = (uint)bVar10;
            if ((ulong)bVar10 == 0) {
LAB_00221690:
              if ((ulong)uVar14 <= lVar17 + 1U) break;
            }
            else {
              lVar29 = (ulong)uVar20 * 0x1c;
              uVar33 = 0;
              uVar34 = 0;
              fVar31 = 0.0;
              uVar32 = 0;
              lVar25 = 0;
              pcVar19 = (char *)(*(long *)(param_1 + 0x1c20) + (ulong)uVar20);
              cVar11 = *pcVar19;
              lVar23 = lVar29;
              while( true ) {
                if (cVar11 == '\0') {
                  puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar23);
                  if (fVar31 < (float)puVar4[3]) {
                    uVar33 = puVar4[1];
                    uVar32 = puVar4[2];
                    uVar34 = *puVar4;
                    fVar31 = (float)puVar4[3];
                  }
                }
                if ((ulong)bVar10 <= lVar25 + 1U) break;
                lVar25 = lVar25 + 1;
                lVar23 = lVar23 + 0x1c;
                cVar11 = pcVar19[lVar25];
              }
              if (uVar24 == 0) goto LAB_00221690;
              uVar18 = 0;
              do {
                *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar29 + 8) = uVar32;
                *(float *)(*(long *)(param_1 + 0x1bf0) + lVar29 + 0xc) = fVar31;
                *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar29) = uVar34;
                lVar23 = *(long *)(param_1 + 0x1bf0) + lVar29;
                lVar29 = lVar29 + 0x1c;
                *(undefined4 *)(lVar23 + 4) = uVar33;
                uVar18 = uVar18 + 1;
              } while (uVar18 < *pbVar2);
              uVar14 = *(uint *)(param_1 + 0x1884);
              uVar24 = (uint)*pbVar2;
              if ((ulong)uVar14 <= lVar17 + 1U) break;
            }
            uVar20 = uVar20 + uVar24;
            lVar17 = lVar17 + 1;
            pbVar2 = (byte *)(param_1 + lVar17 + 0x1888);
            bVar10 = *pbVar2;
          } while( true );
        }
      }
      iVar26 = *(int *)(param_1 + 0x28);
      iVar7 = *(int *)(param_1 + 0x2c);
      FUN_0021f4b4(param_1 + 0x1ea8,*(undefined8 *)(param_1 + 0x20),8,iVar26,iVar7,1,1);
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_9e8 = 0;
      uStack_9e4 = 0;
      uStack_9e0 = 0;
      local_9f8 = 0;
      uStack_9f4 = 0;
      uStack_9f0 = 0;
      uStack_9ec = 0;
      local_a08 = 0;
      uStack_a00 = 0;
      uStack_9fc = 0;
      uVar33 = *(undefined4 *)(param_1 + 0x28);
      uVar32 = *(undefined4 *)(param_1 + 0x2c);
      FUN_00876d98(&local_a08);
      uVar16 = local_a08;
      uStack_9ec = 1;
      local_9e8 = 1;
      uStack_9fc = 0x201;
      local_9f8 = 0x20;
      local_a08._4_4_ = SUB84(uVar16,4);
      local_a08._0_4_ = CONCAT22(1,CONCAT11(2,(undefined1)local_a08));
      local_a08 = CONCAT26(1,(undefined6)local_a08);
      uVar34 = *(undefined4 *)(param_1 + 0x28);
      uVar8 = *(undefined4 *)(param_1 + 0x2c);
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      uStack_9f4 = uVar33;
      uStack_9f0 = uVar32;
      FUN_00876d98(&local_9c8);
      uStack_9b0 = (undefined2)uVar8;
      local_9ae = (short)((uint)uVar8 >> 0x10);
      local_9ac = 1;
      sStack_9aa = 0;
      uStack_9a8 = 1;
      uStack_9c7 = 2;
      uStack_9bc = 0x201;
      local_9b8 = 0x20;
      uStack_9c6 = 1;
      sStack_9c2 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_9b4 = uVar34;
      FUN_00876bb0(&local_88);
      local_88 = CONCAT44(local_88._4_4_,0x22);
      uVar27 = FUN_0087e978(param_2,&local_9c8);
      uVar18 = FUN_00878468(param_2,&local_88);
      iVar6 = *(int *)(param_1 + 0x28);
      iVar9 = *(int *)(param_1 + 0x2c);
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN_00876bb0(&local_9c8);
      local_9c8 = 0x22;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      iVar15 = FUN_00878470(param_2,&local_9c8);
      uVar14 = (iVar15 + iVar9 * iVar6) - 1U & -iVar15;
      __n = (size_t)(int)uVar14;
      if (param_4 == 0) {
        if (uVar18 <= uVar27) {
          uVar18 = uVar27;
        }
        pvVar28 = (void *)(**(code **)(param_3 + 2))(__n,uVar18,*(undefined8 *)(param_3 + 4));
        *(void **)(param_1 + 0x20) = pvVar28;
        memset(pvVar28,0,__n);
        local_9b8 = 0;
        uStack_9b4 = 0;
        uStack_9b0 = 0;
        local_9ae = 0;
        local_9ac = 0;
        sStack_9aa = 0;
        local_9c8 = 0;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = 0;
        sStack_9c2 = 0;
        local_9c0 = 0;
        uStack_9bc = 0;
        FUN_00876bb0(&local_9c8);
        local_9c8 = 0x22;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = (short)uVar14;
        sStack_9c2 = (short)(uVar14 >> 0x10);
        local_9c0 = (undefined4)*(undefined8 *)(param_1 + 0x20);
        uStack_9bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
        param_4 = param_1 + 0x1d78;
        FUN_00878498(param_4,param_2,&local_9c8);
        FUN_0087ea9c(param_1 + 0x1c58,param_2,&local_a08,param_4,0,iVar7 * iVar26);
        param_5 = 0;
      }
      else {
        lVar17 = FUN_00878558(param_4);
        *(void **)(param_1 + 0x20) = (void *)(lVar17 + param_5);
        memset((void *)(lVar17 + param_5),0,__n);
        FUN_0087856c(param_4);
        FUN_0087ea9c(param_1 + 0x1c58,param_2,&local_a08,param_4,param_5,param_6);
      }
      *(long *)(param_1 + 0x1e98) = param_4;
      *(long *)(param_1 + 0x1ea0) = param_5;
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      uStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN_00876dc8(&local_9c8);
      sStack_9c4 = 0x201;
      sStack_9c2 = 0;
      local_9c0 = 0x2010101;
      local_998 = param_1 + 0x1c58;
      local_9c8 = 1;
      FUN_0087ebc0(param_1 + 0x1d30,param_2,&local_9c8);
      FUN_002233d0(param_1 + 0x30,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),
                   param_3[0x5aad]);
      if ((char)param_3[0x5cb6] != '\0') {
        nn::fontll::ScalableFontEngine::SetAutoHint(SUB81(*(undefined8 *)(param_1 + 8),0));
      }
    }
  }
  return;
}


