/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be3150; name: FUN_02be3150
 */


void FUN_02be3150(undefined **param_1,float *param_2)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 local_5f0 [4];
  undefined4 local_5ec;
  uint local_5e8;
  undefined *local_5e0;
  ulong uStack_5d8;
  undefined *local_5d0;
  ulong uStack_5c8;
  undefined *local_5c0;
  ulong uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined **local_598;
  undefined **local_590;
  ulong uStack_588;
  undefined *local_580;
  ulong uStack_578;
  undefined8 *local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  ulong uStack_548;
  undefined *puStack_540;
  ulong uStack_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined1 local_528;
  
  if ((*(char *)(param_1 + 0xf) != '\0') && (*(int *)((long)param_1 + 0x7c) == 2)) {
    local_590 = param_1;
    auVar1 = (*(code *)param_1[0x30])(param_1 + 0x34,&local_590);
    if (*param_2 <= 1.1920929e-07) {
      *(undefined4 *)(param_1 + 0x8f) = 0;
    }
    else {
      *(float *)(param_1 + 0x8f) = *param_2;
      fVar7 = *param_2;
      param_1[0x81] = (undefined *)(ulong)auVar1._8_4_;
      param_1[0x80] = auVar1._0_8_;
      *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_1 + 0x28);
      *(undefined4 *)((long)param_1 + 0x434) = 0;
      *(char *)((long)param_1 + 0x431) = (char)*(undefined4 *)(param_1 + 0x29);
      param_1[0x89] = (undefined *)((ulong)param_1[0x2b] & 0xffffffff);
      param_1[0x88] = param_1[0x2a];
      param_1[0x8b] = (undefined *)((ulong)param_1[0x2d] & 0xffffffff);
      param_1[0x8a] = param_1[0x2c];
      param_1[0x8d] = (undefined *)((ulong)param_1[0x2f] & 0xffffffff);
      param_1[0x8c] = param_1[0x2e];
      *(float *)((long)param_1 + 0x47c) = 1.0 / fVar7;
      puVar2 = PTR_FUN_042afee8;
      uVar6 = (undefined4)((ulong)param_1[0x81] >> 0x20);
      local_5b0 = CONCAT44(-(float)((ulong)param_1[0x80] >> 0x20),-SUB84(param_1[0x80],0));
      uStack_5a8 = CONCAT44(uVar6,-SUB84(param_1[0x81],0));
      local_570 = &local_550;
      puVar5 = param_1[0x1a];
      uStack_588 = (uStack_588 >> 8 & 0xffffff) << 8;
      local_590 = &PTR_LAB_042afed0;
      local_580 = (undefined *)0x5f7ffff05f7ffff0;
      uStack_578 = uStack_578 & 0xffffffffffffff00;
      uStack_568 = -0x7ffffff600000000;
      (*(code *)PTR_FUN_042afee8)(0x5f7ffff05f7ffff0,CONCAT44(uVar6,uVar6),&local_590);
      uStack_588 = uStack_588 | 0x40;
      FUN_030ecb8c(puVar5,param_1 + 0x8e,&local_5b0,param_1 + 0x86,&local_590);
      local_590 = &PTR_LAB_042afed0;
      (*(code *)puVar2)(&local_590);
      lVar3 = uStack_568;
      uVar4 = (ulong)uStack_568._4_4_;
      uStack_568 = (ulong)uStack_568._4_4_ << 0x20;
      if ((-1 < lVar3) && (local_570 != (undefined8 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,local_570,(uVar4 & 0x3fffffff) << 7);
      }
      local_5f0[0] = *(char *)(param_1 + 0x86) != '\0';
      local_5ec = *(undefined4 *)(param_1 + 0x29);
      local_5e8 = (uint)*(byte *)((long)param_1 + 0x431);
      local_5e0 = param_1[0x88];
      uStack_5d8 = (ulong)param_1[0x89] & 0xffffffff;
      local_5d0 = param_1[0x8a];
      uStack_5c8 = (ulong)param_1[0x8b] & 0xffffffff;
      local_5c0 = param_1[0x8c];
      uStack_5b8 = (ulong)param_1[0x8d] & 0xffffffff;
      local_598 = param_1;
      (*(code *)param_1[0x40])
                (&local_590,local_5c0,uStack_5b8,0,param_1 + 0x44,&local_598,local_5f0);
      memcpy(param_1 + 0x1c,&local_590,0xa0);
      *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_1 + 0x28);
      param_1[0x89] = (undefined *)((ulong)param_1[0x2b] & 0xffffffff);
      param_1[0x88] = param_1[0x2a];
      param_1[0x8b] = (undefined *)((ulong)param_1[0x2d] & 0xffffffff);
      param_1[0x8a] = param_1[0x2c];
      *(undefined4 *)((long)param_1 + 0x434) = 0;
      *(char *)((long)param_1 + 0x431) = (char)*(undefined4 *)(param_1 + 0x29);
      param_1[0x8d] = (undefined *)((ulong)param_1[0x2f] & 0xffffffff);
      param_1[0x8c] = param_1[0x2e];
      local_528 = 0;
      local_530 = *(undefined4 *)(param_1 + 0x1c);
      local_52c = *(undefined4 *)((long)param_1 + 0xe4);
      uStack_558 = *(undefined8 *)(param_1[0x1a] + 200);
      local_560 = *(undefined8 *)(param_1[0x1a] + 0xc0);
      local_590 = (undefined **)param_1[0x1e];
      uStack_588 = (ulong)param_1[0x1f] & 0xffffffff;
      local_580 = param_1[0x20];
      uStack_578 = (ulong)param_1[0x21] & 0xffffffff;
      local_570 = (undefined8 *)param_1[0x22];
      uStack_568 = (ulong)param_1[0x23] & 0xffffffff;
      uStack_548 = (ulong)param_1[0x24] >> 0x20;
      local_550 = CONCAT44((int)param_1[0x24],-SUB84(param_1[0x25],0));
      puStack_540 = param_1[0x26];
      uStack_538 = (ulong)param_1[0x27] & 0xffffffff;
      FUN_030f50d0(&local_590,param_1 + 0x98);
    }
  }
  return;
}


