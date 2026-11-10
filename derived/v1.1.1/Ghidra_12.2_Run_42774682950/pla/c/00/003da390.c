/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da390; name: FUN_003da390
 */


ulong FUN_003da390(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  void *__ptr;
  void *__ptr_00;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar6 = (ulong)(param_3 & 0xf);
  puVar2 = &DAT_0439a968 + uVar6 * 0x40;
  FUN_002ef750(puVar2);
  uVar8 = (&DAT_0439a998)[uVar6 * 8];
  uVar5 = 0;
  if (uVar8 != 0) {
    uVar5 = (param_3 >> 4) / uVar8;
  }
  lVar13 = (&DAT_0439a988)[uVar6 * 8];
  lVar12 = (ulong)(param_3 >> 4) - uVar5 * uVar8;
  plVar11 = *(long **)(lVar13 + lVar12 * 8);
  if (plVar11 != (long *)0x0) {
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_003da5b0:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0x133,2,
                   "assertion failed: %s","grpc_slice_is_interned(a) && grpc_slice_is_interned(b)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = *param_2;
    if (lVar9 == 0) {
      do {
        if (((1 < *(uint *)(lVar7 + 8)) || (lVar9 = *plVar11, lVar9 == 0)) ||
           ((1 < *(uint *)(lVar9 + 8) || (lVar7 == lVar9)))) goto LAB_003da5b0;
        plVar11 = (long *)plVar11[0x10];
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        if (((1 < *(uint *)(lVar7 + 8)) || (lVar10 = *plVar11, lVar10 == 0)) ||
           (1 < *(uint *)(lVar10 + 8))) goto LAB_003da5b0;
        if (lVar7 == lVar10) {
          if (((1 < *(uint *)(lVar9 + 8)) || (lVar10 = plVar11[4], lVar10 == 0)) ||
             (1 < *(uint *)(lVar10 + 8))) goto LAB_003da5b0;
          if (lVar9 == lVar10) {
            if (PTR_DAT_04374098[0x10] != '\0') {
              lStack_68 = plVar11[1];
              local_70 = *plVar11;
              lStack_58 = plVar11[3];
              lStack_60 = plVar11[2];
              __ptr = (void *)FUN_002f2680(&local_70);
              lStack_88 = plVar11[5];
              local_90 = plVar11[4];
              lStack_78 = plVar11[7];
              lStack_80 = plVar11[6];
              __ptr_00 = (void *)FUN_002f2680(&local_90);
              FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x11c,
                           0,"mdelem   REF:%p:%ld->%ld: \'%s\' = \'%s\'",plVar11,plVar11[8],
                           plVar11[8] + 1,__ptr,__ptr_00);
              free(__ptr);
              free(__ptr_00);
            }
            plVar1 = plVar11 + 8;
            do {
              lVar12 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar12 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 == 0) {
              plVar1 = &DAT_0439a9a0 + uVar6 * 8;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            goto LAB_003da588;
          }
        }
        plVar11 = (long *)plVar11[0x10];
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x88);
  if (plVar11 != (long *)0x0) {
    FUN_003d8be8(plVar11,param_1,param_2,param_3,*(undefined8 *)(lVar13 + lVar12 * 8));
  }
  *(long **)((&DAT_0439a988)[uVar6 * 8] + lVar12 * 8) = plVar11;
  lVar12 = (&DAT_0439a990)[uVar6 * 8];
  (&DAT_0439a990)[uVar6 * 8] = lVar12 + 1U;
  if ((ulong)((&DAT_0439a998)[uVar6 * 8] * 2) < lVar12 + 1U) {
    FUN_003da5e0(puVar2);
  }
LAB_003da588:
  FUN_002ef790(puVar2);
  return (ulong)plVar11 | 3;
}


