/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014337d4; name: FUN_014337d4
 */


void FUN_014337d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long alStack_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  
  puVar5 = PTR_DAT_04379e60;
  puVar4 = PTR_DAT_04379e58;
  lVar14 = *(long *)(param_1 + 0x4e8);
  if (lVar14 != 0) {
    lVar13 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar14 + 0xc) != 0) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar6 = *(int *)(lVar14 + 0xc);
      do {
        plVar15 = *(long **)(lVar14 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar11 = FUN_00b65f6c();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_014337fc;
          if (plVar15 == (long *)puVar5) break;
          plVar15 = (long *)*plVar15;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar14 = *(long *)(lVar14 + 0x18);
            plVar15 = (long *)(lVar14 + -0x50);
            if (lVar14 != 0) {
              *(undefined1 *)(param_1 + 0x4fe) = 0;
              iVar6 = FUN_02c5be48(*param_4);
              lVar8 = *(long *)(lVar13 + 0x148);
              if (lVar8 != 0) {
                FUN_0283b1e8(lVar8,param_1 + 0x248);
              }
              uVar16 = 0x3f800000;
              if (iVar6 != 0x1e3) {
                uVar16 = 0x40000000;
              }
              if (1 < iVar6 - 0x1e3U) {
                uVar16 = 0;
              }
              FUN_00d2e4b8(uVar16,lVar13,param_1 + 0x248);
              iVar6 = (int)*(float *)(lVar14 + 0xaf0);
              uVar9 = FUN_01ae0e0c(plVar15);
              if ((uVar9 & 1) == 0) {
                local_150 = 0;
                uStack_148 = 0;
                local_160 = 0;
                local_158 = (code *)0x0;
                FUN_0143338c(param_1,param_2,param_3,0,iVar6,0x1e,&local_160,0);
                pcVar12 = local_158;
                if (local_158 == (code *)0x0) goto LAB_014339c8;
                plVar10 = alStack_140;
                local_150 = 0;
                uStack_148 = 0;
                local_160 = 0;
                local_158 = (code *)0x0;
              }
              else {
                local_e0 = &LAB_01435668;
                local_d8 = FUN_014357c8;
                local_d0 = &LAB_014357cc;
                local_c8 = &LAB_014357d8;
                alStack_c0[0] = param_1;
                FUN_0143338c(param_1,param_2,param_3,0,iVar6,0x1e,&local_e0,0);
                pcVar12 = local_d8;
                if (local_d8 == (code *)0x0) goto LAB_014339c8;
                plVar10 = alStack_c0;
                local_d0 = (undefined1 *)0x0;
                local_c8 = (undefined1 *)0x0;
                local_e0 = (undefined1 *)0x0;
                local_d8 = (code *)0x0;
              }
              (*pcVar12)(plVar10);
LAB_014339c8:
              *(int *)(param_1 + 0x47c) = iVar6;
              lVar14 = *(long *)(lVar14 + 8);
              piVar1 = (int *)(lVar14 + 0xc);
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
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
                return;
              }
              return;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar7;
      } while (iVar7 != 0);
    }
  }
LAB_014337fc:
  lVar14 = *(long *)(param_1 + 0x348);
  *(undefined8 *)(lVar14 + 0x120) = 0;
  lVar13 = *(long *)(lVar14 + 0x168);
  *(undefined8 *)(lVar14 + 0x188) = 0;
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  lVar13 = *(long *)(lVar14 + 0x170);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  lVar13 = *(long *)(lVar14 + 0x178);
  if (lVar13 != 0) {
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  lVar14 = *(long *)(lVar14 + 0x180);
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
  }
  return;
}


