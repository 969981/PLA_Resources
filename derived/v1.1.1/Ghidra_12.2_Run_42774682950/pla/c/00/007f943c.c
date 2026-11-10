/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f943c; name: FUN_007f943c
 */


void FUN_007f943c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  char cVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int local_f0 [4];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [20];
  char local_ac;
  int local_a8;
  uint uStack_a4;
  uint local_a0;
  char local_68;
  short local_66;
  
  plVar13 = param_1 + 0x235;
  uVar10 = FUN_007f0f48(plVar13,param_3);
  if (((((uVar10 & 1) != 0) && ((int)param_1[0x223] == 1)) && (*(uint *)(param_1 + 0x229) < 9)) &&
     (((1 << (ulong)(*(uint *)(param_1 + 0x229) & 0x1f) & 0x122U) != 0 &&
      (*(char *)((long)param_1 + 0x284) == '\0')))) {
    FUN_007fed9c(auStack_c0,*param_2,*(undefined4 *)((long)param_2 + 0xc),0,0,param_1);
    uVar10 = FUN_007fef8c(auStack_c0);
    if (((uVar10 & 1) != 0) &&
       ((*(int *)((long)param_2 + 0xc) == uStack_a4 + local_a8 && (local_ac == '3')))) {
      if (local_68 == '\0') {
        if ((*(short *)((long)param_1 + 0x114e) == local_66) &&
           (*(long **)param_1[0x12] != (long *)0x0)) {
          uVar8 = 0;
          if (local_a0 <= uStack_a4) {
            uVar8 = uStack_a4 - local_a0;
          }
          iVar7 = (**(code **)(**(long **)param_1[0x12] + 0x20))();
          if (iVar7 * (uint)*(ushort *)((long)param_1 + 0x114e) <= uVar8) {
            if (*(ushort *)((long)param_1 + 0x114e) != 0) {
              uVar10 = 0;
              do {
                uVar11 = FUN_007fd6c4(auStack_c0,*(undefined8 *)(param_1[0x12] + uVar10 * 8));
                if ((uVar11 & 1) == 0) {
                  return;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(ushort *)((long)param_1 + 0x114e));
            }
            if (((*(char *)((long)param_1 + 0x24b) == '\0') &&
                (((param_1[0x22c] == 0 || (uVar10 = FUN_007e5f0c(), (uVar10 & 1) == 0)) &&
                 (uVar10 = (**(code **)(*param_1 + 0x348))(param_1,auStack_c0), (uVar10 & 1) != 0)))
                ) && ((**(code **)(*param_1 + 0x340))(local_f0,param_1,auStack_c0), local_f0[0] == 0
                     )) {
              pMVar2 = (MutexType *)(param_1 + 0x1b);
              nn::os::LockMutex(pMVar2);
              pMVar3 = (MutexType *)(param_1 + 0x1f);
              nn::os::LockMutex(pMVar3);
              (**(code **)(*(long *)param_1[0x25] + 0x10))();
              (**(code **)(*(long *)param_1[0x24] + 0x10))();
              (**(code **)(*(long *)param_1[0x23] + 0x10))();
              if (*(short *)((long)param_1 + 0x114e) != 0) {
                uVar10 = 0;
                do {
                  lVar12 = *(long *)(param_1[0x12] + uVar10 * 8) + 0x10;
                  uVar11 = FUN_007f0ee4(lVar12);
                  if ((uVar11 & 1) != 0) {
                    uVar8 = FUN_007f0f48(lVar12,param_3);
                    uVar11 = FUN_007f0ee4(param_1 + 0x13);
                    if ((uVar11 & 1) == 0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = FUN_007f0f48(lVar12,param_1 + 0x13);
                    }
                    uVar11 = (**(code **)(*(long *)param_1[0x23] + 0x68))
                                       ((long *)param_1[0x23],lVar12);
                    if ((uVar11 & 1) == 0) {
                      (**(code **)(*(long *)param_1[0x23] + 0x70))
                                ((long *)param_1[0x23],lVar12,uVar8 & 1,uVar9 & 1);
                    }
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)((long)param_1 + 0x114e));
              }
              nn::os::UnlockMutex(pMVar3);
              nn::os::UnlockMutex(pMVar2);
              if ((int)param_1[0x51] != 2) {
                *(undefined4 *)(param_1 + 0x51) = 2;
              }
              if ((char)param_1[0x239] != '\0') {
                *(char *)(param_1 + 0x239) = '\0';
              }
              FUN_007f0ce0(auStack_e0);
              uVar10 = FUN_007f0f48(plVar13,auStack_e0);
              if ((uVar10 & 1) == 0) {
                FUN_007f0f88(plVar13,auStack_e0);
              }
              (**(code **)(*param_1 + 0x118))(param_1);
              nn::os::LockMutex(pMVar2);
              nn::os::LockMutex(pMVar3);
              (**(code **)(*(long *)param_1[0x24] + 0x18))((long *)param_1[0x24],param_1[0x23]);
              nn::os::UnlockMutex(pMVar3);
              uVar10 = FUN_00802560(param_1[0x24]);
              if ((uVar10 & 1) == 0) {
                bVar6 = 0;
              }
              else {
                bVar6 = FUN_00802714(param_1[0x24]);
                bVar6 = ~bVar6 & 1;
              }
              *(byte *)((long)param_1 + 0x24c) = bVar6;
              nn::os::UnlockMutex(pMVar2);
              FUN_007f666c(param_1);
              (**(code **)(*param_1 + 0x120))(param_1);
              uVar5 = *(ushort *)((long)param_1 + 0x114e);
              uVar10 = (ulong)uVar5;
              if (uVar10 != 0) {
                lVar12 = param_1[0x11];
                uVar11 = uVar10 & 3;
                if (uVar10 - 1 < 3) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = 0;
                  plVar13 = (long *)(lVar12 + 0x10);
                  do {
                    *(undefined1 *)(plVar13[-2] + 9) = 0xff;
                    *(undefined1 *)(plVar13[-1] + 9) = 0xff;
                    *(undefined1 *)(*plVar13 + 9) = 0xff;
                    plVar1 = plVar13 + 1;
                    lVar14 = lVar14 + 4;
                    plVar13 = plVar13 + 4;
                    *(undefined1 *)(*plVar1 + 9) = 0xff;
                  } while (uVar10 - uVar11 != lVar14);
                }
                if ((uVar5 & 3) != 0) {
                  plVar13 = (long *)(lVar12 + lVar14 * 8);
                  do {
                    uVar11 = uVar11 - 1;
                    *(undefined1 *)(*plVar13 + 9) = 0xff;
                    plVar13 = plVar13 + 1;
                  } while (uVar11 != 0);
                }
                if (uVar5 != 0) {
                  uVar11 = 0;
                  if (uVar5 != 0) goto LAB_007f9894;
                  while( true ) {
                    uVar11 = uVar11 + 1;
                    if (uVar10 <= uVar11) break;
                    if ((int)uVar10 != 0) {
LAB_007f9894:
                      uVar15 = 0;
                      do {
                        uVar10 = FUN_007f0f48(*(long *)(param_1[0x12] + uVar11 * 8) + 0x10,
                                              *(long *)(param_1[0x11] + uVar15 * 8) + 0x10);
                        if ((uVar10 & 1) != 0) {
                          lVar12 = *(long *)(param_1[0x11] + uVar15 * 8);
                          cVar4 = *(char *)(*(long *)(param_1[0x12] + uVar11 * 8) + 9);
                          if (cVar4 != *(char *)(lVar12 + 9)) {
                            *(char *)(lVar12 + 9) = cVar4;
                          }
                        }
                        uVar10 = (ulong)*(ushort *)((long)param_1 + 0x114e);
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uVar10);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((char)param_1[0x239] != local_68) {
          *(char *)(param_1 + 0x239) = local_68;
        }
        FUN_007f0ce0(auStack_e0);
        uVar10 = FUN_007f0f48(plVar13,auStack_e0);
        if ((uVar10 & 1) == 0) {
          FUN_007f0f88(plVar13,auStack_e0);
        }
      }
    }
  }
  return;
}


