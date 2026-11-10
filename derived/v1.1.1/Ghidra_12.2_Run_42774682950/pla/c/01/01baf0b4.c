/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baf0b4; name: FUN_01baf0b4
 */


void FUN_01baf0b4(long *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  lVar14 = param_1[0x35];
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar13;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar7 = puVar9;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar6 = puVar7;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01baf0dc;
        if (plVar16 == (long *)puVar6) break;
        plVar16 = (long *)*plVar16;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01baf244;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          cVar3 = *(char *)(lVar14 + 0x2ec);
          lVar15 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))();
          }
          if (cVar3 != '\0') {
            return;
          }
          goto LAB_01baf0e8;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01baf244:
      iVar10 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01baf0dc:
  if (DAT_0000033c == '\0') {
LAB_01baf0e8:
    FUN_01a4f4d4(param_1,&DAT_03a7ca80,0);
    if (((char)param_1[0xd1] != '\0') && ((*(byte *)(param_1 + 0xd2) & 1) == 0)) {
      iVar10 = (**(code **)(*param_1 + 0x358))(param_1);
      if (iVar10 == 0) {
        if (0 < *(int *)((long)param_1 + 0x68c)) {
          iVar10 = *(int *)((long)param_1 + 0x68c) + -1;
          *(int *)((long)param_1 + 0x68c) = iVar10;
          if (iVar10 != 0) {
            return;
          }
          iVar10 = (**(code **)(*param_1 + 0x360))(param_1);
          if (iVar10 == 0) {
            uVar11 = (**(code **)(*param_1 + 0x370))(param_1);
            *(undefined4 *)((long)param_1 + 0x68c) = uVar11;
            *(undefined1 *)((long)param_1 + 0x689) = 1;
            return;
          }
          if (iVar10 == 1) {
            *(undefined4 *)((long)param_1 + 0x68c) = 1;
            return;
          }
          if (iVar10 != 2) {
            return;
          }
        }
        uVar11 = (**(code **)(*param_1 + 0x370))(param_1);
        *(undefined4 *)((long)param_1 + 0x68c) = uVar11;
      }
      else {
        if (iVar10 == 2) {
          if (*(char *)((long)param_1 + 0x689) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x01baf1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x368))(param_1);
            return;
          }
        }
        else if (iVar10 != 1) {
          return;
        }
        *(undefined4 *)((long)param_1 + 0x68c) = 0;
      }
    }
  }
  return;
}


