/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039c810; name: FUN_0039c810
 */


/* WARNING: Removing unreachable block (ram,0x0039c900) */

void FUN_0039c810(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long *plStack_88;
  ulong local_80;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  lVar7 = (**(code **)(*param_1 + 0x98))();
  uVar8 = FUN_0039bcc0(param_1);
  puVar4 = PTR_LAB_04373088;
  uVar1 = *(uint *)(lVar7 + 0x68);
  if (0 < (int)uVar1) {
    uVar20 = 0;
    do {
      uVar21 = 0xaaaaaaaaaaaaaaa;
      if ((*(int *)(*(long *)(lVar7 + 0x28) + uVar20 * 0x98 + 0x3c) == 2) &&
         (uVar9 = FUN_00386684(uVar8,param_1,*(long *)(lVar7 + 0x28) + uVar20 * 0x98),
         (uVar9 & 1) == 0)) {
        FUN_003786a0(&local_90,param_2,*(undefined8 *)(*(long *)(lVar7 + 0x28) + uVar20 * 0x98));
        puVar10 = (ulong *)param_3[1];
        if (puVar10 < (ulong *)param_3[2]) {
          puVar10[2] = local_80;
          puVar10[1] = (ulong)plStack_88;
          *puVar10 = (ulong)local_90;
          plStack_88 = (long *)0x0;
          local_80 = 0;
          local_90 = (long *)0x0;
          param_3[1] = param_3[1] + 0x18;
        }
        else {
          lVar13 = (long)puVar10 - *param_3 >> 3;
          uVar9 = lVar13 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* try { // try from 0039cc38 to 0039cc3f has its CatchHandler @ 0039cc40 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = param_3[2] - *param_3 >> 3;
          if ((ulong)(lVar14 * -0x5555555555555555) < 0x555555555555555) {
            uVar15 = lVar14 * 0x5555555555555556;
            uVar21 = uVar9;
            if (uVar9 <= uVar15) {
              uVar21 = uVar15;
            }
            if (uVar21 != 0) goto LAB_0039c958;
            lVar14 = 0;
          }
          else {
LAB_0039c958:
            lVar14 = FUN_002e2e80(PTR_FUN_04373078,uVar21 * 0x18);
          }
          puVar16 = (ulong *)(lVar14 + lVar13 * 8);
          puVar16[2] = local_80;
          lVar14 = lVar14 + uVar21 * 0x18;
          puVar16[1] = (ulong)plStack_88;
          *puVar16 = (ulong)local_90;
          plStack_88 = (long *)0x0;
          local_80 = 0;
          local_90 = (long *)0x0;
          pbVar18 = (byte *)*param_3;
          pbVar17 = (byte *)param_3[1];
          puVar10 = puVar16 + 3;
          if (pbVar17 == pbVar18) {
            *param_3 = (long)puVar16;
            param_3[1] = (long)puVar10;
            param_3[2] = lVar14;
          }
          else {
            do {
              uVar9 = *(ulong *)(pbVar17 + -0x10);
              uVar21 = *(ulong *)(pbVar17 + -0x18);
              puVar16[-1] = *(ulong *)(pbVar17 + -8);
              puVar16[-2] = uVar9;
              puVar16[-3] = uVar21;
              pbVar17[-0x18] = 0;
              pbVar17[-0x17] = 0;
              pbVar17[-0x16] = 0;
              pbVar17[-0x15] = 0;
              pbVar17[-0x14] = 0;
              pbVar17[-0x13] = 0;
              pbVar17[-0x12] = 0;
              pbVar17[-0x11] = 0;
              pbVar17[-0x10] = 0;
              pbVar17[-0xf] = 0;
              pbVar17[-0xe] = 0;
              pbVar17[-0xd] = 0;
              pbVar17[-0xc] = 0;
              pbVar17[-0xb] = 0;
              pbVar17[-10] = 0;
              pbVar17[-9] = 0;
              pbVar17[-8] = 0;
              pbVar17[-7] = 0;
              pbVar17[-6] = 0;
              pbVar17[-5] = 0;
              pbVar17[-4] = 0;
              pbVar17[-3] = 0;
              pbVar17[-2] = 0;
              pbVar17[-1] = 0;
              pbVar17 = pbVar17 + -0x18;
              puVar16 = puVar16 + -3;
            } while (pbVar18 != pbVar17);
            pbVar18 = (byte *)*param_3;
            pbVar17 = (byte *)param_3[1];
            *param_3 = (long)puVar16;
            param_3[1] = (long)puVar10;
            param_3[2] = lVar14;
            if (pbVar17 != pbVar18) {
              bVar2 = pbVar17[-0x18];
              pbVar3 = pbVar17 + -0x18;
              while( true ) {
                if ((bVar2 & 1) != 0) {
                  FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar17 + -8));
                }
                if (pbVar18 == pbVar3) break;
                bVar2 = pbVar3[-0x18];
                pbVar17 = pbVar3;
                pbVar3 = pbVar3 + -0x18;
              }
            }
          }
          if (pbVar18 != (byte *)0x0) {
            FUN_002e2ea0(puVar4,pbVar18);
          }
          if (((ulong)local_90 & 1) != 0) {
            FUN_002e2ea0(puVar4,local_80);
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar1);
  }
  plStack_88 = (long *)0x0;
  local_80 = 0;
  local_90 = (long *)0x0;
                    /* try { // try from 0039ca6c to 0039ca7b has its CatchHandler @ 0039cc54 */
  FUN_00387324(uVar8,param_1,&local_90);
  puVar5 = PTR_DAT_04373ab0;
  puVar4 = PTR_LAB_04373088;
  plVar12 = plStack_88;
  if (plStack_88 != local_90) {
    uVar20 = 0;
    lVar7 = *local_90;
    puVar10 = *(ulong **)(lVar7 + 0x30);
    while( true ) {
      if ((puVar10 != (ulong *)0x0) &&
         (local_78 = lVar7, puStack_70 = PTR_LAB_04373a98, *puVar10 != 0xffffffffffffffff)) {
        local_a0 = &local_78;
        local_a8 = &puStack_70;
        local_68 = &local_a8;
                    /* try { // try from 0039cb00 to 0039cb0f has its CatchHandler @ 0039cc74 */
        std::__call_once(puVar10,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      if (*(int *)(puVar5 + (ulong)*(uint *)(lVar7 + 0x38) * 4) == 10) {
        if (*(int *)(lVar7 + 0x3c) == 3) {
                    /* try { // try from 0039cb2c to 0039cb3b has its CatchHandler @ 0039cc60 */
          iVar6 = FUN_00386cec(uVar8,param_1,lVar7);
          if (0 < iVar6) {
            iVar19 = 0;
            do {
                    /* try { // try from 0039cb5c to 0039cb6f has its CatchHandler @ 0039cc78 */
              uVar11 = FUN_0038cfc0(uVar8,param_1,lVar7,iVar19);
                    /* try { // try from 0039cb74 to 0039cb87 has its CatchHandler @ 0039cc7c */
              FUN_0039ccd0(&local_a8,param_2,lVar7,iVar19);
                    /* try { // try from 0039cb88 to 0039cb97 has its CatchHandler @ 0039cca0 */
              FUN_0039c810(uVar11,&local_a8,param_3);
              if (((ulong)local_a8 & 1) != 0) {
                FUN_002e2ea0(puVar4,local_98);
              }
              iVar19 = iVar19 + 1;
            } while (iVar6 != iVar19);
          }
        }
        else {
                    /* try { // try from 0039cbb0 to 0039cbc3 has its CatchHandler @ 0039cc5c */
          uVar11 = FUN_0038c150(uVar8,param_1,lVar7,0);
                    /* try { // try from 0039cbc8 to 0039cbdb has its CatchHandler @ 0039cc58 */
          FUN_0039ccd0(&local_a8,param_2,lVar7,0xffffffff);
                    /* try { // try from 0039cbdc to 0039cbeb has its CatchHandler @ 0039cc64 */
          FUN_0039c810(uVar11,&local_a8,param_3);
          if (((ulong)local_a8 & 1) != 0) {
            FUN_002e2ea0(puVar4,local_98);
          }
        }
      }
      uVar20 = uVar20 + 1;
      plVar12 = local_90;
      if ((ulong)((long)plStack_88 - (long)local_90 >> 3) <= uVar20) break;
      lVar7 = local_90[uVar20];
      puVar10 = *(ulong **)(lVar7 + 0x30);
    }
  }
  if (plVar12 != (long *)0x0) {
    plStack_88 = plVar12;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


