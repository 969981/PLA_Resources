/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e6590; name: FUN_005e6590
 */


void FUN_005e6590(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  ulong local_198;
  undefined8 ****local_190;
  undefined8 uStack_188;
  ulong local_100;
  undefined8 ****local_f8;
  undefined8 uStack_f0;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long *local_58;
  
  local_198 = 0;
                    /* try { // try from 005e65bc to 005e65c7 has its CatchHandler @ 005e6ac8 */
  uVar5 = FUN_005e62b0(*param_2,param_3,&local_198);
  if ((uVar5 & 1) == 0) {
    *param_1 = 0;
    if ((local_198 & 1) != 0) goto LAB_005e667c;
LAB_005e6864:
    ppppuVar7 = &local_190;
  }
  else {
    puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0xd0);
    if (puVar6 != (undefined8 *)0x0) {
      local_100 = 0;
      if ((local_198 & 1) == 0) {
        uVar5 = local_198 >> 1;
        if (uVar5 != 0) {
          ppppuVar7 = &local_190;
          puVar10 = &local_70;
          do {
            pppuVar14 = ppppuVar7[1];
            pppuVar11 = *ppppuVar7;
            pppuVar15 = ppppuVar7[2];
            puVar10[-0xe] = ppppuVar7[3];
            puVar10[-0xf] = pppuVar15;
            uVar2 = *(undefined4 *)(ppppuVar7 + 0x10);
            puVar10[-0x10] = pppuVar14;
            puVar10[-0x11] = pppuVar11;
            *(undefined4 *)(puVar10 + -1) = uVar2;
            pppuVar15 = ppppuVar7[9];
            pppuVar14 = ppppuVar7[8];
            pppuVar11 = ppppuVar7[10];
            puVar10[-6] = ppppuVar7[0xb];
            puVar10[-7] = pppuVar11;
            pppuVar11 = ppppuVar7[0x11];
            puVar10[-8] = pppuVar15;
            puVar10[-9] = pppuVar14;
            pppuVar14 = ppppuVar7[6];
            puVar10[-10] = ppppuVar7[7];
            puVar10[-0xb] = pppuVar14;
            pppuVar14 = ppppuVar7[4];
            puVar10[-0xc] = ppppuVar7[5];
            puVar10[-0xd] = pppuVar14;
            *puVar10 = pppuVar11;
            pppuVar14 = ppppuVar7[0xd];
            pppuVar11 = ppppuVar7[0xc];
            pppuVar15 = ppppuVar7[0xe];
            puVar10[-2] = ppppuVar7[0xf];
            puVar10[-3] = pppuVar15;
            uVar5 = uVar5 - 1;
            puVar10[-4] = pppuVar14;
            puVar10[-5] = pppuVar11;
            puVar10 = puVar10 + 0x12;
            ppppuVar7[0x11] = (undefined8 ***)0x0;
            ppppuVar7 = ppppuVar7 + 0x12;
          } while (uVar5 != 0);
        }
        local_100 = local_198 & 0xfffffffffffffffe;
      }
      else {
        local_100 = local_198 | 1;
        local_198 = 0;
        uStack_f0 = uStack_188;
        local_f8 = local_190;
      }
      local_60 = param_2[3];
      local_58 = (long *)param_2[4];
      local_68 = (undefined8 *)param_2[5];
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      uVar12 = param_2[1];
                    /* try { // try from 005e66bc to 005e66cb has its CatchHandler @ 005e69c8 */
      FUN_0050ce5c(puVar6,&local_60,&local_68);
      puVar10 = local_68;
      local_68 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10);
        FUN_002e2ea0(PTR_LAB_04373088,puVar10);
      }
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 1;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
          std::__shared_weak_count::__release_weak();
        }
      }
      *puVar6 = &PTR_LAB_0418e668;
      puVar6[6] = 0;
      if ((local_100 & 1) == 0) {
        uVar5 = local_100 >> 1;
        if (uVar5 != 0) {
          ppppuVar7 = &local_f8;
          puVar10 = puVar6 + 0x18;
          do {
            pppuVar11 = *ppppuVar7;
            puVar10[-0x10] = ppppuVar7[1];
            puVar10[-0x11] = pppuVar11;
            pppuVar14 = ppppuVar7[3];
            pppuVar11 = ppppuVar7[2];
            pppuVar16 = ppppuVar7[5];
            pppuVar15 = ppppuVar7[4];
            pppuVar18 = ppppuVar7[7];
            pppuVar17 = ppppuVar7[6];
            pppuVar19 = ppppuVar7[8];
            puVar10[-8] = ppppuVar7[9];
            puVar10[-9] = pppuVar19;
            uVar5 = uVar5 - 1;
            puVar10[-10] = pppuVar18;
            puVar10[-0xb] = pppuVar17;
            puVar10[-0xc] = pppuVar16;
            puVar10[-0xd] = pppuVar15;
            puVar10[-0xe] = pppuVar14;
            puVar10[-0xf] = pppuVar11;
            pppuVar17 = ppppuVar7[0xf];
            pppuVar16 = ppppuVar7[0xe];
            pppuVar14 = ppppuVar7[0xb];
            pppuVar11 = ppppuVar7[10];
            pppuVar15 = ppppuVar7[0xc];
            uVar2 = *(undefined4 *)(ppppuVar7 + 0x10);
            puVar10[-4] = ppppuVar7[0xd];
            puVar10[-5] = pppuVar15;
            puVar10[-2] = pppuVar17;
            puVar10[-3] = pppuVar16;
            *(undefined4 *)(puVar10 + -1) = uVar2;
            puVar10[-6] = pppuVar14;
            puVar10[-7] = pppuVar11;
            *puVar10 = ppppuVar7[0x11];
            ppppuVar7[0x11] = (undefined8 ***)0x0;
            ppppuVar7 = ppppuVar7 + 0x12;
            puVar10 = puVar10 + 0x12;
          } while (uVar5 != 0);
        }
        puVar6[6] = local_100 & 0xfffffffffffffffe;
      }
      else {
        puVar6[6] = local_100 | 1;
        puVar6[8] = uStack_f0;
        puVar6[7] = local_f8;
        local_100 = 0;
      }
                    /* try { // try from 005e67d4 to 005e67db has its CatchHandler @ 005e68e4 */
      uVar5 = local_100;
      uVar12 = FUN_002e45d0(uVar12);
      puVar6[0x19] = uVar12;
      if ((uVar5 & 1) == 0) {
        ppppuVar7 = &local_f8;
LAB_005e67f8:
        uVar13 = uVar5 >> 1;
        ppppuVar8 = ppppuVar7 + uVar13 * 0x12 + -1;
        lVar9 = uVar13 + 1;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          pppuVar11 = *ppppuVar8;
          ppppuVar8 = ppppuVar8 + -0x12;
                    /* try { // try from 005e681c to 005e681f has its CatchHandler @ 005e6b44 */
          FUN_002e4a10(pppuVar11);
        }
        memset(ppppuVar7,0xab,uVar13 * 0x90);
        if ((uVar5 & 1) == 0) goto LAB_005e6858;
        ppppuVar7 = local_f8;
      }
      else {
        ppppuVar7 = local_f8;
        if (local_f8 != (undefined8 ****)0x0) goto LAB_005e67f8;
        ppppuVar7 = (undefined8 ****)0x0;
      }
      FUN_002e2ea0(PTR_LAB_04373088,ppppuVar7);
    }
LAB_005e6858:
    *param_1 = puVar6;
    if ((local_198 & 1) == 0) goto LAB_005e6864;
LAB_005e667c:
    ppppuVar7 = local_190;
    if (local_190 == (undefined8 ****)0x0) {
      local_190 = (undefined8 ****)0x0;
      goto LAB_005e68bc;
    }
  }
  uVar5 = local_198 >> 1;
  ppppuVar8 = ppppuVar7 + uVar5 * 0x12 + -1;
  lVar9 = uVar5 + 1;
  while (lVar9 = lVar9 + -1, lVar9 != 0) {
    pppuVar11 = *ppppuVar8;
    ppppuVar8 = ppppuVar8 + -0x12;
                    /* try { // try from 005e6890 to 005e6893 has its CatchHandler @ 005e6b48 */
    FUN_002e4a10(pppuVar11);
  }
  memset(ppppuVar7,0xab,uVar5 * 0x90);
  if ((local_198 & 1) == 0) {
    return;
  }
LAB_005e68bc:
  FUN_002e2ea0(PTR_LAB_04373088,local_190);
  return;
}


