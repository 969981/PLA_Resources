/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ddfa0; name: FUN_004ddfa0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_004ddfa0(long param_1,long *param_2,ulong param_3,void *param_4,size_t param_5,
                 long *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_b0 [64];
  int local_70;
  int local_6c;
  long local_68;
  
  if (param_3 == 0) {
    lVar8 = 0;
    lVar9 = 0;
    lVar11 = 0;
    uVar6 = 3;
    goto LAB_004de2e4;
  }
  lVar11 = *(long *)(param_1 + 0x728);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
      (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    if (0x1f < param_3) goto LAB_004de02c;
    lVar8 = 0;
    lVar9 = 0;
    goto LAB_004de1e4;
  }
  lVar8 = 0;
  uVar6 = 4;
  if ((param_3 < 0x20) || (*(long *)(param_1 + 0x6b8) != 0)) {
    lVar9 = 0;
    lVar11 = 0;
  }
  else {
LAB_004de02c:
    lVar8 = FUN_0046e390();
    if (lVar8 == 0) {
      uVar6 = 0;
      lVar9 = 0;
      lVar11 = 0;
    }
    else {
      lVar9 = FUN_0041b530();
      if (lVar9 == 0) {
        uVar6 = 0;
        lVar11 = 0;
      }
      else {
        if (*(code **)(lVar11 + 0x208) == (code *)0x0) {
          if (*param_2 != *(long *)(lVar11 + 0x1f0) || param_2[1] != *(long *)(lVar11 + 0x1f8))
          goto LAB_004de1e4;
          uVar10 = *(undefined8 *)(lVar11 + 0x200);
          uVar4 = FUN_0044f850();
          iVar3 = FUN_0046dda0(lVar8,uVar10,0x20,uVar4,0);
          if (0 < iVar3) {
            uVar4 = FUN_00470800();
            iVar3 = FUN_0041c090(lVar9,uVar4,0,*(long *)(lVar11 + 0x200) + 0x20,param_2 + 2);
            if (0 < iVar3) {
              if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0)
              goto LAB_004de170;
              iVar3 = **(int **)(param_1 + 8);
              bVar2 = 0x303 < iVar3 && iVar3 != 0x10000;
              lVar11 = FUN_0046e370(lVar8);
              goto joined_r0x004de180;
            }
          }
        }
        else {
          iVar3 = (**(code **)(lVar11 + 0x208))(param_1,param_2,param_2 + 2,lVar9,lVar8,0);
          if (-1 < iVar3) {
            if (iVar3 == 0) goto LAB_004de1e4;
            if (iVar3 == 2) {
              bVar2 = true;
              lVar11 = FUN_0046e370(lVar8);
            }
            else {
LAB_004de170:
              bVar2 = false;
              lVar11 = FUN_0046e370(lVar8);
            }
joined_r0x004de180:
            if (lVar11 == 0) goto LAB_004de2e0;
            iVar3 = FUN_0041ca80(lVar9);
            if (param_3 <= (ulong)(lVar11 + (iVar3 + 0x10))) goto LAB_004de1e4;
            param_3 = param_3 - lVar11;
            iVar3 = FUN_0046e2b0(lVar8,param_2,param_3);
            if ((iVar3 < 1) || (iVar3 = FUN_0046e2d0(lVar8,auStack_b0,0), iVar3 < 1))
            goto LAB_004de2e0;
            iVar3 = FUN_00404df0(auStack_b0,(long)param_2 + param_3,lVar11);
            if (iVar3 != 0) goto LAB_004de1e4;
            iVar3 = FUN_0041ca80(lVar9);
            lVar11 = (long)param_2 + (long)iVar3 + 0x10;
            local_68 = lVar11;
            iVar3 = FUN_0041ca80(lVar9);
            param_3 = param_3 - (long)(iVar3 + 0x10);
            lVar5 = FUN_00400260(param_3,"external/openssl/ssl/t1_lib.c",0x59e);
            if ((lVar5 == 0) ||
               (iVar3 = FUN_0041ba50(lVar9,lVar5,&local_6c,lVar11,param_3 & 0xffffffff), iVar3 < 1))
            {
              FUN_00400420(lVar5,"external/openssl/ssl/t1_lib.c",0x5a1);
              goto LAB_004de2e0;
            }
            iVar3 = FUN_0041c070(lVar9,lVar5 + local_6c,&local_70);
            if (iVar3 < 1) {
              FUN_00400420(lVar5,"external/openssl/ssl/t1_lib.c",0x5a6);
LAB_004de1e4:
              lVar11 = 0;
            }
            else {
              local_6c = local_6c + local_70;
              local_68 = lVar5;
              lVar11 = FUN_004e11a0(0,&local_68);
              local_6c = local_6c + ((int)lVar5 - (int)local_68);
              FUN_00400420(lVar5,"external/openssl/ssl/t1_lib.c",0x5af);
              if (lVar11 != 0) {
                if (local_6c == 0) {
                  if (param_5 != 0) {
                    memcpy((void *)(lVar11 + 0x158),param_4,param_5);
                    *(size_t *)(lVar11 + 0x150) = param_5;
                  }
                  uVar6 = 5;
                  if (bVar2) {
                    uVar6 = 6;
                  }
                  goto LAB_004de2e4;
                }
                FUN_003fef10(lVar11);
                goto LAB_004de1e4;
              }
              FUN_004016d0();
            }
            uVar6 = 4;
            goto LAB_004de2e4;
          }
        }
LAB_004de2e0:
        lVar11 = 0;
        uVar6 = 1;
      }
    }
  }
LAB_004de2e4:
  FUN_0041b550(lVar9);
  FUN_0046e430(lVar8);
  if (uVar6 - 3 < 4) {
    pcVar7 = *(code **)(*(long *)(param_1 + 0x728) + 0x3b0);
    if (pcVar7 != (code *)0x0) {
      if (0xf < param_3) {
        param_3 = 0x10;
      }
      iVar3 = (*pcVar7)(param_1,lVar11,param_2,param_3,uVar6,
                        *(undefined8 *)(*(long *)(param_1 + 0x728) + 0x3b8));
      if (iVar3 - 3U < 2) {
        if (uVar6 - 5 < 2) {
          uVar6 = 5;
          if (iVar3 != 3) {
            uVar6 = 6;
          }
          lVar8 = *(long *)(param_1 + 0x6b8);
          goto joined_r0x004de408;
        }
      }
      else {
        if (iVar3 == 2) {
          uVar1 = 4;
          if (uVar6 - 3 < 2) {
            uVar1 = uVar6;
          }
          FUN_003fef10(lVar11);
          lVar11 = 0;
          lVar8 = *(long *)(param_1 + 0x6b8);
          uVar6 = uVar1;
          goto joined_r0x004de408;
        }
        if (iVar3 == 1) {
          FUN_003fef10(lVar11);
          lVar11 = 0;
          uVar6 = 2;
          goto LAB_004de35c;
        }
      }
      uVar6 = 1;
      lVar8 = *(long *)(param_1 + 0x6b8);
      goto joined_r0x004de408;
    }
  }
LAB_004de35c:
  lVar8 = *(long *)(param_1 + 0x6b8);
joined_r0x004de408:
  if (((lVar8 == 0) ||
      ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0 &&
        (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)))) &&
     ((uVar6 < 7 && ((1 << (ulong)uVar6 & 0x58U) != 0)))) {
    *(undefined4 *)(param_1 + 0x678) = 1;
  }
  *param_6 = lVar11;
  return uVar6;
}


