/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d03444; name: FUN_00d03444
 */


/* WARNING: Removing unreachable block (ram,0x00d03790) */

void FUN_00d03444(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *local_288;
  undefined8 uStack_280;
  long *local_270;
  long *local_268;
  undefined4 local_260;
  long *local_250 [40];
  undefined1 local_110;
  long *local_100;
  long *plStack_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0 [10];
  undefined1 local_90;
  long *local_80;
  long *plStack_78;
  
  if ((*(long *)(param_1 + 0x2b8) != 0) &&
     (FUN_00c42600(local_250), plVar4 = local_250[0], local_250[0] != (long *)0x0)) {
    if (local_250[0][0x85] != 0) {
      lVar8 = tpidr_el0;
      do {
        piVar1 = (int *)(*(long *)(plVar4[0x7d] + ((ulong)plVar4[0x84] >> 3 & 0x1ffffffffffffff8)) +
                        (plVar4[0x84] & 0x3fU) * 0x40);
        iVar6 = *piVar1;
        local_288 = (undefined8 *)0x0;
        uStack_280 = 0;
        FUN_00d04054(&local_288,piVar1 + 2);
        local_268 = *(long **)(piVar1 + 10);
        local_260 = piVar1[0xc];
        local_270 = *(long **)(piVar1 + 8);
        uVar9 = plVar4[0x84];
        puVar12 = *(undefined8 **)
                   (*(long *)(plVar4[0x7d] + (uVar9 >> 3 & 0x1ffffffffffffff8)) +
                    (uVar9 & 0x3f) * 0x40 + 8);
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            puVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_250[0] = (long *)*puVar12;
            FUN_02a44274(lVar10 + 0xd8,local_250);
          }
          uVar9 = plVar4[0x84];
        }
        plVar4[0x84] = uVar9 + 1;
        plVar4[0x85] = plVar4[0x85] + -1;
        if (0x7f < uVar9 + 1) {
          uVar11 = *(undefined8 *)plVar4[0x7d];
          plVar7 = (long *)plVar4[0x86];
          uVar9 = (**(code **)(*plVar7 + 0xc0))();
          if ((uVar9 & 1) == 0) {
LAB_00d03754:
            (**(code **)(*plVar7 + 0x18))(plVar7,uVar11,0x1000,0x10);
          }
          else {
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_00d03754;
            FUN_02bcc824(plVar7,uVar11,0x1000,0x10);
          }
          plVar4[0x7d] = plVar4[0x7d] + 8;
          plVar4[0x84] = plVar4[0x84] + -0x40;
        }
        if ((iVar6 != 2) || ((char)local_260 != '\0')) {
          lVar10 = FUN_00d031d0(param_1 + 600,param_1 + 0x2b0);
          memcpy(local_250,(void *)(lVar10 + 0x60),0x1d0);
          local_110 = 1;
          local_100 = local_270;
          plStack_f8 = local_268;
          lVar10 = (long)iVar6;
          local_250[lVar10 * 4 + 2] = local_270;
          local_250[lVar10 * 4 + 3] = local_268;
          *(undefined1 *)(local_250 + lVar10 * 4) = 1;
          local_90 = 1;
          local_80 = local_270;
          plStack_78 = local_268;
          if (local_260._2_2_ == 0x699) {
            lVar10 = 1;
LAB_00d036c8:
            local_f0[lVar10 * 0x20] = 1;
            local_e0[lVar10 * 4] = local_270;
            local_e0[lVar10 * 4 + 1] = local_268;
          }
          else {
            if (local_260._2_2_ == 0x69a) {
              lVar10 = 2;
              goto LAB_00d036c8;
            }
            if (local_260._2_2_ == 0x694) {
              lVar10 = 0;
              goto LAB_00d036c8;
            }
          }
          lVar10 = FUN_00d031d0(param_1 + 600,param_1 + 0x2b0);
          memcpy((void *)(lVar10 + 0x60),local_250,0x1e0);
        }
        puVar12 = local_288;
        if (local_288 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_288 + 1);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 + -1 == 0) {
            local_288[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_250[0] = (long *)*puVar12;
            FUN_02a44274(lVar10 + 0xd8,local_250);
          }
        }
      } while (plVar4[0x85] != 0);
    }
    FUN_00d028ec(param_1,param_1 + 600);
    lVar8 = plVar4[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
  return;
}


