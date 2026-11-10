/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044b2d0; name: FUN_0044b2d0
 */


undefined8 FUN_0044b2d0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  long local_70;
  undefined8 local_68;
  
  FUN_00400420(param_1[3],"external/openssl/crypto/x509/x_name.c",0x134);
  param_1[3] = 0;
  iVar4 = FUN_00407950(*param_1);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return 1;
  }
  lVar8 = FUN_004071e0();
  if (lVar8 == 0) {
    uVar13 = 0x13d;
LAB_0044b534:
    FUN_004014b0(0xb,0x9c,0x41,"external/openssl/crypto/x509/x_name.c",uVar13);
  }
  else {
    iVar4 = FUN_00407950(*param_1);
    if (0 < iVar4) {
      iVar4 = 0;
      lVar14 = 0;
      iVar5 = -1;
      puVar16 = PTR_DAT_04374298;
      do {
        puVar9 = (undefined8 *)FUN_00407970(*param_1,iVar4);
        if (*(int *)(puVar9 + 2) != iVar5) {
          lVar14 = FUN_004071e0();
          if (lVar14 == 0) goto LAB_0044b538;
          iVar5 = FUN_00407800(lVar8,lVar14);
          if (iVar5 == 0) {
            FUN_00407010(lVar14);
            uVar13 = 0x148;
            goto LAB_0044b534;
          }
          iVar5 = *(int *)(puVar9 + 2);
        }
        plVar10 = (long *)FUN_00421c70(puVar16);
        if (plVar10 == (long *)0x0) {
          uVar13 = 0x14f;
LAB_0044b694:
          FUN_004014b0(0xb,0x9c,0x41,"external/openssl/crypto/x509/x_name.c",uVar13);
          goto LAB_0044b698;
        }
        lVar11 = FUN_00413930(*puVar9);
        *plVar10 = lVar11;
        if (lVar11 == 0) {
          uVar13 = 0x154;
          goto LAB_0044b694;
        }
        lVar11 = puVar9[1];
        piVar15 = (int *)plVar10[1];
        uVar12 = FUN_0041d010(*(undefined4 *)(lVar11 + 4));
        if ((uVar12 & 0x2956) == 0) {
          iVar6 = FUN_0040a150(piVar15,lVar11);
          if (iVar6 == 0) goto LAB_0044b698;
        }
        else {
          piVar1 = piVar15 + 2;
          piVar15[1] = 0xc;
          iVar6 = FUN_00448dc0(piVar1,lVar11);
          *piVar15 = iVar6;
          if (iVar6 == -1) goto LAB_0044b698;
          if (0 < iVar6) {
            pcVar18 = *(char **)piVar1;
            uVar12 = (long)iVar6;
            pcVar17 = pcVar18;
LAB_0044b3fc:
            iVar7 = FUN_00405430(*pcVar17,8);
            if (iVar7 != 0) goto code_r0x0044b40c;
            pcVar18 = pcVar18 + iVar6;
            do {
              pcVar18 = pcVar18 + -1;
              iVar6 = FUN_00405430(*pcVar18,8);
              if (iVar6 == 0) {
                pcVar18 = *(char **)piVar1;
                iVar6 = 0;
                cVar3 = *pcVar17;
                if (-1 < cVar3) goto LAB_0044b4d0;
LAB_0044b4b4:
                do {
                  pcVar17 = pcVar17 + 1;
                  iVar6 = iVar6 + 1;
                  *pcVar18 = cVar3;
                  while( true ) {
                    pcVar18 = pcVar18 + 1;
                    if ((int)uVar12 <= iVar6) {
                      iVar6 = (int)*(undefined8 *)piVar1;
                      goto LAB_0044b464;
                    }
                    cVar3 = *pcVar17;
                    if (cVar3 < '\0') goto LAB_0044b4b4;
LAB_0044b4d0:
                    iVar7 = FUN_00405430(cVar3,8);
                    if (iVar7 == 0) break;
                    *pcVar18 = ' ';
                    do {
                      pcVar17 = pcVar17 + 1;
                      iVar6 = iVar6 + 1;
                      iVar7 = FUN_00405430(*pcVar17,8);
                    } while (iVar7 != 0);
                  }
                  cVar3 = FUN_00405460(*pcVar17);
                } while( true );
              }
              uVar2 = (int)uVar12 - 1;
              uVar12 = (ulong)uVar2;
            } while (0 < (int)uVar2);
          }
LAB_0044b45c:
          pcVar18 = *(char **)piVar1;
          iVar6 = (int)pcVar18;
LAB_0044b464:
          puVar16 = PTR_DAT_04374298;
          *piVar15 = (int)pcVar18 - iVar6;
        }
        iVar6 = FUN_00407800(lVar14,plVar10);
        if (iVar6 == 0) {
          uVar13 = 0x15a;
          goto LAB_0044b694;
        }
        iVar4 = iVar4 + 1;
        iVar6 = FUN_00407950(*param_1);
      } while (iVar4 < iVar6);
    }
    iVar4 = FUN_00407950(lVar8);
    if (iVar4 < 1) {
      iVar5 = 0;
LAB_0044b5b4:
      *(int *)(param_1 + 4) = iVar5;
      local_70 = FUN_00400260((long)iVar5,"external/openssl/crypto/x509/x_name.c",0x166);
      if (local_70 != 0) {
        param_1[3] = local_70;
        iVar4 = FUN_00407950(lVar8);
        if (0 < iVar4) {
          iVar4 = 0;
          do {
            local_68 = FUN_00407970(lVar8,iVar4);
            iVar5 = FUN_0041f030(&local_68,&local_70,&DAT_041669a8,0xffffffff,0xffffffff);
            if (iVar5 < 0) break;
            iVar4 = iVar4 + 1;
            iVar5 = FUN_00407950(lVar8);
          } while (iVar4 < iVar5);
        }
        plVar10 = (long *)0x0;
        uVar13 = 1;
        goto LAB_0044b69c;
      }
      uVar13 = 0x168;
      goto LAB_0044b534;
    }
    iVar4 = 0;
    iVar5 = 0;
    do {
      local_68 = FUN_00407970(lVar8,iVar4);
      iVar6 = FUN_0041f030(&local_68,0,&DAT_041669a8,0xffffffff,0xffffffff);
      if (iVar6 < 0) goto LAB_0044b538;
      iVar5 = iVar6 + iVar5;
      iVar4 = iVar4 + 1;
      iVar6 = FUN_00407950(lVar8);
    } while (iVar4 < iVar6);
    if (-1 < iVar5) goto LAB_0044b5b4;
  }
LAB_0044b538:
  plVar10 = (long *)0x0;
LAB_0044b698:
  uVar13 = 0;
LAB_0044b69c:
  FUN_00421810(plVar10,PTR_DAT_04374298);
  FUN_004078c0(lVar8,&LAB_0044b730);
  return uVar13;
code_r0x0044b40c:
  uVar12 = uVar12 - 1;
  pcVar17 = pcVar17 + 1;
  if ((int)uVar12 < 1) goto LAB_0044b45c;
  goto LAB_0044b3fc;
}


