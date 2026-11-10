/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d50e0; name: FUN_003d50e0
 */


void FUN_003d50e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5
                 )

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  char *pcVar11;
  undefined1 *__n;
  char *__dest;
  long lVar12;
  char *pcVar13;
  long lVar14;
  byte local_d8 [16];
  ulong local_c8;
  ulong local_c0;
  undefined *puStack_b8;
  char *local_b0;
  byte *local_a8;
  byte *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined1 *local_88;
  char *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar7 = PTR_LAB_04373088;
  if (param_5 != 0) {
    pcVar13 = (char *)((ulong)&local_90 | 1);
    lVar14 = 0;
    do {
      uVar3 = s_SEND_CLOSE_FROM_CLIENT_039b13a1._0_8_;
      uVar4 = s_SEND_INITIAL_METADATA_039a0b1e._0_8_;
      local_a8 = (byte *)0x0;
      local_a0 = (byte *)0x0;
      uStack_98 = 0;
      switch(*(undefined4 *)(param_4 + lVar14 * 0x50)) {
      case 0:
        uVar3 = CONCAT35(s_SEND_INITIAL_METADATA_039a0b1e._13_3_,
                         s_SEND_INITIAL_METADATA_039a0b1e._8_5_);
        local_90 = 0x2a;
        local_88 = (undefined1 *)0x0;
        *(ulong *)(pcVar13 + 0xd) =
             CONCAT53(s_SEND_INITIAL_METADATA_039a0b1e._16_5_,
                      s_SEND_INITIAL_METADATA_039a0b1e._13_3_);
        *(undefined8 *)(pcVar13 + 8) = uVar3;
        *(undefined8 *)pcVar13 = uVar4;
        local_80 = (char *)0x0;
                    /* try { // try from 003d51ac to 003d51b7 has its CatchHandler @ 003d5704 */
        FUN_003d57cc(&local_a8,&local_90);
        if ((local_90 & 1) != 0) {
          FUN_002e2ea0(puVar7,local_80);
        }
        lVar12 = param_4 + lVar14 * 0x50;
                    /* try { // try from 003d51d8 to 003d51df has its CatchHandler @ 003d5750 */
        FUN_003d5990(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x10),&local_a8);
        goto switchD_003d5180_default;
      case 1:
        local_c0 = *(ulong *)(param_4 + lVar14 * 0x50 + 0x10);
        puStack_b8 = PTR_LAB_043737e8;
                    /* try { // try from 003d5364 to 003d537f has its CatchHandler @ 003d5640 */
        FUN_002e6390(&local_90,"SEND_MESSAGE ptr=%p",0x13,&local_c0,1);
                    /* try { // try from 003d5380 to 003d538b has its CatchHandler @ 003d5630 */
        FUN_003d57cc(&local_a8,&local_90);
        break;
      case 2:
        local_90 = CONCAT71(local_90._1_7_,0x2c);
        uVar4 = CONCAT26(s_SEND_CLOSE_FROM_CLIENT_039b13a1._14_2_,
                         s_SEND_CLOSE_FROM_CLIENT_039b13a1._8_6_);
        *(ulong *)(pcVar13 + 0xe) =
             CONCAT62(s_SEND_CLOSE_FROM_CLIENT_039b13a1._16_6_,
                      s_SEND_CLOSE_FROM_CLIENT_039b13a1._14_2_);
        *(undefined8 *)(pcVar13 + 8) = uVar4;
        *(undefined8 *)pcVar13 = uVar3;
        local_80 = (char *)((ulong)local_80 & 0xffffffffffffff);
                    /* try { // try from 003d5250 to 003d525b has its CatchHandler @ 003d5650 */
        FUN_003d57cc(&local_a8,&local_90);
        break;
      case 3:
        lVar12 = param_4 + lVar14 * 0x50;
        local_c0 = (ulong)*(uint *)(lVar12 + 0x20);
        puStack_b8 = PTR_FUN_043737e0;
                    /* try { // try from 003d5278 to 003d5293 has its CatchHandler @ 003d5670 */
        FUN_002e6390(&local_90,"SEND_STATUS_FROM_SERVER status=%d details=",0x2a,&local_c0,1);
                    /* try { // try from 003d5294 to 003d529f has its CatchHandler @ 003d5660 */
        FUN_003d57cc(&local_a8,&local_90);
        if ((local_90 & 1) != 0) {
          FUN_002e2ea0(puVar7,local_80);
        }
        lVar10 = *(long *)(param_4 + lVar14 * 0x50 + 0x28);
        if (lVar10 == 0) {
          local_88 = (undefined1 *)0x0;
          local_80 = (char *)0x0;
          local_90 = CONCAT71(local_90._1_7_,0xc);
          builtin_strncpy(pcVar13,"(null)",6);
          local_90 = local_90 & 0xffffffffffffff;
                    /* try { // try from 003d546c to 003d5477 has its CatchHandler @ 003d5610 */
          FUN_003d57cc(&local_a8,&local_90);
          if ((local_90 & 1) != 0) {
            FUN_002e2ea0(puVar7,local_80);
          }
        }
        else {
                    /* try { // try from 003d52c4 to 003d52cb has its CatchHandler @ 003d572c */
          pcVar11 = (char *)FUN_00304ac0(lVar10,2);
          local_90 = 0;
          local_88 = (undefined1 *)0x0;
          local_80 = (char *)0x0;
          __n = (undefined1 *)strlen(pcVar11);
          if ((undefined1 *)0xffffffffffffffef < __n) {
                    /* try { // try from 003d55f8 to 003d55ff has its CatchHandler @ 003d5600 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < __n) {
            __dest = (char *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(__n + 0x10) & 0xfffffffffffffff0)
            ;
            local_90 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
            local_88 = __n;
            local_80 = __dest;
LAB_003d54bc:
            memcpy(__dest,pcVar11,(size_t)__n);
          }
          else {
            local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
            __dest = pcVar13;
            if (__n != (undefined1 *)0x0) goto LAB_003d54bc;
          }
          __dest[(long)__n] = '\0';
                    /* try { // try from 003d54d0 to 003d54db has its CatchHandler @ 003d5620 */
          FUN_003d57cc(&local_a8,&local_90);
          if ((local_90 & 1) != 0) {
            FUN_002e2ea0(puVar7,local_80);
          }
                    /* try { // try from 003d54f8 to 003d54ff has its CatchHandler @ 003d572c */
          free(pcVar11);
        }
                    /* try { // try from 003d5514 to 003d552f has its CatchHandler @ 003d5750 */
        FUN_003d5990(*(undefined8 *)(param_4 + lVar14 * 0x50 + 0x18),*(undefined8 *)(lVar12 + 0x10),
                     &local_a8);
        goto switchD_003d5180_default;
      case 4:
        local_c0 = *(ulong *)(param_4 + lVar14 * 0x50 + 0x10);
        puStack_b8 = PTR_LAB_043737e8;
                    /* try { // try from 003d51fc to 003d5217 has its CatchHandler @ 003d5690 */
        FUN_002e6390(&local_90,"RECV_INITIAL_METADATA ptr=%p",0x1c,&local_c0,1);
                    /* try { // try from 003d5218 to 003d5223 has its CatchHandler @ 003d5680 */
        FUN_003d57cc(&local_a8,&local_90);
        break;
      case 5:
        local_c0 = *(ulong *)(param_4 + lVar14 * 0x50 + 0x10);
        puStack_b8 = PTR_LAB_043737e8;
                    /* try { // try from 003d53a8 to 003d53c3 has its CatchHandler @ 003d56b0 */
        FUN_002e6390(&local_90,"RECV_MESSAGE ptr=%p",0x13,&local_c0,1);
                    /* try { // try from 003d53c4 to 003d53cf has its CatchHandler @ 003d56a0 */
        FUN_003d57cc(&local_a8,&local_90);
        break;
      case 6:
        lVar12 = param_4 + lVar14 * 0x50;
        local_90 = *(ulong *)(lVar12 + 0x10);
        local_88 = PTR_LAB_043737e8;
        local_80 = *(char **)(lVar12 + 0x18);
        local_70 = *(undefined8 *)(lVar12 + 0x20);
        puStack_78 = PTR_LAB_043737e8;
        puStack_68 = PTR_LAB_043737e8;
                    /* try { // try from 003d540c to 003d5427 has its CatchHandler @ 003d56d4 */
        FUN_002e6390(&local_c0,"RECV_STATUS_ON_CLIENT metadata=%p status=%p details=%p",0x36,
                     &local_90,3);
                    /* try { // try from 003d5428 to 003d5433 has its CatchHandler @ 003d56c0 */
        FUN_003d57cc(&local_a8,&local_c0);
        if ((local_c0 & 1) == 0) goto switchD_003d5180_default;
        pcVar11 = local_b0;
        goto LAB_003d53dc;
      case 7:
        local_c0 = *(ulong *)(param_4 + lVar14 * 0x50 + 0x10);
        puStack_b8 = PTR_LAB_043737e8;
                    /* try { // try from 003d5320 to 003d533b has its CatchHandler @ 003d56f4 */
        FUN_002e6390(&local_90,"RECV_CLOSE_ON_SERVER cancelled=%p",0x21,&local_c0,1);
                    /* try { // try from 003d533c to 003d5347 has its CatchHandler @ 003d56e4 */
        FUN_003d57cc(&local_a8,&local_90);
        break;
      default:
        goto switchD_003d5180_default;
      }
      if ((local_90 & 1) != 0) {
        pcVar11 = local_80;
LAB_003d53dc:
        FUN_002e2ea0(puVar7,pcVar11);
      }
switchD_003d5180_default:
      FUN_002e5790(local_d8,local_a8,local_a0,&DAT_03996322,0);
      pbVar8 = local_a8;
      if (local_a8 != (byte *)0x0) {
        if (local_a0 != local_a8) {
          bVar2 = local_a0[-0x18];
          pbVar9 = local_a0 + -0x18;
          pbVar6 = local_a0;
          while( true ) {
            pbVar5 = pbVar9;
            if ((bVar2 & 1) != 0) {
              FUN_002e2ea0(puVar7,*(undefined8 *)(pbVar6 + -8));
            }
            if (pbVar8 == pbVar5) break;
            bVar2 = pbVar5[-0x18];
            pbVar9 = pbVar5 + -0x18;
            pbVar6 = pbVar5;
          }
        }
        local_a0 = pbVar8;
        FUN_002e2ea0(puVar7,local_a8);
      }
      uVar1 = (ulong)local_d8 | 1;
      if ((local_d8[0] & 1) != 0) {
        uVar1 = local_c8;
      }
                    /* try { // try from 003d55a8 to 003d55bf has its CatchHandler @ 003d573c */
      FUN_002ebea0(param_1,param_2,param_3,"ops[%lu]: %s",lVar14,uVar1);
      if ((local_d8[0] & 1) != 0) {
        FUN_002e2ea0(puVar7,local_c8);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != param_5);
  }
  return;
}


