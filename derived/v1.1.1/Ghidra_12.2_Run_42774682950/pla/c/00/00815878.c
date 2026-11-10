/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00815878; name: FUN_00815878
 */


ulong FUN_00815878(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  ulong uVar18;
  undefined *local_4e0;
  undefined1 *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined1 auStack_4b0 [136];
  undefined1 auStack_428 [512];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 auStack_1d4 [4];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [16];
  int local_1b8 [4];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined4 local_178 [64];
  uint local_78;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [24];
  short local_58;
  int local_50 [4];
  
  local_50[0] = 0;
  local_4e0 = (undefined *)((ulong)local_4e0 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_4e0);
  FUN_007e3400(auStack_70);
  uVar10 = FUN_007fc43c(*(undefined8 *)(param_1 + 0x58));
  uVar7 = 0;
  if ((uVar10 & 1) != 0) {
    uVar7 = FUN_007fc44c(*(undefined8 *)(param_1 + 0x58));
  }
  piVar1 = (int *)(param_1 + 0xb28);
  if (*(int *)(param_1 + 0xb28) == 1) {
    local_4e0 = (undefined *)0x0;
    FUN_007ecf14(&local_4e0);
    if (*(undefined **)(param_1 + 0xb58) < local_4e0) {
      local_4e0 = (undefined *)((ulong)local_4e0 & 0xffffffff00000000);
      local_178[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_4e0 | 4),(Result *)local_178);
      FUN_007ee578(auStack_1a8,&local_4e0);
      FUN_007e5c40(piVar1,auStack_1a8);
    }
  }
  FUN_007ebd7c(&local_4e0,*(undefined8 *)(param_1 + 0x60),(byte *)(param_1 + 0x6a),0x554,auStack_70,
               auStack_74,&local_78);
  FUN_007ee660(local_50,&local_4e0);
  if (local_50[0] == 0) {
    uVar10 = FUN_007e440c(auStack_70,*(long *)(param_1 + 0x58) + 0x1218);
    if ((((((uVar10 & 1) == 0) || (local_58 != *(short *)(param_1 + 0x68))) && (4 < local_78)) &&
        ((uVar10 = FUN_0082af74(*(undefined8 *)PTR_DAT_04377550), (uVar10 & 1) == 0 &&
         (*(int *)(*(long *)(param_1 + 0x58) + 0x1c0) == 0)))) &&
       (bVar3 = *(byte *)(param_1 + 0x6a), bVar3 < 2)) {
      iVar8 = FUN_007ed390(param_1 + 0x6b);
      if (bVar3 == 0) {
        uVar9 = iVar8 + 0x12f;
      }
      else {
        uVar9 = iVar8 + 0x3f;
      }
      if (uVar9 == local_78) {
        FUN_007ed3d0(param_1 + 0x6a + (ulong)(iVar8 + 5));
        uVar9 = FUN_007ed3d0(param_1 + 0x6a + (ulong)(iVar8 + 6));
        if (((uVar7 ^ uVar9 & 1) & 1) == 0) {
          if ((uVar9 & 1) == 0 || ((uVar7 ^ 0xffffffff) & 1) != 0) {
            bVar17 = true;
            bVar4 = true;
joined_r0x00815b14:
            if (bVar3 != 0) {
LAB_00815b18:
              if (bVar4) {
                FUN_008154b4(&local_4e0);
                local_4d8 = (undefined1 *)FUN_007ed370(param_1 + 0x6f);
                memcpy(auStack_428,(void *)(param_1 + 0x77),0x200);
                local_4b8 = FUN_007ed390(param_1 + 0x277);
                local_4d0 = FUN_007ed370(param_1 + 0x27b);
                uVar6 = FUN_007ed3b0(param_1 + 0x283);
                local_4c8 = (undefined8 *)CONCAT62(local_4c8._2_6_,uVar6);
                uVar6 = FUN_007ed3b0(param_1 + 0x285);
                local_4c8._0_4_ = CONCAT22(uVar6,(undefined2)local_4c8);
                cVar5 = FUN_007ed3d0(param_1 + 0x287);
                local_4c8._0_7_ = CONCAT16(cVar5 != '\0',(undefined6)local_4c8);
                cVar5 = FUN_007ed3d0(param_1 + 0x288);
                local_4c8 = (undefined8 *)CONCAT17(cVar5 != '\0',(undefined7)local_4c8);
                uVar6 = FUN_007ed3d0(param_1 + 0x289);
                local_4c8 = (undefined8 *)
                            (CONCAT26(local_4c8._6_2_,CONCAT24(uVar6,(undefined4)local_4c8)) &
                            0xffff00ffffffffff);
                FUN_007f0e44(&local_1e8,auStack_228,param_1 + 0x28a,0x333);
                FUN_007f0d7c(auStack_228);
                if (*(long *)(param_1 + 0xb18) != 0) {
                  puVar11 = (undefined8 *)FUN_0083383c();
                  puVar12 = (undefined8 *)FUN_00833844(*(undefined8 *)(param_1 + 0xb18));
                  if (puVar11 != puVar12) {
                    do {
                      lVar16 = (**(code **)(*(long *)*puVar11 + 0x18))();
                      lVar13 = FUN_007f2084(&local_4e0);
                      if (lVar16 == lVar13) {
                        plVar14 = (long *)*puVar11;
                        if (plVar14 != (long *)0x0) goto LAB_00815f20;
                        break;
                      }
                      puVar11 = puVar11 + 1;
                      puVar12 = (undefined8 *)FUN_00833844(*(undefined8 *)(param_1 + 0xb18));
                    } while (puVar11 != puVar12);
                  }
                  uVar7 = FUN_00833854(*(undefined8 *)(param_1 + 0xb18));
                  if (((uVar7 & 0xffff) < *(uint *)(param_1 + 0xb20)) &&
                     (plVar14 = (long *)FUN_00833914(*(undefined8 *)(param_1 + 0xb18)),
                     plVar14 != (long *)0x0)) {
LAB_00815f20:
                    plVar15 = (long *)plVar14[1];
                    if (plVar15 != (long *)0x0) {
                      (**(code **)(*plVar15 + 0x40))(plVar15,&local_4e0);
                    }
                    local_1e0 = 0;
                    local_1e8 = 0x8000000;
                    (**(code **)(*plVar14 + 0x68))(plVar14,&local_1e8);
                  }
                }
                local_4e0 = PTR_DAT_04377558 + 0x10;
                FUN_007e81d4(auStack_4b0);
              }
              goto LAB_00815f70;
            }
          }
          else {
            uVar10 = FUN_007e362c(*(long *)(param_1 + 0x58) + 0x1238);
            if ((uVar10 & 1) == 0) {
              local_178[0] = 0;
              FUN_007e3524(&local_4e0,*(long *)(param_1 + 0x58) + 0x1238,local_178);
              FUN_007ed380(auStack_1d4,local_178[0]);
            }
            else {
              local_4e0 = (undefined *)0x0;
              local_4d8 = (undefined1 *)0x0;
              FUN_007e3670(local_178,*(long *)(param_1 + 0x58) + 0x1238,&local_4e0);
              memcpy(auStack_1d4,&local_4e0,4);
            }
            memcpy(auStack_1d0,(void *)(param_1 + 0x6a + (ulong)(iVar8 + 7)),8);
            memcpy(auStack_198,(void *)(param_1 + 0x6a + (ulong)(iVar8 + 0xf)),0x10);
            if (bVar3 != 0) {
              memcpy(auStack_188,(void *)(param_1 + 0xb68),0x10);
              FUN_0081445c(&local_4e0,*(undefined8 *)(param_1 + 0x58),auStack_198,0x20,&local_1e8,
                           0x10);
              FUN_007ee660(local_50,&local_4e0);
              if (local_50[0] != 0) {
LAB_00815de0:
                bVar17 = false;
                bVar4 = false;
                goto joined_r0x00815b14;
              }
              local_4e0 = (undefined *)CONCAT44(local_4e0._4_4_,1);
              local_4d8 = auStack_1d4;
              local_4d0 = CONCAT44(local_4d0._4_4_,0xc);
              local_4c0 = 0x10;
              local_4c8 = &local_1e8;
              FUN_007e6aac(auStack_1f8,local_178,param_1 + 0x6a + (ulong)(iVar8 + 0x2fU),0x10,
                           param_1 + 0x6a + (ulong)(iVar8 + 0x1f),0x10,&local_4e0);
              FUN_007ee660(local_50,auStack_1f8);
              if (local_50[0] != 0) goto LAB_00815de0;
              FUN_008145a0(auStack_208,*(undefined8 *)(param_1 + 0x58),param_1 + 0xb78,0x100,
                           auStack_1f8,0x10);
              FUN_007ee660(local_50,auStack_208);
              if (local_50[0] != 0) goto LAB_00815de0;
              iVar8 = memcmp(local_178,auStack_1f8,0x10);
              bVar4 = iVar8 == 0;
              bVar17 = bVar4;
              if (bVar3 == 0) goto LAB_00815de8;
              goto LAB_00815b18;
            }
            FUN_00814370(&local_4e0,*(undefined8 *)(param_1 + 0x58),auStack_198,0x10,&local_1e8,0x10
                        );
            FUN_007ee660(local_50,&local_4e0);
            if (local_50[0] != 0) goto LAB_00815de0;
            local_4e0 = (undefined *)CONCAT44(local_4e0._4_4_,1);
            local_4d8 = auStack_1d4;
            local_4d0 = CONCAT44(local_4d0._4_4_,0xc);
            local_4c0 = 0x10;
            local_4c8 = &local_1e8;
            FUN_007e6aac(auStack_1f8,local_178,param_1 + 0x6a + (ulong)(iVar8 + 0x2fU),0x100,
                         param_1 + 0x6a + (ulong)(iVar8 + 0x1f),0x10,&local_4e0);
            FUN_007ee660(local_50,auStack_1f8);
            bVar17 = local_50[0] == 0;
          }
LAB_00815de8:
          if ((*(int *)(*(long *)(param_1 + 0x58) + 0x288) == 1) &&
             (uVar10 = FUN_007f63fc(), (uVar10 & 1) != 0)) {
            FUN_007f260c(&local_4e0);
            local_4e0 = PTR_DAT_04377a38 + 0x10;
            local_4d8 = (undefined1 *)FUN_007ed370(param_1 + 0x6f);
            uVar6 = FUN_007ed3b0(param_1 + 0x77);
            local_4d0 = CONCAT62(local_4d0._2_6_,uVar6);
            uVar6 = FUN_007ed3b0(param_1 + 0x79);
            local_4d0._0_4_ = CONCAT22(uVar6,(undefined2)local_4d0);
            uVar6 = FUN_007ed3b0(param_1 + 0x7b);
            local_4d0._0_6_ = CONCAT24(uVar6,(undefined4)local_4d0);
            pMVar2 = (MutexType *)(*(long *)(param_1 + 0x58) + 0x1f8);
            nn::os::LockMutex(pMVar2);
            uVar10 = FUN_007f26b0(&local_4e0,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x218));
            nn::os::UnlockMutex(pMVar2);
            if ((uVar10 & 1) != 0) {
              FUN_008164b8(&local_1e8,param_1,auStack_70,auStack_198,0x10,local_178,0x100,bVar17);
              FUN_007ee660(local_50,&local_1e8);
            }
          }
        }
      }
    }
  }
  else {
    local_178[0] = 0;
    local_4e0 = (undefined *)CONCAT44(local_4e0._4_4_,0x2c09);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_4e0 | 4),(Result *)local_178);
    if (local_50[0] != (int)local_4e0) {
      lVar16 = *(long *)(param_1 + 0x58);
      FUN_007ee578(local_1b8,local_50);
      if (*(int *)(lVar16 + 0x1a8) != local_1b8[0]) {
        FUN_007ee660(lVar16 + 0x1a8,local_1b8);
      }
      if (*piVar1 == 1) {
        local_4e0 = (undefined *)((ulong)local_4e0 & 0xffffffff00000000);
        local_178[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_4e0 | 4),(Result *)local_178);
        FUN_007ee578(auStack_1c8,&local_4e0);
        FUN_007e5c40(piVar1,auStack_1c8);
      }
      uVar10 = 0;
      uVar18 = 1;
      goto LAB_00815f78;
    }
  }
LAB_00815f70:
  uVar10 = 0xa0000;
  uVar18 = 4;
LAB_00815f78:
  FUN_007e34a4(auStack_70);
  return uVar10 | uVar18;
}


