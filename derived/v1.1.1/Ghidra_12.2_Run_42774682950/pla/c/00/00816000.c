/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00816000; name: FUN_00816000
 */


void FUN_00816000(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5
                 )

{
  void *__src;
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  ushort uVar8;
  int local_630 [4];
  undefined4 local_620 [4];
  undefined8 local_610;
  undefined1 *local_608;
  undefined4 local_600;
  int *local_5f8;
  undefined4 local_5f0;
  int local_5e8 [5];
  undefined1 auStack_5d4 [4];
  undefined1 auStack_5d0 [8];
  long local_5c8 [2];
  long local_5b8;
  undefined1 auStack_5b0 [2];
  undefined1 auStack_5ae [2];
  undefined1 auStack_5ac [1356];
  
  if (((*(long *)(param_2 + 0x58) == 0) || (uVar4 = FUN_007fc44c(), (uVar4 & 1) == 0)) ||
     (uVar4 = FUN_007fc43c(*(undefined8 *)(param_2 + 0x58)), (uVar4 & 1) == 0)) {
    uVar6 = 0x10408;
  }
  else {
    if (*(int *)(param_2 + 0xb28) != 1) {
      FUN_007e5bd8(param_2 + 0xb28);
      FUN_007e5c2c(param_2 + 0xb28);
      __src = (void *)(param_2 + 0xb68);
      FUN_007e7fb0(__src,0x10);
      FUN_007e7fb0(param_2 + 0xb78,0x100);
      plVar5 = (long *)FUN_007ecfa4();
      lVar7 = *plVar5;
      local_5b8 = 0;
      FUN_007ecf14(&local_5b8);
      *(long *)(param_2 + 0xb58) = local_5b8 + lVar7 * 2000;
      FUN_007ed360(&local_5b8,*(undefined8 *)(param_3 + 8));
      FUN_007ed3a0(auStack_5b0,*(undefined2 *)(param_3 + 0x10));
      FUN_007ed3a0(auStack_5ae,*(undefined2 *)(param_3 + 0x12));
      FUN_007ed3a0(auStack_5ac,*(undefined2 *)(param_3 + 0x14));
      FUN_007ed3c0(param_2 + 0x5be,0);
      FUN_007ed380(param_2 + 0x5bf,0xe);
      memcpy((void *)(param_2 + 0x5c3),&local_5b8,0xe);
      *(long *)(param_2 + 0xb60) = *(long *)(param_2 + 0xb60) + 1;
      FUN_007ed3c0(param_2 + 0x5d1,3);
      uVar3 = FUN_007fc43c(*(undefined8 *)(param_2 + 0x58));
      FUN_007ed3c0(param_2 + 0x5d2,uVar3 & 1);
      FUN_007ed360(param_2 + 0x5d3,*(undefined8 *)(param_2 + 0xb60));
      memcpy((void *)(param_2 + 0x5db),__src,0x10);
      local_610 = (ulong)local_610._4_4_ << 0x20;
      local_5c8[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_610 | 4),(Result *)local_5c8);
      FUN_007ee578(local_5c8,&local_610);
      uVar4 = FUN_007fc43c(*(undefined8 *)(param_2 + 0x58));
      if ((uVar4 & 1) == 0) {
        FUN_00821b80(&local_610);
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5eb) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5ec) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5ed) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5ee) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5ef) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f0) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f1) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f2) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f3) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f4) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f5) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f6) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f7) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f8) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        *(undefined1 *)(param_2 + 0x5f9) = uVar2;
        uVar2 = FUN_00821c5c(&local_610);
        lVar7 = 0;
        *(undefined1 *)(param_2 + 0x5fa) = uVar2;
        do {
          uVar2 = FUN_00821c5c(&local_610);
          *(undefined1 *)(param_2 + 0x5fb + lVar7) = uVar2;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x100);
      }
      else {
        uVar4 = FUN_007e362c(*(long *)(param_2 + 0x58) + 0x1238);
        if ((uVar4 & 1) == 0) {
          local_5e8[0] = 0;
          FUN_007e3524(&local_610,*(long *)(param_2 + 0x58) + 0x1238,local_5e8);
          FUN_007ed380(auStack_5d4,local_5e8[0]);
        }
        else {
          local_610 = 0;
          local_608 = (undefined1 *)0x0;
          FUN_007e3670(local_5e8,*(long *)(param_2 + 0x58) + 0x1238,&local_610);
          memcpy(auStack_5d4,&local_610,4);
        }
        FUN_007ed360(auStack_5d0,*(undefined8 *)(param_2 + 0xb60));
        FUN_00814370(&local_610,*(undefined8 *)(param_2 + 0x58),__src,0x10,local_5e8,0x10);
        FUN_007ee660(local_5c8,&local_610);
        local_600 = 0xc;
        local_610 = CONCAT44(local_610._4_4_,1);
        local_5f0 = 0x10;
        local_608 = auStack_5d4;
        local_5f8 = local_5e8;
        FUN_007e68d0(local_620,param_2 + 0x5fb,param_2 + 0xb78,0x100,param_2 + 0x5eb,0x10,&local_610
                    );
      }
      lVar7 = *(long *)(param_2 + 0x58);
      sVar1 = *(short *)(lVar7 + 0x12ce) - *(short *)(lVar7 + 0x12cc);
      if (sVar1 != -1) {
        uVar8 = 0;
        while( true ) {
          FUN_007e3428(&local_610,lVar7 + 0x1238);
          local_5f8 = (int *)CONCAT62(local_5f8._2_6_,
                                      *(short *)(*(long *)(param_2 + 0x58) + 0x12cc) + uVar8);
          FUN_007ebf54(local_5e8,*(undefined8 *)(param_2 + 0x60),param_2 + 0x5be,0x13d,&local_610,
                       auStack_5d4);
          FUN_007ee660(local_5c8,local_5e8);
          if ((int)local_5c8[0] != 0) {
            local_5e8[0] = 0x4c0d;
            local_620[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_5e8 | 4),(Result *)local_620);
            if ((int)local_5c8[0] != local_5e8[0]) {
              lVar7 = *(long *)(param_2 + 0x58);
              FUN_007ee578(local_630,local_5c8);
              if (*(int *)(lVar7 + 0x1a8) != local_630[0]) {
                FUN_007ee660(lVar7 + 0x1a8,local_630);
              }
            }
          }
          FUN_007e34a4(&local_610);
          uVar8 = uVar8 + 1;
          if ((ushort)(sVar1 + 1U) <= uVar8) break;
          lVar7 = *(long *)(param_2 + 0x58);
        }
      }
      plVar5 = local_5c8;
      *(undefined8 *)(param_2 + 0xb18) = param_4;
      *(undefined4 *)(param_2 + 0xb20) = param_5;
      goto LAB_00816084;
    }
    uVar6 = 0x4c11;
  }
  local_5b8 = CONCAT44(local_5b8._4_4_,uVar6);
  local_610 = (ulong)local_610._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_5b8 | 4),(Result *)&local_610);
  plVar5 = &local_5b8;
LAB_00816084:
  FUN_007ee578(param_1,plVar5);
  return;
}


