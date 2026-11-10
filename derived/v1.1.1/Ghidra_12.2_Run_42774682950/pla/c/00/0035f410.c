/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035f410; name: FUN_0035f410
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0035f410(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  byte local_138 [16];
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar14 = 0;
    uVar12 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x38);
      uVar5 = FUN_00365e80(param_3 + 0x30,uVar12 & 0xffffffff);
      FUN_0035f410(param_1,lVar10 + lVar14,uVar5);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x90;
    } while ((long)uVar12 < (long)*(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar14 = 0;
    uVar12 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x40);
      uVar5 = FUN_00365f68(param_3 + 0x48,uVar12 & 0xffffffff);
      FUN_0035fa94(param_1,lVar10 + lVar14,uVar5);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x50;
    } while ((long)uVar12 < (long)*(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar14 = 0;
    uVar12 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x28);
      uVar5 = FUN_00366138(param_3 + 0x18,uVar12 & 0xffffffff);
      FUN_0035eb54(param_1,lVar10 + lVar14,uVar5);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x98;
    } while ((long)uVar12 < (long)*(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar14 = 0;
    uVar12 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x50);
      uVar5 = FUN_00366138(param_3 + 0x78,uVar12 & 0xffffffff);
      FUN_0035eb54(param_1,lVar10 + lVar14,uVar5);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x98;
    } while ((long)uVar12 < (long)*(int *)(param_2 + 0x80));
  }
  if (0 < *(int *)(param_2 + 0x7c)) {
    uVar5 = *(undefined8 *)(param_2 + 8);
    if (*(int *)(param_3 + 0x68) < 1) {
      FUN_0030f640(&local_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                   ,0x69e);
                    /* try { // try from 0035f5ac to 0035f5bf has its CatchHandler @ 0035f92c */
      uVar6 = FUN_0030f3ac(&local_90,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0035f5c0 to 0035f5c7 has its CatchHandler @ 0035f928 */
      FUN_0030f41c(&local_a8,uVar6);
      FUN_0030f658(&local_90);
    }
    FUN_0034dc2c(param_1,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x70) + 8),1,
                 "Extension ranges are not allowed in proto3.");
  }
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x48) != '\0') {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                 "MessageSet is not supported in proto3.");
  }
  puVar3 = PTR_LAB_04373088;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = &local_88;
  if (0 < *(int *)(param_2 + 0x68)) {
    uVar12 = 0;
    do {
      pbVar13 = *(byte **)(*(long *)(param_2 + 0x28) + uVar12 * 0x98);
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      bVar4 = (*pbVar13 & 1) == 0;
      uVar15 = (ulong)(*pbVar13 >> 1);
      if (!bVar4) {
        uVar15 = *(ulong *)(pbVar13 + 8);
      }
      if (uVar15 != 0) {
        uVar15 = 0;
        do {
          pbVar11 = pbVar13 + 1;
          if (!bVar4) {
            pbVar11 = *(byte **)(pbVar13 + 0x10);
          }
          bVar2 = pbVar11[uVar15];
          if (bVar2 != 0x5f) {
            if (bVar2 - 0x41 < 0x1a) {
              FUN_002e6a9c(&local_a8,bVar2 + 0x20);
            }
            else {
                    /* try { // try from 0035f6a0 to 0035f6fb has its CatchHandler @ 0035fa84 */
              FUN_002e6a9c(&local_a8);
            }
          }
          bVar4 = (*pbVar13 & 1) == 0;
          uVar15 = uVar15 + 1;
          uVar1 = (ulong)(*pbVar13 >> 1);
          if (!bVar4) {
            uVar1 = *(ulong *)(pbVar13 + 8);
          }
        } while (uVar15 < uVar1);
      }
                    /* try { // try from 0035f700 to 0035f70b has its CatchHandler @ 0035fa34 */
      puVar7 = (undefined8 *)FUN_0036fb8c(&local_90,&local_a8);
      if (&local_88 == puVar7) {
        lVar14 = *(long *)(param_2 + 0x28);
                    /* try { // try from 0035f860 to 0035f86b has its CatchHandler @ 0035fa24 */
        plVar9 = (long *)FUN_0035fb54(&local_90,&local_a8);
        *plVar9 = lVar14 + uVar12 * 0x98;
      }
      else {
        uVar6 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0035f718 to 0035f723 has its CatchHandler @ 0035fa24 */
        uVar5 = FUN_00366138(param_3 + 0x18,uVar12 & 0xffffffff);
                    /* try { // try from 0035f734 to 0035f743 has its CatchHandler @ 0035fa14 */
        FUN_0034b2f0(local_138,"The JSON camel-case name of field \"",
                     *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar12 * 0x98));
                    /* try { // try from 0035f744 to 0035f757 has its CatchHandler @ 0035fa04 */
        puVar8 = (ulong *)FUN_002e4094(local_138,"\" conflicts with field \"",0x18);
        uStack_118 = puVar8[1];
        local_120 = *puVar8;
        local_110 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
                    /* try { // try from 0035f770 to 0035f7a3 has its CatchHandler @ 0035fa44 */
        puVar7 = (undefined8 *)FUN_0035fb54(&local_90,&local_a8);
        pbVar11 = *(byte **)*puVar7;
        uVar15 = *(ulong *)(pbVar11 + 8);
        pbVar13 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
          pbVar13 = pbVar11 + 1;
          uVar15 = (ulong)(*pbVar11 >> 1);
        }
        puVar8 = (ulong *)FUN_002e4094(&local_120,pbVar13,uVar15);
        uStack_f8 = puVar8[1];
        local_100 = *puVar8;
        local_f0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
                    /* try { // try from 0035f7bc to 0035f7cf has its CatchHandler @ 0035f9dc */
        puVar8 = (ulong *)FUN_002e4094(&local_100,"\". This is not ",0xf);
        uStack_d8 = puVar8[1];
        local_e0 = *puVar8;
        local_d0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
                    /* try { // try from 0035f7e8 to 0035f7f7 has its CatchHandler @ 0035f9b4 */
        puVar8 = (ulong *)FUN_002e4094(&local_e0,"allowed in proto3.",0x12);
        uStack_b8 = puVar8[1];
        local_c0 = *puVar8;
        local_b0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
                    /* try { // try from 0035f810 to 0035f827 has its CatchHandler @ 0035f940 */
        FUN_0034db00(param_1,uVar6,uVar5,0,&local_c0);
        if ((local_c0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_b0);
        }
        if ((local_e0 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_d0);
        }
        if ((local_100 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_f0);
        }
        if ((local_120 & 1) != 0) {
          FUN_002e2ea0(puVar3,local_110);
        }
        if ((local_138[0] & 1) != 0) {
          FUN_002e2ea0(puVar3,local_128);
        }
      }
      if ((local_a8 & 1) != 0) {
        FUN_002e2ea0(puVar3,local_98);
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)*(int *)(param_2 + 0x68));
  }
  FUN_0036fb30(&local_90,local_88);
  return;
}


