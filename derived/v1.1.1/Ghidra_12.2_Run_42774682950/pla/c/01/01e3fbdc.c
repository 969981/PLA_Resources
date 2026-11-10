/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3fbdc; name: FUN_01e3fbdc
 */


void FUN_01e3fbdc(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *local_d0;
  
  puVar7 = PTR_DAT_0437a590;
  puVar6 = PTR_DAT_0437a588;
  puVar5 = PTR_DAT_0437a580;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar16 = *(int *)(lVar11 + 0xc);
    do {
      plVar17 = *(long **)(lVar11 + 0x10);
      plVar14 = (long *)((ulong)param_3 & 0xffffffff);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar10;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar7 = puVar6;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)puVar7) break;
        plVar17 = (long *)*plVar17;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar16) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          if (lVar11 == 0) {
            return;
          }
          uVar13 = (uint)param_3;
          if (((((ulong)param_3 & 1) != 0) && (lVar15 = *(long *)(lVar11 + 0x88), lVar15 != 0)) &&
             (plVar14 = (long *)(lVar15 + 0x30), *plVar14 == 0)) {
            pcVar12 = *(code **)(lVar15 + 0x38);
            if (pcVar12 != (code *)0x0) {
              *(undefined8 *)(lVar15 + 0x40) = 0;
              *(undefined8 *)(lVar15 + 0x48) = 0;
              *plVar14 = 0;
              *(undefined8 *)(lVar15 + 0x38) = 0;
              (*pcVar12)(lVar15 + 0x50);
            }
            plVar14 = (long *)&LAB_01e3ff28;
            *(undefined1 **)(lVar15 + 0x30) = &LAB_01e3ff28;
            *(undefined1 **)(lVar15 + 0x38) = &LAB_01e40070;
            *(undefined1 **)(lVar15 + 0x40) = &LAB_01e401a0;
            *(undefined1 **)(lVar15 + 0x48) = &LAB_01e401ac;
            *(long *)(lVar15 + 0x50) = param_1;
          }
          if ((((uVar13 >> 1 & 1) != 0) && (lVar15 = *(long *)(lVar11 + 0x88), lVar15 != 0)) &&
             (plVar14 = (long *)(lVar15 + 0xb0), *plVar14 == 0)) {
            pcVar12 = *(code **)(lVar15 + 0xb8);
            if (pcVar12 != (code *)0x0) {
              *(undefined8 *)(lVar15 + 0xc0) = 0;
              *(undefined8 *)(lVar15 + 200) = 0;
              *plVar14 = 0;
              *(undefined8 *)(lVar15 + 0xb8) = 0;
              (*pcVar12)(lVar15 + 0xd0);
            }
            plVar14 = (long *)&LAB_01e401b8;
            *(undefined1 **)(lVar15 + 0xb0) = &LAB_01e401b8;
            *(undefined1 **)(lVar15 + 0xb8) = &LAB_01e40300;
            *(undefined1 **)(lVar15 + 0xc0) = &LAB_01e40304;
            *(undefined1 **)(lVar15 + 200) = &LAB_01e40310;
            *(long *)(lVar15 + 0xd0) = param_1;
          }
          if ((((uVar13 >> 2 & 1) != 0) && (lVar15 = *(long *)(lVar11 + 0x88), lVar15 != 0)) &&
             (plVar14 = *(long **)(lVar15 + 0x130), plVar14 == (long *)0x0)) {
            pcVar12 = *(code **)(lVar15 + 0x138);
            if (pcVar12 != (code *)0x0) {
              *(undefined8 *)(lVar15 + 0x140) = 0;
              *(undefined8 *)(lVar15 + 0x148) = 0;
              *(undefined8 *)(lVar15 + 0x130) = 0;
              *(undefined8 *)(lVar15 + 0x138) = 0;
              (*pcVar12)(lVar15 + 0x150);
            }
            plVar14 = (long *)&LAB_01e4031c;
            *(undefined1 **)(lVar15 + 0x130) = &LAB_01e4031c;
            *(undefined1 **)(lVar15 + 0x138) = &LAB_01e4044c;
            *(undefined1 **)(lVar15 + 0x140) = &LAB_01e40450;
            *(undefined1 **)(lVar15 + 0x148) = &LAB_01e4045c;
            *(long *)(lVar15 + 0x150) = param_1;
          }
          if ((uVar13 >> 3 & 1) != 0) {
            local_d0 = (long *)&LAB_01e40488;
            lVar15 = *(long *)(lVar11 + 0x88);
            plVar14 = (long *)&LAB_01e40494;
            if ((lVar15 != 0) &&
               (plVar14 = *(long **)(lVar15 + 0x1b0), *(long **)(lVar15 + 0x1b0) == (long *)0x0)) {
              pcVar12 = *(code **)(lVar15 + 0x1b8);
              if (pcVar12 != (code *)0x0) {
                *(undefined8 *)(lVar15 + 0x1c0) = 0;
                *(undefined8 *)(lVar15 + 0x1c8) = 0;
                *(undefined8 *)(lVar15 + 0x1b0) = 0;
                *(undefined8 *)(lVar15 + 0x1b8) = 0;
                (*pcVar12)(lVar15 + 0x1d0);
              }
              *(long *)(lVar15 + 0x1d0) = param_1;
              *(undefined1 **)(lVar15 + 0x1b8) = &LAB_01e40484;
              *(undefined1 **)(lVar15 + 0x1c8) = &LAB_01e40494;
              *(undefined1 **)(lVar15 + 0x1c0) = &LAB_01e40488;
              *(undefined8 *)(lVar15 + 0x1b0) = &LAB_01e40468;
              plVar14 = local_d0;
            }
          }
          FUN_01a0703c(plVar14,param_1 + 8,param_2);
          *(uint *)(param_1 + 0x18) = uVar13;
          uVar9 = FUN_02a43a5c(*(undefined8 *)(lVar11 + 8));
          if ((uVar9 & 1) == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x01e3fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar11 + -0x50) + 0x20))();
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_3 = plVar14;
      iVar16 = iVar8;
    } while (iVar8 != 0);
  }
  return;
}


