/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02598b04; name: FUN_02598b04
 */


void FUN_02598b04(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  long *plVar18;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  FUN_02598eb8(param_1,0);
  iVar6 = *(int *)(param_1 + 0xc0);
  if (((iVar6 == 0) && (iVar6 = *(int *)(param_1 + 0xbc), iVar6 == 0)) &&
     (iVar6 = *(int *)(param_1 + 0xb8), iVar6 == 0)) {
    iVar6 = *(int *)(param_1 + 0xb4);
  }
  if (*(int *)(param_1 + 0x16c) == 2) {
    lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e8);
    lVar9 = *(long *)(lVar8 + 0xe8);
    if (((lVar9 != 0) && (*(int *)(lVar8 + 0xf0) == *(int *)(lVar9 + 0x2c))) &&
       ((lVar8 = FUN_002669c8(), lVar8 != 0 &&
        ((0 < *(int *)(lVar8 + 0x17c) && (*(char *)(lVar8 + 0xc) != '\0')))))) goto LAB_02598b64;
LAB_02598e08:
    FUN_02599418(param_1,iVar6);
  }
  else {
    if (*(int *)(param_1 + 0x16c) != 1) goto LAB_02598b64;
    if (iVar6 != *(int *)(param_1 + 0xc4)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e8);
      lVar9 = *(long *)(lVar8 + 0xe8);
      if ((((lVar9 != 0) && (*(int *)(lVar8 + 0xf0) == *(int *)(lVar9 + 0x2c))) &&
          (lVar8 = FUN_002669c8(), lVar8 != 0)) &&
         ((0 < *(int *)(lVar8 + 0x17c) && (*(char *)(lVar8 + 0xc) != '\0')))) {
        FUN_02c91f14(*(undefined8 *)(param_1 + 0xa8));
        *(undefined4 *)(param_1 + 0x16c) = 2;
        goto LAB_02598b64;
      }
      goto LAB_02598e08;
    }
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
LAB_02598b64:
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar18 = *(long **)(lVar8 + 0x278);
  if (plVar18 != (long *)0x0) {
    lVar8 = plVar18[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_02598e9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined4 *)(plVar18 + 0x2c) = *(undefined4 *)(param_1 + 0xbc);
  puVar10 = (undefined *)0x425df78;
  *(undefined4 *)((long)plVar18 + 0x164) = *(undefined4 *)(param_1 + 0xc0);
  lVar8 = 0;
LAB_02598c0c:
  pbVar13 = *(byte **)(puVar10 + 8);
  puVar11 = &DAT_cbf29ce484222645;
  bVar2 = *pbVar13;
  if (bVar2 != 0) {
    puVar11 = &DAT_cbf29ce484222645;
    do {
      pbVar13 = pbVar13 + 1;
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar13;
    } while (bVar2 != 0);
  }
  puVar12 = *(undefined1 **)(param_1 + 0x108);
  if (puVar12 != (undefined1 *)0x0) {
    uVar14 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)puVar11);
    }
    else {
      puVar15 = puVar11;
      if (puVar12 <= puVar11) {
        uVar5 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar12;
        }
        puVar15 = puVar11 + -(uVar5 * (long)puVar12);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x100) + (long)puVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar16[1] == puVar11) {
            if ((undefined1 *)plVar16[2] == puVar11) goto LAB_02598cbc;
          }
          else if ((undefined1 *)((ulong)plVar16[1] & (ulong)(puVar12 + -1)) != puVar15)
          goto LAB_02598e9c;
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_02598e9c;
        } while( true );
      }
      do {
        puVar17 = (undefined1 *)plVar16[1];
        if (puVar17 == puVar11) {
          if ((undefined1 *)plVar16[2] == puVar11) goto LAB_02598cbc;
        }
        else {
          if (puVar12 <= puVar17) {
            uVar14 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar17 / (ulong)puVar12;
            }
            puVar17 = puVar17 + -(uVar14 * (long)puVar12);
          }
          if (puVar17 != puVar15) break;
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) break;
      } while( true );
    }
  }
  goto LAB_02598e9c;
LAB_02598cbc:
  *(int *)(plVar18 + lVar8 * 2 + 0x1e) = (int)plVar16[8];
  *(undefined4 *)((long)plVar18 + lVar8 * 0x10 + 0xf4) = *(undefined4 *)((long)plVar16 + 0x44);
  *(int *)(plVar18 + lVar8 * 2 + 0x1f) = (int)plVar16[9];
  puVar10 = puVar10 + 0x18;
  *(undefined4 *)((long)plVar18 + lVar8 * 0x10 + 0xfc) = *(undefined4 *)((long)plVar16 + 0x4c);
  lVar8 = lVar8 + 1;
  if (puVar10 == &DAT_0425e020) {
    lVar8 = plVar18[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02598d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar18 + 0x20))(plVar18);
      return;
    }
    return;
  }
  goto LAB_02598c0c;
}


