/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3c6b4; name: FUN_01c3c6b4
 */


undefined8 FUN_01c3c6b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  puVar7 = PTR_DAT_0437a668;
  puVar6 = PTR_DAT_0437a660;
  puVar5 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x208);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar12 = (int *)(lVar15 + 0xc);
    iVar17 = *(int *)(lVar15 + 0xc);
    do {
      plVar16 = *(long **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar10;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar6 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return 0;
        }
        if (plVar16 == (long *)puVar6) break;
        plVar16 = (long *)*plVar16;
      }
      iVar9 = *piVar12;
      if (iVar9 == iVar17) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) {
            return 0;
          }
          plVar16 = (long *)(lVar15 + -0x50);
          uVar10 = FUN_01e481b0(0xd,0xe);
          uVar8 = FUN_01e481d0(uVar10,0x11);
          local_ac = 0;
          local_d0 = 0x7f7fffee;
          local_100[0] = 0;
          local_c8 = 0xffffffffffffffff;
          local_b8 = 0xffffffff;
          local_c0 = 0xffffff;
          local_f0 = 0;
          uStack_e8 = 0;
          local_b4 = 0xf;
          local_b0 = 0xffff;
          local_90 = 0xffffffff;
          local_98 = 0xffffff;
          local_8c = 0xf;
          local_88 = 0xffff;
          local_84 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_a0 = 0xffffffffffffffff;
          uStack_80 = 0;
          uStack_7c = 0;
          local_78 = 0;
          uVar11 = FUN_01e434f4(plVar16,param_2,param_3,uVar8,&local_130);
          if (((uVar11 & 1) != 0) &&
             (piVar12 = (int *)FUN_01e4bacc(local_108), piVar12 != (int *)0x0)) {
            param_4[3] = local_118;
            param_4[5] = local_108;
            param_4[1] = local_128;
            param_4[2] = uStack_120;
            *param_4 = local_130;
            param_4[4] = local_110;
            FUN_032c7e9c(param_4 + 6,local_100);
            param_4[9] = uStack_e8;
            param_4[8] = local_f0;
            param_4[0xb] = uStack_d8;
            param_4[10] = local_e0;
            *(undefined4 *)(param_4 + 0xc) = local_d0;
            *(undefined4 *)(param_4 + 0xe) = local_c0;
            param_4[0xd] = local_c8;
            *(undefined4 *)(param_4 + 0xf) = local_b8;
            *(undefined1 *)((long)param_4 + 0x7c) = local_b4;
            *(undefined2 *)(param_4 + 0x10) = local_b0;
            *(undefined4 *)((long)param_4 + 0x8c) = uStack_a4;
            *(ulong *)((long)param_4 + 0x84) = CONCAT44(uStack_a8,local_ac);
            param_4[0x12] = local_a0;
            *(undefined4 *)(param_4 + 0x13) = local_98;
            *(undefined4 *)(param_4 + 0x14) = local_90;
            *(undefined1 *)((long)param_4 + 0xa4) = local_8c;
            *(undefined2 *)(param_4 + 0x15) = local_88;
            *(undefined4 *)((long)param_4 + 0xb4) = uStack_7c;
            *(ulong *)((long)param_4 + 0xac) = CONCAT44(uStack_80,local_84);
            param_4[0x17] = local_78;
            if (*piVar12 != 0xf) {
              bVar3 = true;
              uVar11 = local_100[0];
              goto joined_r0x01c3c940;
            }
          }
          bVar3 = false;
          uVar11 = local_100[0];
joined_r0x01c3c940:
          local_100[0] = uVar11;
          if ((uVar11 & 1) != 0) {
            lVar4 = tpidr_el0;
            lVar14 = *(long *)(lVar4 + 0x38d490);
            if (lVar14 == 0) {
              lVar14 = FUN_0333d16c(0,1);
              *(long *)(lVar4 + 0x38d490) = lVar14;
            }
            plVar13 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
            *(undefined8 *)(uVar11 - 0x11) = 0;
            (**(code **)(*plVar13 + 0x18))
                      (plVar13,(undefined8 *)(uVar11 - 0x11),(long)*(int *)(uVar11 - 9) + 0x10);
          }
          lVar15 = *(long *)(lVar15 + 8);
          piVar12 = (int *)(lVar15 + 0xc);
          do {
            iVar17 = *piVar12;
            cVar2 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar1) {
              *piVar12 = iVar17 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar17 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          if (bVar3) {
            return 1;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar17 = iVar9;
    } while (iVar9 != 0);
  }
  return 0;
}


