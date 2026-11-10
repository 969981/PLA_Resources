/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019310cc; name: FUN_019310cc
 */


void FUN_019310cc(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  char local_70 [8];
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  FUN_0192ce14(local_70,param_1 + 8);
  if (local_70[0] != '\0') {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar6 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar6;
    plVar11 = *(long **)(*(long *)(lVar6 + 0x78) + 0x930);
    if (plVar11 != (long *)0x0) {
      do {
        piVar5 = (int *)plVar11[3];
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
           (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar7 == 0)) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)((long)piVar5 + uVar7);
        }
        if (lVar6 != *param_2) {
          FUN_01930360();
          lVar8 = 0;
          plVar9 = local_58;
          do {
            if (local_58[lVar8 * 0x170 + 0x40] == lVar6) {
              *(undefined1 *)(local_58 + lVar8 * 0x170 + 0x41) = 0;
              lVar10 = 0;
              do {
                lVar1 = lVar10 + 0x90;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x228) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x220) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x218) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x210) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x230) = 0;
                *(undefined4 *)((long)plVar9 + lVar10 + 0x238) = 0xffffffff;
                *(undefined1 *)((long)plVar9 + lVar10 + 0x23c) = 0;
                *(undefined2 *)((long)plVar9 + lVar10 + 0x23d) = 0;
                *(undefined1 *)((long)plVar9 + lVar10 + 0x23f) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x240) = 0;
                *(undefined1 **)((long)plVar9 + lVar10 + 0x248) = &DAT_cbf29ce484222645;
                *(undefined1 **)((long)plVar9 + lVar10 + 0x250) = &DAT_cbf29ce484222645;
                *(undefined1 **)((long)plVar9 + lVar10 + 600) = &DAT_cbf29ce484222645;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x260) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x268) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x270) = 0;
                *(undefined1 **)((long)plVar9 + lVar10 + 0x278) = &DAT_cbf29ce484222645;
                *(undefined1 *)((long)plVar9 + lVar10 + 0x280) = 0;
                *(undefined1 *)((long)plVar9 + lVar10 + 0x283) = 0;
                *(undefined2 *)((long)plVar9 + lVar10 + 0x281) = 0;
                *(undefined4 *)((long)plVar9 + lVar10 + 0x284) = 0;
                *(undefined1 **)((long)plVar9 + lVar10 + 0x288) = &DAT_cbf29ce484222645;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x290) = 0;
                *(undefined8 *)((long)plVar9 + lVar10 + 0x298) = 0;
                lVar10 = lVar1;
              } while (lVar1 != 0xb40);
            }
            lVar8 = lVar8 + 1;
            plVar9 = plVar9 + 0x170;
          } while (lVar8 != 5);
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      if (local_70[0] == '\0') {
        return;
      }
    }
    if (local_48 != (long *)0x0) {
      lVar6 = local_48[0xb];
      piVar5 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[0xb];
      piVar5 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (local_58 != (long *)0x0) {
      lVar6 = local_58[0xb];
      piVar5 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    if (local_60 != (long *)0x0) {
      lVar6 = local_60[0xb];
      piVar5 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    if (local_68 != (long *)0x0) {
      lVar6 = local_68[0xb];
      piVar5 = (int *)(lVar6 + 0xc);
      do {
        iVar4 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  return;
}


