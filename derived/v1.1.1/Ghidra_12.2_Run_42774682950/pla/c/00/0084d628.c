/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084d628; name: FUN_0084d628
 */


void FUN_0084d628(undefined8 param_1,long *param_2,undefined8 *param_3,void *param_4,int *param_5,
                 uint param_6)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  long lVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  uint *local_90;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  if ((param_4 == (void *)0x0) || (param_5 == (int *)0x0)) {
    local_78[0] = 0x10407;
  }
  else if (param_2[0x9b] == 0) {
    local_78[0] = 0x10408;
  }
  else {
    plVar16 = (long *)0x0;
    iVar17 = 0;
    uVar18 = 0xffffffffffffffff;
    do {
      plVar3 = (long *)(**(code **)(*param_2 + 0x40))(param_2,iVar17);
      if (plVar3 != (long *)0x0) {
        uVar11 = *(ushort *)((long)plVar3 + 0x1a);
        if (uVar11 != 0) {
          uVar6 = 0;
          lVar9 = plVar3[1];
          do {
            uVar7 = *(int *)((long)plVar3 + 0x14) + (uint)uVar6;
            uVar4 = 0;
            if (*(ushort *)(plVar3 + 2) <= uVar7) {
              uVar4 = (uint)*(ushort *)(plVar3 + 2);
            }
            uVar14 = (ulong)(uVar7 - uVar4);
            if (*(char *)(lVar9 + uVar14 * 0x5b8) == '\0') break;
            if (*(char *)(lVar9 + uVar14 * 0x5b8 + 1) != '\0') {
              uVar14 = *(ulong *)(lVar9 + uVar14 * 0x5b8 + 0x5b0);
              if (uVar18 <= uVar14) {
                uVar14 = uVar18;
                plVar3 = plVar16;
              }
              plVar16 = plVar3;
              uVar18 = uVar14;
              break;
            }
            if (uVar6 < uVar11) {
              uVar6 = uVar6 + 1;
            }
          } while (uVar6 < uVar11);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x18);
    if (plVar16 != (long *)0x0) {
      uVar11 = *(ushort *)((long)plVar16 + 0x1a);
      if (uVar11 != 0) {
        uVar6 = 0;
        do {
          uVar7 = *(int *)((long)plVar16 + 0x14) + (uint)uVar6;
          uVar4 = 0;
          if (*(ushort *)(plVar16 + 2) <= uVar7) {
            uVar4 = (uint)*(ushort *)(plVar16 + 2);
          }
          uVar18 = (ulong)(uVar7 - uVar4);
          if (*(char *)(plVar16[1] + uVar18 * 0x5b8) == '\0') break;
          if (*(char *)(plVar16[1] + uVar18 * 0x5b8 + 1) != '\0') {
            uVar6 = uVar6 + 1;
            goto joined_r0x0084d8a0;
          }
          if (uVar6 < uVar11) {
            uVar6 = uVar6 + 1;
          }
        } while (uVar6 < uVar11);
      }
      uVar6 = 0;
joined_r0x0084d8a0:
      if (param_3 == (undefined8 *)0x0) {
        *param_5 = 0;
        lVar9 = plVar16[1];
        uVar7 = 0;
        if ((uint)*(ushort *)(plVar16 + 2) <= *(uint *)((long)plVar16 + 0x14)) {
          uVar7 = (uint)*(ushort *)(plVar16 + 2);
        }
        uVar18 = (ulong)(*(uint *)((long)plVar16 + 0x14) - uVar7);
        puVar20 = (ushort *)(lVar9 + uVar18 * 0x5b8 + 4);
        uVar11 = *puVar20;
        if (uVar11 <= param_6) {
          uVar8 = 0;
          do {
            lVar9 = lVar9 + uVar18 * 0x5b8;
            memcpy(param_4,(void *)(lVar9 + 6),(ulong)uVar11);
            uVar11 = *puVar20;
            iVar17 = *param_5 + (uint)uVar11;
            *param_5 = iVar17;
            if (*(char *)(lVar9 + 1) != '\0') goto LAB_0084d97c;
            if (uVar8 < *(ushort *)((long)plVar16 + 0x1a)) {
              uVar8 = uVar8 + 1;
            }
            uVar7 = *(int *)((long)plVar16 + 0x14) + (uint)uVar8;
            uVar4 = 0;
            if (*(ushort *)(plVar16 + 2) <= uVar7) {
              uVar4 = (uint)*(ushort *)(plVar16 + 2);
            }
            uVar18 = (ulong)(uVar7 - uVar4);
            lVar9 = plVar16[1];
            param_4 = (void *)((long)param_4 + (ulong)uVar11);
            puVar20 = (ushort *)(lVar9 + uVar18 * 0x5b8 + 4);
            uVar11 = *puVar20;
          } while (iVar17 + (uint)uVar11 <= param_6);
        }
      }
      else {
        *param_3 = 0;
        *param_5 = 0;
        lVar9 = plVar16[1];
        uVar7 = 0;
        if ((uint)*(ushort *)(plVar16 + 2) <= *(uint *)((long)plVar16 + 0x14)) {
          uVar7 = (uint)*(ushort *)(plVar16 + 2);
        }
        uVar18 = (ulong)(*(uint *)((long)plVar16 + 0x14) - uVar7);
        lVar19 = lVar9 + uVar18 * 0x5b8;
        *param_3 = *(undefined8 *)(lVar19 + 0x5a8);
        puVar20 = (ushort *)(lVar19 + 4);
        uVar11 = *puVar20;
        if (uVar11 <= param_6) {
          uVar8 = 0;
          do {
            lVar9 = lVar9 + uVar18 * 0x5b8;
            memcpy(param_4,(void *)(lVar9 + 6),(ulong)uVar11);
            uVar2 = *puVar20;
            iVar17 = *param_5 + (uint)uVar2;
            *param_5 = iVar17;
            if (*(char *)(lVar9 + 1) != '\0') goto LAB_0084d97c;
            if (uVar8 < *(ushort *)((long)plVar16 + 0x1a)) {
              uVar8 = uVar8 + 1;
            }
            uVar7 = *(int *)((long)plVar16 + 0x14) + (uint)uVar8;
            uVar4 = 0;
            if (*(ushort *)(plVar16 + 2) <= uVar7) {
              uVar4 = (uint)*(ushort *)(plVar16 + 2);
            }
            uVar18 = (ulong)(uVar7 - uVar4);
            lVar9 = plVar16[1];
            lVar19 = lVar9 + uVar18 * 0x5b8;
            *param_3 = *(undefined8 *)(lVar19 + 0x5a8);
            puVar20 = (ushort *)(lVar19 + 4);
            uVar11 = *puVar20;
            param_4 = (void *)((long)param_4 + (ulong)uVar2);
          } while (iVar17 + (uint)uVar11 <= param_6);
        }
      }
      local_78[0] = 0x10404;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
      goto LAB_0084d870;
    }
    local_78[0] = 0x2c09;
  }
  goto LAB_0084d860;
LAB_0084d97c:
  local_90 = (uint *)((long)plVar16 + 0x14);
  plVar3 = plVar16 + 1;
  uVar11 = *(ushort *)(plVar16 + 2);
  uVar7 = *(uint *)((long)plVar16 + 0x14);
  do {
    do {
      uVar7 = uVar11 + uVar7 + (uint)uVar6;
      do {
        uVar7 = uVar7 - uVar11;
        uVar4 = (uint)uVar11;
      } while (uVar4 <= uVar7);
      uVar8 = *(ushort *)((long)plVar16 + 0x1a);
      if (uVar8 != 0) {
        uVar8 = uVar8 - uVar6;
        *(ushort *)((long)plVar16 + 0x1a) = uVar8;
      }
      uVar2 = *(ushort *)((long)plVar16 + 0x1c);
      uVar5 = (uint)uVar11;
      if (uVar2 < uVar6) {
        *(uint *)((long)plVar16 + 0x14) = uVar7;
        *(undefined2 *)((long)plVar16 + 0x1c) = 0;
        *(ushort *)(plVar16 + 3) = (uVar6 - uVar2) + (short)plVar16[3];
        sVar10 = 0;
        iVar17 = (int)plVar16[4];
        goto joined_r0x0084da24;
      }
      sVar10 = uVar2 - uVar6;
      *(short *)((long)plVar16 + 0x1c) = sVar10;
      if (sVar10 == 0) goto LAB_0084d9ec;
      uVar6 = 1;
    } while (uVar8 == 0);
    pcVar13 = (char *)(*plVar3 + (ulong)uVar7 * 0x5b8);
    uVar6 = 1;
  } while ((pcVar13 == (char *)0x0) || (uVar6 = 1, *pcVar13 == '\0'));
LAB_0084d9ec:
  *local_90 = uVar7;
  iVar17 = (int)plVar16[4];
joined_r0x0084da24:
  if (-1 < iVar17) {
    uVar11 = *(ushort *)(plVar16 + 3);
    uVar12 = (uint)uVar11;
    if (0 < (int)(iVar17 - uVar12)) {
      iVar15 = 0;
      uVar6 = uVar8;
      if (uVar8 != 0) goto LAB_0084da64;
      do {
        do {
          do {
            uVar7 = uVar4 + 1 + uVar7;
            do {
              uVar7 = uVar7 - uVar4;
            } while (uVar4 <= uVar7);
            if (uVar6 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 - 1;
              *(ushort *)((long)plVar16 + 0x1a) = uVar6;
              uVar8 = uVar6;
            }
            if (sVar10 == 0) {
              uVar11 = uVar11 + 1;
              sVar10 = 0;
              *(uint *)((long)plVar16 + 0x14) = uVar7;
              *(undefined2 *)((long)plVar16 + 0x1c) = 0;
              *(ushort *)(plVar16 + 3) = uVar11;
              goto joined_r0x0084db0c;
            }
            sVar10 = sVar10 + -1;
            *(short *)((long)plVar16 + 0x1c) = sVar10;
          } while ((sVar10 != 0) &&
                  (((uVar6 == 0 ||
                    (pcVar13 = (char *)(*plVar3 + (ulong)uVar7 * 0x5b8), pcVar13 == (char *)0x0)) ||
                   (*pcVar13 == '\0'))));
          *local_90 = uVar7;
joined_r0x0084db0c:
          if (iVar15 + 1 == iVar17 - uVar12) goto LAB_0084db10;
          iVar15 = iVar15 + 1;
        } while (uVar6 == 0);
LAB_0084da64:
        uVar1 = 0;
        if (uVar5 <= uVar7) {
          uVar1 = uVar5;
        }
        pcVar13 = (char *)(*plVar3 + (ulong)(uVar7 - uVar1) * 0x5b8);
      } while ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0'));
    }
  }
LAB_0084db10:
  if (param_2[(ulong)*(byte *)((long)plVar16 + 0x24) + 0x7f] == 0) {
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        uVar4 = 0;
        if (uVar5 <= uVar7 + uVar11) {
          uVar4 = uVar5;
        }
        uVar18 = (ulong)((uVar7 + uVar11) - uVar4);
        if (*(char *)(*plVar3 + uVar18 * 0x5b8) == '\0') break;
        if (*(char *)(*plVar3 + uVar18 * 0x5b8 + 1) != '\0') goto LAB_0084db7c;
        if (uVar11 < uVar8) {
          uVar11 = uVar11 + 1;
        }
      } while (uVar11 < uVar8);
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
LAB_0084db7c:
  local_78[0] = 0;
LAB_0084d860:
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
LAB_0084d870:
  FUN_007ee578(param_1,local_78);
  return;
}


