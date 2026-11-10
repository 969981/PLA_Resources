/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034ff4c; name: FUN_0034ff4c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0034ff4c(long param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_120;
  ulong local_118;
  void *local_110;
  ulong local_108;
  ulong local_100;
  void *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  byte *local_90;
  ulong uStack_88;
  ulong local_80;
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x50);
  }
  uVar2 = FUN_0033fd34(*(undefined8 *)(param_1 + 8),param_2,param_6,param_7);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0033fe70(*(undefined8 *)(param_1 + 0x58),param_3,param_4,param_6,param_7);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_0030f640(&local_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                   ,0xfca);
                    /* try { // try from 003500dc to 00350103 has its CatchHandler @ 00350718 */
      uVar4 = FUN_0030f3ac(&local_90,&DAT_039042e1);
      uVar4 = FUN_0030f3e8(uVar4,param_2);
      uVar4 = FUN_0030f3ac(uVar4,
                           "\" not previously defined in symbols_by_name_, but was defined in symbols_by_parent_; this shouldn\'t be possible."
                          );
                    /* try { // try from 00350104 to 0035010b has its CatchHandler @ 003506d8 */
      FUN_0030f41c(&local_b0,uVar4);
      FUN_0030f658(&local_90);
      return 0;
    }
    return 0;
  }
  local_90 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_90 = param_2 + 1;
  }
  lVar3 = FUN_00364a2c(*(long *)(param_1 + 8) + 0x130,&local_90);
  if (lVar3 == 0) {
    puVar7 = (undefined8 *)0x0;
switchD_00350024_caseD_8:
    if (puVar7 != *(undefined8 **)(param_1 + 0x50)) {
LAB_00350128:
      FUN_0034b2f0(&local_f0,&DAT_039042e1,param_2);
                    /* try { // try from 0035013c to 0035014f has its CatchHandler @ 003507c0 */
      puVar5 = (ulong *)FUN_002e4094(&local_f0,"\" is already defined in file \"",0x1e);
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      local_c0 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      pbVar6 = (byte *)*puVar7;
      uVar2 = *(ulong *)(pbVar6 + 8);
      pbVar1 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar1 = pbVar6 + 1;
        uVar2 = (ulong)(*pbVar6 >> 1);
      }
                    /* try { // try from 00350184 to 0035018b has its CatchHandler @ 00350798 */
      puVar5 = (ulong *)FUN_002e4094(&local_d0,pbVar1,uVar2);
      uStack_a8 = puVar5[1];
      local_b0 = *puVar5;
      local_a0 = (void *)puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 003501a4 to 003501b7 has its CatchHandler @ 00350770 */
      puVar5 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      uStack_88 = puVar5[1];
      local_90 = (byte *)*puVar5;
      local_80 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 003501d0 to 003501e7 has its CatchHandler @ 0035072c */
      FUN_0034db00(param_1,param_2,param_5,0,&local_90);
      if (((ulong)local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_80);
      }
      if ((local_b0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_a0);
      }
      pvVar8 = local_e0;
      if ((local_d0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
        pvVar8 = local_e0;
      }
      if ((local_f0 & 1) == 0) {
        return 0;
      }
      local_e0 = pvVar8;
      goto LAB_003502d8;
    }
  }
  else if (*(int *)(lVar3 + 0x18) - 1U < 8) {
    puVar7 = *(undefined8 **)(lVar3 + 0x20);
    switch(*(int *)(lVar3 + 0x18)) {
    default:
      puVar7 = (undefined8 *)puVar7[2];
      if (puVar7 != *(undefined8 **)(param_1 + 0x50)) goto LAB_00350128;
      break;
    case 2:
      puVar7 = (undefined8 *)puVar7[5];
      if (puVar7 != *(undefined8 **)(param_1 + 0x50)) goto LAB_00350128;
      break;
    case 3:
    case 7:
      puVar7 = *(undefined8 **)(puVar7[2] + 0x10);
      if (puVar7 != *(undefined8 **)(param_1 + 0x50)) goto LAB_00350128;
      break;
    case 5:
      puVar7 = *(undefined8 **)(puVar7[3] + 0x10);
      if (puVar7 != *(undefined8 **)(param_1 + 0x50)) goto LAB_00350128;
      break;
    case 8:
      goto switchD_00350024_caseD_8;
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x50) != 0) goto LAB_00350128;
  }
  uVar2 = (ulong)(*param_2 >> 1);
  pbVar1 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
  }
  if (uVar2 != 0) {
    uVar11 = uVar2;
    do {
      uVar10 = uVar11;
      if (uVar10 == 0) goto LAB_0035025c;
      uVar11 = uVar10 - 1;
    } while (pbVar1[uVar10 - 1] != 0x2e);
    if (uVar10 != 0) {
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_108 = 0;
      if (uVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar2 = uVar2 - uVar10;
      if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar2 < 0x17) {
        local_108 = (ulong)(byte)((int)uVar2 << 1);
        pvVar8 = (void *)((ulong)&local_108 | 1);
        if (uVar2 != 0) goto LAB_00350388;
      }
      else {
        uVar9 = uVar2 + 0x10 & 0xfffffffffffffff0;
        pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
        local_108 = uVar9 | 1;
        local_100 = uVar2;
        local_f8 = pvVar8;
LAB_00350388:
        memcpy(pvVar8,pbVar1 + uVar10,uVar2);
      }
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
                    /* try { // try from 0035039c to 003503b3 has its CatchHandler @ 003506c4 */
      puVar5 = (ulong *)FUN_002e3e88(&local_108,0,&DAT_039042e1,1);
      uStack_e8 = puVar5[1];
      local_f0 = *puVar5;
      local_e0 = (void *)puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 003503cc to 003503df has its CatchHandler @ 003506b4 */
      puVar5 = (ulong *)FUN_002e4094(&local_f0,"\" is already defined in \"",0x19);
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      local_c0 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = (void *)0x0;
      pbVar1 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar1 = *(byte **)(param_2 + 0x10);
        uVar2 = *(ulong *)(param_2 + 8);
      }
      if (uVar11 <= uVar2) {
        uVar2 = uVar11;
      }
      if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 003505c8 to 003505cf has its CatchHandler @ 003505d0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar2 < 0x17) {
        local_120 = (ulong)(byte)((int)uVar2 << 1);
        pvVar8 = (void *)((ulong)&local_120 | 1);
        if (uVar2 != 0) goto LAB_00350474;
      }
      else {
        uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
        pvVar8 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
        local_120 = uVar11 | 1;
        local_118 = uVar2;
        local_110 = pvVar8;
LAB_00350474:
        memcpy(pvVar8,pbVar1,uVar2);
      }
      *(undefined1 *)((long)pvVar8 + uVar2) = 0;
      if ((local_120 & 1) == 0) {
        uVar2 = local_120 >> 1 & 0x7f;
        pvVar8 = (void *)((long)&local_120 + 1);
      }
      else {
        uVar2 = local_118;
        pvVar8 = local_110;
      }
                    /* try { // try from 003504a0 to 003504a7 has its CatchHandler @ 0035065c */
      puVar5 = (ulong *)FUN_002e4094(&local_d0,pvVar8,uVar2);
      uStack_a8 = puVar5[1];
      local_b0 = *puVar5;
      local_a0 = (void *)puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 003504c0 to 003504d3 has its CatchHandler @ 00350634 */
      puVar5 = (ulong *)FUN_002e4094(&local_b0,&DAT_038c838e,2);
      uStack_88 = puVar5[1];
      local_90 = (byte *)*puVar5;
      local_80 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 003504ec to 00350503 has its CatchHandler @ 003505e0 */
      FUN_0034db00(param_1,param_2,param_5,0,&local_90);
      if (((ulong)local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_80);
      }
      if ((local_b0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_a0);
      }
      if ((local_120 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_110);
      }
      if ((local_d0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_c0);
      }
      if ((local_f0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_e0);
      }
      if ((local_108 & 1) == 0) {
        return 0;
      }
      pvVar8 = local_f8;
      goto LAB_003502d8;
    }
  }
LAB_0035025c:
  FUN_0034b2f0(&local_b0,&DAT_039042e1,param_2);
                    /* try { // try from 00350270 to 00350283 has its CatchHandler @ 00350704 */
  puVar5 = (ulong *)FUN_002e4094(&local_b0,"\" is already defined.",0x15);
  uStack_88 = puVar5[1];
  local_90 = (byte *)*puVar5;
  local_80 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 0035029c to 003502b3 has its CatchHandler @ 003506dc */
  FUN_0034db00(param_1,param_2,param_5,0,&local_90);
  if (((ulong)local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if ((local_b0 & 1) == 0) {
    return 0;
  }
  pvVar8 = local_a0;
LAB_003502d8:
  FUN_002e2ea0(PTR_LAB_04373088,pvVar8);
  return 0;
}


