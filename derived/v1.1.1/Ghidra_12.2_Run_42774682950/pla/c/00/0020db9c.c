/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020db9c; name: FUN_0020db9c
 */


int FUN_0020db9c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  size_t sVar6;
  char cVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  size_t *psVar19;
  long lVar20;
  uint uVar21;
  size_t __n;
  ulong local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return -0x20b;
  }
  if ((char)param_1[0x8a] == '\0') {
LAB_0020dc28:
    if (param_4 != 0) {
      lVar20 = 0;
      do {
        puVar14 = (undefined8 *)(param_3 + lVar20 * 0x28);
        __n = puVar14[2];
        pbVar4 = (byte *)*puVar14;
        lVar18 = param_1[4];
        uVar5 = FUN_0020ed78(pbVar4,__n);
        uVar1 = (uint)uVar5;
        if (uVar1 == 0xffffffff) {
          uVar21 = 0x811c9dc5;
          if (__n != 0) {
            uVar21 = 0x811c9dc5;
            pbVar9 = pbVar4;
            sVar6 = __n;
            do {
              uVar21 = (uVar21 ^ *pbVar9) * 0x1000193;
              sVar6 = sVar6 - 1;
              pbVar9 = pbVar9 + 1;
            } while (sVar6 != 0);
            goto LAB_0020dcec;
          }
LAB_0020dd0c:
          if ((*(byte *)(param_3 + lVar20 * 0x28 + 0x20) & 1) != 0) goto LAB_0020dd48;
          if ((uVar1 < 0x37) && ((1L << (uVar5 & 0x3f) & 0x40218208100008U) != 0)) {
            cVar7 = '\x01';
          }
          else {
            cVar7 = (ulong)(param_1[6] * 3) >> 2 <
                    __n + *(long *)(param_3 + lVar20 * 0x28 + 0x18) + 0x20;
          }
        }
        else {
          if ((int)uVar1 < 0x3d) {
            uVar21 = *(uint *)(&DAT_0411d8ec + (long)(int)uVar1 * 0x80);
          }
          else {
            uVar21 = 0;
          }
LAB_0020dcec:
          if ((uVar1 != 0x16) &&
             ((uVar1 != 0x1f || (0x13 < *(ulong *)(param_3 + lVar20 * 0x28 + 0x18)))))
          goto LAB_0020dd0c;
LAB_0020dd48:
          cVar7 = '\x02';
        }
        plVar17 = (long *)param_1[(ulong)(uVar21 & 0x7f) + 8];
        plVar15 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          lVar10 = param_3 + lVar20 * 0x28;
          do {
            if ((*(uint *)(plVar17 + 2) == uVar1) &&
               ((uVar1 != 0xffffffff ||
                (((*(uint *)((long)plVar17 + 0x4c) == uVar21 &&
                  (*(size_t *)(*plVar17 + 0x18) == __n)) &&
                 (iVar3 = memcmp(*(void **)(*plVar17 + 0x10),pbVar4,__n), iVar3 == 0)))))) {
              bVar2 = plVar15 == (long *)0x0;
              if (bVar2) {
                plVar15 = plVar17;
              }
              if (bVar2 && cVar7 == '\x02') {
                plVar15 = plVar17;
                break;
              }
              sVar6 = *(size_t *)(plVar17[1] + 0x18);
              if ((sVar6 == *(size_t *)(lVar10 + 0x18)) &&
                 (iVar3 = memcmp(*(void **)(plVar17[1] + 0x10),*(void **)(lVar10 + 8),sVar6),
                 iVar3 == 0)) {
                bVar2 = false;
                plVar15 = plVar17;
                goto LAB_0020de50;
              }
            }
            plVar17 = (long *)plVar17[8];
          } while (plVar17 != (long *)0x0);
        }
        if (uVar1 < 0x3d) {
          uVar5 = (ulong)(int)uVar1;
          if (cVar7 != '\x02') {
            lVar10 = param_3 + lVar20 * 0x28;
            lVar16 = 0;
            psVar19 = (size_t *)(&DAT_0411d8b0 + uVar5 * 0x80);
            do {
              if ((uint)psVar19[7] != uVar1) break;
              if ((*psVar19 == *(size_t *)(lVar10 + 0x18)) &&
                 (iVar3 = memcmp((void *)psVar19[-1],*(void **)(lVar10 + 8),*psVar19), iVar3 == 0))
              {
                uVar5 = uVar5 - lVar16;
                goto LAB_0020dffc;
              }
              lVar16 = lVar16 + -1;
              psVar19 = psVar19 + 0x10;
            } while (uVar1 - 0x3d != (int)lVar16);
            goto LAB_0020dee0;
          }
LAB_0020dfb8:
          iVar3 = FUN_0020eb1c(param_2,uVar5,puVar14,cVar7);
        }
        else if (plVar15 == (long *)0x0) {
          uVar5 = 0xffffffffffffffff;
LAB_0020dee0:
          if (cVar7 == '\0') {
            if (uVar5 == 0xffffffffffffffff) {
              iVar3 = FUN_002103fc(&local_78,pbVar4,__n,lVar18);
              if (iVar3 != 0) goto LAB_0020e108;
            }
            else {
              if (uVar5 < 0x3d) {
                local_78 = uVar5 * 0x80 + 0x411d870;
              }
              else {
                local_78 = **(ulong **)(*param_1 + ((uVar5 + param_1[2]) - 0x3d & param_1[1]) * 8);
              }
              FUN_00210460();
            }
            lVar10 = param_3 + lVar20 * 0x28;
            iVar3 = FUN_002103fc(&local_70,*(undefined8 *)(lVar10 + 8),
                                 *(undefined8 *)(lVar10 + 0x18),lVar18);
            if (iVar3 != 0) {
              FUN_00210478(local_78);
              goto LAB_0020e108;
            }
            local_64 = 0;
            local_68 = uVar1;
            iVar3 = FUN_0020fb80(param_1,&local_78,param_1 + 8,uVar21);
            FUN_00210478(local_70);
            FUN_00210478(local_78);
            if (iVar3 != 0) {
              iVar3 = -0x20b;
              goto LAB_0020e108;
            }
          }
          if (uVar5 != 0xffffffffffffffff) goto LAB_0020dfb8;
          iVar3 = FUN_0020ec30(param_2,puVar14,cVar7);
        }
        else {
          bVar2 = true;
LAB_0020de50:
          uVar5 = (ulong)((int)param_1[7] + ~*(uint *)(plVar15 + 9) + 0x3d);
          if (bVar2) goto LAB_0020dee0;
LAB_0020dffc:
          if (uVar5 + 1 < 0x7f) {
            local_78 = CONCAT71(local_78._1_7_,(char)(uVar5 + 1)) | 0x80;
            lVar18 = 1;
LAB_0020e094:
            iVar3 = FUN_0020c4a8(param_2,&local_78,lVar18);
          }
          else {
            uVar5 = uVar5 - 0x7e;
            if (uVar5 < 0x80) {
              lVar18 = 2;
              pbVar4 = (byte *)((ulong)&local_78 | 1);
LAB_0020e090:
              local_78 = CONCAT71(local_78._1_7_,0xff);
              *pbVar4 = (byte)uVar5;
              goto LAB_0020e094;
            }
            uVar8 = 1;
            uVar12 = uVar5;
            do {
              uVar11 = uVar8;
              uVar13 = uVar12 >> 0xe;
              uVar12 = uVar12 >> 7;
              uVar8 = uVar11 + 1;
            } while (uVar13 != 0);
            iVar3 = -0x20b;
            if (uVar8 < 0x10) {
              lVar18 = uVar11 + 2;
              pbVar9 = (byte *)((ulong)&local_78 | 1);
              do {
                pbVar4 = pbVar9 + 1;
                *pbVar9 = (byte)uVar5 | 0x80;
                uVar8 = uVar5 >> 0xe;
                uVar5 = uVar5 >> 7;
                pbVar9 = pbVar4;
              } while (uVar8 != 0);
              goto LAB_0020e090;
            }
          }
        }
        if (iVar3 != 0) goto LAB_0020e108;
        lVar20 = lVar20 + 1;
      } while (lVar20 != param_4);
    }
    iVar3 = 0;
  }
  else {
    uVar5 = param_1[0x89];
    param_1[0x89] = 0xffffffff;
    uVar8 = param_1[6];
    *(undefined1 *)(param_1 + 0x8a) = 0;
    if (uVar5 < uVar8) {
      iVar3 = FUN_0020e134(param_2);
      if (iVar3 == 0) {
        uVar8 = param_1[6];
        goto LAB_0020dc14;
      }
    }
    else {
LAB_0020dc14:
      iVar3 = FUN_0020e134(param_2,uVar8);
      if (iVar3 == 0) goto LAB_0020dc28;
    }
LAB_0020e108:
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  return iVar3;
}


