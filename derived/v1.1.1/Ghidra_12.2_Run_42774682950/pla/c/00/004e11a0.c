/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e11a0; name: FUN_004e11a0
 */


int * FUN_004e11a0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  long local_40;
  undefined8 local_38;
  
  local_38 = *param_2;
  piVar3 = (int *)FUN_0041d030(0,&local_38,param_3,&DAT_04182a78);
  if (piVar3 == (int *)0x0) {
    piVar10 = (int *)0x0;
    goto LAB_004e12e8;
  }
  if (((param_1 == (long *)0x0) || (piVar10 = (int *)*param_1, piVar10 == (int *)0x0)) &&
     (piVar10 = (int *)FUN_003feb50(), piVar10 == (int *)0x0)) goto LAB_004e12e8;
  if (*piVar3 == 1) {
    iVar1 = piVar3[1];
    if (((iVar1 >> 8 == 3) || (iVar1 >> 8 == 0xfe)) || (iVar1 == 0x100)) {
      *piVar10 = iVar1;
      if (**(int **)(piVar3 + 2) == 2) {
        puVar8 = *(undefined1 **)(*(int **)(piVar3 + 2) + 2);
        *(ulong *)(piVar10 + 0x80) = (ulong)CONCAT11(*puVar8,puVar8[1]) | 0x3000000;
        lVar4 = FUN_004c0ec0();
        *(long *)(piVar10 + 0x7e) = lVar4;
        if (lVar4 == 0) goto LAB_004e12e8;
        puVar11 = *(uint **)(piVar3 + 8);
        if (puVar11 == (uint *)0x0) {
          piVar10[0x54] = 0;
          piVar10[0x55] = 0;
          puVar11 = *(uint **)(piVar3 + 6);
          if (puVar11 == (uint *)0x0) goto LAB_004e1368;
LAB_004e133c:
          if (0x100 < *puVar11) goto LAB_004e12e8;
          memcpy(piVar10 + 0x14,*(void **)(puVar11 + 2),(long)(int)*puVar11);
          *(long *)(piVar10 + 2) = (long)(int)*puVar11;
          lVar2 = *(long *)(piVar3 + 0xc);
          lVar4 = local_40;
        }
        else {
          if (0x20 < *puVar11) goto LAB_004e12e8;
          memcpy(piVar10 + 0x56,*(void **)(puVar11 + 2),(long)(int)*puVar11);
          *(long *)(piVar10 + 0x54) = (long)(int)*puVar11;
          puVar11 = *(uint **)(piVar3 + 6);
          if (puVar11 != (uint *)0x0) goto LAB_004e133c;
LAB_004e1368:
          piVar10[2] = 0;
          piVar10[3] = 0;
          lVar2 = *(long *)(piVar3 + 0xc);
          lVar4 = local_40;
        }
        local_40 = lVar2;
        if (local_40 == 0) {
          local_40 = lVar4;
          FUN_00428290(&local_40);
        }
        *(long *)(piVar10 + 0x7a) = local_40;
        lVar4 = 3;
        if (*(long *)(piVar3 + 0xe) != 0) {
          lVar4 = *(long *)(piVar3 + 0xe);
        }
        *(long *)(piVar10 + 0x78) = lVar4;
        FUN_00460a80(*(undefined8 *)(piVar10 + 0x6e));
        *(undefined8 *)(piVar10 + 0x6e) = *(undefined8 *)(piVar3 + 0x10);
        puVar11 = *(uint **)(piVar3 + 0x12);
        piVar3[0x10] = 0;
        piVar3[0x11] = 0;
        if (puVar11 == (uint *)0x0) {
          lVar4 = 0;
        }
        else {
          if (0x20 < *puVar11) goto LAB_004e12e8;
          memcpy(piVar10 + 0x60,*(void **)(puVar11 + 2),(long)(int)*puVar11);
          lVar4 = (long)(int)*puVar11;
        }
        *(long *)(piVar10 + 0x5e) = lVar4;
        *(long *)(piVar10 + 0x74) = (long)piVar3[0x14];
        piVar12 = *(int **)(piVar3 + 0x16);
        FUN_00400420(*(undefined8 *)(piVar10 + 0x8a),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar10[0x8a] = 0;
        piVar10[0x8b] = 0;
        if (piVar12 != (int *)0x0) {
          lVar4 = FUN_00404f60(*(undefined8 *)(piVar12 + 2),(long)*piVar12,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar10 + 0x8a) = lVar4;
          if (lVar4 == 0) goto LAB_004e12e8;
        }
        piVar12 = *(int **)(piVar3 + 0x1e);
        FUN_00400420(*(undefined8 *)(piVar10 + 0x68),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar10[0x68] = 0;
        piVar10[0x69] = 0;
        if (piVar12 != (int *)0x0) {
          lVar4 = FUN_00404f60(*(undefined8 *)(piVar12 + 2),(long)*piVar12,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar10 + 0x68) = lVar4;
          if (lVar4 == 0) goto LAB_004e12e8;
        }
        piVar12 = *(int **)(piVar3 + 0x20);
        FUN_00400420(*(undefined8 *)(piVar10 + 0x6a),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar10[0x6a] = 0;
        piVar10[0x6b] = 0;
        if (piVar12 != (int *)0x0) {
          lVar4 = FUN_00404f60(*(undefined8 *)(piVar12 + 2),(long)*piVar12,
                               "external/openssl/ssl/ssl_asn1.c",0xdd);
          *(long *)(piVar10 + 0x6a) = lVar4;
          if (lVar4 == 0) goto LAB_004e12e8;
        }
        *(undefined8 *)(piVar10 + 0x98) = *(undefined8 *)(piVar3 + 0x18);
        piVar10[0x9a] = piVar3[0x1a];
        FUN_00400420(*(undefined8 *)(piVar10 + 0x94),"external/openssl/ssl/ssl_asn1.c",0x157);
        piVar12 = *(int **)(piVar3 + 0x1c);
        if (piVar12 == (int *)0x0) {
          piVar10[0x94] = 0;
          piVar10[0x95] = 0;
          piVar12 = *(int **)(piVar3 + 4);
          uVar7 = 0;
          if (piVar12 != (int *)0x0) goto LAB_004e1508;
        }
        else {
          piVar9 = piVar12 + 2;
          *(undefined8 *)(piVar10 + 0x94) = *(undefined8 *)piVar9;
          *(long *)(piVar10 + 0x96) = (long)*piVar12;
          piVar9[0] = 0;
          piVar9[1] = 0;
          piVar12 = *(int **)(piVar3 + 4);
          if (piVar12 == (int *)0x0) {
            uVar7 = 0;
          }
          else {
LAB_004e1508:
            if (*piVar12 != 1) {
              uVar5 = 0x10f;
              uVar6 = 0x162;
              goto LAB_004e12e4;
            }
            uVar7 = (uint)**(byte **)(piVar12 + 2);
          }
        }
        piVar10[0x7c] = uVar7;
        piVar12 = *(int **)(piVar3 + 0x22);
        FUN_00400420(*(undefined8 *)(piVar10 + 0xa2),"external/openssl/ssl/ssl_asn1.c",0xd9);
        piVar10[0xa2] = 0;
        piVar10[0xa3] = 0;
        if (piVar12 == (int *)0x0) {
LAB_004e1560:
          piVar10[0xa8] = (int)*(undefined8 *)(piVar3 + 0x24);
          piVar10[0x9b] = piVar3[0x26];
          FUN_00400420(*(undefined8 *)(piVar10 + 0x9c),"external/openssl/ssl/ssl_asn1.c",0x173);
          piVar9 = *(int **)(piVar3 + 0x28);
          lVar4 = 0;
          piVar12 = piVar10 + 0x9c;
          if (piVar9 != (int *)0x0) {
            piVar12 = piVar9 + 2;
            *(undefined8 *)(piVar10 + 0x9c) = *(undefined8 *)piVar12;
            lVar4 = (long)*piVar9;
          }
          piVar12[0] = 0;
          piVar12[1] = 0;
          *(long *)(piVar10 + 0x9e) = lVar4;
          *(char *)(piVar10 + 0xa0) = (char)piVar3[0x2a];
          FUN_00400420(*(undefined8 *)(piVar10 + 0xa4),"external/openssl/ssl/ssl_asn1.c",0x17f);
          piVar9 = *(int **)(piVar3 + 0x2c);
          lVar4 = 0;
          piVar12 = piVar10 + 0xa4;
          if (piVar9 != (int *)0x0) {
            piVar12 = piVar9 + 2;
            *(undefined8 *)(piVar10 + 0xa4) = *(undefined8 *)piVar12;
            lVar4 = (long)*piVar9;
          }
          piVar12[0] = 0;
          piVar12[1] = 0;
          *(long *)(piVar10 + 0xa6) = lVar4;
          FUN_00421810(piVar3,&DAT_04182a78);
          if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
            *param_1 = (long)piVar10;
          }
          *param_2 = local_38;
          return piVar10;
        }
        lVar4 = FUN_00404f60(*(undefined8 *)(piVar12 + 2),(long)*piVar12,
                             "external/openssl/ssl/ssl_asn1.c",0xdd);
        *(long *)(piVar10 + 0xa2) = lVar4;
        if (lVar4 != 0) goto LAB_004e1560;
        goto LAB_004e12e8;
      }
      uVar5 = 0x89;
      uVar6 = 0x118;
    }
    else {
      uVar5 = 0x103;
      uVar6 = 0x111;
    }
  }
  else {
    uVar6 = 0x10a;
    uVar5 = 0xfe;
  }
LAB_004e12e4:
  FUN_004014b0(0x14,0x67,uVar5,"external/openssl/ssl/ssl_asn1.c",uVar6);
LAB_004e12e8:
  FUN_00421810(piVar3,&DAT_04182a78);
  if ((param_1 == (long *)0x0) || ((int *)*param_1 != piVar10)) {
    FUN_003fef10(piVar10);
  }
  return (int *)0x0;
}


