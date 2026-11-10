/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f6124; name: FUN_010f6124
 */


void FUN_010f6124(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong uVar10;
  ulong extraout_x9;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong extraout_x12;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined *local_70;
  long local_68 [2];
  long local_58;
  long local_50;
  long local_48;
  long *local_38;
  
  local_70 = PTR_DAT_0437e410 + 0x10;
  FUN_010a1a20(local_68,param_1 + 0xd0);
  local_58 = *(long *)(param_1 + 0xe0);
  if (local_58 != 0) {
    piVar1 = (int *)(local_58 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_50 = *(long *)(param_1 + 0xe8);
  if (local_50 != 0) {
    piVar1 = (int *)(local_50 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_48 = *(long *)(param_1 + 0xf0);
  if (local_48 != 0) {
    lVar14 = *(long *)(local_48 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = PTR_DAT_04379c88;
  local_70 = PTR_DAT_0437a510 + 0x10;
  if ((local_68[0] == 0) ||
     (lVar14 = *(long *)(local_68[0] + 0x278) - *(long *)(local_68[0] + 0x270), lVar14 == 0)) {
LAB_010f6338:
    FUN_010a17b8(&local_70);
    return;
  }
  plVar16 = *(long **)(param_1 + 0x1b8);
  lVar15 = 0;
LAB_010f6254:
  FUN_010f5a90(&local_38,&local_70,lVar15);
  uVar10 = plVar16[1];
  puVar2 = (ulong *)puVar6;
  if (local_38 != (long *)0x0) {
    puVar2 = (ulong *)(local_38 + 0xb);
  }
  if (uVar10 == 0) goto LAB_010f6398;
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar9 = *puVar2;
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  plVar8 = local_38;
  if (uVar11 < 2) {
    uVar12 = uVar10 - 1 & uVar9;
  }
  else {
    if (uVar9 < uVar10) goto LAB_010f639c;
    uVar12 = 0;
    if (uVar10 != 0) {
      uVar12 = uVar9 / uVar10;
    }
    uVar12 = uVar9 - uVar12 * uVar10;
  }
  do {
    plVar13 = *(long **)(*plVar16 + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_010f6320;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_010f6320;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
LAB_010f6398:
    plVar8 = (long *)FUN_010f8fc0();
    uVar9 = extraout_x8;
    uVar10 = extraout_x9;
    uVar11 = extraout_x12;
LAB_010f639c:
    uVar12 = uVar9;
  } while( true );
LAB_010f6320:
  *(undefined1 *)(plVar13 + 3) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  lVar15 = lVar15 + 1;
  if (lVar15 == lVar14 >> 3) goto LAB_010f6338;
  goto LAB_010f6254;
}


