/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c938; name: FUN_0060c938
 */


undefined8 FUN_0060c938(long *param_1,long param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  int *piVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  int *local_68;
  ushort local_58 [2];
  ushort local_54 [2];
  
  uVar10 = FUN_0060b6b4(param_2,param_1 + 1);
  if (((uVar10 & 1) == 0) || ((short)param_1[1] < 0)) {
    return 0;
  }
  puVar1 = (ushort *)((long)param_1 + 10);
  uVar10 = FUN_0060b6b4(param_2,puVar1);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  local_70 = 0;
  local_68 = (int *)0x0;
  local_78 = 0;
                    /* try { // try from 0060c994 to 0060c9a3 has its CatchHandler @ 0060cdc8 */
  uVar10 = FUN_0060b79c(param_2,&local_78,4);
  if ((uVar10 & 1) == 0) {
    uVar11 = 0;
    goto joined_r0x0060cca4;
  }
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
                    /* try { // try from 0060c9b0 to 0060c9bf has its CatchHandler @ 0060cd54 */
  uVar10 = FUN_0060b79c(param_2,&local_90,0xc);
  if ((uVar10 & 1) == 0) {
LAB_0060ccac:
    uVar11 = 0;
  }
  else {
    piVar3 = (int *)((ulong)&local_78 | 1);
    if ((local_78 & 1) != 0) {
      piVar3 = local_68;
    }
    if (*piVar3 != 0x42a41221) {
      uVar10 = local_78 >> 1 & 0x7f;
      if ((local_78 & 1) != 0) {
        uVar10 = local_70;
      }
                    /* try { // try from 0060ca00 to 0060ca53 has its CatchHandler @ 0060cd44 */
      FUN_002e3e88(&local_90,0,piVar3,uVar10);
    }
    uVar10 = local_90 >> 1 & 0x7f;
    if ((local_90 & 1) != 0) {
      uVar10 = local_88;
    }
    if ((uVar10 != 0xc) && (uVar10 != 0x10)) {
                    /* try { // try from 0060cce4 to 0060cd03 has its CatchHandler @ 0060cd34 */
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc/p2p/base/stun.cc",0x163,"IsValidTransactionId(transaction_id)",
                   PTR_DAT_043752a0);
    }
    if ((ulong *)(param_1 + 2) != &local_90) {
      uVar10 = (ulong)&local_90 | 1;
      if ((local_90 & 1) != 0) {
        uVar10 = local_80;
      }
      FUN_00291910(param_1 + 2,uVar10);
    }
    puVar5 = PTR_LAB_04373088;
    lVar13 = *(long *)(param_2 + 0x18);
    lVar14 = *(long *)(param_2 + 0x20);
    uVar15 = lVar14 - lVar13;
    uVar10 = (ulong)*puVar1;
    if (uVar15 != uVar10) goto LAB_0060ccac;
    puVar17 = (undefined8 *)param_1[5];
    puVar18 = (undefined8 *)param_1[6];
    if (puVar18 != puVar17) {
      if (puVar17 != puVar18) {
        puVar18 = puVar18 + -1;
        puVar16 = (undefined8 *)*puVar18;
        *puVar18 = 0;
        if (puVar16 != (undefined8 *)0x0) goto LAB_0060caac;
        while (puVar17 != puVar18) {
          while( true ) {
            puVar18 = puVar18 + -1;
            puVar16 = (undefined8 *)*puVar18;
            *puVar18 = 0;
            if (puVar16 == (undefined8 *)0x0) break;
LAB_0060caac:
            (**(code **)*puVar16)(puVar16);
            FUN_002e2ea0(puVar5,puVar16);
            if (puVar17 == puVar18) goto LAB_0060cad0;
          }
        }
LAB_0060cad0:
        lVar13 = *(long *)(param_2 + 0x18);
        lVar14 = *(long *)(param_2 + 0x20);
        uVar15 = lVar14 - lVar13;
        uVar10 = (ulong)*puVar1;
      }
      param_1[6] = (long)puVar17;
    }
    puVar6 = PTR_LAB_04373088;
    puVar5 = PTR_FUN_04373078;
    uVar15 = uVar15 - uVar10;
    uVar10 = lVar14 - lVar13;
    if (uVar15 < uVar10) {
      puVar2 = PTR_DAT_04375360 + 0x10;
      do {
                    /* try { // try from 0060cb0c to 0060cb27 has its CatchHandler @ 0060cdd8 */
        uVar10 = FUN_0060b6b4(param_2,local_54);
        if (((uVar10 & 1) == 0) ||
           (uVar10 = FUN_0060b6b4(param_2,local_58), uVar8 = local_54[0], uVar7 = local_58[0],
           (uVar10 & 1) == 0)) goto LAB_0060ccac;
                    /* try { // try from 0060cb3c to 0060cb5b has its CatchHandler @ 0060cdb8 */
        uVar11 = (**(code **)(*param_1 + 0x18))(param_1,local_54[0]);
        if ((int)uVar11 == 0) {
          if ((uVar8 & 0x4000 | 0x8000) == 0xc000) {
            plVar12 = (long *)FUN_002e2e80(puVar5,0x18);
            if (plVar12 != (long *)0x0) {
              *(ushort *)(plVar12 + 1) = uVar8;
              *(ushort *)((long)plVar12 + 10) = uVar7;
              *plVar12 = (long)puVar2;
              plVar12[2] = 0;
            }
            goto joined_r0x0060cbdc;
          }
          local_98 = (long *)0x0;
LAB_0060cc18:
          if ((local_58[0] & 3) != 0) {
            local_58[0] = (local_58[0] - (local_58[0] & 3)) + 4;
          }
                    /* try { // try from 0060cc34 to 0060cc3b has its CatchHandler @ 0060cd64 */
          uVar9 = FUN_0060b804(param_2,local_58[0]);
          uVar9 = ~uVar9 & 1;
LAB_0060cc48:
          local_98 = (long *)0x0;
          if (uVar9 != 0) goto LAB_0060ccac;
        }
        else {
          plVar12 = (long *)FUN_0060cf04(uVar11,uVar8,uVar7,param_1);
joined_r0x0060cbdc:
          local_98 = plVar12;
          if (plVar12 == (long *)0x0) goto LAB_0060cc18;
                    /* try { // try from 0060cb70 to 0060cb8b has its CatchHandler @ 0060cd64 */
          uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,param_2);
          if ((uVar10 & 1) != 0) {
            FUN_0060be6c(param_1 + 5,&local_98);
            bVar4 = false;
            uVar9 = 0;
            plVar12 = local_98;
            if (local_98 != (long *)0x0) goto LAB_0060cbec;
            goto LAB_0060cc48;
          }
          bVar4 = true;
LAB_0060cbec:
          local_98 = (long *)0x0;
          (**(code **)*plVar12)(plVar12);
          FUN_002e2ea0(puVar6,plVar12);
          if (bVar4) goto LAB_0060ccac;
        }
        uVar10 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18);
      } while (uVar15 < uVar10);
    }
    if (uVar10 != uVar15) {
                    /* try { // try from 0060cd04 to 0060cd23 has its CatchHandler @ 0060cd24 */
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc/p2p/base/stun.cc",0x183,"buf->Length() == rest",PTR_DAT_043752a0
                  );
    }
    uVar11 = 1;
  }
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
joined_r0x0060cca4:
  if ((local_78 & 1) == 0) {
    return uVar11;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_68);
  return uVar11;
}


