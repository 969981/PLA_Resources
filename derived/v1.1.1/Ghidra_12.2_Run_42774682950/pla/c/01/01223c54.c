/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01223c54; name: FUN_01223c54
 */


undefined4 FUN_01223c54(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  
  piVar7 = *(int **)(param_1 + 0x1648);
  if (*piVar7 == 1) {
    uVar10 = *(uint *)(param_1 + 0x171c);
    if ((uVar10 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
      if ((uint)piVar7[0x15] < 2) {
        return 1;
      }
    }
    if (((((((uVar10 >> 1 & 1) == 0) || (uVar11 = uVar11 + 1, uVar11 < (uint)piVar7[0x15])) &&
          (((uVar10 >> 2 & 1) == 0 || (uVar11 = uVar11 + 1, uVar11 < (uint)piVar7[0x15])))) &&
         (((uVar10 >> 3 & 1) == 0 || (uVar11 = uVar11 + 1, uVar11 < (uint)piVar7[0x15])))) &&
        (((uVar10 >> 4 & 1) == 0 || (uVar11 = uVar11 + 1, uVar11 < (uint)piVar7[0x15])))) &&
       (((uVar10 >> 5 & 1) == 0 || (uVar11 = uVar11 + 1, uVar11 < (uint)piVar7[0x15])))) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar8 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar8;
      plVar13 = *(long **)(lVar8 + 0x248);
      if (plVar13 != (long *)0x0) {
        lVar8 = plVar13[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar6;
        }
        piVar7 = (int *)(lVar8 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if ((char)plVar13[0x95] == ' ') {
        iVar5 = FUN_010e630c();
        if (iVar5 != -0x1d) goto LAB_01223d10;
      }
      else if ((char)plVar13[0x95] != '\0') {
LAB_01223d10:
        uVar9 = 0;
        do {
          while( true ) {
            uVar1 = *(uint *)(param_1 + uVar9 * 4 + 0x169c);
            uVar10 = 0;
            do {
              if (((((1 << (ulong)(uVar10 & 0x1f) & uVar1) != 0) &&
                   (uVar11 = uVar11 + 1, *(uint *)(*(long *)(param_1 + 0x1648) + 0x54) <= uVar11))
                  || (((2 << (ulong)(uVar10 & 0x1f) & uVar1) != 0 &&
                      (uVar11 = uVar11 + 1, *(uint *)(*(long *)(param_1 + 0x1648) + 0x54) <= uVar11)
                      ))) ||
                 (((4 << (ulong)(uVar10 & 0x1f) & uVar1) != 0 &&
                  (uVar11 = uVar11 + 1, *(uint *)(*(long *)(param_1 + 0x1648) + 0x54) <= uVar11))))
              {
                bVar3 = true;
                goto joined_r0x01223dd0;
              }
              uVar10 = uVar10 + 3;
            } while (uVar10 != 0x1e);
            uVar9 = uVar9 + 1;
            if (*(byte *)(plVar13 + 0x95) == 0x20) break;
            if ((uint)*(byte *)(plVar13 + 0x95) <= uVar9) goto LAB_01223dc0;
          }
          iVar5 = FUN_010e630c();
        } while (uVar9 < iVar5 + 0x1d);
      }
LAB_01223dc0:
      bVar3 = false;
joined_r0x01223dd0:
      if (plVar13 != (long *)0x0) {
        lVar8 = plVar13[0xb];
        piVar7 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar7;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar4) {
            *piVar7 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      if (!bVar3) goto LAB_01223e9c;
    }
    uVar12 = 1;
  }
  else {
LAB_01223e9c:
    uVar12 = 0;
  }
  return uVar12;
}


