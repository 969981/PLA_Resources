/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00573630; name: FUN_00573630
 */


/* WARNING: Removing unreachable block (ram,0x00573854) */

undefined8 FUN_00573630(undefined8 param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ******extraout_x9;
  long lVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******extraout_x11;
  undefined8 ******ppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****local_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****pppppuStack_98;
  ulong local_90;
  undefined8 ******local_88;
  ulong local_80;
  ulong local_48;
  undefined8 ******local_40;
  ulong local_38;
  long local_28;
  
  local_48 = 0;
  local_90 = 0;
                    /* try { // try from 0057364c to 0057364f has its CatchHandler @ 00573a34 */
  plVar2 = (long *)FUN_004fcc40();
  local_28 = 0;
  if (plVar2 == (long *)0x0) {
    uVar7 = 0;
    uVar6 = 0;
    ppppppuVar9 = extraout_x9;
    ppppppuVar3 = extraout_x11;
    goto LAB_00573904;
  }
                    /* try { // try from 00573660 to 00573667 has its CatchHandler @ 00573a30 */
  (**(code **)(*plVar2 + 0x18))(&local_b0);
                    /* try { // try from 00573668 to 00573673 has its CatchHandler @ 00573a10 */
  FUN_00573aec(&local_28,&local_b0);
  FUN_004fb2f8(&local_b0);
  if (local_28 == 0) {
                    /* try { // try from 005739e0 to 00573a07 has its CatchHandler @ 00573a08 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_channel_secure.cc"
                 ,0x37,2,"assertion failed: %s","creds_sans_call_creds != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  ppppppuVar9 = &local_40;
  if ((local_48 & 1) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = local_38;
    ppppppuVar9 = local_40;
  }
  if (local_48 >> 1 == uVar7) {
    ppppppuVar3 = (undefined8 ******)FUN_002e2e80(PTR_FUN_04373078,uVar7 << 4);
    ppppppuVar3[uVar7] = (undefined8 *****)"grpc.channel_credentials";
    if (ppppppuVar3 != (undefined8 ******)0x0) {
      if (uVar7 != 0) {
        uVar6 = uVar7 & 3;
        if (uVar7 - 1 < 3) {
          lVar8 = 0;
          ppppppuVar10 = ppppppuVar9;
        }
        else {
          lVar8 = 0;
          ppppppuVar4 = ppppppuVar3 + 2;
          ppppppuVar11 = ppppppuVar9;
          do {
            ppppppuVar10 = ppppppuVar11 + 4;
            ppppppuVar4[-2] = *ppppppuVar11;
            ppppppuVar4[-1] = ppppppuVar11[1];
            *ppppppuVar4 = ppppppuVar11[2];
            lVar8 = lVar8 + 4;
            ppppppuVar4[1] = ppppppuVar11[3];
            ppppppuVar4 = ppppppuVar4 + 4;
            ppppppuVar11 = ppppppuVar10;
          } while (uVar7 - uVar6 != lVar8);
        }
        if (uVar6 != 0) {
          ppppppuVar4 = ppppppuVar3 + lVar8;
          do {
            uVar6 = uVar6 - 1;
            *ppppppuVar4 = *ppppppuVar10;
            ppppppuVar4 = ppppppuVar4 + 1;
            ppppppuVar10 = ppppppuVar10 + 1;
          } while (uVar6 != 0);
        }
      }
      if (ppppppuVar9 != (undefined8 ******)0x0) {
        memset(ppppppuVar9,0xab,uVar7 << 3);
      }
      if ((local_48 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_40);
      }
      local_48 = local_48 | 1;
      local_40 = ppppppuVar3;
      local_38 = uVar7 << 1;
    }
  }
  else {
    ppppppuVar9[local_48 >> 1] = (undefined8 *****)"grpc.channel_credentials";
  }
  local_48 = local_48 + 2;
                    /* try { // try from 005737e0 to 005737e7 has its CatchHandler @ 00573a0c */
  FUN_004fcc20(&local_b0,local_28);
  bVar1 = (local_90 & 1) != 0;
  ppppppuVar9 = &local_88;
  if (bVar1) {
    ppppppuVar9 = local_88;
  }
  uVar7 = 2;
  if (bVar1) {
    uVar7 = local_80;
  }
  if (local_90 >> 1 == uVar7) {
    ppppppuVar4 = (undefined8 ******)FUN_002e2e80(PTR_FUN_04373078,uVar7 << 6);
    ppppppuVar3 = ppppppuVar4 + uVar7 * 4;
    ppppppuVar3[1] = pppppuStack_a8;
    *ppppppuVar3 = local_b0;
    ppppppuVar3[3] = pppppuStack_98;
    ppppppuVar3[2] = pppppuStack_a0;
    if (ppppppuVar4 != (undefined8 ******)0x0) {
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          lVar8 = 0;
          ppppppuVar10 = ppppppuVar9;
        }
        else {
          lVar8 = 0;
          ppppppuVar3 = ppppppuVar4 + 4;
          ppppppuVar11 = ppppppuVar9;
          do {
            ppppppuVar10 = ppppppuVar11 + 8;
            pppppuVar12 = *ppppppuVar11;
            pppppuVar14 = ppppppuVar11[3];
            pppppuVar13 = ppppppuVar11[2];
            ppppppuVar3[-3] = ppppppuVar11[1];
            ppppppuVar3[-4] = pppppuVar12;
            ppppppuVar3[-1] = pppppuVar14;
            ppppppuVar3[-2] = pppppuVar13;
            lVar8 = lVar8 + 2;
            pppppuVar12 = ppppppuVar11[4];
            pppppuVar14 = ppppppuVar11[7];
            pppppuVar13 = ppppppuVar11[6];
            ppppppuVar3[1] = ppppppuVar11[5];
            *ppppppuVar3 = pppppuVar12;
            ppppppuVar3[3] = pppppuVar14;
            ppppppuVar3[2] = pppppuVar13;
            ppppppuVar3 = ppppppuVar3 + 8;
            ppppppuVar11 = ppppppuVar10;
          } while (uVar7 - (uVar7 & 1) != lVar8);
          if ((uVar7 & 1) == 0) goto LAB_005738b4;
        }
        pppppuVar12 = *ppppppuVar10;
        pppppuVar14 = ppppppuVar10[3];
        pppppuVar13 = ppppppuVar10[2];
        ppppppuVar3 = ppppppuVar4 + lVar8 * 4;
        ppppppuVar3[1] = ppppppuVar10[1];
        *ppppppuVar3 = pppppuVar12;
        ppppppuVar3[3] = pppppuVar14;
        ppppppuVar3[2] = pppppuVar13;
      }
LAB_005738b4:
      if (ppppppuVar9 != (undefined8 ******)0x0) {
        memset(ppppppuVar9,0xab,uVar7 << 5);
      }
      if ((local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_88);
      }
      local_90 = local_90 | 1;
      local_88 = ppppppuVar4;
      local_80 = uVar7 << 1;
    }
  }
  else {
    ppppppuVar9 = ppppppuVar9 + (local_90 >> 1) * 4;
    ppppppuVar9[1] = pppppuStack_a8;
    *ppppppuVar9 = local_b0;
    ppppppuVar9[3] = pppppuStack_98;
    ppppppuVar9[2] = pppppuStack_a0;
  }
  uVar7 = local_90 + 2;
  ppppppuVar9 = local_88;
  uVar6 = local_48;
  ppppppuVar3 = local_40;
  local_90 = uVar7;
LAB_00573904:
  ppppppuVar4 = &local_40;
  if ((uVar6 & 1) != 0) {
    ppppppuVar4 = ppppppuVar3;
  }
  ppppppuVar3 = &local_88;
  if ((uVar7 & 1) != 0) {
    ppppppuVar3 = ppppppuVar9;
  }
                    /* try { // try from 0057392c to 0057393f has its CatchHandler @ 00573a40 */
  uVar5 = FUN_002e4270(param_1,ppppppuVar4,uVar6 >> 1,ppppppuVar3,uVar7 >> 1);
  FUN_002e4a10(param_1);
  FUN_004fb2f8(&local_28);
  ppppppuVar9 = &local_88;
  if ((((local_90 & 1) != 0) && (ppppppuVar9 = local_88, local_88 == (undefined8 ******)0x0)) ||
     (memset(ppppppuVar9,0xab,(local_90 & 0xffffffffffffffe) << 4), (local_90 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  ppppppuVar9 = &local_40;
  if ((((local_48 & 1) != 0) && (ppppppuVar9 = local_40, local_40 == (undefined8 ******)0x0)) ||
     (memset(ppppppuVar9,0xab,(local_48 & 0x3ffffffffffffffe) << 2), (local_48 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_40);
  }
  return uVar5;
}


