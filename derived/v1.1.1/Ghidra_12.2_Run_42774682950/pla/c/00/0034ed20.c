/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034ed20; name: FUN_0034ed20
 */


undefined1  [16] FUN_0034ed20(long param_1,ulong *param_2,ulong *param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  byte *__s;
  void *__dest;
  undefined1 *puVar13;
  undefined1 auVar14 [16];
  byte *local_b0;
  ulong *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  
  puVar8 = (ulong *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*(byte *)puVar8 & 1) == 0) {
    *(undefined2 *)puVar8 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  bVar2 = (byte)*param_2;
  __s = (byte *)param_2[2];
  uVar11 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar11 = param_2[1];
  }
  if (uVar11 == 0) {
    if ((bVar2 & 1) == 0) {
      __s = (byte *)((long)param_2 + 1);
    }
    goto LAB_0034ee80;
  }
  pbVar1 = __s;
  if ((bVar2 & 1) == 0) {
    pbVar1 = (byte *)((long)param_2 + 1);
  }
  if (*pbVar1 != 0x2e) {
    if ((bVar2 & 1) == 0) {
      __s = (byte *)((long)param_2 + 1);
    }
    pvVar4 = memchr(__s,0x2e,uVar11);
    if (pvVar4 == (void *)0x0) {
LAB_0034ee80:
      local_70 = (undefined1 *)0x0;
      uStack_78 = 0;
      local_80 = 0;
      if (&local_80 != param_2) {
                    /* try { // try from 0034ee8c to 0034ee9b has its CatchHandler @ 0034f30c */
        FUN_00291910(&local_80,__s,uVar11);
      }
      if ((*param_3 & 1) != 0) goto LAB_0034efac;
LAB_0034eeac:
      uStack_98 = param_3[1];
      local_a0 = *param_3;
      local_90 = (undefined1 *)param_3[2];
    }
    else {
      uVar9 = (long)pvVar4 - (long)__s;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = (undefined1 *)0x0;
      if (uVar9 == 0xffffffffffffffff) goto LAB_0034ee80;
      if (uVar9 <= uVar11) {
        uVar11 = uVar9;
      }
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (undefined1 *)0x0;
      if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 0034f2d0 to 0034f2d7 has its CatchHandler @ 0034f2e0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar11 < 0x17) {
        local_a0 = (ulong)(byte)((int)uVar11 << 1);
        puVar10 = (undefined1 *)((ulong)&local_a0 | 1);
        if (uVar11 != 0) goto LAB_0034ef48;
        *puVar10 = 0;
      }
      else {
        uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
        puVar10 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
        local_a0 = uVar9 | 1;
        uStack_98 = uVar11;
        local_90 = puVar10;
LAB_0034ef48:
        memcpy(puVar10,__s,uVar11);
        puVar10[uVar11] = 0;
        if ((local_80 & 1) != 0) {
          *local_70 = 0;
          uStack_78 = 0;
          if ((local_80 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_70);
          }
        }
      }
      local_70 = local_90;
      uStack_78 = uStack_98;
      local_80 = local_a0;
      if ((*param_3 & 1) == 0) goto LAB_0034eeac;
LAB_0034efac:
      local_90 = (void *)0x0;
      uStack_98 = 0;
      local_a0 = 0;
      uVar11 = param_3[1];
      if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 0034f2c0 to 0034f2c7 has its CatchHandler @ 0034f2e4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar4 = (void *)param_3[2];
      if (uVar11 < 0x17) {
        local_a0 = (ulong)(byte)((int)uVar11 << 1);
        __dest = (void *)((ulong)&local_a0 | 1);
        if (uVar11 != 0) goto LAB_0034f004;
      }
      else {
        uVar9 = uVar11 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
        local_a0 = uVar9 | 1;
        uStack_98 = uVar11;
        local_90 = __dest;
LAB_0034f004:
        memcpy(__dest,pvVar4,uVar11);
      }
      *(undefined1 *)((long)__dest + uVar11) = 0;
    }
    local_a8 = param_2 + 2;
    local_b0 = (byte *)((long)param_2 + 1);
    uVar9 = local_a0 & 0xff;
    bVar3 = (local_a0 & 1) == 0;
    uVar11 = local_a0 >> 1 & 0x7f;
    if (!bVar3) {
      uVar11 = uStack_98;
    }
    if (uVar11 != 0) {
      puVar13 = (undefined1 *)((ulong)&local_a0 | 1);
      puVar10 = puVar13;
      if ((local_a0 & 1) != 0) {
        puVar10 = local_90;
      }
      uVar6 = uStack_98;
      puVar7 = local_90;
      while (uVar5 = uVar11, uVar5 != 0) {
        uVar11 = uVar5 - 1;
        if (*(char *)((long)puVar10 + (uVar5 - 1)) == '.') {
          if (uVar5 == 0) break;
          uVar5 = uVar9 >> 1;
          if (!bVar3) {
            uVar5 = uVar6;
          }
          if (uVar5 < uVar11) {
                    /* try { // try from 0034f2b0 to 0034f2b7 has its CatchHandler @ 0034f32c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar4 = puVar13;
          if (!bVar3) {
            pvVar4 = puVar7;
          }
          if ((uVar9 & 1) == 0) {
            local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar11 << 1));
          }
          else {
            uStack_98 = uVar11;
          }
          *(undefined1 *)((long)pvVar4 + uVar11) = 0;
          uVar11 = local_a0 >> 1 & 0x7f;
          if ((local_a0 & 1) != 0) {
            uVar11 = uStack_98;
          }
                    /* try { // try from 0034f0bc to 0034f0eb has its CatchHandler @ 0034f33c */
          FUN_002e6bd4(&local_a0,1,0x2e);
          uVar9 = local_80 >> 1 & 0x7f;
          puVar10 = (undefined1 *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            uVar9 = uStack_78;
            puVar10 = local_70;
          }
          FUN_002e4094(&local_a0,puVar10,uVar9);
                    /* try { // try from 0034f0ec to 0034f0fb has its CatchHandler @ 0034f31c */
          auVar14 = FUN_0034e9a0(param_1,&local_a0,param_5 & 1);
          uVar12 = auVar14._0_4_;
          if (uVar12 != 0) {
            uVar9 = local_80 >> 1 & 0x7f;
            if ((local_80 & 1) != 0) {
              uVar9 = uStack_78;
            }
            bVar2 = (byte)*param_2;
            uVar6 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar6 = param_2[1];
            }
            if (uVar9 < uVar6) {
              if ((uVar12 < 9) && ((1 << (ulong)(uVar12 & 0x1f) & 0x152U) != 0)) {
                if (uVar6 < uVar9) {
                    /* try { // try from 0034f2d8 to 0034f2df has its CatchHandler @ 0034f2f8 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_out_of_range();
                }
                if ((bVar2 & 1) != 0) {
                  local_b0 = (byte *)*local_a8;
                }
                    /* try { // try from 0034f25c to 0034f263 has its CatchHandler @ 0034f2f8 */
                FUN_002e4094(&local_a0,local_b0 + uVar9,uVar6 - uVar9);
                    /* try { // try from 0034f264 to 0034f277 has its CatchHandler @ 0034f2e8 */
                auVar14 = FUN_0034e9a0(param_1,&local_a0,param_5 & 1);
                if ((puVar8 != &local_a0) && (auVar14._0_4_ == 0)) {
                  uVar11 = local_a0 >> 1 & 0x7f;
                  if ((local_a0 & 1) != 0) {
                    uVar11 = uStack_98;
                    puVar13 = local_90;
                  }
                    /* try { // try from 0034f2a4 to 0034f2ab has its CatchHandler @ 0034f2f8 */
                  FUN_00291910(puVar8,puVar13,uVar11);
                }
                goto LAB_0034f1e8;
              }
            }
            else if (((param_4 != 1) || (uVar12 == 1)) || (uVar12 == 4)) goto LAB_0034f1e8;
          }
          uVar9 = local_a0 >> 1 & 0x7f;
          if ((local_a0 & 1) != 0) {
            uVar9 = uStack_98;
          }
          if (uVar9 < uVar11) {
                    /* try { // try from 0034f2b8 to 0034f2bf has its CatchHandler @ 0034f2f8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          puVar10 = puVar13;
          if ((local_a0 & 1) != 0) {
            puVar10 = local_90;
          }
          if ((local_a0 & 1) == 0) {
            local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar11 << 1));
          }
          else {
            uStack_98 = uVar11;
          }
          *(undefined1 *)((long)puVar10 + uVar11) = 0;
          uVar9 = local_a0 & 0xff;
          bVar3 = (local_a0 & 1) == 0;
          uVar11 = local_a0 >> 1 & 0x7f;
          puVar10 = puVar13;
          if (!bVar3) {
            uVar11 = uStack_98;
            puVar10 = local_90;
          }
          uVar6 = uStack_98;
          puVar7 = local_90;
          if (uVar11 == 0) break;
        }
      }
    }
                    /* try { // try from 0034f1d0 to 0034f1df has its CatchHandler @ 0034f32c */
    auVar14 = FUN_0034e9a0(param_1,param_2,param_5 & 1);
LAB_0034f1e8:
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    goto joined_r0x0034f204;
  }
  uVar9 = uVar11 - 1;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (undefined1 *)0x0;
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
    local_80 = (ulong)(byte)((int)uVar9 << 1);
    puVar10 = (undefined1 *)((ulong)&local_80 | 1);
    if (uVar9 != 0) goto LAB_0034eee8;
  }
  else {
    uVar11 = uVar11 + 0xf & 0xfffffffffffffff0;
    puVar10 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
    local_80 = uVar11 | 1;
    uStack_78 = uVar9;
    local_70 = puVar10;
LAB_0034eee8:
    memcpy(puVar10,pbVar1 + 1,uVar9);
  }
  puVar10[uVar9] = 0;
                    /* try { // try from 0034eefc to 0034ef0b has its CatchHandler @ 0034f308 */
  auVar14 = FUN_0034e9a0(param_1,&local_80,param_5 & 1);
joined_r0x0034f204:
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return auVar14;
}


