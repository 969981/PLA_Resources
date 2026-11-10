/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309bb78; name: FUN_0309bb78
 */


void FUN_0309bb78(long *param_1,long param_2,ulong *param_3,ulong param_4)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  undefined4 *puVar22;
  char cVar23;
  int iVar24;
  long lVar25;
  char cVar26;
  uint *puVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  undefined4 *local_70;
  undefined8 local_68;
  
  lVar31 = DAT_04434b38;
  iVar13 = *(int *)(*(long *)(param_2 + 0x488) + 0x58);
  uVar29 = param_4 & 0xffffffff;
  iVar11 = (int)param_4;
  uVar12 = param_4;
  if (0 < iVar11) {
    uVar14 = *(undefined8 *)(param_2 + 0x698);
    bVar3 = *(byte *)((long)param_3 + 0x42);
    puVar5 = param_3;
    do {
      if (((bVar3 >> 2 & 1) != 0) &&
         (((~(uint)puVar5[1] & 0xffffff) != 0 || ((~(uint)puVar5[3] & 0xffffff) != 0)))) {
        uVar30 = *puVar5;
        uVar32 = (uint)puVar5[1];
        uVar20 = uVar32 & 0xffffff;
        if ((uVar20 == 0xffffff) ||
           (((*(uint *)(param_2 + 0x40) <= uVar20 ||
             ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
            (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) != uVar32)))) {
          if ((long)uVar30 < 0) {
            uVar30 = uVar30 & 0xffffffff;
          }
          else {
            uVar30 = FUN_032c0fa4(param_2 + 0x948,uVar30,&local_70);
            if ((uVar30 & 1) == 0) {
              uVar30 = 0xffffff;
            }
            else {
              uVar30 = (ulong)local_70 & 0xffffffff;
            }
          }
          uVar32 = (uint)uVar30;
          uVar20 = uVar32 & 0xffffff;
          if (uVar20 == 0xffffff) {
            bVar8 = false;
          }
          else {
            if (((uVar20 < *(uint *)(param_2 + 0x40)) &&
                ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) != 0)) &&
               (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) == uVar32)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            *(uint *)(puVar5 + 1) = uVar32;
          }
        }
        else {
          uVar30 = puVar5[1] & 0xffffffff;
          bVar8 = true;
        }
        uVar10 = puVar5[2];
        uVar32 = (uint)puVar5[3];
        uVar20 = uVar32 & 0xffffff;
        if (((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
           (((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0 ||
            (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) != uVar32)))) {
          if ((long)uVar10 < 0) {
            uVar10 = uVar10 & 0xffffffff;
          }
          else {
            uVar10 = FUN_032c0fa4(param_2 + 0x948,uVar10,&local_70);
            if ((uVar10 & 1) == 0) {
              uVar10 = 0xffffff;
            }
            else {
              uVar10 = (ulong)local_70 & 0xffffffff;
            }
          }
          uVar32 = (uint)uVar10;
          uVar20 = uVar32 & 0xffffff;
          if (uVar20 != 0xffffff) {
            if (((*(uint *)(param_2 + 0x40) <= uVar20) ||
                ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
               (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) != uVar32)) {
              bVar9 = false;
              *(uint *)(puVar5 + 3) = uVar32;
              goto joined_r0x0309be7c;
            }
            bVar9 = true;
            *(uint *)(puVar5 + 3) = uVar32;
            if (!bVar8) goto LAB_0309bbf4;
            goto LAB_0309bcac;
          }
        }
        else {
          uVar10 = puVar5[3] & 0xffffffff;
          bVar9 = true;
joined_r0x0309be7c:
          if (bVar8) {
LAB_0309bcac:
            if ((bVar9) && (*(long *)(param_2 + 0x698) != 0)) {
              lVar15 = *(long *)(param_2 + 0x38);
              uVar17 = uVar30 & 0xffffff;
              if ((((*(byte *)(lVar15 + uVar17 * 0xc0 + 0x88) & 1) != 0) &&
                  (uVar10 = uVar10 & 0xffffff, (*(byte *)(lVar15 + uVar10 * 0xc0 + 0x88) & 1) != 0))
                 && ((((*(byte *)(lVar15 + uVar17 * 0xc0 + 0x54) & 5) == 0 ||
                      ((*(byte *)(lVar15 + uVar10 * 0xc0 + 0x54) & 5) == 0)) &&
                     (*(int *)(lVar15 + uVar17 * 0xc0 + 0x80) !=
                      *(int *)(lVar15 + uVar10 * 0xc0 + 0x80))))) {
                FUN_0304f924(uVar14,uVar30);
              }
            }
          }
        }
      }
LAB_0309bbf4:
      uVar29 = uVar29 - 1;
      if (uVar29 == 0) break;
      bVar3 = *(byte *)((long)puVar5 + 0xaa);
      puVar5 = puVar5 + 0xd;
    } while( true );
  }
  puVar27 = (uint *)((long)param_1 + 0xc);
  if ((int)(*puVar27 & 0x3fffffff) < iVar11) {
    uVar12 = (ulong)*(uint *)(param_1 + 1);
    lVar15 = FUN_0309ded8(PTR_PTR_0434a080,param_4 & 0xffffffff,*param_1,uVar12,puVar27);
    *param_1 = lVar15;
  }
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  if (0 < iVar11) {
    uVar29 = 0;
    bVar3 = *(byte *)((long)param_3 + 0x42);
    uVar30 = local_68;
    do {
      local_68 = uVar30;
      if (((bVar3 >> 2 & 1) != 0) &&
         (((~(uint)param_3[1] & 0xffffff) != 0 || ((~(uint)param_3[3] & 0xffffff) != 0)))) {
        lVar15 = lVar31 + 0x9c0;
        if (*param_3 != 0xffffffffffffffff) {
          uVar32 = (uint)param_3[1];
          uVar20 = uVar32 & 0xffffff;
          if ((((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
              (lVar15 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar15 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
             ((*(uint *)(lVar15 + (ulong)uVar20 * 0xc0 + 0x50) != uVar32 ||
              (lVar15 = lVar15 + (param_3[1] & 0xffffff) * 0xc0, (*(byte *)(lVar15 + 0x88) & 1) == 0
              )))) goto LAB_0309bf04;
        }
        lVar25 = lVar31 + 0x9c0;
        if (param_3[2] != 0xffffffffffffffff) {
          uVar32 = (uint)param_3[3];
          uVar20 = uVar32 & 0xffffff;
          if (((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
             ((lVar25 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar25 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0 ||
              ((*(uint *)(lVar25 + (ulong)uVar20 * 0xc0 + 0x50) != uVar32 ||
               (lVar25 = lVar25 + (param_3[3] & 0xffffff) * 0xc0,
               (*(byte *)(lVar25 + 0x88) & 1) == 0)))))) goto LAB_0309bf04;
        }
        if (((*(byte *)(lVar15 + 0x54) & 5) == 0) || ((*(byte *)(lVar25 + 0x54) & 5) == 0)) {
          if (*(uint *)(lVar15 + 0x80) != *(uint *)(lVar25 + 0x80)) {
            uVar10 = param_3[1] & 0xffffff;
            if (uVar10 == 0xffffff) {
              bVar8 = false;
              cVar23 = -1;
            }
            else {
              cVar23 = *(char *)(*(long *)(param_2 + 0xf8) + uVar10);
              bVar8 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar10 * 0xc0 + 0x54) & 9) == 0;
            }
            uVar10 = param_3[3] & 0xffffff;
            if (uVar10 == 0xffffff) {
              bVar9 = false;
              cVar26 = -1;
              if (cVar23 != -1) goto LAB_0309c0ec;
LAB_0309c06c:
              if (cVar26 != -1) goto LAB_0309c0ec;
              if ((bool)(bVar9 | bVar8)) goto LAB_0309c07c;
LAB_0309bed4:
              lVar15 = param_1[1];
              *(int *)(param_1 + 1) = (int)lVar15 + 1;
              puVar16 = (uint *)(*param_1 + (long)(int)lVar15 * 0xc);
              *(short *)((long)puVar16 + 2) = (short)uVar12;
              *(undefined2 *)puVar16 = 0xffff;
              *(int *)(param_1 + 2) = (int)param_1[2] + 1;
            }
            else {
              cVar26 = *(char *)(*(long *)(param_2 + 0xf8) + uVar10);
              bVar9 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar10 * 0xc0 + 0x54) & 9) == 0;
              if (cVar23 == -1) goto LAB_0309c06c;
LAB_0309c0ec:
              uVar12 = (ulong)*(ushort *)
                               (DAT_04434b38 +
                                (ulong)((uint)(byte)(cVar26 + 1) * 0x21 + (uint)(byte)(cVar23 + 1))
                                * 2 + 0x18);
              if (!(bool)(bVar9 | bVar8)) goto LAB_0309bed4;
LAB_0309c07c:
              if (*(long *)(param_2 + 0x698) == 0) goto LAB_0309bed4;
              lVar21 = *(long *)(*(long *)(param_2 + 0x698) + 0x388);
              uVar32 = *(uint *)(lVar21 + (ulong)*(uint *)(lVar15 + 0x80) * 0x20 + 0x10);
              uVar20 = *(uint *)(lVar21 + (ulong)*(uint *)(lVar25 + 0x80) * 0x20 + 0x10);
              if (uVar32 != 0xffffffff) {
                uVar20 = uVar32;
              }
              if (uVar20 < 0xffff) {
                lVar15 = param_1[1];
                *(int *)(param_1 + 1) = (int)lVar15 + 1;
                puVar16 = (uint *)(*param_1 + (long)(int)lVar15 * 0xc);
                *(undefined2 *)((long)puVar16 + 2) = 0xffff;
                *(short *)puVar16 = (short)uVar20;
              }
              else {
                local_68._0_4_ = (int)uVar30;
                local_68._4_4_ = (uint)(uVar30 >> 0x20);
                lVar15 = (long)(int)local_68;
                iVar11 = (int)local_68 + 1;
                bVar8 = (int)(local_68._4_4_ & 0x3fffffff) <= (int)local_68;
                if (bVar8) {
                  local_70 = (undefined4 *)
                             FUN_0309ded8(PTR_PTR_0434a090,iVar11,local_70,uVar30 & 0xffffffff,
                                          (long)&local_68 + 4);
                  uVar12 = uVar12 & 0xffffffff;
                }
                puVar16 = local_70 + lVar15 * 3;
                local_68 = CONCAT44(local_68._4_4_,iVar11);
                *puVar16 = uVar20;
              }
            }
            uVar20 = *(uint *)((long)param_3 + 0x34);
            puVar16[1] = (uint)uVar29;
            puVar16[2] = uVar20;
          }
        }
      }
LAB_0309bf04:
      uVar29 = uVar29 + 1;
      if ((param_4 & 0xffffffff) == uVar29) break;
      bVar3 = *(byte *)((long)param_3 + 0xaa);
      param_3 = param_3 + 0xd;
      uVar30 = local_68;
    } while( true );
  }
  if (iVar13 != 0) {
    FUN_0309ced0(*param_1,(int)param_1[1]);
    iVar11 = 0;
    goto LAB_0309c1ac;
  }
  lVar15 = param_1[1];
  lVar31 = tpidr_el0;
  lVar25 = *(long *)(lVar31 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar25;
  }
  lVar25 = *(long *)(lVar25 + 8);
  uVar29 = (long)(int)lVar15 * 0xc + 0x7fU & 0xffffffffffffff80;
  if (*(ulong *)(lVar25 + 0x10) < uVar29) {
LAB_0309c46c:
    lVar21 = FUN_032ce670(lVar25,uVar29);
  }
  else {
    lVar21 = *(long *)(lVar25 + 0x18);
    if (*(ulong *)(lVar25 + 0x20) < lVar21 + uVar29) goto LAB_0309c46c;
    *(ulong *)(lVar25 + 0x18) = lVar21 + uVar29;
  }
  FUN_0309c770(*param_1,(int)lVar15,lVar21);
  lVar15 = *(long *)(lVar31 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar15;
  }
  lVar15 = *(long *)(lVar15 + 8);
  if (((*(ulong *)(lVar15 + 0x10) < uVar29) || (*(long *)(lVar15 + 0x18) != lVar21 + uVar29)) ||
     (*(long *)(lVar15 + 0x28) == lVar21)) {
    FUN_032cedf0(lVar15,lVar21,uVar29);
  }
  else {
    *(long *)(lVar15 + 0x18) = lVar21;
  }
  uVar29 = local_68;
  iVar24 = (int)local_68;
  lVar15 = (long)(int)local_68;
  iVar11 = (int)param_1[1];
  if ((int)local_68 == 0) goto LAB_0309c1ac;
  lVar25 = *(long *)(lVar31 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar25;
  }
  lVar25 = *(long *)(lVar25 + 8);
  uVar12 = lVar15 * 0xc + 0x7fU & 0xffffffffffffff80;
  if (*(ulong *)(lVar25 + 0x10) < uVar12) {
LAB_0309c480:
    lVar15 = FUN_032ce670(lVar25,uVar12);
  }
  else {
    lVar15 = *(long *)(lVar25 + 0x18);
    if (*(ulong *)(lVar25 + 0x20) < lVar15 + uVar12) goto LAB_0309c480;
    *(ulong *)(lVar25 + 0x18) = lVar15 + uVar12;
  }
  FUN_0309c770(local_70,uVar29 & 0xffffffff,lVar15);
  iVar28 = iVar11 + iVar24;
  if ((int)(*puVar27 & 0x3fffffff) < iVar28) {
    lVar25 = FUN_0309ded8(PTR_PTR_0434a080,iVar28,*param_1,(int)param_1[1],puVar27);
    *param_1 = lVar25;
  }
  if ((int)param_1[1] != iVar28) {
    *(int *)(param_1 + 1) = iVar28;
  }
  uVar20 = iVar24 * 3;
  if (0 < (int)uVar20) {
    puVar18 = (undefined4 *)(*param_1 + (long)iVar11 * 0xc);
    uVar32 = uVar20 & 3;
    puVar6 = local_70;
    if (2 < uVar20 - 1) {
      iVar24 = uVar20 - uVar32;
      puVar19 = puVar18;
      puVar22 = local_70;
      do {
        *puVar19 = *puVar22;
        puVar19[1] = puVar22[1];
        puVar19[2] = puVar22[2];
        puVar6 = puVar22 + 4;
        puVar18 = puVar19 + 4;
        iVar24 = iVar24 + -4;
        puVar19[3] = puVar22[3];
        puVar19 = puVar18;
        puVar22 = puVar6;
      } while (iVar24 != 0);
    }
    for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      *puVar18 = *puVar6;
      puVar18 = puVar18 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  lVar25 = *(long *)(lVar31 + 0x38d490);
  if (lVar25 == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar31 + 0x38d490) = lVar25;
  }
  lVar31 = *(long *)(lVar25 + 8);
  if (((*(ulong *)(lVar31 + 0x10) < uVar12) || (*(long *)(lVar31 + 0x18) != lVar15 + uVar12)) ||
     (*(long *)(lVar31 + 0x28) == lVar15)) {
    FUN_032cedf0(lVar31,lVar15,uVar12);
  }
  else {
    *(long *)(lVar31 + 0x18) = lVar15;
  }
LAB_0309c1ac:
  puVar7 = PTR_PTR_0434a080;
  iVar24 = (int)param_1[1];
  lVar31 = (long)(int)param_1[2];
  if ((int)param_1[2] < iVar24) {
    lVar25 = *param_1;
    lVar15 = lVar25 + lVar31 * 0xc;
    uVar2 = *(undefined4 *)(param_2 + 0x5b8);
    iVar28 = 0;
    if (iVar13 == 0) {
      lVar21 = lVar31 * 0xc;
      uVar20 = 0xffffffff;
      if (iVar11 <= lVar31) goto LAB_0309c728;
LAB_0309c6c0:
      uVar32 = (uint)*(ushort *)(lVar25 + lVar21);
      if (uVar32 == uVar20) goto LAB_0309c6a0;
      do {
        if (uVar20 != 0xffffffff) {
          lVar33 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar20 * 8);
          *(undefined4 *)(lVar33 + 0x38) = 0;
          lVar25 = *(long *)(lVar33 + 0x30);
          if ((*(uint *)(lVar33 + 0x3c) & 0x3fffffff) == 0) {
            lVar25 = FUN_0305b29c(puVar7,1,lVar25,0);
            iVar13 = *(int *)(lVar33 + 0x38);
            *(long *)(lVar33 + 0x30) = lVar25;
          }
          else {
            iVar13 = 0;
          }
          plVar1 = (long *)(lVar25 + (long)iVar13 * 0x10);
          *plVar1 = lVar15;
          *(int *)(plVar1 + 1) = iVar28;
          *(undefined4 *)(lVar33 + 0x38) = 1;
          *(undefined4 *)(lVar33 + 0x50) = uVar2;
          lVar25 = *param_1;
          iVar24 = (int)param_1[1];
        }
        lVar15 = lVar25 + lVar21;
        iVar28 = 1;
        while( true ) {
          lVar31 = lVar31 + 1;
          lVar21 = lVar21 + 0xc;
          if (iVar24 <= lVar31) goto LAB_0309c5f0;
          uVar20 = uVar32;
          if (lVar31 < iVar11) goto LAB_0309c6c0;
LAB_0309c728:
          uVar32 = *(uint *)(lVar25 + lVar21);
          if (uVar32 != uVar20) break;
LAB_0309c6a0:
          uVar32 = uVar20;
          iVar28 = iVar28 + 1;
        }
      } while( true );
    }
    lVar21 = lVar31 * 0xc;
    uVar32 = 0xffffffff;
    do {
      uVar4 = *(ushort *)(lVar25 + lVar21);
      if (uVar32 == uVar4) {
        iVar28 = iVar28 + 1;
      }
      else {
        if (uVar32 != 0xffffffff) {
          lVar33 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar32 * 8);
          *(undefined4 *)(lVar33 + 0x38) = 0;
          lVar25 = *(long *)(lVar33 + 0x30);
          if ((*(uint *)(lVar33 + 0x3c) & 0x3fffffff) == 0) {
            lVar25 = FUN_0305b29c(puVar7,1,lVar25,0);
            iVar13 = *(int *)(lVar33 + 0x38);
            *(long *)(lVar33 + 0x30) = lVar25;
          }
          else {
            iVar13 = 0;
          }
          plVar1 = (long *)(lVar25 + (long)iVar13 * 0x10);
          *plVar1 = lVar15;
          *(int *)(plVar1 + 1) = iVar28;
          *(undefined4 *)(lVar33 + 0x38) = 1;
          *(undefined4 *)(lVar33 + 0x50) = uVar2;
          lVar25 = *param_1;
          iVar24 = (int)param_1[1];
        }
        lVar15 = lVar25 + lVar21;
        iVar28 = 1;
        uVar32 = (uint)uVar4;
      }
      lVar31 = lVar31 + 1;
      lVar21 = lVar21 + 0xc;
    } while (lVar31 < iVar24);
LAB_0309c5f0:
    if (uVar32 != 0xffffffff) {
      lVar25 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar32 * 8);
      *(undefined4 *)(lVar25 + 0x38) = 0;
      lVar31 = *(long *)(lVar25 + 0x30);
      if ((*(uint *)(lVar25 + 0x3c) & 0x3fffffff) == 0) {
        lVar31 = FUN_0305b29c(puVar7,1,lVar31,0);
        lVar21 = (long)*(int *)(lVar25 + 0x38);
        *(long *)(lVar25 + 0x30) = lVar31;
      }
      else {
        lVar21 = 0;
      }
      plVar1 = (long *)(lVar31 + lVar21 * 0x10);
      *plVar1 = lVar15;
      *(int *)(plVar1 + 1) = iVar28;
      *(undefined4 *)(lVar25 + 0x38) = 1;
      *(undefined4 *)(lVar25 + 0x50) = uVar2;
    }
  }
  uVar29 = local_68;
  uVar20 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (long)uVar29) && (local_70 != (undefined4 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_70,0xc,uVar20 & 0x3fffffff);
  }
  return;
}


