/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045c3e0; name: FUN_0045c3e0
 */


undefined8 FUN_0045c3e0(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  size_t sVar11;
  int *piVar12;
  undefined8 uVar13;
  size_t __n;
  int iVar14;
  undefined8 local_a8;
  undefined1 auStack_a0 [15];
  char local_91 [17];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar4 = FUN_00407950();
  puVar3 = PTR_DAT_04374378;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      puVar7 = (undefined8 *)FUN_00407970(param_1,iVar4);
      if (*(int *)puVar7[1] == 1) {
        uVar13 = *(undefined8 *)((int *)puVar7[1] + 2);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar12 = (int *)*puVar7, piVar12 == (int *)0x0)) ||
            (puVar10 = *(undefined1 **)(piVar12 + 2), puVar10 == (undefined1 *)0x0)) ||
           (*piVar12 < 2)) {
          __n = 0;
        }
        else {
          uVar1 = 0x10;
          if (CONCAT11(*puVar10,puVar10[1]) != 2) {
            uVar1 = (uint)(CONCAT11(*puVar10,puVar10[1]) == 1) << 2;
          }
          __n = (size_t)uVar1;
        }
        FUN_004079e0(uVar13);
        iVar5 = FUN_00407950(uVar13);
        if (1 < iVar5) {
          iVar5 = 0;
          do {
            uVar8 = FUN_00407970(uVar13,iVar5);
            iVar14 = iVar5 + 1;
            uVar9 = FUN_00407970(uVar13,iVar14);
            iVar6 = FUN_0045bcf0(uVar8,auStack_70,auStack_80,__n);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = FUN_0045bcf0(uVar9,local_91 + 1,auStack_a0,__n);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = memcmp(auStack_70,auStack_80,__n);
            if (0 < iVar6) {
              return 0;
            }
            iVar6 = memcmp(local_91 + 1,auStack_a0,__n);
            if (0 < iVar6) {
              return 0;
            }
            iVar6 = memcmp(auStack_80,local_91 + 1,__n);
            if (-1 < iVar6) {
              return 0;
            }
            sVar11 = __n;
            do {
              if ((long)sVar11 < 1) break;
              cVar2 = local_91[sVar11];
              local_91[sVar11] = cVar2 + -1;
              sVar11 = sVar11 - 1;
            } while (cVar2 == '\0');
            iVar6 = memcmp(auStack_80,local_91 + 1,__n);
            if (iVar6 == 0) {
              iVar6 = FUN_0045ba80(&local_a8,auStack_70,auStack_a0,__n);
              if (iVar6 == 0) {
                return 0;
              }
              FUN_004079a0(uVar13,iVar5,local_a8);
              FUN_00407680(uVar13,iVar14);
              FUN_00421810(uVar8,puVar3);
              FUN_00421810(uVar9,puVar3);
              iVar14 = iVar5;
            }
            iVar6 = FUN_00407950(uVar13);
            iVar5 = iVar14;
          } while (iVar14 < iVar6 + -1);
        }
        iVar5 = FUN_00407950(uVar13);
        piVar12 = (int *)FUN_00407970(uVar13,iVar5 + -1);
        if (((piVar12 != (int *)0x0) && (*piVar12 == 1)) &&
           ((iVar5 = FUN_0045bcf0(piVar12,auStack_70,auStack_80,__n), iVar5 == 0 ||
            (iVar5 = memcmp(auStack_70,auStack_80,__n), 0 < iVar5)))) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_00407950(param_1);
    } while (iVar4 < iVar5);
  }
  FUN_00406ef0(param_1,&LAB_0045c1e0);
  FUN_004079e0(param_1);
  iVar4 = FUN_0045bed0(param_1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: X509v3_addr_is_canonical(addr)",
                 "external/openssl/crypto/x509v3/v3_addr.c",0x36f);
  }
  return 1;
}


