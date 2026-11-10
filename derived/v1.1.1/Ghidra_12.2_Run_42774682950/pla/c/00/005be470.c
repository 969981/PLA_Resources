/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005be470; name: FUN_005be470
 */


void FUN_005be470(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *local_130;
  ulong uStack_128;
  undefined1 *local_120;
  undefined1 *local_100;
  ulong local_f8;
  undefined1 auStack_f0 [32];
  uint *local_d0;
  ulong uStack_c8;
  byte local_98;
  undefined7 uStack_97;
  ulong uStack_90;
  undefined1 *local_88;
  undefined *local_80;
  ulong uStack_78;
  undefined1 *local_70;
  
  puVar13 = (undefined8 *)param_2[1];
  if (puVar13 < (undefined8 *)param_2[2]) {
    *puVar13 = 0;
    puVar13[1] = 0;
    *(undefined1 *)puVar13 = 0xc;
    *(undefined4 *)((long)puVar13 + 1) = 0x65646f6e;
    puVar13[2] = 0;
    *(undefined2 *)((long)puVar13 + 5) = 0x7b20;
    *(undefined1 *)((long)puVar13 + 7) = 0;
    param_2[1] = param_2[1] + 0x18;
    goto LAB_005be634;
  }
  lVar5 = (long)puVar13 - *param_2 >> 3;
  uVar11 = 0xaaaaaaaaaaaaaaa;
  uVar14 = lVar5 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_2[2] - *param_2 >> 3;
  if ((ulong)(lVar8 * -0x5555555555555555) < 0x555555555555555) {
    uVar4 = lVar8 * 0x5555555555555556;
    uVar11 = uVar14;
    if (uVar14 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 != 0) goto LAB_005be534;
    lVar8 = 0;
  }
  else {
LAB_005be534:
    lVar8 = FUN_002e2e80(PTR_FUN_04373078,uVar11 * 0x18);
  }
  puVar9 = (undefined8 *)(lVar8 + lVar5 * 8);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)puVar9 = 0xc;
  *(undefined4 *)((long)puVar9 + 1) = 0x65646f6e;
  puVar9[2] = 0;
  *(undefined1 *)((long)puVar9 + 7) = 0;
  *(undefined2 *)((long)puVar9 + 5) = 0x7b20;
  lVar8 = lVar8 + uVar11 * 0x18;
  puVar13 = puVar9 + 3;
  pbVar12 = (byte *)*param_2;
  pbVar10 = (byte *)param_2[1];
  if (pbVar10 == pbVar12) {
    *param_2 = (long)puVar9;
    param_2[1] = (long)puVar13;
    param_2[2] = lVar8;
  }
  else {
    do {
      uVar17 = *(undefined8 *)(pbVar10 + -0x10);
      uVar16 = *(undefined8 *)(pbVar10 + -0x18);
      puVar9[-1] = *(undefined8 *)(pbVar10 + -8);
      puVar9[-2] = uVar17;
      puVar9[-3] = uVar16;
      pbVar10[-0x18] = 0;
      pbVar10[-0x17] = 0;
      pbVar10[-0x16] = 0;
      pbVar10[-0x15] = 0;
      pbVar10[-0x14] = 0;
      pbVar10[-0x13] = 0;
      pbVar10[-0x12] = 0;
      pbVar10[-0x11] = 0;
      pbVar10[-0x10] = 0;
      pbVar10[-0xf] = 0;
      pbVar10[-0xe] = 0;
      pbVar10[-0xd] = 0;
      pbVar10[-0xc] = 0;
      pbVar10[-0xb] = 0;
      pbVar10[-10] = 0;
      pbVar10[-9] = 0;
      pbVar10[-8] = 0;
      pbVar10[-7] = 0;
      pbVar10[-6] = 0;
      pbVar10[-5] = 0;
      pbVar10[-4] = 0;
      pbVar10[-3] = 0;
      pbVar10[-2] = 0;
      pbVar10[-1] = 0;
      pbVar10 = pbVar10 + -0x18;
      puVar9 = puVar9 + -3;
    } while (pbVar12 != pbVar10);
    pbVar12 = (byte *)*param_2;
    pbVar10 = (byte *)param_2[1];
    *param_2 = (long)puVar9;
    param_2[1] = (long)puVar13;
    param_2[2] = lVar8;
    puVar3 = PTR_LAB_04373088;
    if (pbVar10 != pbVar12) {
      bVar1 = pbVar10[-0x18];
      pbVar2 = pbVar10 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar3,*(undefined8 *)(pbVar10 + -8));
        }
        if (pbVar12 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar10 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
    }
  }
  if (pbVar12 != (byte *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,pbVar12);
  }
LAB_005be634:
  uStack_c8 = param_1[1];
  local_d0 = (uint *)*param_1;
  FUN_005be370(&DAT_0388d057,&local_d0,param_2,0);
  plVar15 = (long *)param_1[8];
  if (plVar15 != (long *)0x0) {
    FUN_005bf268(param_2,"  metadata {");
    lVar5 = *plVar15;
    if (lVar5 != 0) {
      uVar14 = 0xffffffffffffffff;
      do {
        local_d0 = (uint *)(lVar5 + 8);
        uStack_c8 = uVar14;
        FUN_0053fcd0(&local_d0);
        uVar14 = uStack_c8;
        uVar4 = FUN_0053fa50(&local_d0);
        uVar11 = uStack_c8;
        if ((uVar4 & 1) != 0) break;
        lVar5 = *(long *)(local_d0 + 6);
        puVar13 = (undefined8 *)(lVar5 + uStack_c8 * 0x18);
        if (puVar13 == (undefined8 *)0x0) break;
        FUN_005bf53c(param_2,"    field {");
        puVar6 = (uint *)*puVar13;
        local_d0 = puVar6 + 1;
        uStack_c8 = (ulong)*puVar6;
        FUN_005be370("      key",&local_d0,param_2,0);
        puVar13 = *(undefined8 **)(lVar5 + uVar11 * 0x18 + 8);
        if (puVar13 == (undefined8 *)0x0) goto LAB_005be6a4;
        uStack_78 = 0;
        local_70 = (undefined1 *)0x0;
        local_80 = (undefined *)0x0;
        switch(*(undefined4 *)(puVar13 + 2)) {
        case 1:
                    /* try { // try from 005be74c to 005be777 has its CatchHandler @ 005bebc0 */
          FUN_00291910(&local_80,"null_value: NULL_VALUE",0x16);
          break;
        case 2:
          uStack_c8 = 0xe;
          local_d0 = (uint *)0x3972d53;
                    /* try { // try from 005be840 to 005be863 has its CatchHandler @ 005beba0 */
          uVar11 = FUN_002ed8a0(*puVar13,auStack_f0);
          if ((long)uVar11 < 0) {
            local_100 = auStack_f0;
                    /* try { // try from 005beb3c to 005beb5b has its CatchHandler @ 005beb5c */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          local_100 = auStack_f0;
          local_f8 = uVar11;
          FUN_002eced0(&local_130,&local_d0,&local_100);
          goto joined_r0x005be81c;
        case 3:
          uStack_c8 = 0xf;
          local_d0 = (uint *)0x395f130;
          if ((long)puVar13[1] < 0) {
                    /* try { // try from 005beb1c to 005beb3b has its CatchHandler @ 005beb6c */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          local_100 = (undefined1 *)*puVar13;
          uStack_128 = 1;
          local_130 = &DAT_039042e1;
                    /* try { // try from 005be7b4 to 005be7c7 has its CatchHandler @ 005beb90 */
          local_f8 = puVar13[1];
          FUN_002ecfd0(&local_98,&local_d0,&local_100,&local_130);
          if (((ulong)local_80 & 1) != 0) {
            *local_70 = 0;
            uStack_78 = 0;
            if (((ulong)local_80 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_70);
            }
          }
          local_80 = (undefined *)CONCAT71(uStack_97,local_98);
          local_70 = local_88;
          uStack_78 = uStack_90;
          break;
        case 4:
          uStack_c8 = 0xc;
          local_d0 = (uint *)0x38f0c39;
                    /* try { // try from 005be7f0 to 005be817 has its CatchHandler @ 005bebb0 */
          lVar5 = FUN_002ed6a0(*(undefined1 *)puVar13,auStack_f0);
          uVar11 = lVar5 - (long)auStack_f0;
          if ((long)uVar11 < 0) {
            local_100 = auStack_f0;
                    /* try { // try from 005beafc to 005beb1b has its CatchHandler @ 005beb7c */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          local_100 = auStack_f0;
          local_f8 = uVar11;
          FUN_002eced0(&local_130,&local_d0,&local_100);
joined_r0x005be81c:
          if (((ulong)local_80 & 1) != 0) {
            *local_70 = 0;
            uStack_78 = 0;
            if (((ulong)local_80 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_70);
            }
          }
          local_70 = local_120;
          local_80 = local_130;
          uStack_78 = uStack_128;
          break;
        case 5:
          FUN_00291910(&local_80,"struct_value: <not printed>",0x1b);
          break;
        case 6:
                    /* try { // try from 005be8a0 to 005be8cb has its CatchHandler @ 005bebc0 */
          FUN_00291910(&local_80,"list_value: <not printed>",0x19);
          break;
        default:
          FUN_00291910(&local_80,"<unknown>",9);
        }
        uStack_c8 = 0xe;
        local_d0 = (uint *)0x397b7fd;
        if (((ulong)local_80 & 1) == 0) {
          uVar11 = (ulong)local_80 >> 1 & 0x7f;
          local_100 = (undefined1 *)((ulong)&local_80 | 1);
        }
        else {
          local_100 = local_70;
          uVar11 = uStack_78;
          if ((long)uStack_78 < 0) {
                    /* try { // try from 005bead4 to 005beaf3 has its CatchHandler @ 005beb8c */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
        }
        uStack_128 = 2;
        local_130 = &DAT_03938a42;
                    /* try { // try from 005be958 to 005be96b has its CatchHandler @ 005bec08 */
        local_f8 = uVar11;
        FUN_002ecfd0(&local_98,&local_d0,&local_100,&local_130);
                    /* try { // try from 005be96c to 005be977 has its CatchHandler @ 005bebd0 */
        FUN_005bef00(param_2,&local_98);
        if ((local_98 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_88);
        }
        if (((ulong)local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_70);
        }
LAB_005be6a4:
        FUN_005bf810(param_2);
        lVar5 = *plVar15;
      } while (lVar5 != 0);
    }
    FUN_005bf9d0(param_2);
  }
  lVar5 = param_1[9];
  if (lVar5 != 0) {
    FUN_005bf268(param_2,"  locality {");
    FUN_005bfb90(2,lVar5,param_2);
    FUN_005bf9d0(param_2);
  }
  uStack_c8 = param_1[5];
  local_d0 = (uint *)param_1[4];
  FUN_005be370("  build_version",&local_d0,param_2,0);
  uStack_c8 = param_1[7];
  local_d0 = (uint *)param_1[6];
  FUN_005be370("  user_agent_name",&local_d0,param_2,0);
  if (*(int *)(param_1 + 0xf) == 7) {
    uStack_c8 = param_1[0xe];
    local_d0 = (uint *)param_1[0xd];
  }
  else {
    uStack_c8 = 0;
    local_d0 = (uint *)&DAT_03996322;
  }
  FUN_005be370("  user_agent_version",&local_d0,param_2,0);
  puVar7 = (ulong *)param_1[0xb];
  if ((puVar7 != (ulong *)0x0) && (uVar14 = puVar7[1], uVar14 != 0)) {
    uVar11 = *puVar7 & 0xfffffffffffffff8;
    do {
      FUN_005be370("  client_features",uVar11,param_2,0);
      uVar14 = uVar14 - 1;
      uVar11 = uVar11 + 0x10;
    } while (uVar14 != 0);
  }
  FUN_005bf0c0(param_2);
  return;
}


