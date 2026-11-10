/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00799de0; name: FUN_00799de0
 */


void FUN_00799de0(long param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  uint uVar17;
  byte local_90;
  undefined7 uStack_8f;
  ulong local_88;
  ulong local_80;
  long *plStack_78;
  undefined1 auStack_58 [8];
  
  uVar14 = *(undefined8 *)PTR_PTR_04373338;
  lVar11 = param_2 + 9;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar11 = *(long *)(param_2 + 0x18);
  }
                    /* try { // try from 00799e24 to 00799e33 has its CatchHandler @ 0079a220 */
  FUN_0079d260(&local_90,uVar14,lVar11);
  uVar1 = (ulong)&local_90 | 1;
  if ((local_90 & 1) != 0) {
    uVar1 = local_80;
  }
                    /* try { // try from 00799e48 to 00799e4f has its CatchHandler @ 0079a1f0 */
  FUN_0079a250(param_1,uVar1);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  bVar3 = *(byte *)(param_2 + 0x28);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x30);
  }
  if (uVar1 == 0) {
    lVar11 = *(long *)PTR_PTR_04373340;
  }
  else if ((bVar3 & 1) == 0) {
    lVar11 = param_2 + 0x29;
  }
  else {
    lVar11 = *(long *)(param_2 + 0x38);
  }
                    /* try { // try from 00799eb0 to 00799ebf has its CatchHandler @ 0079a1ec */
  FUN_006e8ea0(&local_90,uVar14,lVar11);
  uVar1 = (ulong)&local_90 | 1;
  if ((local_90 & 1) != 0) {
    uVar1 = local_80;
  }
                    /* try { // try from 00799ed4 to 00799edb has its CatchHandler @ 0079a1dc */
  FUN_0079a3f4(param_1,uVar1);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  piVar16 = *(int **)(param_2 + 0x48);
  piVar2 = *(int **)(param_2 + 0x50);
  if (piVar16 != piVar2) {
    uVar17 = *(uint *)(param_1 + 0x10);
    do {
      uVar8 = *(uint *)(param_1 + 0x14);
      iVar4 = (uint)(*piVar16 == 2) << 1;
      if (*piVar16 == 1) {
        iVar4 = 1;
      }
      if (uVar17 == uVar8) {
                    /* try { // try from 00799f78 to 00799f9b has its CatchHandler @ 0079a240 */
        FUN_003265e4(param_1 + 0x10,uVar17 + 1);
        uVar8 = *(uint *)(param_1 + 0x14);
      }
      if ((int)uVar8 < 1) {
        FUN_0030f640(&local_90,3,
                     "external/com_google_protobuf/src\\google/protobuf/repeated_field.h",0x161);
                    /* try { // try from 00799f9c to 00799fab has its CatchHandler @ 0079a22c */
        uVar14 = FUN_0030f3ac(&local_90,"CHECK failed: (total_size_) > (0): ");
                    /* try { // try from 00799fac to 00799fb3 has its CatchHandler @ 0079a228 */
        FUN_0030f41c(auStack_58,uVar14);
        FUN_0030f658(&local_90);
      }
      piVar16 = piVar16 + 1;
      *(int *)(*(long *)(param_1 + 0x18) + (ulong)uVar17 * 4) = iVar4;
      uVar17 = uVar17 + 1;
      *(uint *)(param_1 + 0x10) = uVar17;
    } while (piVar2 != piVar16);
  }
  uVar1 = (ulong)(*(byte *)(param_2 + 0x78) >> 1);
  lVar11 = param_2 + 0x79;
  if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x80);
    lVar11 = *(long *)(param_2 + 0x88);
  }
                    /* try { // try from 00799fdc to 00799fe3 has its CatchHandler @ 0079a1d8 */
  FUN_0079a598(param_1,lVar11,uVar1);
  if (*(long **)(param_2 + 0x98) != (long *)(param_2 + 0xa0)) {
    plVar15 = *(long **)(param_2 + 0x98);
    do {
      lVar11 = plVar15[4];
                    /* try { // try from 0079a010 to 0079a017 has its CatchHandler @ 0079a244 */
      puVar5 = (undefined4 *)FUN_0079a6dc(param_1 + 0x28,(long)plVar15 + 0x1c);
      *puVar5 = (int)lVar11;
      plVar9 = (long *)plVar15[1];
      if ((long *)plVar15[1] == (long *)0x0) {
        plVar9 = plVar15 + 2;
        plVar12 = (long *)*plVar9;
        if ((long *)*plVar12 != plVar15) {
          do {
            lVar11 = *plVar9;
            plVar9 = (long *)(lVar11 + 0x10);
            plVar12 = (long *)*plVar9;
          } while (*plVar12 != lVar11);
        }
      }
      else {
        do {
          plVar12 = plVar9;
          plVar9 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      plVar15 = plVar12;
    } while (plVar12 != (long *)(param_2 + 0xa0));
  }
  lVar11 = param_2 + 0xb9;
  if ((*(byte *)(param_2 + 0xb8) & 1) != 0) {
    lVar11 = *(long *)(param_2 + 200);
  }
                    /* try { // try from 0079a078 to 0079a07f has its CatchHandler @ 0079a224 */
  FUN_0079a788(param_1,lVar11);
  if (*(long *)(param_2 + 0xd8) < 1) {
    lVar11 = *(long *)(param_2 + 0xe0);
    if (lVar11 < 1) {
      return;
    }
    if (*(int *)(param_1 + 0x7c) == 10) {
      lVar7 = *(long *)(param_1 + 0x70);
    }
    else {
                    /* try { // try from 0079a128 to 0079a147 has its CatchHandler @ 0079a224 */
      FUN_0079d6a4(param_1);
      *(undefined4 *)(param_1 + 0x7c) = 10;
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      lVar7 = FUN_0030c720(puVar10);
      *(long *)(param_1 + 0x70) = lVar7;
      lVar11 = *(long *)(param_2 + 0xe0);
    }
    *(long *)(lVar7 + 0x10) = lVar11;
    return;
  }
  FUN_006ddf40(&local_90);
  if (*(int *)(param_1 + 0x7c) == 9) {
    puVar6 = *(undefined1 **)(param_1 + 0x70);
    puVar10 = (ulong *)(*(ulong *)(puVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(puVar6 + 8) & 1) != 0) goto LAB_0079a158;
LAB_0079a108:
    puVar13 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) == 0) goto LAB_0079a114;
LAB_0079a168:
    if (puVar10 == (ulong *)*puVar13) goto LAB_0079a174;
  }
  else {
                    /* try { // try from 0079a0d8 to 0079a0f7 has its CatchHandler @ 0079a1c4 */
    FUN_0079d6a4(param_1);
    *(undefined4 *)(param_1 + 0x7c) = 9;
    puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar10 = (ulong *)*puVar10;
    }
    puVar6 = (undefined1 *)FUN_00602b5c(puVar10);
    *(undefined1 **)(param_1 + 0x70) = puVar6;
    puVar10 = (ulong *)(*(ulong *)(puVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(puVar6 + 8) & 1) == 0) goto LAB_0079a108;
LAB_0079a158:
    puVar10 = (ulong *)*puVar10;
    puVar13 = (ulong *)(local_88 & 0xfffffffffffffffe);
    if ((local_88 & 1) != 0) goto LAB_0079a168;
LAB_0079a114:
    if (puVar10 == puVar13) {
LAB_0079a174:
      if (puVar6 != &local_90) {
                    /* try { // try from 0079a180 to 0079a187 has its CatchHandler @ 0079a1c0 */
        FUN_00602a74(puVar6,&local_90);
      }
      goto LAB_0079a188;
    }
  }
                    /* try { // try from 0079a11c to 0079a123 has its CatchHandler @ 0079a1c0 */
  FUN_00602a14(puVar6,&local_90);
LAB_0079a188:
  FUN_00602294(&local_90);
  return;
}


