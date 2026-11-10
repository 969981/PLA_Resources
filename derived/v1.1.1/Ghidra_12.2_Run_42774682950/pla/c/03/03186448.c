/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186448; name: FUN_03186448
 */


void FUN_03186448(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  
  puVar1 = PTR_PTR_0434a090;
  if (param_2 != param_3) {
    do {
      local_80 = 0;
      local_78 = 0x8000000000000000;
      local_90 = 0;
      local_88 = 0x8000000000000000;
      FUN_03185710(param_2,auStack_b0);
      FUN_03185710(param_2 + 0x50,auStack_d0);
      FUN_001d58f0(*(undefined8 *)(param_4 + 0x20),auStack_b0,&local_80);
      FUN_001d58f0(*(undefined8 *)(param_4 + 0x20),auStack_d0,&local_90);
      uVar3 = local_78 & 0xffffffff;
      if (0 < (int)local_78) {
        uVar5 = local_88 & 0xffffffff;
        lVar6 = 0;
        iVar4 = (int)local_88;
        while( true ) {
          if (0 < iVar4) {
            lVar7 = 0;
            do {
              FUN_03185760(param_1,param_2,
                           *(undefined8 *)
                            (*(long *)(param_4 + 0x38) + (long)*(int *)(local_80 + lVar6 * 4) * 0xf0
                            ),*(undefined8 *)
                               (*(long *)(param_4 + 0x38) +
                               (long)*(int *)(local_90 + lVar7 * 4) * 0xf0),param_5);
              uVar5 = (ulong)(int)local_88;
              lVar7 = lVar7 + 1;
            } while (lVar7 < (long)uVar5);
            uVar3 = local_78 & 0xffffffff;
          }
          lVar6 = lVar6 + 1;
          if ((int)uVar3 <= lVar6) break;
          iVar4 = (int)uVar5;
        }
      }
      FUN_033299e0(0xca5b3771);
      uVar3 = local_88;
      uVar2 = local_88._4_4_;
      local_88 = (ulong)local_88._4_4_ << 0x20;
      if ((-1 < (long)uVar3) && (local_90 != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_90,uVar2 << 2);
      }
      uVar3 = local_78;
      uVar2 = local_78._4_4_;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if ((-1 < (long)uVar3) && (local_80 != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_80,uVar2 << 2);
      }
      param_2 = param_2 + 0x120;
    } while (param_2 != param_3);
  }
  return;
}


