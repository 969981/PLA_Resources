/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9b00; name: FUN_003d9b00
 */


ulong FUN_003d9b00(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *__ptr;
  void *__ptr_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x18d,2,
                 "assertion failed: %s","key.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar11 = *param_2;
  if (lVar11 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x18e,2,
                 "assertion failed: %s","value.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(lVar11 + 8) == 0 && *(int *)(lVar8 + 8) == 0) {
    uVar7 = FUN_003db8f0(*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar11 + 0x28));
    if (3 < uVar7) {
      return uVar7;
    }
    lVar8 = *param_1;
    if (lVar8 == 0) goto LAB_003d9e6c;
  }
  if (*(int *)(lVar8 + 8) == 1) {
    uVar5 = *(uint *)(lVar8 + 0x68);
    lVar8 = *param_2;
  }
  else if (*(int *)(lVar8 + 8) == 0) {
    uVar5 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar8 + 0x28) * 4);
    lVar8 = *param_2;
  }
  else {
    uVar5 = FUN_003da780(param_1[2],param_1[1],*(undefined4 *)PTR_DAT_043740a8);
    lVar8 = *param_2;
  }
  if (lVar8 == 0) {
LAB_003d9e6c:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0x144,2,
                 "assertion failed: %s","s.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(lVar8 + 8) == 1) {
    uVar6 = *(uint *)(lVar8 + 0x68);
  }
  else if (*(int *)(lVar8 + 8) == 0) {
    uVar6 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar8 + 0x28) * 4);
  }
  else {
    uVar6 = FUN_003da780(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_043740a8);
  }
  uVar6 = uVar6 ^ (uVar5 >> 0x1e | uVar5 << 2);
  uVar9 = (ulong)(uVar6 & 0xf);
  puVar2 = &DAT_0439a968 + uVar9 * 0x40;
  FUN_002ef750(puVar2);
  uVar12 = (&DAT_0439a998)[uVar9 * 8];
  uVar7 = 0;
  if (uVar12 != 0) {
    uVar7 = (uVar6 >> 4) / uVar12;
  }
  lVar11 = (&DAT_0439a988)[uVar9 * 8];
  lVar8 = (ulong)(uVar6 >> 4) - uVar7 * uVar12;
  plVar15 = *(long **)(lVar11 + lVar8 * 8);
  if (plVar15 == (long *)0x0) goto LAB_003d9d74;
  lVar10 = *param_1;
  if (lVar10 == 0) {
LAB_003d9df4:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0x133,2,
                 "assertion failed: %s","grpc_slice_is_interned(a) && grpc_slice_is_interned(b)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar13 = *param_2;
  if (lVar13 == 0) {
    if (1 < *(uint *)(lVar10 + 8)) goto LAB_003d9df4;
    do {
      lVar13 = *plVar15;
      if (((lVar13 == 0) || (1 < *(uint *)(lVar13 + 8))) || (lVar10 == lVar13)) goto LAB_003d9df4;
      plVar15 = (long *)plVar15[0x10];
    } while (plVar15 != (long *)0x0);
  }
  else {
    if (1 < *(uint *)(lVar10 + 8)) goto LAB_003d9df4;
    do {
      lVar14 = *plVar15;
      if ((lVar14 == 0) || (1 < *(uint *)(lVar14 + 8))) goto LAB_003d9df4;
      if (lVar10 == lVar14) {
        if (((1 < *(uint *)(lVar13 + 8)) || (lVar14 = plVar15[4], lVar14 == 0)) ||
           (1 < *(uint *)(lVar14 + 8))) goto LAB_003d9df4;
        if (lVar13 == lVar14) {
          if (PTR_DAT_04374098[0x10] != '\0') {
            lStack_68 = plVar15[1];
            local_70 = *plVar15;
            lStack_58 = plVar15[3];
            lStack_60 = plVar15[2];
            __ptr = (void *)FUN_002f2680(&local_70);
            lStack_88 = plVar15[5];
            local_90 = plVar15[4];
            lStack_78 = plVar15[7];
            lStack_80 = plVar15[6];
            __ptr_00 = (void *)FUN_002f2680(&local_90);
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x11c,0,
                         "mdelem   REF:%p:%ld->%ld: \'%s\' = \'%s\'",plVar15,plVar15[8],
                         plVar15[8] + 1,__ptr,__ptr_00);
            free(__ptr);
            free(__ptr_00);
          }
          plVar1 = plVar15 + 8;
          do {
            lVar8 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            plVar1 = &DAT_0439a9a0 + uVar9 * 8;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          goto LAB_003d9dcc;
        }
      }
      plVar15 = (long *)plVar15[0x10];
    } while (plVar15 != (long *)0x0);
  }
LAB_003d9d74:
  plVar15 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x88);
  if (plVar15 != (long *)0x0) {
    FUN_003d89f8(plVar15,param_1,param_2,uVar6,*(undefined8 *)(lVar11 + lVar8 * 8));
  }
  *(long **)((&DAT_0439a988)[uVar9 * 8] + lVar8 * 8) = plVar15;
  lVar8 = (&DAT_0439a990)[uVar9 * 8];
  (&DAT_0439a990)[uVar9 * 8] = lVar8 + 1U;
  if ((ulong)((&DAT_0439a998)[uVar9 * 8] * 2) < lVar8 + 1U) {
    FUN_003da5e0(puVar2);
  }
LAB_003d9dcc:
  FUN_002ef790(puVar2);
  return (ulong)plVar15 | 3;
}


