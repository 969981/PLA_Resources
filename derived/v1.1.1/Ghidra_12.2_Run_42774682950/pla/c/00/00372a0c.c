/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00372a0c; name: FUN_00372a0c
 */


void FUN_00372a0c(long param_1,long *param_2,long *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  byte local_108 [8];
  ulong local_100;
  ulong local_f8;
  byte *local_f0;
  byte *local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  uint local_c8;
  undefined8 local_c4;
  int local_bc;
  int iStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte *local_a0;
  byte *local_98;
  void *local_90;
  ulong local_88;
  byte *local_80;
  void *local_78;
  
  uVar3 = DAT_0388a5f0;
  lVar6 = *param_2;
  if (0 < (int)((ulong)(param_2[1] - lVar6) >> 4)) {
    pvVar9 = (void *)((ulong)&local_88 | 1);
    pvVar7 = (void *)((ulong)&local_a0 | 1);
    lVar13 = 0;
    lVar10 = 0;
    do {
      local_f0 = (byte *)&uStack_e0;
      lVar4 = FUN_00320570(*(undefined4 *)(lVar6 + lVar13),&uStack_e0);
      pbVar12 = local_f0;
      pbVar11 = (byte *)(lVar4 - (long)&uStack_e0);
      local_88 = 0;
      local_80 = (byte *)0x0;
      local_78 = (void *)0x0;
      local_e8 = pbVar11;
      if ((byte *)0xffffffffffffffef < pbVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (&DAT_00000016 < pbVar11) {
        pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0)
        ;
        local_88 = (ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0 | 1;
        local_80 = pbVar11;
        local_78 = pvVar5;
LAB_00372b30:
        memcpy(pvVar5,pbVar12,(size_t)pbVar11);
      }
      else {
        local_88 = (ulong)(byte)((int)pbVar11 << 1);
        pvVar5 = pvVar9;
        if (pbVar11 != (byte *)0x0) goto LAB_00372b30;
      }
      *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
      lVar6 = lVar6 + lVar13;
      switch(*(undefined4 *)(lVar6 + 4)) {
      case 0:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00372b8c to 00372baf has its CatchHandler @ 003734c4 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_039403eb,2);
        if (*(int *)(lVar6 + 4) != 0) {
                    /* try { // try from 003733a0 to 003733bf has its CatchHandler @ 003733d8 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("type() == TYPE_VARINT",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                        ,0x15a,"varint");
        }
        local_f0 = (byte *)&uStack_e0;
                    /* try { // try from 00372bc0 to 00372bc7 has its CatchHandler @ 00373438 */
        lVar6 = FUN_00320590(*(undefined8 *)(lVar6 + 8),&uStack_e0);
        pbVar12 = local_f0;
        pbVar11 = (byte *)(lVar6 - (long)&uStack_e0);
        local_a0 = (byte *)0x0;
        local_98 = (byte *)0x0;
        local_90 = (void *)0x0;
        local_e8 = pbVar11;
        if ((byte *)0xffffffffffffffef < pbVar11) {
                    /* try { // try from 003733c8 to 003733cf has its CatchHandler @ 003733d8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < pbVar11) {
          pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                        (ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)(pbVar11 + 0x10) & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_00373070:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        else {
          local_a0 = (byte *)(ulong)(byte)((int)pbVar11 << 1);
          pvVar5 = pvVar7;
          if (pbVar11 != (byte *)0x0) goto LAB_00373070;
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 003730a8 to 003730af has its CatchHandler @ 00373428 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_0396725e,1);
        }
        else {
                    /* try { // try from 003730dc to 003730ef has its CatchHandler @ 003734c4 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_038bdc00,1);
        }
        break;
      case 1:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03967a3f,4);
        if (*(int *)(lVar6 + 4) != 1) {
                    /* try { // try from 00373380 to 0037339f has its CatchHandler @ 003733dc */
                    /* WARNING: Subroutine does not return */
          __assert_fail("type() == TYPE_FIXED32",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                        ,0x15e,"fixed32");
        }
                    /* try { // try from 00372de4 to 00372def has its CatchHandler @ 0037344c */
        FUN_0032131c(&local_f0,*(undefined4 *)(lVar6 + 8),8);
        pbVar11 = local_e8;
        pbVar12 = local_f0;
        local_90 = (void *)0x0;
        local_a0 = (byte *)0x0;
        local_98 = (byte *)0x0;
        if ((byte *)0xffffffffffffffef < local_e8) {
                    /* try { // try from 003733c0 to 003733c7 has its CatchHandler @ 003733dc */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < local_e8) {
          pbVar1 = local_e8 + 0x10;
          pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)pbVar1 & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)pbVar1 & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_0037311c:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        else {
          local_a0 = (byte *)(ulong)(byte)((int)local_e8 << 1);
          pvVar5 = pvVar7;
          if (local_e8 != (byte *)0x0) goto LAB_0037311c;
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 00373154 to 0037315b has its CatchHandler @ 0037343c */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_0396725e,1);
        }
        else {
                    /* try { // try from 00373188 to 0037323b has its CatchHandler @ 003734c4 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_038bdc00,1);
        }
        break;
      case 2:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_03967a3f,4);
        if (*(int *)(lVar6 + 4) != 2) {
                    /* try { // try from 00373358 to 0037337f has its CatchHandler @ 003733e0 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("type() == TYPE_FIXED64",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                        ,0x162,"fixed64");
        }
                    /* try { // try from 00372d08 to 00372d13 has its CatchHandler @ 00373478 */
        FUN_0032131c(&local_f0,*(undefined8 *)(lVar6 + 8),0x10);
        pbVar11 = local_e8;
        pbVar12 = local_f0;
        local_90 = (void *)0x0;
        local_a0 = (byte *)0x0;
        local_98 = (byte *)0x0;
        if ((byte *)0xffffffffffffffef < local_e8) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (&DAT_00000016 < local_e8) {
          pbVar1 = local_e8 + 0x10;
          pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)pbVar1 & 0xfffffffffffffff0);
          local_a0 = (byte *)((ulong)pbVar1 & 0xfffffffffffffff0 | 1);
          local_98 = pbVar11;
          local_90 = pvVar5;
LAB_00372fc4:
          memcpy(pvVar5,pbVar12,(size_t)pbVar11);
        }
        else {
          local_a0 = (byte *)(ulong)(byte)((int)local_e8 << 1);
          pvVar5 = pvVar7;
          if (local_e8 != (byte *)0x0) goto LAB_00372fc4;
        }
        *(byte *)((long)pvVar5 + (long)pbVar11) = 0;
        pvVar5 = pvVar7;
        pbVar12 = (byte *)((ulong)local_a0 >> 1 & 0x7f);
        if (((ulong)local_a0 & 1) != 0) {
          pvVar5 = local_90;
          pbVar12 = local_98;
        }
                    /* try { // try from 00372ffc to 00373003 has its CatchHandler @ 00373450 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_0396725e,1);
        }
        else {
                    /* try { // try from 00373030 to 00373043 has its CatchHandler @ 003734c4 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_038bdc00,1);
        }
        break;
      case 3:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00372d64 to 00372dd3 has its CatchHandler @ 003734c4 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (*(int *)(lVar6 + 4) != 3) {
                    /* try { // try from 00373338 to 00373357 has its CatchHandler @ 003733d0 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("type() == TYPE_LENGTH_DELIMITED",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                        ,0x166,"length_delimited");
        }
        pbVar12 = *(byte **)(lVar6 + 8);
        if ((*pbVar12 & 1) == 0) {
          local_f0 = pbVar12 + 1;
          local_d8 = (uint)(*pbVar12 >> 1);
        }
        else {
          local_d8 = (uint)*(undefined8 *)(pbVar12 + 8);
          local_f0 = *(byte **)(pbVar12 + 0x10);
        }
        local_e8 = local_f0 + (int)local_d8;
        local_a0 = (byte *)0x0;
        uStack_e0 = 0;
        local_cc = 0;
        local_d4 = 0;
        local_c4 = uVar3;
        local_98 = (byte *)0x0;
        local_90 = (void *)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c8 = local_d8;
        local_bc = param_4;
        iStack_b8 = param_4;
        if ((*pbVar12 & 1) == 0) {
          uVar8 = (ulong)(*pbVar12 >> 1);
          if (param_4 < 1) goto LAB_00372ec8;
LAB_00372e78:
                    /* try { // try from 00372e7c to 00372ee3 has its CatchHandler @ 0037347c */
          if ((uVar8 == 0) || (uVar8 = FUN_0030dc30(&local_a0,&local_f0), (uVar8 & 1) == 0))
          goto LAB_00372ec8;
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03940b34,3);
            (**(code **)(*param_3 + 0x10))(param_3);
          }
          else {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_0395384f,3);
          }
          FUN_00372a0c(param_1,&local_a0,param_3,param_4 + -1);
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x18))(param_3);
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_03918033,2);
          }
          else {
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_038eee3f,2);
          }
        }
        else {
          uVar8 = *(ulong *)(pbVar12 + 8);
          if (0 < param_4) goto LAB_00372e78;
LAB_00372ec8:
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03979cea,3);
                    /* try { // try from 00372ee4 to 00372eef has its CatchHandler @ 00373424 */
          FUN_003201a0(local_108,pbVar12);
          uVar8 = (ulong)local_108 | 1;
          uVar2 = (ulong)(local_108[0] >> 1);
          if ((local_108[0] & 1) != 0) {
            uVar8 = local_f8;
            uVar2 = local_100;
          }
                    /* try { // try from 00372f14 to 00372f1b has its CatchHandler @ 003733f8 */
          (**(code **)(*param_3 + 0x28))(param_3,uVar8,uVar2);
          if ((local_108[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_f8);
          }
          if (*(char *)(param_1 + 4) == '\0') {
                    /* try { // try from 00373240 to 003732e7 has its CatchHandler @ 0037347c */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_038f99aa,2);
          }
          else {
                    /* try { // try from 00372f48 to 00372f5b has its CatchHandler @ 0037347c */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_039a08b4,2);
          }
        }
        if (local_a0 != local_98) {
                    /* try { // try from 00372f68 to 00372f6f has its CatchHandler @ 003733e4 */
          FUN_0030cac0(&local_a0);
        }
        if (local_a0 != (byte *)0x0) {
          local_98 = local_a0;
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        FUN_0030f8e8(&local_f0);
        goto joined_r0x00372f94;
      case 4:
        pbVar12 = (byte *)(ulong)((byte)local_88 >> 1);
        pvVar5 = pvVar9;
        if ((local_88 & 1) != 0) {
          pbVar12 = local_80;
          pvVar5 = local_78;
        }
                    /* try { // try from 00372c20 to 00372cf7 has its CatchHandler @ 003734c4 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar5,pbVar12);
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03940b34,3);
          (**(code **)(*param_3 + 0x10))(param_3);
        }
        else {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_0395384f,3);
        }
        if (*(int *)(lVar6 + 4) != 4) {
                    /* try { // try from 00373318 to 00373337 has its CatchHandler @ 003733d4 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("type() == TYPE_GROUP",
                        "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                        ,0x16a,"group");
        }
        FUN_00372a0c(param_1,*(undefined8 *)(lVar6 + 8),param_3,param_4 + -1);
        if (*(char *)(param_1 + 4) == '\0') {
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_03918033,2);
        }
        else {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_038eee3f,2);
        }
      }
joined_r0x00372f94:
      if ((local_88 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_78);
      }
      lVar6 = *param_2;
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar10 < (int)((ulong)(param_2[1] - lVar6) >> 4));
  }
  return;
}


