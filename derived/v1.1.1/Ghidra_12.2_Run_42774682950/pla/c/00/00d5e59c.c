/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5e59c; name: FUN_00d5e59c
 */


undefined8 FUN_00d5e59c(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  long local_70 [3];
  long *local_58;
  
  FUN_00d5e360(local_70);
  lVar9 = *(long *)(param_1 + 0x2c8);
  if (lVar9 == 0) {
    uVar11 = 1;
    goto joined_r0x00d5e708;
  }
  plVar10 = *(long **)(lVar9 + 0x1a0);
  lVar5 = *(long *)(lVar9 + 0x1a8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  plVar3 = plVar10;
  if ((lVar5 != 0) && (*plVar10 != local_70[0])) {
    lVar8 = lVar5 * 0x30;
    plVar6 = plVar10 + lVar5 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar3 = plVar6;
      if (lVar8 == 0) break;
      plVar1 = plVar10 + 6;
      plVar10 = plVar10 + 6;
      plVar3 = plVar10;
    } while (*plVar1 != local_70[0]);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))(local_58);
  }
  if (plVar3 != (long *)(*(long *)(lVar9 + 0x1a0) + *(long *)(lVar9 + 0x1a8) * 0x30)) {
    lVar9 = plVar3[4];
    uVar2 = *(uint *)(plVar3 + 4 + 1);
    uVar7 = (ulong)uVar2;
    if (((uVar2 < *(uint *)(lVar9 + 0x278)) &&
        (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar7 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar9 + uVar7 * 0x48 + 0xb) != '\0')) {
      plVar10 = (long *)(lVar9 + uVar7 * 0x48 + 0x10);
      lVar5 = *plVar10;
      if ((lVar5 == 0) || (*(char *)(lVar9 + uVar7 * 0x48 + 9) != '\0')) {
        uVar11 = 0;
        goto joined_r0x00d5e708;
      }
      fVar12 = *(float *)(lVar5 + 0x20);
      uVar4 = FUN_00227728();
      uVar7 = FUN_00227744(*plVar10);
      uVar11 = 0;
      if ((fVar12 < (float)uVar4) || ((uVar7 & 1) != 0)) goto joined_r0x00d5e708;
    }
  }
  uVar11 = 1;
joined_r0x00d5e708:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))(local_58);
  }
  return uVar11;
}


