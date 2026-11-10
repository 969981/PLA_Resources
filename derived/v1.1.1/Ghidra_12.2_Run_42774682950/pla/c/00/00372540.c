/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00372540; name: FUN_00372540
 */


void FUN_00372540(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  undefined8 *puVar7;
  long extraout_x1;
  long *plVar8;
  byte *__s1;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  size_t sVar16;
  undefined8 *puVar17;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  byte local_80 [8];
  uint local_78;
  ulong local_70;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if (extraout_x1 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
                    /* try { // try from 00372708 to 00372717 has its CatchHandler @ 00372968 */
    FUN_0031f010(local_80,param_2);
    bVar3 = (local_80[0] & 1) != 0;
    uVar5 = (ulong)local_80 | 1;
    if (bVar3) {
      uVar5 = local_70;
    }
    uVar1 = (uint)(local_80[0] >> 1);
    if (bVar3) {
      uVar1 = local_78;
    }
                    /* try { // try from 00372738 to 00372743 has its CatchHandler @ 0037293c */
    FUN_0030e2f8(&local_a0,uVar5,uVar1,0xffffffff);
                    /* try { // try from 00372744 to 0037274f has its CatchHandler @ 0037292c */
    FUN_0030dc68(&local_68,&local_a0);
    if ((local_80[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
                    /* try { // try from 00372768 to 0037277b has its CatchHandler @ 00372928 */
    FUN_00372a0c(param_1,&local_68,param_3,10);
    if (local_68 != local_60) {
                    /* try { // try from 00372788 to 0037278f has its CatchHandler @ 00372914 */
      FUN_0030cac0(&local_68);
    }
    if (local_68 == 0) {
      return;
    }
    local_60 = local_68;
    goto LAB_00372894;
  }
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar8 = (long *)(param_1 + 0x40);
  plVar11 = (long *)*plVar8;
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar8;
    do {
      if ((ulong)plVar11[4] >= uVar5) {
        plVar15 = plVar11;
      }
      plVar11 = (long *)plVar11[(ulong)plVar11[4] < uVar5];
    } while (plVar11 != (long *)0x0);
    if ((plVar15 != plVar8) && ((ulong)plVar15[4] <= uVar5)) {
                    /* WARNING: Could not recover jumptable at 0x003728ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)plVar15[5] + 0x10))
                ((long *)plVar15[5],param_2,*(undefined1 *)(param_1 + 4),param_3);
      return;
    }
  }
  pbVar12 = *(byte **)(uVar5 + 8);
  __n = strlen(PTR_s_google_protobuf_Any_04373c70);
  bVar2 = *pbVar12;
  sVar16 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar16 = *(size_t *)(pbVar12 + 8);
  }
  if (__n == sVar16) {
    if (__n != 0) {
      if (__n == 0xffffffffffffffff) {
                    /* try { // try from 003728f8 to 003728ff has its CatchHandler @ 00372900 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      __s1 = *(byte **)(pbVar12 + 0x10);
      if ((bVar2 & 1) == 0) {
        __s1 = pbVar12 + 1;
      }
      iVar4 = memcmp(__s1,PTR_s_google_protobuf_Any_04373c70,__n);
      if (iVar4 != 0) goto LAB_00372640;
    }
    if ((*(char *)(param_1 + 9) != '\0') &&
       (uVar6 = FUN_003734f0(param_1,param_2,param_3), (uVar6 & 1) != 0)) {
      return;
    }
  }
LAB_00372640:
  local_98 = (long *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (long *)0x0;
  if (*(char *)(*(long *)(uVar5 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 003727a0 to 003727af has its CatchHandler @ 00372994 */
    FUN_00387324(extraout_x1,param_2,&local_a0);
  }
  else {
    uVar13 = *(undefined8 *)(uVar5 + 0x28);
    puVar7 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,8);
    plVar8 = local_a0;
    puVar17 = puVar7 + 1;
    *puVar7 = uVar13;
    sVar16 = (long)local_98 - (long)local_a0;
    plVar11 = (long *)((long)puVar7 - sVar16);
    if (0 < (long)sVar16) {
      memcpy(plVar11,local_a0,sVar16);
    }
    local_a0 = plVar11;
    local_98 = puVar17;
    local_90 = puVar17;
    if (plVar8 != (long *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar8);
    }
    lVar14 = ((long)sVar16 >> 3) * 8 + 8 >> 3;
    uVar6 = lVar14 + 1;
    if (uVar6 >> 0x3d != 0) {
                    /* try { // try from 003728f0 to 003728f7 has its CatchHandler @ 00372904 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(long *)(uVar5 + 0x28);
    lVar10 = ((long)sVar16 >> 3) * 8 + 8;
    if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
      uVar5 = lVar10 >> 2;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      if (uVar6 != 0) goto LAB_003727b8;
      lVar10 = 0;
    }
    else {
      uVar6 = 0x1fffffffffffffff;
LAB_003727b8:
      lVar10 = FUN_002e2e80(PTR_FUN_04373078,uVar6 << 3);
    }
    plVar11 = local_a0;
    plVar8 = (long *)(lVar10 + lVar14 * 8);
    lVar10 = lVar10 + uVar6 * 8;
    *plVar8 = lVar9 + 0x98;
    sVar16 = (long)local_98 - (long)local_a0;
    plVar15 = (long *)((long)plVar8 - sVar16);
    if (0 < (long)sVar16) {
      memcpy(plVar15,local_a0,sVar16);
    }
    local_a0 = plVar15;
    local_98 = plVar8 + 1;
    local_90 = (undefined8 *)lVar10;
    if (plVar11 != (long *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar11);
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0037c450(local_a0,local_98);
  }
  if (local_98 != local_a0) {
    uVar5 = 0;
    do {
                    /* try { // try from 00372838 to 0037284b has its CatchHandler @ 003729a4 */
      FUN_00373ac4(param_1,param_2,extraout_x1,local_a0[uVar5],param_3);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)((long)local_98 - (long)local_a0 >> 3));
  }
  if (*(char *)(param_1 + 7) == '\0') {
                    /* try { // try from 00372868 to 00372887 has its CatchHandler @ 00372994 */
    uVar13 = FUN_00380d50(extraout_x1,param_2);
    FUN_00372a0c(param_1,uVar13,param_3,10);
  }
  if (local_a0 == (long *)0x0) {
    return;
  }
  local_98 = local_a0;
LAB_00372894:
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


