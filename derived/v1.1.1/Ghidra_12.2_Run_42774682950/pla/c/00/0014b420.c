/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014b420; name: FUN_0014b420
 */


ulong * FUN_0014b420(ulong param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  
  if (DAT_0438e190 == 0) {
    do {
      iVar8 = DAT_0438e180;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
      if (bVar6) {
        DAT_0438e180 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != 0) {
      uVar15 = 0;
LAB_0014b484:
      if (DAT_0438e180 == 0) {
        do {
          iVar8 = DAT_0438e180;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
          if (bVar6) {
            DAT_0438e180 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) goto LAB_0014b4ac;
      }
      uVar15 = uVar15 + 1;
      if ((uVar15 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014b484;
    }
LAB_0014b4ac:
    if (DAT_0438e190 == 0) {
      DAT_0438e198 = 0x1000;
      DAT_0438e1a0 = 0x10000;
      DAT_0438e1a8 = 0x40000;
      DAT_0438e1b0 = 0x200000;
      DAT_0438e1b8 = 7;
      DAT_0438e530 = 7;
      uVar13 = time((time_t *)0x0);
      DAT_0438e190 = uVar13 & 0xfffffffffffffff0 ^ 0x55555558;
      DAT_0438e180 = 0;
    }
    else {
      DAT_0438e180 = 0;
    }
  }
  else {
  }
  if (((byte)DAT_0438e530 >> 1 & 1) != 0) {
    do {
      iVar8 = DAT_0438e530._4_4_;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x438e534,0x10);
      if (bVar6) {
        DAT_0438e530 = CONCAT44(1,(undefined4)DAT_0438e530);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != 0) {
      uVar15 = 0;
LAB_0014b550:
      if (DAT_0438e530._4_4_ == 0) {
        do {
          iVar8 = DAT_0438e530._4_4_;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x438e534,0x10);
          if (bVar6) {
            DAT_0438e530 = CONCAT44(1,(undefined4)DAT_0438e530);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) goto LAB_0014b578;
      }
      uVar15 = uVar15 + 1;
      if ((uVar15 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014b550;
    }
  }
LAB_0014b578:
  if (param_1 < 0xe9) {
    uVar13 = 0x20;
    if (0x16 < param_1) {
      uVar13 = param_1 + 0x17 & 0xfffffffffffffff0;
    }
    uVar7 = (uint)(uVar13 >> 3);
    uVar15 = DAT_0438e1c0 >> (ulong)(uVar7 & 0x1e);
    if ((uVar15 & 3) == 0) {
      if (DAT_0438e1c8 < uVar13) {
        if (uVar15 != 0) {
          uVar2 = 2 << (ulong)(uVar7 & 0x1f);
          uVar15 = uVar15 << (ulong)(uVar7 & 0x1f) & (uVar2 | -uVar2);
          uVar7 = (uVar15 & -uVar15) - 1;
          uVar15 = uVar7 >> 0xc & 0x10;
          uVar7 = uVar7 >> (ulong)uVar15;
          uVar2 = uVar7 >> (ulong)(uVar7 >> 5 & 8);
          uVar3 = uVar2 >> (ulong)(uVar2 >> 2 & 4);
          uVar4 = uVar3 >> (ulong)(uVar3 >> 1 & 2);
          uVar15 = (uVar15 | uVar7 >> 5 & 8 | uVar2 >> 2 & 4 | uVar3 >> 1 & 2 | uVar4 >> 1 & 1) +
                   (uVar4 >> (ulong)(uVar4 >> 1 & 1));
          lVar1 = (ulong)(uVar15 * 2) * 8;
          uVar10 = *(ulong *)(&DAT_0438e218 + lVar1);
          uVar11 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffff8;
          if (uVar11 != uVar15 * 8) goto LAB_0014baac;
          puVar14 = (ulong *)(uVar10 + 0x10);
          uVar12 = *puVar14;
          uVar9 = lVar1 + 0x438e208;
          if ((uVar10 == uVar9) || (uVar10 == uVar12)) goto LAB_0014baac;
          if (uVar12 == uVar9) {
            DAT_0438e1c0 = DAT_0438e1c0 & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
            uVar9 = uVar11 - uVar13;
            if (uVar9 < 0x20) goto LAB_0014b788;
LAB_0014b998:
            *(ulong *)(uVar10 + 8) = uVar13 | 3;
            *(ulong *)(uVar10 + uVar13 + 8) = uVar9 | 1;
            *(ulong *)(uVar10 + uVar11) = uVar9;
            if (0xff < DAT_0438e1c8) goto LAB_0014baac;
            if (DAT_0438e1c8 != 0) {
              if (DAT_0438e1c8 < 0x20) goto LAB_0014baac;
              lVar1 = (DAT_0438e1c8 >> 3 & 0x7fffffff) * 0x10;
              uVar15 = 1 << (ulong)((uint)(DAT_0438e1c8 >> 3) & 0x1f);
              if ((DAT_0438e1c0 & uVar15) == 0) {
                DAT_0438e1c0 = DAT_0438e1c0 | uVar15;
                uVar11 = lVar1 + 0x438e208U;
              }
              else {
                uVar11 = *(ulong *)(&DAT_0438e218 + lVar1);
                if (*(ulong *)(&DAT_0438e218 + lVar1) < DAT_0438e1d8) goto LAB_0014baac;
              }
              *(long *)(&DAT_0438e218 + lVar1) = DAT_0438e1e0;
              *(long *)(uVar11 + 0x18) = DAT_0438e1e0;
              *(ulong *)(DAT_0438e1e0 + 0x10) = uVar11;
              *(ulong *)(DAT_0438e1e0 + 0x18) = lVar1 + 0x438e208U;
            }
            DAT_0438e1c8 = uVar9;
            DAT_0438e1e0 = uVar10 + uVar13;
          }
          else {
            if ((uVar12 < DAT_0438e1d8) || (*(ulong *)(uVar12 + 0x18) != uVar10)) goto LAB_0014baac;
            *(ulong *)(uVar12 + 0x18) = uVar9;
            *(ulong *)(&DAT_0438e218 + lVar1) = uVar12;
            uVar9 = uVar11 - uVar13;
            if (0x1f < uVar9) goto LAB_0014b998;
LAB_0014b788:
            *(ulong *)(uVar10 + 8) = uVar11 | 3;
            *(ulong *)(uVar10 + uVar11 + 8) = *(ulong *)(uVar10 + uVar11 + 8) | 1;
          }
          uVar11 = *(ulong *)(uVar10 + 8);
          FUN_0014d190(&DAT_0438e1c0,uVar10);
          if (((((uVar11 & 0xc) != 0) || (uVar11 = uVar11 & 0xfffffffffffffffc, uVar11 < 0x20)) ||
              (uVar11 < uVar13)) || (uVar13 + 0x20 <= uVar11 && (*(ulong *)(uVar10 + 8) & 3) != 0))
          goto LAB_0014baac;
          goto LAB_0014ba80;
        }
        if ((DAT_0438e1c4 != 0) &&
           (puVar14 = (ulong *)FUN_0014bab0(&DAT_0438e1c0,uVar13), puVar14 != (ulong *)0x0))
        goto LAB_0014b678;
      }
LAB_0014b838:
      uVar10 = DAT_0438e1c8 - uVar13;
      uVar11 = DAT_0438e1c8;
      if (uVar13 <= DAT_0438e1c8) goto LAB_0014b8b4;
LAB_0014b848:
      lVar1 = DAT_0438e1e8;
      uVar10 = DAT_0438e1d0 - uVar13;
      if (DAT_0438e1d0 < uVar13 || uVar10 == 0) {
        puVar14 = (ulong *)FUN_0014c400(&DAT_0438e1c0,uVar13);
        goto joined_r0x0014ba84;
      }
      DAT_0438e1e8 = DAT_0438e1e8 + uVar13;
      DAT_0438e1d0 = uVar10;
      *(ulong *)(DAT_0438e1e8 + 8) = uVar10 | 1;
      *(ulong *)(lVar1 + 8) = uVar13 | 3;
      FUN_0014c360(&DAT_0438e1c0,DAT_0438e1e8);
      uVar9 = *(ulong *)(lVar1 + 8);
      FUN_0014d190(&DAT_0438e1c0,lVar1);
      goto joined_r0x0014b950;
    }
    uVar15 = (uVar15 & 1 | uVar7) ^ 1;
    lVar1 = (ulong)(uVar15 << 1) * 8;
    uVar10 = *(ulong *)(&DAT_0438e218 + lVar1);
    uVar11 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffff8;
    if (uVar11 != uVar15 << 3) goto LAB_0014baac;
    puVar14 = (ulong *)(uVar10 + 0x10);
    uVar12 = *puVar14;
    uVar9 = lVar1 + 0x438e208;
    if ((uVar10 == uVar9) || (uVar10 == uVar12)) goto LAB_0014baac;
    if (uVar12 == uVar9) {
      DAT_0438e1c0 = DAT_0438e1c0 & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
    }
    else {
      if ((uVar12 < DAT_0438e1d8) || (*(ulong *)(uVar12 + 0x18) != uVar10)) goto LAB_0014baac;
      *(ulong *)(uVar12 + 0x18) = uVar9;
      *(ulong *)(&DAT_0438e218 + lVar1) = uVar12;
    }
    *(ulong *)(uVar10 + 8) = uVar11 | 3;
    *(ulong *)(uVar10 + uVar11 + 8) = *(ulong *)(uVar10 + uVar11 + 8) | 1;
    uVar10 = *(ulong *)(uVar10 + 8);
LAB_0014b7d4:
    FUN_0014d190(&DAT_0438e1c0,puVar14 + -2);
    if ((((uVar10 & 0xc) != 0) || (uVar10 = uVar10 & 0xfffffffffffffffc, uVar10 < 0x20)) ||
       (uVar10 < uVar13)) goto LAB_0014baac;
    if (uVar13 + 0x20 <= uVar10) goto LAB_0014b808;
  }
  else {
    if (param_1 < 0xffffffffffffff80) {
      uVar13 = param_1 + 0x17 & 0xfffffffffffffff0;
      if ((DAT_0438e1c4 == 0) ||
         (puVar14 = (ulong *)FUN_0014bda0(&DAT_0438e1c0,uVar13), puVar14 == (ulong *)0x0))
      goto LAB_0014b838;
LAB_0014b678:
      uVar10 = puVar14[-1];
      goto LAB_0014b7d4;
    }
    uVar13 = 0xffffffffffffffff;
    if (DAT_0438e1c8 != 0xffffffffffffffff) goto LAB_0014b848;
    uVar10 = 0;
    uVar11 = DAT_0438e1c8;
LAB_0014b8b4:
    lVar1 = DAT_0438e1e0;
    if (uVar10 < 0x20) {
      DAT_0438e1c8 = 0;
      DAT_0438e1e0 = 0;
      *(ulong *)(lVar1 + 8) = uVar11 | 3;
      *(ulong *)(lVar1 + uVar11 + 8) = *(ulong *)(lVar1 + uVar11 + 8) | 1;
      uVar9 = *(ulong *)(lVar1 + 8);
    }
    else {
      DAT_0438e1e0 = DAT_0438e1e0 + uVar13;
      uVar9 = uVar13 | 3;
      DAT_0438e1c8 = uVar10;
      *(ulong *)(DAT_0438e1e0 + 8) = uVar10 | 1;
      *(ulong *)(lVar1 + uVar11) = uVar10;
      *(ulong *)(lVar1 + 8) = uVar9;
    }
    FUN_0014d190(&DAT_0438e1c0,lVar1);
joined_r0x0014b950:
    if ((((uVar9 & 0xc) != 0) || (uVar9 = uVar9 & 0xfffffffffffffffc, uVar9 < 0x20)) ||
       (uVar9 < uVar13)) goto LAB_0014baac;
    puVar14 = (ulong *)(lVar1 + 0x10);
    if (uVar13 + 0x20 <= uVar9) {
LAB_0014b808:
      if ((puVar14[-1] & 3) != 0) {
LAB_0014baac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
LAB_0014ba80:
joined_r0x0014ba84:
  if (((byte)DAT_0438e530 >> 1 & 1) != 0) {
    DAT_0438e530 = DAT_0438e530 & 0xffffffff;
  }
  return puVar14;
}


