/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00165020; name: FUN_00165020
 */


void FUN_00165020(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  lVar16 = param_1[2];
  plVar1 = (long *)param_1[3];
  if ((*plVar1 != 0) && (*(char *)((long)plVar1 + 0x11) != '\0')) {
    uVar3 = FUN_001670f0(param_1);
    FUN_00167440(param_1,uVar3,(char)plVar1[2]);
    FUN_00167200(param_1,uVar3);
  }
  if (*(char *)((long)plVar1 + 0x12) != '\0') {
    uVar4 = FUN_0016d990(*(undefined8 *)(lVar16 + 0x38),"break");
    lVar14 = *(long *)(lVar16 + 0x58);
    iVar13 = *(int *)(lVar14 + 0x28);
    uVar3 = *(undefined4 *)(*(long *)(lVar16 + 0x30) + 0x20);
    if (iVar13 < *(int *)(lVar14 + 0x2c)) {
      lVar5 = *(long *)(lVar14 + 0x20);
    }
    else {
      lVar5 = FUN_00161400(*(undefined8 *)(lVar16 + 0x38),*(undefined8 *)(lVar14 + 0x20),
                           (int *)(lVar14 + 0x2c),0x18,0x7fff,"labels/gotos");
      *(long *)(lVar14 + 0x20) = lVar5;
    }
    lVar11 = (long)iVar13 * 0x18;
    *(undefined8 *)(lVar5 + lVar11) = uVar4;
    *(undefined4 *)(*(long *)(lVar14 + 0x20) + lVar11 + 0xc) = 0;
    *(undefined1 *)(*(long *)(lVar14 + 0x20) + lVar11 + 0x10) =
         *(undefined1 *)(*(long *)(lVar16 + 0x30) + 0x3a);
    *(undefined4 *)(*(long *)(lVar14 + 0x20) + lVar11 + 8) = uVar3;
    *(int *)(lVar14 + 0x28) = iVar13 + 1;
    lVar14 = *(long *)(lVar16 + 0x58);
    iVar13 = *(int *)(*(long *)(*(long *)(lVar16 + 0x30) + 0x18) + 0xc);
    iVar7 = *(int *)(lVar14 + 0x18);
    if (iVar13 < iVar7) {
      plVar15 = (long *)(*(long *)(lVar14 + 0x20) + lVar11);
      do {
        while (*(long *)(*(long *)(lVar14 + 0x10) + (long)iVar13 * 0x18) == *plVar15) {
          FUN_001667f0(lVar16,iVar13,plVar15);
          iVar7 = *(int *)(lVar14 + 0x18);
          if (iVar7 <= iVar13) goto LAB_00165188;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar7);
    }
  }
LAB_00165188:
  param_1[3] = *plVar1;
  bVar6 = *(byte *)(plVar1 + 2);
  *(uint *)(*(long *)(param_1[2] + 0x58) + 8) =
       ((uint)bVar6 - (uint)*(byte *)((long)param_1 + 0x3a)) +
       *(int *)(*(long *)(param_1[2] + 0x58) + 8);
  bVar9 = *(byte *)((long)param_1 + 0x3a);
  uVar10 = (uint)bVar9;
  if ((uint)bVar6 <= (uint)bVar9 && (uint)bVar9 != (uint)bVar6) {
    do {
      *(char *)((long)param_1 + 0x3a) = (char)(uVar10 - 1);
      *(int *)(*(long *)(*param_1 + 0x50) +
               (long)*(short *)(**(long **)(param_1[2] + 0x58) +
                               (long)(int)(*(int *)((long)param_1 + 0x34) + (uVar10 - 1 & 0xff)) * 2
                               ) * 0x10 + 0xc) = (int)param_1[4];
      bVar9 = *(byte *)((long)param_1 + 0x3a);
      uVar10 = (uint)bVar9;
    } while (bVar6 < uVar10);
  }
  *(byte *)((long)param_1 + 0x3c) = bVar9;
  *(int *)(*(long *)(lVar16 + 0x58) + 0x28) = (int)plVar1[1];
  iVar13 = *(int *)((long)plVar1 + 0xc);
  if (*plVar1 == 0) {
    if (iVar13 < *(int *)(*(long *)(lVar16 + 0x58) + 0x18)) {
      FUN_00166790(lVar16,*(long *)(*(long *)(lVar16 + 0x58) + 0x10) + (long)iVar13 * 0x18);
                    /* WARNING: Does not return */
      pcVar2 = (code *)UndefinedInstructionException(0,0x16535c);
      (*pcVar2)();
    }
  }
  else {
    lVar16 = *(long *)(param_1[2] + 0x58);
    if (iVar13 < *(int *)(lVar16 + 0x18)) {
LAB_00165244:
      do {
        lVar14 = (long)iVar13;
        pbVar12 = (byte *)(*(long *)(lVar16 + 0x10) + (long)iVar13 * 0x18 + 0x10);
        bVar6 = *(byte *)(plVar1 + 2);
        if (bVar6 < *pbVar12) {
          if (*(char *)((long)plVar1 + 0x11) != '\0') {
            FUN_00167440(param_1,*(undefined4 *)(*(long *)(lVar16 + 0x10) + lVar14 * 0x18 + 8));
            bVar6 = *(byte *)(plVar1 + 2);
          }
          *pbVar12 = bVar6;
        }
        lVar11 = param_1[2];
        lVar5 = *(long *)(lVar11 + 0x58);
        iVar7 = *(int *)(*(long *)(*(long *)(lVar11 + 0x30) + 0x18) + 8);
        if (iVar7 < *(int *)(lVar5 + 0x28)) {
          lVar8 = *(long *)(lVar5 + 0x10);
          plVar15 = (long *)(*(long *)(lVar5 + 0x20) + (long)iVar7 * 0x18);
          lVar5 = (long)*(int *)(lVar5 + 0x28) - (long)iVar7;
          do {
            if (*plVar15 == *(long *)(lVar8 + lVar14 * 0x18)) {
              if (*(byte *)(plVar15 + 2) < *(byte *)(lVar8 + lVar14 * 0x18 + 0x10)) {
                FUN_00167440(*(long *)(lVar11 + 0x30),*(undefined4 *)(lVar8 + lVar14 * 0x18 + 8));
              }
              FUN_001667f0(lVar11,iVar13,plVar15);
              if (*(int *)(lVar16 + 0x18) <= iVar13) {
                return;
              }
              goto LAB_00165244;
            }
            plVar15 = plVar15 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar16 + 0x18));
    }
  }
  return;
}


