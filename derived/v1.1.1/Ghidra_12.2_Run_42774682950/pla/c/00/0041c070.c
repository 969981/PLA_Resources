/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c070; name: FUN_0041c070
 */


undefined8 FUN_0041c070(long *param_1,ulong param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  if ((int)param_1[2] == 0) {
    *param_3 = 0;
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
      uVar2 = (**(code **)(lVar6 + 0x20))(param_1,param_2,0,0);
      if ((int)uVar2 < 0) {
        return 0;
      }
      *param_3 = uVar2;
      return 1;
    }
    if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
      uVar2 = *(uint *)(lVar6 + 4);
      if (uVar2 < 2) {
        uVar5 = 0;
        goto LAB_0041bee0;
      }
      if ((*(int *)((long)param_1 + 0x14) == 0) && ((int)param_1[0x10] != 0)) {
        if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("assertion failed: b <= sizeof(ctx->final)",
                       "external/openssl/crypto/evp/evp_enc.c",0x232);
        }
        uVar7 = (ulong)(uVar2 - 1);
        bVar1 = *(byte *)((long)param_1 + uVar7 + 0x88);
        uVar8 = (uint)bVar1;
        uVar9 = (uint)bVar1;
        if ((uVar9 != 0) && (uVar5 = uVar2 - uVar9, (int)uVar9 <= (int)uVar2)) {
          do {
            if (*(byte *)((long)param_1 + uVar7 + 0x88) != bVar1) {
              uVar3 = 100;
              uVar4 = 0x23f;
              goto LAB_0041be30;
            }
            uVar7 = (ulong)((int)uVar7 - 1);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          if (0 < (int)uVar5) {
            uVar7 = (ulong)uVar5;
            if ((uVar5 < 0x40) ||
               ((param_2 < (long)param_1 + uVar7 + 0x88 &&
                (param_1 + 0x11 < (long *)(param_2 + uVar7))))) {
              uVar10 = 0;
              uVar12 = 0xffffffffffffffff;
            }
            else {
              uVar10 = uVar7 & 0xffffffc0;
              plVar13 = param_1 + 0x17;
              plVar15 = (long *)(param_2 + 0x20);
              uVar12 = uVar10;
              do {
                lVar16 = plVar13[-5];
                lVar6 = plVar13[-6];
                lVar18 = plVar13[-3];
                lVar17 = plVar13[-4];
                uVar12 = uVar12 - 0x40;
                lVar19 = plVar13[-2];
                lVar21 = plVar13[1];
                lVar20 = *plVar13;
                plVar15[1] = plVar13[-1];
                *plVar15 = lVar19;
                plVar15[3] = lVar21;
                plVar15[2] = lVar20;
                plVar13 = plVar13 + 8;
                plVar15[-3] = lVar16;
                plVar15[-4] = lVar6;
                plVar15[-1] = lVar18;
                plVar15[-2] = lVar17;
                plVar15 = plVar15 + 8;
              } while (uVar12 != 0);
              if (uVar10 == uVar7) goto LAB_0041bee0;
              uVar12 = ~uVar10;
            }
            if ((uVar5 & 1) != 0) {
              *(undefined1 *)(param_2 + uVar10) = *(undefined1 *)((long)param_1 + uVar10 + 0x88);
              uVar10 = uVar10 | 1;
            }
            if (uVar12 + uVar7 != 0) {
              lVar6 = uVar7 - uVar10;
              puVar11 = (undefined1 *)((long)param_1 + uVar10 + 0x89);
              puVar14 = (undefined1 *)(uVar10 + param_2 + 1);
              do {
                puVar14[-1] = puVar11[-1];
                lVar6 = lVar6 + -2;
                *puVar14 = *puVar11;
                puVar11 = puVar11 + 2;
                puVar14 = puVar14 + 2;
              } while (lVar6 != 0);
            }
          }
LAB_0041bee0:
          *param_3 = uVar5;
          return 1;
        }
        uVar3 = 100;
        uVar4 = 0x23a;
      }
      else {
        uVar3 = 0x6d;
        uVar4 = 0x22f;
      }
    }
    else {
      if (*(int *)((long)param_1 + 0x14) == 0) {
        *param_3 = 0;
        return 1;
      }
      uVar3 = 0x8a;
      uVar4 = 0x227;
    }
  }
  else {
    uVar3 = 0x94;
    uVar4 = 0x214;
  }
LAB_0041be30:
  FUN_004014b0(6,0x65,uVar3,"external/openssl/crypto/evp/evp_enc.c",uVar4);
  return 0;
}


