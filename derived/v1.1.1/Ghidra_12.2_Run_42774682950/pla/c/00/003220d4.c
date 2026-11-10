/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003220d4; name: FUN_003220d4
 */


undefined8 * FUN_003220d4(long param_1,int param_2,int param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte unaff_w26;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  undefined8 *local_48;
  
  puVar13 = *(undefined8 **)(param_1 + 0x10);
  if (puVar13 != (undefined8 *)0x0) {
    if (puVar13 == (undefined8 *)(param_1 + 0x28)) {
      uVar6 = **(undefined8 **)(param_1 + 8);
      puVar13[1] = (*(undefined8 **)(param_1 + 8))[1];
      *puVar13 = uVar6;
      if (0 < *(int *)(param_1 + 0x54)) {
        if (-1 < param_3) {
          if (param_2 < 0) {
            FUN_0030f640(auStack_80,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                         ,0x35);
                    /* try { // try from 003221cc to 003221df has its CatchHandler @ 003225dc */
            uVar6 = FUN_0030f3ac(auStack_80,"CHECK failed: overrun >= 0: ");
                    /* try { // try from 003221e0 to 003221e7 has its CatchHandler @ 003225d8 */
            FUN_0030f41c(&local_48,uVar6);
            FUN_0030f658(auStack_80);
LAB_003221f0:
            pbVar2 = (byte *)(param_1 + 0x38);
            pbVar12 = (byte *)(param_1 + param_2 + 0x28);
            pbVar11 = (byte *)(param_1 + param_2 + 0x29);
            uVar10 = (uint)*pbVar12;
            if (-1 < (char)*pbVar12) goto LAB_00322244;
LAB_003222a0:
            uVar10 = (uVar10 + (uint)pbVar12[1] * 0x80) - 0x80;
            pbVar5 = pbVar12 + 2;
            if ((char)pbVar12[1] < '\0') {
              bVar4 = pbVar12[2];
              uVar10 = (uVar10 + (uint)bVar4 * 0x4000) - 0x4000;
              if ((char)bVar4 < '\0') {
                uVar10 = (uVar10 + (uint)pbVar12[3] * 0x200000) - 0x200000;
                if ((char)pbVar12[3] < '\0') {
                  if ((char)pbVar12[4] < 0) goto switchD_0032226c_default;
                  uVar10 = uVar10 + (char)pbVar12[4] * 0x10000000 + 0xf0000000;
                  pbVar5 = pbVar11 + 4;
                }
                else {
                  pbVar5 = pbVar11 + 3;
                }
              }
              else {
                pbVar5 = pbVar11 + 2;
              }
            }
            pbVar11 = pbVar5;
            if (pbVar11 <= pbVar2) {
              do {
                if (uVar10 == 0) goto LAB_00322534;
                pbVar12 = pbVar11;
                switch(uVar10 & 7) {
                case 0:
                  pbVar12 = (byte *)FUN_00323ec0(pbVar11,auStack_80);
                  unaff_w26 = unaff_w26 & pbVar12 != (byte *)0x0;
                  if (pbVar12 == (byte *)0x0) {
                    if (unaff_w26 == 0) goto switchD_0032226c_default;
                    goto LAB_00322534;
                  }
                  break;
                case 1:
                  pbVar12 = pbVar11 + 8;
                  goto joined_r0x00322318;
                case 2:
                  pbVar12 = pbVar11 + 1;
                  uVar10 = (uint)*pbVar11;
                  if ((char)*pbVar11 < '\0') {
                    uVar10 = (uVar10 + (uint)*pbVar12 * 0x80) - 0x80;
                    if (-1 < (char)*pbVar12) {
                      pbVar12 = pbVar11 + 2;
                      goto LAB_003222fc;
                    }
                    iVar8 = uVar10 + (uint)pbVar11[2] * 0x4000 + -0x4000;
                    if ((char)pbVar11[2] < '\0') {
                      iVar8 = iVar8 + (uint)pbVar11[3] * 0x200000 + -0x200000;
                      if (-1 < (char)pbVar11[3]) {
                        lVar9 = 3;
                        goto LAB_003223b0;
                      }
                      if ((7 < pbVar11[4]) ||
                         (uVar10 = iVar8 + (uint)pbVar11[4] * 0x10000000 + 0xf0000000,
                         0x7fffffef < uVar10)) goto switchD_0032226c_default;
                      pbVar12 = pbVar11 + 5;
                      lVar9 = (long)(int)uVar10;
                      if ((long)pbVar2 - (long)pbVar12 < lVar9) goto switchD_0032226c_default;
                    }
                    else {
                      lVar9 = 2;
LAB_003223b0:
                      pbVar12 = pbVar12 + lVar9;
                      lVar9 = (long)iVar8;
                      if ((long)pbVar2 - (long)pbVar12 < lVar9) goto switchD_0032226c_default;
                    }
                  }
                  else {
LAB_003222fc:
                    lVar9 = (long)(int)uVar10;
                    if ((long)pbVar2 - (long)pbVar12 < lVar9) goto switchD_0032226c_default;
                  }
                  pbVar12 = pbVar12 + lVar9;
joined_r0x00322318:
                  if (pbVar12 < pbVar2) goto LAB_00322234;
                  goto switchD_0032226c_default;
                case 3:
                  param_3 = param_3 + 1;
                  break;
                case 4:
                  bVar1 = param_3 < 1;
                  param_3 = param_3 + -1;
                  if (bVar1) goto LAB_00322534;
                  break;
                case 5:
                  pbVar12 = pbVar11 + 4;
                  break;
                default:
                  goto switchD_0032226c_default;
                }
                if (pbVar2 <= pbVar12) break;
LAB_00322234:
                pbVar11 = pbVar12 + 1;
                uVar10 = (uint)*pbVar12;
                if ((char)*pbVar12 < '\0') goto LAB_003222a0;
LAB_00322244:
                if (pbVar2 < pbVar11) break;
              } while( true );
            }
            goto switchD_0032226c_default;
          }
          if (param_2 < 0x11) {
            if (param_2 != 0x10) goto LAB_003221f0;
          }
          else {
            FUN_0030f640(auStack_80,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                         ,0x36);
                    /* try { // try from 00322454 to 00322467 has its CatchHandler @ 003225d4 */
            uVar6 = FUN_0030f3ac(auStack_80,"CHECK failed: overrun <= kSlopBytes: ");
                    /* try { // try from 00322468 to 0032246f has its CatchHandler @ 003225d0 */
            FUN_0030f41c(&local_48,uVar6);
            FUN_0030f658(auStack_80);
          }
        }
switchD_0032226c_default:
        puVar3 = (undefined4 *)(param_1 + 0x18);
        uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                          (*(long **)(param_1 + 0x20),&local_48,puVar3);
        while ((uVar7 & 1) != 0) {
          iVar8 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar8;
          if (0x10 < iVar8) {
            uVar6 = *local_48;
            *(undefined8 *)(param_1 + 0x40) = local_48[1];
            *(undefined8 *)(param_1 + 0x38) = uVar6;
            *(long *)(param_1 + 8) = param_1 + 0x38;
            *(undefined8 **)(param_1 + 0x10) = local_48;
            if (*(ulong *)(param_1 + 0x48) < 2) {
              return puVar13;
            }
LAB_003225c0:
            uVar6 = 1;
            goto LAB_00322170;
          }
          if (0 < iVar8) {
            memcpy((void *)(param_1 + 0x38),local_48,(long)iVar8);
            *(long *)(param_1 + 8) = param_1 + iVar8 + 0x28;
            *(undefined8 **)(param_1 + 0x10) = puVar13;
            if (*(ulong *)(param_1 + 0x48) < 2) {
              return puVar13;
            }
            goto LAB_003225c0;
          }
          if (iVar8 != 0) {
            FUN_0030f640(auStack_80,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                         ,0x89);
                    /* try { // try from 00322504 to 0032251b has its CatchHandler @ 003225ec */
            uVar6 = FUN_0030f3ac(auStack_80,"CHECK failed: size_ == 0: ");
            uVar6 = FUN_0030f52c(uVar6,*puVar3);
                    /* try { // try from 0032251c to 00322523 has its CatchHandler @ 003225e8 */
            FUN_0030f41c(auStack_88,uVar6);
            FUN_0030f658(auStack_80);
          }
          uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                            (*(long **)(param_1 + 0x20),&local_48,puVar3);
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
LAB_00322534:
      if (*(long *)(param_1 + 0x48) == 2) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 8) - (long)puVar13;
      }
      *(long *)(param_1 + 8) = param_1 + 0x38;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x18);
      if (iVar8 < 0x11) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/parse_context.cc"
                     ,0x69);
                    /* try { // try from 00322128 to 0032213b has its CatchHandler @ 003225e4 */
        uVar6 = FUN_0030f3ac(auStack_80,"CHECK failed: size_ > kSlopBytes: ");
                    /* try { // try from 0032213c to 00322143 has its CatchHandler @ 003225e0 */
        FUN_0030f41c(&local_48,uVar6);
        FUN_0030f658(auStack_80);
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        iVar8 = *(int *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 8) = (long)puVar13 + (long)iVar8 + -0x10;
      *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x48) == 1) {
        uVar6 = 2;
LAB_00322170:
        *(undefined8 *)(param_1 + 0x48) = uVar6;
      }
    }
  }
  return puVar13;
}


