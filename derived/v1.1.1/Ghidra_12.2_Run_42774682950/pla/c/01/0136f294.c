/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136f294; name: FUN_0136f294
 */


undefined8 FUN_0136f294(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  char *local_98;
  char acStack_90 [64];
  long *local_38;
  
  snprintf(acStack_90,0x40,"anime_L_mngm_score_info_00_%02d_close",*(int *)(param_1 + 0x5b4));
  local_98 = acStack_90;
  FUN_009313e8(&local_38,&local_98);
  plVar5 = local_38;
  plVar11 = (long *)PTR_DAT_04379c88;
  if (local_38 != (long *)0x0) {
    plVar11 = local_38 + 0xb;
  }
  lVar13 = *plVar11;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  lVar10 = *(long *)(param_1 + 0x2c8);
  if (lVar10 != 0) {
    plVar11 = *(long **)(lVar10 + 0x1a0);
    lVar2 = *(long *)(lVar10 + 0x1a8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = plVar11;
    if ((lVar2 != 0) && (*plVar11 != lVar13)) {
      lVar9 = lVar2 * 0x30;
      plVar7 = plVar11 + lVar2 * 6;
      do {
        lVar9 = lVar9 + -0x30;
        plVar4 = plVar7;
        if (lVar9 == 0) break;
        plVar1 = plVar11 + 6;
        plVar11 = plVar11 + 6;
        plVar4 = plVar11;
      } while (*plVar1 != lVar13);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    if (plVar4 != (long *)(*(long *)(lVar10 + 0x1a0) + *(long *)(lVar10 + 0x1a8) * 0x30)) {
      lVar13 = plVar4[4];
      uVar3 = *(uint *)(plVar4 + 4 + 1);
      uVar8 = (ulong)uVar3;
      if (((uVar3 < *(uint *)(lVar13 + 0x278)) &&
          (lVar13 = *(long *)(lVar13 + 600), *(char *)(lVar13 + uVar8 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar13 + uVar8 * 0x48 + 0xb) != '\0')) {
        plVar11 = (long *)(lVar13 + uVar8 * 0x48 + 0x10);
        lVar10 = *plVar11;
        if ((lVar10 == 0) || (*(char *)(lVar13 + uVar8 * 0x48 + 9) != '\0')) {
          uVar12 = 0;
          goto joined_r0x0136f460;
        }
        fVar14 = *(float *)(lVar10 + 0x20);
        uVar6 = FUN_00227728();
        uVar8 = FUN_00227744(*plVar11);
        uVar12 = 0;
        if ((fVar14 < (float)uVar6) || ((uVar8 & 1) != 0)) goto joined_r0x0136f460;
      }
    }
  }
  uVar12 = 1;
joined_r0x0136f460:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return uVar12;
}


