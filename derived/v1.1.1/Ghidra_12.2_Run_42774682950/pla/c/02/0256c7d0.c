/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256c7d0; name: FUN_0256c7d0
 */


void FUN_0256c7d0(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte local_68 [8];
  
  fVar22 = param_3._8_4_;
  fVar21 = param_3._0_4_;
  if ((*(int *)(param_4 + 0x68) == 1) &&
     (plVar14 = *(long **)(param_4 + 0x480), plVar14 != (long *)0x0)) {
    lVar15 = plVar14[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0256cbcc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = PTR_DAT_0437a0d8;
    } while (cVar4 != '\0');
    if (((int)plVar14[0x3e] == 8) &&
       (lVar15 = *(long *)(plVar14[0x3f] + 0xb8) - *(long *)(plVar14[0x3f] + 0xb0), lVar15 != 0)) {
      uVar16 = 0;
      do {
        lVar17 = plVar14[0xb];
        if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0256cbcc;
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar18 = &DAT_cbf29ce484222645;
        if ((int)plVar14[0x3e] == 8) {
          uVar19 = -(uVar16 >> 0x1f & 1) & 0xfffffff800000000 | (uVar16 & 0xffffffff) << 3;
          fVar20 = (float)FUN_02c1de94(*(undefined8 *)(*(long *)(plVar14[0x3f] + 0xb0) + uVar19));
          lVar17 = *(long *)(*(long *)(plVar14[0x3f] + 0x120) + uVar19);
          puVar18 = &DAT_cbf29ce484222645;
          iVar9 = *(int *)(lVar17 + 0x68);
          fVar23 = (float)iVar9 / (fVar21 - fVar20);
          fVar20 = ((float)*param_5 - fVar20) * fVar23;
          iVar7 = (int)fVar20 - (uint)(fVar20 < 0.0);
          fVar23 = (fVar22 - (float)param_5[1]) * fVar23;
          if ((-1 < iVar7) && (puVar18 = &DAT_cbf29ce484222645, iVar7 < iVar9)) {
            iVar2 = iVar9 + ~(int)fVar23 + (uint)(fVar23 < 0.0);
            puVar18 = &DAT_cbf29ce484222645;
            if ((-1 < iVar2) && (puVar18 = &DAT_cbf29ce484222645, iVar2 < iVar9)) {
              lVar12 = (long)(iVar7 + iVar2 * iVar9);
              if (*(int *)(lVar17 + 0x60) == 4) {
                uVar11 = (uint)*(byte *)(*(long *)(lVar17 + 0x58) +
                                        (long)*(int *)(lVar17 + 100) + lVar12 * 4);
              }
              else {
                uVar11 = (int)*(char *)(*(long *)(lVar17 + 0x58) + lVar12) <<
                         (ulong)((*(uint *)(lVar17 + 100) & 0xf) << 1) & 0xffffff80;
              }
              puVar18 = &DAT_cbf29ce484222645;
              if ((uVar11 & 0xff) != 0) {
                snprintf((char *)local_68,8,"%d",uVar16 & 0xffffffff);
                puVar18 = &DAT_cbf29ce484222645;
                if (local_68[0] != 0) {
                  puVar18 = &DAT_cbf29ce484222645;
                  pbVar13 = (byte *)((ulong)local_68 | 1);
                  bVar3 = local_68[0];
                  do {
                    puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
                    bVar3 = *pbVar13;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar3 != 0);
                }
              }
            }
          }
        }
        lVar17 = plVar14[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        FUN_018c6814(param_1,*(undefined8 *)(param_4 + 0x3c8),puVar18,param_6);
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        if (*param_1 != *(long *)puVar8) {
          bVar5 = true;
          goto LAB_0256c92c;
        }
        if ((long *)param_1[3] != (long *)0x0) {
          (**(code **)(*(long *)param_1[3] + 0x20))();
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != lVar15 >> 3);
    }
    bVar5 = false;
LAB_0256c92c:
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (bVar5) {
      return;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar9 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar8 = PTR_DAT_0437a0d8;
  lVar15 = *(long *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(long *)PTR_DAT_0437a0d8;
  param_1[1] = lVar15;
  plVar14 = *(long **)(puVar8 + 0x18);
  param_1[2] = *(long *)(puVar8 + 0x10);
  param_1[3] = (long)plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0256c8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x18))();
  return;
}


