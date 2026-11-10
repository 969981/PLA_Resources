/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003734f0; name: FUN_003734f0
 */


undefined8 FUN_003734f0(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined8 extraout_x1;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [48];
  byte local_f0 [16];
  undefined8 local_e0;
  undefined1 auStack_d8 [64];
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  size_t local_78;
  void *local_70;
  byte local_68 [8];
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  
  uVar5 = FUN_003a1cc0(param_2,&local_48,&local_50);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  FUN_00384d60(local_68,extraout_x1,param_2,local_48);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
                    /* try { // try from 00373558 to 00373567 has its CatchHandler @ 00373a60 */
  uVar5 = FUN_003a1a60(local_68,&local_80,&local_98);
  if ((uVar5 & 1) == 0) {
    uVar11 = 0;
    goto joined_r0x00373724;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 == (long *)0x0) {
    sVar9 = strlen(PTR_s_type_googleapis_com__04373c50);
    uVar5 = local_80;
    __n = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      __n = local_78;
    }
    if (sVar9 == __n) {
      if (sVar9 != 0) {
        if (sVar9 == 0xffffffffffffffff) {
                    /* try { // try from 00373958 to 0037395f has its CatchHandler @ 0037396c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar2 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar2 = local_70;
        }
        iVar4 = memcmp(pvVar2,PTR_s_type_googleapis_com__04373c50,sVar9);
        if (iVar4 != 0) goto LAB_003737ec;
      }
LAB_0037392c:
                    /* try { // try from 00373934 to 0037394b has its CatchHandler @ 003739d4 */
      lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
      lVar7 = FUN_003425b0(*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10),&local_98);
      goto LAB_0037358c;
    }
LAB_003737ec:
    sVar9 = strlen(PTR_s_type_googleprod_com__04373c58);
    if (sVar9 == __n) {
      if (__n != 0) {
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00373960 to 00373967 has its CatchHandler @ 00373968 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar2 = (void *)((ulong)&local_80 | 1);
        if ((uVar5 & 1) != 0) {
          pvVar2 = local_70;
        }
        iVar4 = memcmp(pvVar2,PTR_s_type_googleprod_com__04373c58,__n);
        if (iVar4 != 0) goto LAB_00373834;
      }
      goto LAB_0037392c;
    }
  }
  else {
                    /* try { // try from 0037357c to 0037358b has its CatchHandler @ 003739d4 */
    lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,param_2,&local_80,&local_98);
LAB_0037358c:
    if (lVar7 != 0) {
                    /* try { // try from 00373594 to 0037359b has its CatchHandler @ 003739bc */
      FUN_003800dc(auStack_d8);
                    /* try { // try from 0037359c to 003735b3 has its CatchHandler @ 003739cc */
      plVar6 = (long *)FUN_003803e0(auStack_d8,lVar7);
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x18))();
                    /* try { // try from 003735bc to 003735cb has its CatchHandler @ 003739b0 */
      FUN_00384d60(local_f0,extraout_x1,param_2,local_50);
                    /* try { // try from 003735cc to 00373643 has its CatchHandler @ 003739f4 */
      uVar5 = FUN_0031e604(puVar8,local_f0);
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 00373894 to 003738ab has its CatchHandler @ 00373974 */
        FUN_0030f640(auStack_120,1,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                     ,0x7aa);
                    /* try { // try from 003738ac to 003738c7 has its CatchHandler @ 00373998 */
        uVar11 = FUN_0030f3e8(auStack_120,local_68);
        uVar11 = FUN_0030f3ac(uVar11,": failed to parse contents");
                    /* try { // try from 003738c8 to 003738cf has its CatchHandler @ 00373970 */
        FUN_0030f41c(auStack_128,uVar11);
        FUN_0030f658(auStack_120);
        uVar11 = 0;
      }
      else {
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_038aa492,1);
        bVar3 = (local_68[0] & 1) != 0;
        uVar5 = (ulong)local_68 | 1;
        if (bVar3) {
          uVar5 = local_58;
        }
        uVar1 = (ulong)(local_68[0] >> 1);
        if (bVar3) {
          uVar1 = local_60;
        }
        (**(code **)(*param_3 + 0x28))(param_3,uVar5,uVar1);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03904308,1);
        plVar6 = (long *)(param_1 + 0x28);
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
LAB_00373684:
          plVar12 = (long *)(param_1 + 0x18);
        }
        else {
          plVar12 = plVar6;
          do {
            if ((ulong)plVar10[4] >= local_50) {
              plVar12 = plVar10;
            }
            plVar10 = (long *)plVar10[(ulong)plVar10[4] < local_50];
          } while (plVar10 != (long *)0x0);
          if ((plVar12 == plVar6) || (local_50 < (ulong)plVar12[4])) goto LAB_00373684;
          plVar12 = plVar12 + 5;
        }
        plVar12 = (long *)*plVar12;
                    /* try { // try from 00373698 to 00373703 has its CatchHandler @ 003739e4 */
        (**(code **)(*plVar12 + 0x70))
                  (plVar12,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
        (**(code **)(*param_3 + 0x10))(param_3);
        FUN_00372540(param_1,puVar8,param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*plVar12 + 0x80))
                  (plVar12,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
        uVar11 = 1;
      }
      if ((local_f0[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_e0);
      }
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        FUN_002e2ea0(PTR_LAB_04373088,puVar8);
      }
      FUN_0038013c(auStack_d8);
      goto joined_r0x00373724;
    }
  }
LAB_00373834:
                    /* try { // try from 00373834 to 0037384b has its CatchHandler @ 00373988 */
  FUN_0030f640(auStack_d8,1,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
               ,0x7a1);
                    /* try { // try from 0037384c to 00373873 has its CatchHandler @ 00373a48 */
  uVar11 = FUN_0030f3ac(auStack_d8,"Can\'t print proto content: proto type ");
  uVar11 = FUN_0030f3e8(uVar11,local_68);
  uVar11 = FUN_0030f3ac(uVar11," not found");
                    /* try { // try from 00373874 to 0037387b has its CatchHandler @ 00373984 */
  FUN_0030f41c(auStack_120,uVar11);
  FUN_0030f658(auStack_d8);
  uVar11 = 0;
joined_r0x00373724:
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_68[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return uVar11;
}


