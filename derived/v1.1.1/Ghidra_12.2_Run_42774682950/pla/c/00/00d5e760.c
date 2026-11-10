/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5e760; name: FUN_00d5e760
 */


void FUN_00d5e760(long param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  long local_70 [3];
  long *local_58;
  
  FUN_00d5e360(local_70);
  if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d5e8fc;
  FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_70);
  plVar6 = local_58;
  lVar10 = *(long *)(param_1 + 0x2c8);
  if (lVar10 == 0) goto LAB_00d5e8fc;
  plVar9 = *(long **)(lVar10 + 0x1a0);
  lVar4 = *(long *)(lVar10 + 0x1a8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  plVar2 = plVar9;
  if ((lVar4 != 0) && (*plVar9 != local_70[0])) {
    lVar8 = lVar4 * 0x30;
    plVar5 = plVar9 + lVar4 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar2 = plVar5;
      if (lVar8 == 0) break;
      plVar1 = plVar9 + 6;
      plVar9 = plVar9 + 6;
      plVar2 = plVar9;
    } while (*plVar1 != local_70[0]);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  plVar6 = (long *)(*(long *)(lVar10 + 0x1a0) + *(long *)(lVar10 + 0x1a8) * 0x30);
  if (plVar2 == plVar6) {
    plVar9 = (long *)0x0;
    if (plVar2 != plVar6) goto LAB_00d5e824;
LAB_00d5e8dc:
    if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d5e8fc;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_70);
  }
  else {
    plVar9 = plVar2 + 4;
    if (plVar2 == plVar6) goto LAB_00d5e8dc;
LAB_00d5e824:
    uVar7 = (ulong)*(uint *)(plVar9 + 1);
    if (((*(uint *)(*plVar9 + 0x278) <= *(uint *)(plVar9 + 1)) ||
        (lVar10 = *(long *)(*plVar9 + 600), *(char *)(lVar10 + uVar7 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar10 + uVar7 * 0x48 + 0xb) == '\0')) goto LAB_00d5e8dc;
    plVar6 = (long *)(lVar10 + uVar7 * 0x48 + 0x10);
    lVar4 = *plVar6;
    if ((lVar4 != 0) && (*(char *)(lVar10 + uVar7 * 0x48 + 9) == '\0')) {
      fVar11 = *(float *)(lVar4 + 0x20);
      uVar3 = FUN_00227728();
      uVar7 = FUN_00227744(*plVar6);
      if (((float)uVar3 <= fVar11) && ((uVar7 & 1) == 0)) goto LAB_00d5e8dc;
    }
  }
  FUN_0283b748(0,*(undefined8 *)(param_1 + 0x2c8),local_70);
LAB_00d5e8fc:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


