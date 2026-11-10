/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611d18; name: FUN_00611d18
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00611d18(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  undefined *local_d0;
  long *plStack_c8;
  undefined8 *******local_c0;
  undefined8 *******pppppppuStack_b8;
  undefined1 auStack_a8 [64];
  long **local_68;
  undefined8 uStack_60;
  
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_f0 = (long *)0x0;
  plVar6 = (long *)FUN_00612290();
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  plVar15 = param_1 + 1;
  plVar16 = (long *)*param_1;
  if (plVar16 != plVar15) {
    do {
      (**(code **)(*(long *)plVar16[8] + 0x10))(&local_d0);
      if (local_e8 < local_e0) {
        local_e8[1] = (long)plStack_c8;
        *local_e8 = (long)local_d0;
        local_d0 = (undefined *)0x0;
        plStack_c8 = (long *)0x0;
        local_e8 = local_e8 + 2;
LAB_00611f20:
        plVar8 = (long *)plVar16[1];
        if ((long *)plVar16[1] != (long *)0x0) goto LAB_00611f28;
LAB_00611fa0:
        plVar8 = plVar16 + 2;
        bVar5 = *(long **)*plVar8 != plVar16;
        plVar16 = (long *)*plVar8;
        if (bVar5) {
          do {
            lVar11 = *plVar8;
            plVar8 = (long *)(lVar11 + 0x10);
            plVar16 = (long *)*plVar8;
          } while (*plVar16 != lVar11);
        }
      }
      else {
        lVar11 = (long)local_e8 - (long)local_f0 >> 4;
        uVar13 = lVar11 + 1;
        if (uVar13 >> 0x3c != 0) {
                    /* try { // try from 00612120 to 00612127 has its CatchHandler @ 00612128 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_e0 - (long)local_f0 >> 4) < 0x7ffffffffffffff) {
          uVar9 = (long)local_e0 - (long)local_f0 >> 3;
          if (uVar13 <= uVar9) {
            uVar13 = uVar9;
          }
          if (uVar13 != 0) goto LAB_00611dec;
          lVar7 = 0;
        }
        else {
          uVar13 = 0xfffffffffffffff;
LAB_00611dec:
          lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar13 << 4,8);
        }
        plVar8 = (long *)(lVar7 + lVar11 * 0x10);
        plVar3 = (long *)(lVar7 + uVar13 * 0x10);
        plVar12 = plVar8 + 2;
        plVar8[1] = (long)plStack_c8;
        *plVar8 = (long)local_d0;
        local_d0 = (undefined *)0x0;
        plStack_c8 = (long *)0x0;
        if ((long)local_e8 - (long)local_f0 != 0) {
          uVar13 = ((long)local_e8 - (long)local_f0) - 0x10;
          uVar1 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
          plVar14 = local_e8;
          if ((uVar1 & 7) != 0) {
            lVar11 = -((ulong)uVar1 & 7);
            plVar10 = plVar8;
            plVar17 = local_e8;
            do {
              plVar14 = plVar17 + -2;
              lVar7 = *plVar14;
              bVar5 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              plVar8 = plVar10 + -2;
              plVar10[-1] = plVar17[-1];
              *plVar8 = lVar7;
              *plVar14 = 0;
              plVar17[-1] = 0;
              plVar10 = plVar8;
              plVar17 = plVar14;
            } while (bVar5);
          }
          plVar10 = plVar8;
          if (0x6f < uVar13) {
            do {
              lVar11 = plVar14[-2];
              plVar10[-1] = plVar14[-1];
              plVar10[-2] = lVar11;
              lVar11 = plVar14[-4];
              plVar14[-2] = 0;
              plVar14[-1] = 0;
              plVar10[-3] = plVar14[-3];
              plVar10[-4] = lVar11;
              lVar11 = plVar14[-6];
              plVar14[-4] = 0;
              plVar14[-3] = 0;
              plVar10[-5] = plVar14[-5];
              plVar10[-6] = lVar11;
              lVar11 = plVar14[-8];
              plVar14[-6] = 0;
              plVar14[-5] = 0;
              plVar10[-7] = plVar14[-7];
              plVar10[-8] = lVar11;
              lVar11 = plVar14[-10];
              plVar14[-8] = 0;
              plVar14[-7] = 0;
              plVar10[-9] = plVar14[-9];
              plVar10[-10] = lVar11;
              lVar11 = plVar14[-0xc];
              plVar14[-10] = 0;
              plVar14[-9] = 0;
              plVar10[-0xb] = plVar14[-0xb];
              plVar10[-0xc] = lVar11;
              lVar11 = plVar14[-0xe];
              plVar14[-0xc] = 0;
              plVar14[-0xb] = 0;
              plVar10[-0xd] = plVar14[-0xd];
              plVar10[-0xe] = lVar11;
              plVar14[-0xe] = 0;
              plVar17 = plVar14 + -0x10;
              lVar11 = *plVar17;
              plVar14[-0xd] = 0;
              plVar8 = plVar10 + -0x10;
              plVar10[-0xf] = plVar14[-0xf];
              *plVar8 = lVar11;
              *plVar17 = 0;
              plVar14[-0xf] = 0;
              plVar10 = plVar8;
              plVar14 = plVar17;
            } while (local_f0 != plVar17);
          }
        }
        while (local_e8 != local_f0) {
          plVar14 = (long *)local_e8[-1];
          local_e8 = local_e8 + -2;
          if (plVar14 != (long *)0x0) {
            plVar10 = plVar14 + 1;
            do {
              lVar11 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,local_f0,(long)local_e0 - (long)local_f0,8);
        }
        local_f0 = plVar8;
        local_e8 = plVar12;
        local_e0 = plVar3;
        if (plStack_c8 == (long *)0x0) goto LAB_00611f20;
        plVar8 = plStack_c8 + 1;
        do {
          lVar11 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 != 0) goto LAB_00611f20;
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        std::__shared_weak_count::__release_weak();
        plVar8 = (long *)plVar16[1];
        if ((long *)plVar16[1] == (long *)0x0) goto LAB_00611fa0;
LAB_00611f28:
        do {
          plVar16 = plVar8;
          plVar8 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
    } while (plVar16 != plVar15);
  }
  FUN_02cc8880(param_1,param_1[1]);
  param_1[3] = 0;
  *param_1 = plVar15;
  param_1[1] = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  if (local_f0 != local_e8) {
    puVar2 = PTR_DAT_04373168 + 0x10;
    plVar16 = (long *)(PTR_DAT_04373170 + 0x10);
    plVar15 = local_f0;
    do {
      local_68 = (long **)0x0;
      uStack_60 = 0;
      plVar8 = plVar15 + 2;
      local_d0 = puVar2;
      plStack_c8 = plVar16;
      local_c0 = &local_c0;
      pppppppuStack_b8 = &local_c0;
      (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,auStack_a8);
      local_68 = &plStack_c8;
      thunk_FUN_00783af0(&local_d0);
      local_d0 = puVar2;
      FUN_00782f18(&plStack_c8);
      plVar15 = plVar8;
    } while (local_e8 != plVar8);
  }
  if (local_f0 != (long *)0x0) {
    while (local_e8 != local_f0) {
      plVar16 = (long *)local_e8[-1];
      local_e8 = local_e8 + -2;
      if (plVar16 != (long *)0x0) {
        plVar15 = plVar16 + 1;
        do {
          lVar11 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_f0,(long)local_e0 - (long)local_f0,8);
  }
  return;
}


