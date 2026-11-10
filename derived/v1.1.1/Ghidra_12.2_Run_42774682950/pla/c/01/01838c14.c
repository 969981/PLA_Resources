/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01838c14; name: FUN_01838c14
 */


void FUN_01838c14(long param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  
  puVar8 = PTR_DAT_04379e80;
  puVar7 = PTR_DAT_04379e78;
  uVar3 = *(uint *)(param_1 + 0x354);
  if (uVar3 == param_2) {
    if (((param_2 == 0) && (lVar13 = *(long *)(param_1 + 0x268), lVar13 != 0)) &&
       (*(int *)(lVar13 + 0xc) != 0)) {
      piVar1 = (int *)(lVar13 + 0xc);
      iVar14 = *(int *)(lVar13 + 0xc);
      do {
        plVar15 = *(long **)(lVar13 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_0095a420();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) {
            return;
          }
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar14) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x18);
            if (lVar13 == 0) {
              return;
            }
            plVar15 = (long *)(lVar13 + -0x50);
            uVar10 = FUN_01bdbec0(plVar15);
            if ((uVar10 & 1) == 0) {
              FUN_0183911c(param_1,1,2,param_3);
              *(undefined1 *)(param_1 + 0x364) = 0;
            }
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar14 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar14 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01838dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar15 + 0x20))(plVar15);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar14 = iVar9;
      } while (iVar9 != 0);
    }
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x358);
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    if (uVar3 != 0) goto LAB_01838c5c;
    uVar11 = 1;
  }
  FUN_01838ddc(param_1,uVar11);
LAB_01838c5c:
  *(uint *)(param_1 + 0x354) = param_2;
  *(uint *)(param_1 + 0x358) = param_2;
  uVar12 = 1;
  if ((param_2 & 0x80) == 0) {
    uVar12 = 2;
  }
  uVar2 = 0;
  if (((uVar4 | uVar3) & 0x80) != (param_2 & 0x80)) {
    uVar2 = uVar12;
  }
  FUN_0183911c(param_1,param_2 == 0,uVar2,param_3);
  return;
}


