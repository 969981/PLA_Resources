/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00863770; name: FUN_00863770
 */


void FUN_00863770(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ErrorResultVariant *this;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_a0 [8];
  int local_80 [5];
  undefined1 local_6c [4];
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  
  piVar5 = (int *)&local_c0;
  FUN_007e3400(auStack_68);
  local_6c[0] = 0;
  local_80[0] = 0;
  local_a0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
  if (param_3 == 0) {
    local_a0[0] = 0;
LAB_0086399c:
    this = (ErrorResultVariant *)((ulong)local_a0 | 4);
  }
  else {
    FUN_007ebd7c(local_a0,param_3,param_4 + 0x30,0x5c0,auStack_68,local_6c,param_4 + 0x5f8);
    FUN_007ee660(local_80,local_a0);
    if (local_80[0] == 0) {
      uVar2 = FUN_007e4430(auStack_68);
      if ((uVar2 & 1) == 0) {
        local_a0[0] = 0x2c09;
        goto LAB_0086399c;
      }
      FUN_007f0ce0(local_a0);
      uVar3 = *(undefined8 *)(param_2 + 0x88);
      uVar7 = (uint)*(ushort *)(*(long *)(param_2 + 0x58) + 0x114e);
      if (uVar7 == 0) {
LAB_008639d4:
        local_b8 = 0;
        local_c0 = 0x4000000;
        FUN_0085eaac(uVar3,&local_c0);
LAB_008639ec:
        local_c0 = CONCAT44(local_c0._4_4_,0x2c09);
      }
      else {
        uVar6 = 0;
        puVar4 = (undefined8 *)FUN_0085e8d4(uVar3,0);
        if (puVar4 != (undefined8 *)0x0) goto LAB_008638bc;
        do {
          do {
            uVar3 = *(undefined8 *)(param_2 + 0x88);
            uVar6 = uVar6 + 1;
            if (uVar7 == uVar6) goto LAB_008639d4;
            puVar4 = (undefined8 *)FUN_0085e8d4(uVar3,uVar6);
          } while (puVar4 == (undefined8 *)0x0);
LAB_008638bc:
          puVar1 = puVar4 + 7;
          if (*(char *)(puVar4 + 0xb) != '\0') {
            puVar1 = puVar4 + 3;
          }
          FUN_007e3428(&local_c0,puVar1);
          uVar2 = FUN_007e45a8(&local_c0,auStack_68);
          FUN_007e34a4(&local_c0);
        } while ((uVar2 & 1) == 0);
        FUN_0085c5b0(&local_c0,*(undefined8 *)(param_2 + 0x58),*puVar4);
        FUN_007f0f88(local_a0,&local_c0);
        FUN_007f0f88(param_4 + 0x628,local_a0);
        *(undefined1 *)(param_4 + 0x620) = local_6c[0];
        FUN_007f0508(&local_c0,param_4);
        FUN_007ee660(local_80,&local_c0);
        if (local_80[0] != 0) goto LAB_008639ec;
        local_c0 = local_c0 & 0xffffffff00000000;
      }
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_c0 | 4),(Result *)local_48);
      goto LAB_008639b0;
    }
    if (*(char *)(param_2 + 0x10) != '\0') {
      local_a0[0] = 0x10407;
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)&local_c0);
      if (local_80[0] != local_a0[0]) {
        local_a0[0] = 0x2c18;
        local_c0 = local_c0 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)&local_c0);
        if (local_80[0] == local_a0[0]) {
          local_a0[0] = 0xc47f;
          goto LAB_0086399c;
        }
      }
      piVar5 = local_80;
      goto LAB_008639b0;
    }
    this = (ErrorResultVariant *)((ulong)local_a0 | 4);
    local_a0[0] = 0x2c09;
    local_c0 = (ulong)local_c0._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_c0);
    local_a0[0] = 0x2c09;
  }
  local_c0 = local_c0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)&local_c0);
  piVar5 = local_a0;
LAB_008639b0:
  FUN_007ee578(param_1,piVar5);
  FUN_007e34a4(auStack_68);
  return;
}


