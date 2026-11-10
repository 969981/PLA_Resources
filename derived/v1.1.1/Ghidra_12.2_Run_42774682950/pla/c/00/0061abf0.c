/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061abf0; name: FUN_0061abf0
 */


void FUN_0061abf0(undefined8 *param_1,byte *param_2,byte *param_3,long param_4)

{
  size_t sVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  long lStack_70;
  ulong local_68;
  ulong local_58;
  
  if (param_4 == 0) {
    local_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar10 = FUN_00612290();
    param_1[3] = uVar10;
    bVar5 = *param_3;
    sVar15 = *(size_t *)(param_3 + 8);
    uVar19 = 0;
    local_78 = param_1;
    do {
      bVar8 = (*param_2 & 1) != 0;
      uVar20 = (ulong)(*param_2 >> 1);
      if (bVar8) {
        uVar20 = *(ulong *)(param_2 + 8);
      }
      pbVar2 = param_2 + 1;
      if (bVar8) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      pbVar16 = param_3 + 1;
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        pbVar16 = *(byte **)(param_3 + 0x10);
        sVar1 = sVar15;
      }
      if (uVar20 < uVar19) goto LAB_0061a428;
      uVar17 = uVar19;
      if (sVar1 != 0) {
        pbVar11 = pbVar2 + uVar19;
        pbVar13 = pbVar2 + uVar20;
        lVar18 = (long)pbVar13 - (long)pbVar11;
        if (lVar18 < (long)sVar1) {
LAB_0061a428:
                    /* try { // try from 0061a428 to 0061a437 has its CatchHandler @ 0061a45c */
          FUN_0061a7ec(local_78,param_2,&local_68);
          return;
        }
        bVar5 = *pbVar16;
        while( true ) {
          if ((0xfffffffffffffffe < lVar18 - sVar1) ||
             (pbVar11 = memchr(pbVar11,(uint)bVar5,(lVar18 - sVar1) + 1), pbVar11 == (byte *)0x0))
          goto LAB_0061a428;
          iVar9 = memcmp(pbVar11,pbVar16,sVar1);
          if (iVar9 == 0) break;
          pbVar11 = pbVar11 + 1;
          lVar18 = (long)pbVar13 - (long)pbVar11;
          if (lVar18 < (long)sVar1) goto LAB_0061a428;
        }
        if (pbVar11 == pbVar13) goto LAB_0061a428;
        uVar17 = (long)pbVar11 - (long)pbVar2;
      }
      if (uVar17 == 0xffffffffffffffff) goto LAB_0061a428;
      lStack_70 = uVar17 - uVar19;
                    /* try { // try from 0061a3ec to 0061a3ff has its CatchHandler @ 0061a458 */
      FUN_0061a470(local_78,param_2,&local_68,&lStack_70);
      bVar5 = *param_3;
      sVar15 = *(size_t *)(param_3 + 8);
      sVar1 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar1 = sVar15;
      }
      uVar19 = sVar1 + uVar17;
      local_68 = uVar19;
    } while( true );
  }
  uVar19 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar19 = *(ulong *)(param_2 + 8);
  }
  local_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  local_80 = 0;
  local_58 = uVar19;
  local_68 = FUN_00612290();
  if (param_4 != 1) {
    lVar18 = 1;
    do {
      bVar8 = (*param_2 & 1) != 0;
      bVar5 = *param_3;
      uVar20 = (ulong)(*param_2 >> 1);
      if (bVar8) {
        uVar20 = *(ulong *)(param_2 + 8);
      }
      pbVar2 = param_2 + 1;
      if (bVar8) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      uVar17 = (ulong)(bVar5 >> 1);
      pbVar16 = param_3 + 1;
      if ((bVar5 & 1) != 0) {
        uVar17 = *(ulong *)(param_3 + 8);
        pbVar16 = *(byte **)(param_3 + 0x10);
      }
      uVar3 = uVar20;
      if (uVar19 - 1 <= uVar20) {
        uVar3 = uVar19 - 1;
      }
      uVar4 = uVar17 + uVar3;
      if (uVar20 - uVar3 <= uVar17) {
        uVar4 = uVar20;
      }
      pbVar11 = pbVar2 + uVar4;
      if ((uVar17 != 0) && ((long)uVar17 <= (long)uVar4)) {
        pbVar13 = pbVar11;
        while (pbVar12 = pbVar13, pbVar2 + (uVar17 - 1) != pbVar12) {
          pbVar13 = pbVar12 + -1;
          if (*pbVar13 == pbVar16[uVar17 - 1]) {
            lVar14 = 0;
            do {
              if (1 - uVar17 == lVar14) {
                pbVar16 = pbVar12 + lVar14 + -1;
                goto LAB_0061ad60;
              }
              lVar6 = lVar14 + (uVar17 - 2);
              lVar7 = lVar14 + -2;
              lVar14 = lVar14 + -1;
            } while (pbVar12[lVar7] == pbVar16[lVar6]);
          }
        }
      }
      pbVar16 = pbVar11;
LAB_0061ad60:
      if ((uVar17 != 0 && pbVar16 == pbVar11) ||
         (uVar20 = (long)pbVar16 - (long)pbVar2, uVar20 == 0xffffffffffffffff)) goto LAB_0061add0;
      uVar17 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar17 = *(ulong *)(param_3 + 8);
      }
      local_88 = uVar20 + uVar17;
      local_90 = (uVar19 - uVar20) - uVar17;
                    /* try { // try from 0061ada4 to 0061adb7 has its CatchHandler @ 0061ae24 */
      FUN_0061ae38(&local_80,local_80,param_2,&local_88,&local_90);
      local_58 = uVar20;
      if ((uVar20 == 0) || (lVar18 = lVar18 + 1, uVar19 = uVar20, lVar18 == param_4))
      goto LAB_0061add0;
    } while( true );
  }
  uVar10 = 0;
LAB_0061add4:
  local_88 = (ulong)local_88._4_4_ << 0x20;
                    /* try { // try from 0061add8 to 0061adeb has its CatchHandler @ 0061ae20 */
  FUN_0061b3a8(&local_80,uVar10,param_2,&local_88,&local_58);
  param_1[3] = local_68;
  *param_1 = local_80;
  param_1[2] = lStack_70;
  param_1[1] = local_78;
  return;
LAB_0061add0:
  uVar10 = local_80;
  goto LAB_0061add4;
}


