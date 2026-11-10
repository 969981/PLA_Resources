/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080c9e0; name: FUN_0080c9e0
 */


void FUN_0080c9e0(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined2 uVar13;
  undefined4 local_628 [4];
  int local_618 [2];
  int local_610 [2];
  undefined *local_608 [3];
  undefined2 local_5f0;
  undefined4 local_5e8 [2];
  undefined4 local_5e0 [2];
  int local_5d8 [4];
  undefined1 auStack_5c8 [88];
  undefined4 local_570;
  byte local_56c [60];
  undefined4 local_530;
  undefined4 local_4f0;
  undefined4 local_4b0;
  undefined4 local_470;
  undefined4 local_430;
  undefined4 local_3f0;
  undefined4 local_3b0;
  undefined1 auStack_158 [48];
  long local_128;
  long local_120;
  char local_118;
  undefined7 uStack_117;
  long local_110;
  uint local_108 [18];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  short local_ac;
  int local_a0 [4];
  undefined4 local_90 [2];
  undefined *local_88 [2];
  undefined *local_78 [2];
  undefined4 local_68 [2];
  
  local_5d8[0] = 0;
  local_108[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_5d8 | 4),(Result *)local_108);
  FUN_007ee578(local_a0,local_5d8);
  uVar8 = nn::ldn::OpenStation();
  local_90[0] = (undefined4)uVar8;
  FUN_0080a2bc(local_5d8,uVar8,local_90);
  FUN_007ee660(local_a0,local_5d8);
  if (local_a0[0] == 0) {
    FUN_007f59c0(param_2,2);
    sVar3 = *(short *)((long)param_2 + 0x5a);
    puVar9 = (undefined8 *)FUN_00809564(param_3 + 0x20);
    local_b0 = *(undefined2 *)(puVar9 + 9);
    local_c0 = *puVar9;
    local_b8 = puVar9[1];
    local_ae = *(undefined1 *)((long)puVar9 + 0x66);
    local_ac = sVar3;
    pvVar10 = memcpy((void *)((ulong)local_108 | 4),(void *)(param_3 + 0x558),
                     (ulong)*(byte *)(param_3 + 0x598));
    uVar13 = 1;
    if (*(char *)((long)param_2 + 0x5c) != '\0') {
      uVar13 = 2;
    }
    local_108[0] = (uint)CONCAT12(*(undefined1 *)(param_3 + 0x598),uVar13);
    local_110 = param_2[0x25b];
    local_128 = param_2[600];
    local_120 = param_2[0x259];
    _local_118 = CONCAT71((int7)((ulong)param_2[0x25a] >> 8),(char)param_2[0x25a] + '\x01');
    FUN_0080b30c(pvVar10,auStack_158);
    bVar5 = false;
    while( true ) {
      uVar8 = nn::ldn::ConnectPrivate(&local_c0,local_108,&local_128,auStack_158,(int)sVar3,0);
      local_90[0] = (undefined4)uVar8;
      FUN_0080a2bc(local_5d8,uVar8,local_90);
      FUN_007ee660(local_a0,local_5d8);
      if (local_a0[0] == 0) break;
      local_5d8[0] = 0x6c87;
      local_608[0] = (undefined *)((ulong)local_608[0] & 0xffffffff00000000);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_5d8 | 4),(Result *)local_608);
      if ((bVar5) || (bVar5 = true, local_a0[0] != local_5d8[0])) goto LAB_0080ca5c;
    }
    uVar8 = nn::ldn::GetNetworkInfo((NetworkInfo *)local_5d8);
    local_90[0] = (undefined4)uVar8;
    FUN_0080a2bc(local_608,uVar8,local_90);
    FUN_007ee660(local_a0,local_608);
    if (local_a0[0] == 0) {
      FUN_0080a19c(param_2);
      uVar8 = nn::ldn::GetIpv4Address((Ipv4Address *)local_5e0,(SubnetMask *)local_5e8);
      local_90[0] = (undefined4)uVar8;
      FUN_0080a2bc(local_608,uVar8,local_90);
      FUN_007ee660(local_a0,local_608);
      if (local_a0[0] == 0) {
        uVar6 = nn::ldn::operator==(local_5e0[0],local_570);
        iVar4 = -(~uVar6 & 1);
        uVar11 = nn::ldn::operator==(local_5e0[0],local_530);
        if ((uVar11 & 1) != 0) {
          iVar4 = 1;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_4f0);
        iVar2 = 2;
        if ((uVar11 & 1) == 0) {
          iVar2 = iVar4;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_4b0);
        iVar4 = 3;
        if ((uVar11 & 1) == 0) {
          iVar4 = iVar2;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_470);
        iVar2 = 4;
        if ((uVar11 & 1) == 0) {
          iVar2 = iVar4;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_430);
        iVar4 = 5;
        if ((uVar11 & 1) == 0) {
          iVar4 = iVar2;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_3f0);
        iVar2 = 6;
        if ((uVar11 & 1) == 0) {
          iVar2 = iVar4;
        }
        uVar11 = nn::ldn::operator==(local_5e0[0],local_3b0);
        iVar4 = 7;
        if ((uVar11 & 1) == 0) {
          iVar4 = iVar2;
        }
        if (-1 < iVar4) {
          lVar1 = (long)iVar4 * 0x40;
          FUN_008473a8(param_2,(ulong)local_56c[lVar1 + 2] << 0x38 |
                               (ulong)local_56c[lVar1 + 4] << 0x30 |
                               (ulong)local_56c[lVar1 + 5] << 0x28 |
                               (ulong)local_56c[lVar1 + 3] << 0x20 |
                               (ulong)local_56c[lVar1 + 1] << 0x18 | (ulong)local_56c[lVar1] << 0x10
                      );
          FUN_008473fc(param_2,(ulong)local_56c[2] << 0x38 | (ulong)local_56c[4] << 0x30 |
                               (ulong)local_56c[5] << 0x28 | (ulong)local_56c[3] << 0x20 |
                               (ulong)local_56c[1] << 0x18 | (ulong)local_56c[0] << 0x10);
          uVar7 = nn::ldn::MakeBroadcastAddress(local_5e0[0],local_5e8[0]);
          local_608[0] = PTR_DAT_04377418 + 0x10;
          FUN_007e34ac(local_608,uVar7);
          local_5f0 = 0x3039;
          FUN_007f105c(param_2 + 0xd,local_608);
          uVar8 = nn::ldn::GetIpv4Address((Ipv4Address *)local_610,(SubnetMask *)local_618);
          local_90[0] = (undefined4)uVar8;
          FUN_0080a2bc(local_78,uVar8,local_90);
          FUN_007ee660(local_a0,local_78);
          if (local_a0[0] == 0) {
            if ((*(int *)((long)param_2 + 0x7f64) != local_610[0]) ||
               ((int)param_2[0xfed] != local_618[0])) {
              local_78[0]._0_4_ = 0x6c1b;
LAB_0080ce80:
              local_88[0]._0_4_ = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
              ppuVar12 = local_78;
              goto LAB_0080ce98;
            }
            FUN_0080aaf4(local_78,param_2);
            FUN_007ee660(local_a0,local_78);
            if (local_a0[0] == 0) {
              FUN_0080b3dc(local_78,param_2,(void *)(param_3 + 0x558),
                           *(undefined1 *)(param_3 + 0x598));
              FUN_007ee660(local_a0,local_78);
              if (local_a0[0] == 0) {
                uVar8 = nn::ldn::GetSecurityParameter((SecurityParameter *)(param_2 + 600));
                local_68[0] = (undefined4)uVar8;
                FUN_0080a2bc(local_78,uVar8,local_68);
                if ((int)local_78[0] == 0) {
                  local_88[0]._0_4_ = 0;
                  local_628[0] = 0;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_628);
                  ppuVar12 = local_88;
                }
                else {
                  ppuVar12 = local_78;
                }
                FUN_007ee578(local_628,ppuVar12);
                FUN_007ee660(local_a0,local_628);
                if (local_a0[0] == 0) {
                  nn::os::LockMutex((MutexType *)(param_2 + 0x3f));
                  FUN_0080956c(param_2[0x43],local_5d8);
                  nn::os::UnlockMutex((MutexType *)(param_2 + 0x3f));
                  (**(code **)(*param_2 + 0x170))(param_2,auStack_5c8,0x10);
                  local_78[0]._0_4_ = 0;
                  goto LAB_0080ce80;
                }
              }
            }
          }
          ppuVar12 = (undefined **)local_a0;
LAB_0080ce98:
          FUN_007ee578(param_1,ppuVar12);
          FUN_007e34a4(local_608);
          return;
        }
        local_608[0] = (undefined *)CONCAT44(local_608[0]._4_4_,0x10408);
        local_78[0]._0_4_ = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_608 | 4),(Result *)local_78);
        ppuVar12 = local_608;
        goto LAB_0080ca60;
      }
    }
  }
LAB_0080ca5c:
  ppuVar12 = (undefined **)local_a0;
LAB_0080ca60:
  FUN_007ee578(param_1,ppuVar12);
  return;
}


