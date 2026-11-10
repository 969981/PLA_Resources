/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00508bdc; name: FUN_00508bdc
 */


void FUN_00508bdc(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  void *__src;
  byte *pbVar7;
  void *__dest;
  ulong uVar8;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  void *local_110;
  ulong local_108;
  undefined *local_e0;
  undefined8 uStack_d8;
  byte *local_b0;
  ulong local_a8;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (*param_2 == 5) {
    local_70 = 0;
    local_78 = 0;
    local_80 = (undefined *)0x656369767265730e;
                    /* try { // try from 00508c3c to 00508c47 has its CatchHandler @ 00508fb4 */
    piVar3 = (int *)FUN_00500624(param_2 + 8,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((param_2 + 10 == piVar3) || (piVar3[0xe] == 0)) {
      pbVar7 = (byte *)0x0;
    }
    else {
      if (piVar3[0xe] != 4) {
        FUN_002f2c60(&local_80,"field:name error: field:service error:not of type string");
        uVar4 = 0xa8;
        goto LAB_00508cb0;
      }
      bVar1 = *(byte *)(piVar3 + 0x10);
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(piVar3 + 0x12);
      }
      pbVar7 = (byte *)0x0;
      if (uVar6 != 0) {
        pbVar7 = (byte *)(piVar3 + 0x10);
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_80 = (undefined *)0x646f6874656d0c;
                    /* try { // try from 00508d40 to 00508d4b has its CatchHandler @ 00508fa4 */
    piVar3 = (int *)FUN_00500624(param_2 + 8,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((param_2 + 10 == piVar3) || (piVar3[0xe] == 0)) {
      puVar2 = (ulong *)0x0;
    }
    else {
      if (piVar3[0xe] != 4) {
        FUN_002f2c60(&local_80,"field:name error: field:method error:not of type string");
        uVar4 = 0xb6;
        goto LAB_00508cb0;
      }
      puVar5 = (ulong *)(piVar3 + 0x10);
      if (((byte)*puVar5 & 1) == 0) {
        puVar2 = (ulong *)0x0;
        if ((byte)((byte)*puVar5 >> 1) != 0) {
          puVar2 = puVar5;
        }
      }
      else {
        puVar2 = (ulong *)0x0;
        if (*(long *)(piVar3 + 0x12) != 0) {
          puVar2 = puVar5;
        }
      }
    }
    if (pbVar7 != (byte *)0x0) {
      local_80 = &DAT_0389ffa9;
      local_78 = 1;
      if ((*pbVar7 & 1) == 0) {
        local_b0 = pbVar7 + 1;
        local_a8 = (ulong)(*pbVar7 >> 1);
      }
      else {
        local_a8 = *(ulong *)(pbVar7 + 8);
        local_b0 = *(byte **)(pbVar7 + 0x10);
        if ((long)local_a8 < 0) {
                    /* try { // try from 00508f60 to 00508f7f has its CatchHandler @ 00508f88 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
      }
      local_130 = 0;
      local_e0 = &DAT_0389ffa9;
      uStack_d8 = 1;
      uStack_128 = 0;
      local_120 = (void *)0x0;
      if (puVar2 == (ulong *)0x0) {
        local_130 = 0;
        uVar6 = 0;
      }
      else {
        if ((*puVar2 & 1) == 0) {
          local_108 = puVar2[1];
          local_130 = *puVar2;
          local_120 = (void *)puVar2[2];
        }
        else {
          uVar6 = puVar2[1];
          if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __src = (void *)puVar2[2];
          if (uVar6 < 0x17) {
            local_130 = (ulong)(byte)((int)uVar6 << 1);
            __dest = (void *)((ulong)&local_130 | 1);
            if (uVar6 != 0) goto LAB_00508f40;
          }
          else {
            uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
            local_130 = uVar8 | 1;
            uStack_128 = uVar6;
            local_120 = __dest;
LAB_00508f40:
            memcpy(__dest,__src,uVar6);
          }
          *(undefined1 *)((long)__dest + uVar6) = 0;
          local_108 = uStack_128;
        }
        uVar6 = local_130 & 0xff;
        uStack_128 = local_108;
        if ((local_130 & 1) != 0) {
          local_110 = local_120;
          if ((long)local_108 < 0) {
                    /* try { // try from 00508e40 to 00508e5f has its CatchHandler @ 00508f8c */
                    /* WARNING: Subroutine does not return */
            __assert_fail("false && \"len <= kMaxSize\"",
                          "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()")
            ;
          }
          goto LAB_00508e9c;
        }
      }
      local_110 = (void *)((ulong)&local_130 | 1);
      local_108 = uVar6 >> 1;
LAB_00508e9c:
                    /* try { // try from 00508ea0 to 00508eb7 has its CatchHandler @ 00508f90 */
      FUN_002ed100(param_1,&local_80,&local_b0,&local_e0,&local_110);
      if ((local_130 & 1) == 0) {
        return;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_120);
      return;
    }
    if (puVar2 == (ulong *)0x0) goto LAB_00508cc4;
    FUN_002f2c60(&local_80,"field:name error:method name populated without service name");
    uVar4 = 0xc2;
  }
  else {
    FUN_002f2c60(&local_80,"field:name error:type is not object");
    uVar4 = 0x9e;
  }
LAB_00508cb0:
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                       ,uVar4,&local_80,0,0);
  *param_3 = uVar4;
LAB_00508cc4:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


