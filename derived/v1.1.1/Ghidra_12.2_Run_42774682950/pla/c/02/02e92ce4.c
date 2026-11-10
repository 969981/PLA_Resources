/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e92ce4; name: FUN_02e92ce4
 */


int FUN_02e92ce4(long param_1,long param_2,int param_3,uint param_4)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  int local_78;
  uint local_74;
  void *local_70;
  uint local_64;
  
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_2 + 0x34);
    uVar7 = *(uint *)(param_2 + 0x38);
    if (uVar5 < uVar7) {
      lVar13 = 0;
      uVar14 = 0;
      pMVar1 = (MutexType *)(param_1 + 0x68);
      local_78 = 1;
      uVar10 = 0;
      do {
        puVar8 = (uint *)(*(long *)(param_2 + 0x20) + lVar13 * 0xc);
        uVar3 = *puVar8;
        uVar9 = puVar8[1];
        uVar14 = (uVar9 - uVar10) + uVar14;
        if (uVar3 == 0) {
          uVar5 = uVar5 + 1;
          *(uint *)(param_2 + 0x34) = uVar5;
        }
        else {
          uVar5 = *(uint *)(*(long *)(param_2 + 0x20) + lVar13 * 0xc + 8);
          local_64 = uVar5;
          nn::os::LockMutex(pMVar1);
          uVar7 = *(uint *)(param_1 + 0x98);
          if (uVar7 != 0) {
            uVar10 = 0;
            if (uVar7 != 0) {
              uVar10 = uVar3 / uVar7;
            }
            for (plVar15 = *(long **)(*(long *)(param_1 + 0x90) +
                                     (ulong)(uVar3 - uVar10 * uVar7) * 8); plVar15 != (long *)0x0;
                plVar15 = (long *)*plVar15) {
              if (*(uint *)(plVar15 + 1) == uVar3) {
                plVar4 = plVar15 + 2;
                *(int *)(plVar15 + 6) = *(int *)(plVar15 + 6) + 1;
                if (*plVar4 == 0) goto LAB_02e92e58;
                *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                iVar12 = 4;
                goto LAB_02e92fa4;
              }
            }
          }
          plVar4 = (long *)FUN_02e96390(param_1 + 0x88,uVar3);
          if (plVar4 == (long *)0x0) {
            iVar12 = 2;
            local_78 = 2;
          }
          else {
            *(uint *)((long)plVar4 + 0x24) = uVar3;
LAB_02e92e58:
            local_70 = (void *)0x0;
            uVar6 = 3;
            if ((*(byte *)(param_2 + 0x68) & 8) != 0) {
              uVar6 = 0x80000003;
            }
            if ((int)plVar4[3] == 0) {
              __dest = (void *)(*DAT_0442d140)(uVar6,uVar5,0x10);
              local_70 = __dest;
              if (__dest == (void *)0x0) goto LAB_02e92f88;
              nn::os::UnlockMutex(pMVar1);
              if (uVar14 == 0) {
LAB_02e92f58:
                if (local_78 != 1) {
                  uVar14 = 0;
                  goto LAB_02e92f68;
                }
                local_74 = 0;
                local_78 = FUN_02e9b7a4(param_1 + 8,__dest,uVar5,&local_74);
                if ((local_78 == 1) && (uVar5 != local_74)) {
                  local_78 = 2;
                }
                else {
                  uVar9 = local_74 + uVar9;
                  if ((param_4 & 1) != 0) {
                    FUN_02e96490(uVar6,&local_70,&local_64);
                    __dest = local_70;
                  }
                }
                nn::os::LockMutex(pMVar1);
                if (local_78 == 1) {
                  uVar14 = 0;
                  uVar5 = local_64;
                  goto LAB_02e92eb8;
                }
                uVar14 = 0;
                if (__dest == (void *)0x0) goto LAB_02e92f90;
              }
              else {
                local_74 = 0;
                local_78 = FUN_02e9b658(param_1 + 8,uVar14,&local_74);
                if (uVar14 == local_74) goto LAB_02e92f58;
                local_78 = 2;
LAB_02e92f68:
                nn::os::LockMutex(pMVar1);
              }
              (*DAT_0442d158)(uVar6,__dest);
            }
            else {
              uVar5 = *(uint *)(plVar4[2] + 8);
              local_64 = uVar5;
              __dest = (void *)(*DAT_0442d140)(uVar6,(ulong)uVar5,0x10);
              local_70 = __dest;
              if (__dest != (void *)0x0) {
                memcpy(__dest,*(void **)plVar4[2],(ulong)uVar5);
LAB_02e92eb8:
                *plVar4 = (long)__dest;
                iVar12 = 4;
                *(uint *)(plVar4 + 1) = uVar5;
                *(undefined4 *)((long)plVar4 + 0xc) = uVar6;
                *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
                local_78 = 1;
                goto LAB_02e92fa4;
              }
LAB_02e92f88:
              local_78 = 0x34;
            }
LAB_02e92f90:
            FUN_02e95054(param_1,plVar4);
            iVar12 = 2;
          }
LAB_02e92fa4:
          nn::os::UnlockMutex(pMVar1);
          if (iVar12 != 4) break;
          uVar5 = *(uint *)(param_2 + 0x34);
          uVar7 = *(uint *)(param_2 + 0x38);
        }
        lVar13 = lVar13 + 1;
        uVar10 = uVar9;
      } while (uVar5 < uVar7);
      iVar12 = (int)lVar13;
      if (local_78 != 1) goto joined_r0x02e93038;
    }
    else {
      uVar9 = 0;
      uVar14 = 0;
      iVar12 = 0;
    }
    iVar2 = (param_3 - uVar9) + uVar14;
    if (iVar2 != 0) {
      local_70 = (void *)((ulong)local_70 & 0xffffffff00000000);
      FUN_02e9b658(param_1 + 8,iVar2,&local_70);
      if (iVar2 != (int)local_70) {
        local_78 = 2;
joined_r0x02e93038:
        if (iVar12 < 1) {
          return local_78;
        }
        lVar13 = (long)iVar12 * 0xc;
        lVar11 = (long)iVar12;
        do {
          lVar13 = lVar13 + -0xc;
          lVar11 = lVar11 + -1;
          if (*(int *)(*(long *)(param_2 + 0x20) + lVar13) != 0) {
            FUN_02e965cc(param_1);
          }
        } while (0 < lVar11);
        return local_78;
      }
    }
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) | 4;
  }
  return 1;
}


