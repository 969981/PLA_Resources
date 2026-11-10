/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049c3c0; name: FUN_0049c3c0
 */


long FUN_0049c3c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,ulong param_7)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_a0 [64];
  undefined1 local_54 [4];
  
  iVar2 = FUN_0041ccc0();
  lVar3 = 0;
  uVar5 = (ulong)iVar2;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = param_7 / uVar5;
  }
  if (param_7 != uVar1 * uVar5) {
    uVar1 = uVar1 + 1;
  }
  if ((param_6 != 0) && (uVar1 < 0x100)) {
    lVar4 = FUN_0046e390(0);
    lVar3 = 0;
    if (lVar4 != 0) {
      iVar2 = FUN_0046dda0(lVar4,param_2,param_3,param_1,0);
      if (iVar2 == 0) {
LAB_0049c500:
        lVar3 = 0;
      }
      else {
        lVar3 = param_6;
        if (uVar1 != 0) {
          lVar6 = 0;
          uVar7 = 1;
          do {
            local_54[0] = (undefined1)uVar7;
            if ((((1 < (uint)uVar7) &&
                 ((iVar2 = FUN_0046dda0(lVar4,0,0,0,0), iVar2 == 0 ||
                  (iVar2 = FUN_0046e2b0(lVar4,auStack_a0,uVar5), iVar2 == 0)))) ||
                (iVar2 = FUN_0046e2b0(lVar4,param_4,param_5), iVar2 == 0)) ||
               ((iVar2 = FUN_0046e2b0(lVar4,local_54,1), iVar2 == 0 ||
                (iVar2 = FUN_0046e2d0(lVar4,auStack_a0,0), iVar2 == 0)))) goto LAB_0049c500;
            __n = param_7 - lVar6;
            if (lVar6 + uVar5 <= param_7) {
              __n = uVar5;
            }
            memcpy((void *)(param_6 + lVar6),auStack_a0,__n);
            uVar7 = (ulong)((uint)uVar7 + 1);
            lVar6 = __n + lVar6;
          } while (uVar7 <= uVar1);
        }
      }
      FUN_004006a0(auStack_a0,0x40);
      FUN_0046e430(lVar4);
    }
  }
  return lVar3;
}


