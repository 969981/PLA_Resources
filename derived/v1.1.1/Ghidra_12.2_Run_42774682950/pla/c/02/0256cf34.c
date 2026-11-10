/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256cf34; name: FUN_0256cf34
 */


int FUN_0256cf34(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 *param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int unaff_w25;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte local_68 [8];
  
  fVar21 = param_2._8_4_;
  fVar20 = param_2._0_4_;
  if ((*(int *)(param_3 + 0x68) == 1) &&
     (plVar13 = *(long **)(param_3 + 0x480), plVar13 != (long *)0x0)) {
    lVar14 = plVar13[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_0256d238:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((int)plVar13[0x3e] == 8) &&
       (lVar14 = *(long *)(plVar13[0x3f] + 0xb8) - *(long *)(plVar13[0x3f] + 0xb0), lVar14 != 0)) {
      uVar15 = 0;
      do {
        lVar16 = plVar13[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_0256d238;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar17 = &DAT_cbf29ce484222645;
        if ((int)plVar13[0x3e] == 8) {
          uVar18 = -(uVar15 >> 0x1f & 1) & 0xfffffff800000000 | (uVar15 & 0xffffffff) << 3;
          fVar19 = (float)FUN_02c1de94(*(undefined8 *)(*(long *)(plVar13[0x3f] + 0xb0) + uVar18));
          lVar16 = *(long *)(*(long *)(plVar13[0x3f] + 0x120) + uVar18);
          puVar17 = &DAT_cbf29ce484222645;
          iVar3 = *(int *)(lVar16 + 0x68);
          fVar22 = (float)iVar3 / (fVar20 - fVar19);
          fVar19 = ((float)*param_4 - fVar19) * fVar22;
          iVar8 = (int)fVar19 - (uint)(fVar19 < 0.0);
          fVar22 = (fVar21 - (float)param_4[1]) * fVar22;
          if ((-1 < iVar8) && (puVar17 = &DAT_cbf29ce484222645, iVar8 < iVar3)) {
            iVar2 = iVar3 + ~(int)fVar22 + (uint)(fVar22 < 0.0);
            puVar17 = &DAT_cbf29ce484222645;
            if ((-1 < iVar2) && (puVar17 = &DAT_cbf29ce484222645, iVar2 < iVar3)) {
              lVar11 = (long)(iVar8 + iVar2 * iVar3);
              if (*(int *)(lVar16 + 0x60) == 4) {
                uVar10 = (uint)*(byte *)(*(long *)(lVar16 + 0x58) +
                                        (long)*(int *)(lVar16 + 100) + lVar11 * 4);
              }
              else {
                uVar10 = (int)*(char *)(*(long *)(lVar16 + 0x58) + lVar11) <<
                         (ulong)((*(uint *)(lVar16 + 100) & 0xf) << 1) & 0xffffff80;
              }
              puVar17 = &DAT_cbf29ce484222645;
              if ((uVar10 & 0xff) != 0) {
                snprintf((char *)local_68,8,"%d",uVar15 & 0xffffffff);
                puVar17 = &DAT_cbf29ce484222645;
                if (local_68[0] != 0) {
                  puVar17 = &DAT_cbf29ce484222645;
                  pbVar12 = (byte *)((ulong)local_68 | 1);
                  bVar4 = local_68[0];
                  do {
                    puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar4) * 0x100000001b3);
                    bVar4 = *pbVar12;
                    pbVar12 = pbVar12 + 1;
                  } while (bVar4 != 0);
                }
              }
            }
          }
        }
        lVar16 = plVar13[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
        unaff_w25 = FUN_018c6d54(*(undefined8 *)(param_3 + 0x3c8),puVar17,param_5);
        if (unaff_w25 != 0) {
          bVar6 = true;
          goto LAB_0256d1a4;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != lVar14 >> 3);
      unaff_w25 = 0;
      bVar6 = false;
    }
    else {
      bVar6 = false;
    }
LAB_0256d1a4:
    lVar14 = plVar13[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (bVar6) {
      return unaff_w25;
    }
  }
  return 0;
}


