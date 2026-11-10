/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cd310; name: FUN_004cd310
 */


undefined8 FUN_004cd310(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_150 [256];
  ulong local_50;
  long local_48;
  
  uVar7 = param_2[4];
  if (param_2[3] + uVar7 <= (ulong)param_2[1]) {
    uVar6 = *(ulong *)(param_1 + 0x5e0);
    if (uVar6 < 0x454d) {
      uVar6 = 0x454c;
    }
    if ((ulong)param_2[1] <= uVar6) {
      if (uVar7 != 0) {
        local_48 = (ulong)(ushort)(*(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8) <<
                   0x30;
        lVar3 = FUN_004f5d40(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118),&local_48);
        if (lVar3 == 0) {
          puVar8 = (undefined8 *)FUN_004cd000(param_2[1],1);
          if (puVar8 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          uVar9 = *param_2;
          uVar12 = param_2[3];
          uVar11 = param_2[2];
          puVar8[1] = param_2[1];
          *puVar8 = uVar9;
          uVar16 = param_2[9];
          uVar15 = param_2[8];
          uVar10 = param_2[5];
          uVar9 = param_2[4];
          uVar14 = param_2[7];
          uVar13 = param_2[6];
          puVar8[10] = param_2[10];
          puVar8[7] = uVar14;
          puVar8[6] = uVar13;
          puVar8[9] = uVar16;
          puVar8[8] = uVar15;
          puVar8[3] = uVar12;
          puVar8[2] = uVar11;
          puVar8[5] = uVar10;
          puVar8[4] = uVar9;
          puVar8[3] = 0;
          puVar8[4] = puVar8[1];
          lVar5 = puVar8[0xc];
        }
        else {
          puVar8 = *(undefined8 **)(lVar3 + 8);
          if (puVar8[1] != param_2[1]) {
            return 0xffffffff;
          }
          lVar5 = puVar8[0xc];
        }
        if (lVar5 != 0) {
          iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                            (param_1,0x16,0,puVar8[0xb] + param_2[3],uVar7,0,&local_50);
          if (iVar2 < 1 || local_50 != uVar7) {
LAB_004cd4e8:
            if (lVar3 != 0) {
              return 0xffffffff;
            }
            if (puVar8 == (undefined8 *)0x0) {
              return 0xffffffff;
            }
          }
          else {
            uVar6 = param_2[3];
            if ((long)uVar7 < 9) {
              if ((long)uVar6 < (long)(uVar6 + uVar7)) {
                do {
                  *(byte *)(puVar8[0xc] + ((long)uVar6 >> 3)) =
                       *(byte *)(puVar8[0xc] + ((long)uVar6 >> 3)) |
                       (byte)(1 << (ulong)((uint)uVar6 & 7));
                  uVar6 = uVar6 + 1;
                } while ((long)uVar6 < (long)(param_2[3] + uVar7));
              }
            }
            else {
              *(byte *)(puVar8[0xc] + ((long)uVar6 >> 3)) =
                   *(byte *)(puVar8[0xc] + ((long)uVar6 >> 3)) | (&DAT_0388a7c8)[uVar6 & 7];
              lVar5 = ((long)param_2[3] >> 3) + 1;
              uVar6 = param_2[3] + uVar7;
              lVar4 = (long)(uVar6 - 1) >> 3;
              if (lVar5 < lVar4) {
                do {
                  *(undefined1 *)(puVar8[0xc] + lVar5) = 0xff;
                  uVar6 = param_2[3] + uVar7;
                  lVar5 = lVar5 + 1;
                  lVar4 = (long)(uVar6 - 1) >> 3;
                } while (lVar5 < lVar4);
              }
              *(byte *)(puVar8[0xc] + lVar4) =
                   *(byte *)(puVar8[0xc] + lVar4) | (&DAT_0388a800)[uVar6 & 7];
            }
            uVar7 = param_2[1];
            if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00404dd0("Assertion failed: msg_hdr->msg_len > 0",
                           "external/openssl/ssl/statem/statem_dtls.c",0x25b);
            }
            lVar4 = puVar8[0xc];
            lVar5 = (long)(uVar7 - 1) >> 3;
            if (*(char *)(lVar4 + lVar5) == (&DAT_0388a800)[uVar7 & 7]) {
              do {
                if (lVar5 < 1) {
                  FUN_00400420(lVar4,"external/openssl/ssl/statem/statem_dtls.c",0x261);
                  puVar8[0xc] = 0;
                  break;
                }
                lVar1 = lVar4 + lVar5;
                lVar5 = lVar5 + -1;
              } while (*(char *)(lVar1 + -1) == -1);
            }
            if (lVar3 != 0) {
              return 0xfffffffd;
            }
            lVar3 = FUN_004f5b70(&local_48,puVar8);
            if (lVar3 != 0) {
              lVar3 = FUN_004f5c60(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118),lVar3);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00404dd0("Assertion failed: item != NULL",
                             "external/openssl/ssl/statem/statem_dtls.c",0x273);
              }
              return 0xfffffffd;
            }
            if (puVar8 == (undefined8 *)0x0) {
              return 0xffffffff;
            }
          }
          if (*(int *)(puVar8 + 5) != 0) {
            FUN_0041b550(puVar8[6]);
            FUN_00444950(puVar8[7]);
          }
          FUN_00400420(puVar8[0xb],"external/openssl/ssl/statem/statem_dtls.c",0x67);
          FUN_00400420(puVar8[0xc],"external/openssl/ssl/statem/statem_dtls.c",0x68);
          FUN_00400420(puVar8,"external/openssl/ssl/statem/statem_dtls.c",0x69);
          return 0xffffffff;
        }
        do {
          uVar6 = uVar7;
          if (0xff < uVar7) {
            uVar6 = 0x100;
          }
          iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                            (param_1,0x16,0,auStack_150,uVar6,0,&local_50);
          if (iVar2 < 1) goto LAB_004cd4e8;
          uVar7 = uVar7 - local_50;
        } while (uVar7 != 0);
      }
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}


