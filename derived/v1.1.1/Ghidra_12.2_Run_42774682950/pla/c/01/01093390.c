/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01093390; name: FUN_01093390
 */


void FUN_01093390(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  long alStack_c0 [13];
  long *plStack_58;
  undefined4 uStack_48;
  int iStack_44;
  
  uVar7 = FUN_02c5fb2c(*param_3);
  uVar8 = FUN_02c6d5b0(*(undefined8 *)(*param_3 + 0x98));
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  *(undefined8 *)PTR_DAT_0437a718 = *(undefined8 *)PTR_DAT_0437a710;
  puVar11 = (uint *)FUN_010aaca0();
  uVar2 = *puVar11;
  if (uVar2 != 0) {
    if ((uVar8 & 1) != 0) {
      lVar15 = 0;
      uVar8 = 1;
      do {
        uVar13 = (ulong)*(uint *)((long)puVar11 + lVar15 + 4);
        lVar12 = lVar15 + (uVar13 - (long)*(int *)((long)puVar11 + lVar15 + uVar13 + 4));
        if ((*(ushort *)((long)puVar11 + lVar12 + 4) < 5) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar12 + 8), uVar14 == 0)) {
          if (uVar7 == 0) goto LAB_010935dc;
        }
        else if (uVar7 <= *(uint *)((long)puVar11 + lVar15 + uVar13 + uVar14 + 4)) {
LAB_010935dc:
          if (uVar2 <= uVar8) {
            uVar8 = uVar2 - 1;
          }
          lVar12 = (long)(puVar11 + (ulong)uVar8 + 1) + (ulong)puVar11[(ulong)uVar8 + 1];
          break;
        }
        lVar15 = lVar15 + 4;
        lVar12 = 0;
        uVar8 = uVar8 + 1;
      } while ((ulong)uVar2 * 4 != lVar15);
      goto LAB_010934f0;
    }
    lVar12 = 0;
    do {
      uVar13 = (ulong)*(uint *)((long)puVar11 + lVar12 + 4);
      lVar15 = lVar12 + (uVar13 - (long)*(int *)((long)puVar11 + lVar12 + uVar13 + 4));
      if ((*(ushort *)((long)puVar11 + lVar15 + 4) < 5) ||
         (uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar15 + 8), uVar14 == 0)) {
        if (uVar7 == 0) goto LAB_010934ec;
      }
      else if (uVar7 <= *(uint *)((long)puVar11 + lVar12 + uVar13 + uVar14 + 4)) {
LAB_010934ec:
        lVar12 = (long)puVar11 + lVar12 + uVar13 + 4;
        goto LAB_010934f0;
      }
      lVar12 = lVar12 + 4;
    } while ((ulong)uVar2 * 4 != lVar12);
  }
  lVar12 = 0;
LAB_010934f0:
  iStack_44 = FUN_01093640(lVar12);
  puVar6 = PTR_DAT_0437a330;
  if (iStack_44 < 1) {
    *param_1 = 0;
    return;
  }
  uStack_48 = 1;
  FUN_010938a8(param_1);
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_e0 = &LAB_01093c84;
  pcStack_d8 = FUN_01093ef0;
  puStack_d0 = &LAB_010943e0;
  puStack_c8 = &LAB_01094454;
  alStack_c0[0] = lVar12;
  FUN_01f0cf24(&plStack_58,&iStack_44,&uStack_48,param_4,puVar6,param_5,param_6 & 1,param_2,
               &puStack_e0);
  pcVar5 = pcStack_d8;
  if (plStack_58 != (long *)0x0) {
    lVar12 = plStack_58[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plStack_58 + 0x20))();
      pcVar5 = pcStack_d8;
    }
  }
  if (pcVar5 != (code *)0x0) {
    puStack_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    puStack_e0 = (undefined1 *)0x0;
    pcStack_d8 = (code *)0x0;
    (*pcVar5)(alStack_c0);
  }
  return;
}


