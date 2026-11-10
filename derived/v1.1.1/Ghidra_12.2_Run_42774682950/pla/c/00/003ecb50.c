/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ecb50; name: FUN_003ecb50
 */


void FUN_003ecb50(char *param_1,byte *param_2,ulong param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  
  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if (param_4 != 0) {
    pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = SUB168(auVar4 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  pcVar7 = param_1;
  if (param_3 < 3) {
    lVar8 = 0;
    uVar12 = param_3;
    if (param_3 != 1) goto LAB_003ecc54;
LAB_003ecd28:
    *pcVar7 = pcVar2[param_2[lVar8] >> 2];
    pcVar7[1] = pcVar2[((ulong)param_2[lVar8] & 3) * 0x10];
    cVar6 = '=';
  }
  else {
    lVar8 = 0;
    if (param_5 == 0) {
      pbVar9 = param_2;
      pcVar11 = param_1;
      do {
        lVar8 = lVar8 + -3;
        *pcVar11 = pcVar2[*pbVar9 >> 2];
        uVar12 = param_3 + lVar8;
        pcVar11[1] = pcVar2[((ulong)*pbVar9 & 3) << 4 | (ulong)(pbVar9[1] >> 4)];
        pcVar7 = pcVar11 + 4;
        pcVar11[2] = pcVar2[((ulong)pbVar9[1] & 0xf) << 2 | (ulong)(pbVar9[2] >> 6)];
        pbVar1 = pbVar9 + 2;
        pbVar9 = pbVar9 + 3;
        pcVar11[3] = pcVar2[(ulong)*pbVar1 & 0x3f];
        pcVar11 = pcVar7;
      } while (2 < uVar12);
    }
    else {
      lVar10 = 0;
      pbVar9 = param_2 + 2;
      do {
        lVar10 = lVar10 + 1;
        *pcVar7 = pcVar2[pbVar9[-2] >> 2];
        pcVar7[1] = pcVar2[((ulong)pbVar9[-2] & 3) << 4 | (ulong)(pbVar9[-1] >> 4)];
        pcVar7[2] = pcVar2[((ulong)pbVar9[-1] & 0xf) << 2 | (ulong)(*pbVar9 >> 6)];
        pcVar7[3] = pcVar2[(ulong)*pbVar9 & 0x3f];
        if (lVar10 == 0x13) {
          lVar10 = 0;
          pcVar7[4] = '\r';
          pcVar7[5] = '\n';
          pcVar7 = pcVar7 + 6;
        }
        else {
          pcVar7 = pcVar7 + 4;
        }
        lVar8 = lVar8 + -3;
        uVar12 = param_3 + lVar8;
        pbVar9 = pbVar9 + 3;
      } while (2 < uVar12);
    }
    lVar8 = -lVar8;
    if (uVar12 == 1) goto LAB_003ecd28;
LAB_003ecc54:
    if (uVar12 != 2) goto LAB_003ecd60;
    param_2 = param_2 + lVar8;
    *pcVar7 = pcVar2[*param_2 >> 2];
    pcVar7[1] = pcVar2[((ulong)*param_2 & 3) << 4 | (ulong)(param_2[1] >> 4)];
    cVar6 = pcVar2[((ulong)param_2[1] & 0xf) * 4];
  }
  pcVar7[2] = cVar6;
  pcVar7[3] = '=';
  pcVar7 = pcVar7 + 4;
LAB_003ecd60:
  if (pcVar7 < param_1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",0x79,2,
                 "assertion failed: %s","current >= result");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3 + 3;
  if ((uVar3 + (SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2 | 1) <=
      (ulong)((long)pcVar7 - (long)param_1)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/b64.cc",0x7a,2,
                 "assertion failed: %s","(uintptr_t)(current - result) < result_projected_size");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *pcVar7 = '\0';
  return;
}


