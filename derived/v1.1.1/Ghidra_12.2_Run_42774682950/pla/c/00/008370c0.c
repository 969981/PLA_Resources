/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008370c0; name: FUN_008370c0
 */


undefined8 FUN_008370c0(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [64];
  
  puVar1 = PTR_DAT_043773c0;
  lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  for (lVar6 = *(long *)(lVar3 + 0x20); lVar6 != lVar3 + 0x18; lVar6 = *(long *)(lVar6 + 8)) {
    if ((*(ushort *)(*(long *)(lVar6 + 0x10) + 0x38) == param_3) &&
       (*(long *)(*(long *)(lVar6 + 0x10) + 0x30) != param_2)) {
      return 0;
    }
  }
  uVar4 = FUN_00855004(*(undefined8 *)puVar1);
  lVar6 = FUN_00826d78(uVar4,param_2);
  if (lVar6 == 0) goto LAB_008371d4;
  FUN_0083fbc0(auStack_80);
  FUN_00825dcc(auStack_90,lVar6,auStack_80);
  uVar2 = FUN_0083fda0(auStack_80);
  if (param_3 == (uVar2 & 0xffff)) {
    FUN_0083fd74(auStack_b0,auStack_80);
    uVar5 = FUN_007f0f48(auStack_b0,param_4);
    if ((uVar5 & 1) == 0) goto LAB_00837194;
  }
  else {
LAB_00837194:
    lVar3 = FUN_00855004(*(undefined8 *)puVar1);
    if (lVar6 == *(long *)(lVar3 + 0x98)) {
      *(undefined1 *)(param_1 + 0x780) = 0;
      if (*(int *)(param_1 + 0x784) == 0) {
        *(undefined4 *)(param_1 + 0x784) = 3;
        FUN_0083fc40(auStack_80);
        goto LAB_008371d4;
      }
    }
    else {
      FUN_00835b90(param_1,lVar6);
    }
    lVar6 = 0;
  }
  FUN_0083fc40(auStack_80);
  if (lVar6 != 0) {
    return 1;
  }
LAB_008371d4:
  uVar4 = FUN_00855004(*(undefined8 *)puVar1);
  FUN_007f0fc8(auStack_80,param_4);
  lVar6 = FUN_00827e58(uVar4,auStack_80);
  FUN_007e34a4(auStack_80);
  if (lVar6 != 0) {
    FUN_0083fbc0(auStack_80);
    FUN_00825dcc(auStack_b0,lVar6,auStack_80);
    uVar2 = FUN_0083fda0(auStack_80);
    if ((param_3 != (uVar2 & 0xffff)) || (lVar3 = FUN_0083fd98(auStack_80), lVar3 != param_2)) {
      lVar3 = FUN_00855004(*(undefined8 *)puVar1);
      if (lVar6 == *(long *)(lVar3 + 0x98)) {
        *(undefined1 *)(param_1 + 0x780) = 0;
        if (*(int *)(param_1 + 0x784) == 0) {
          *(undefined4 *)(param_1 + 0x784) = 3;
        }
      }
      else {
        FUN_00835b90(param_1,lVar6);
      }
    }
    FUN_0083fc40(auStack_80);
  }
  return 1;
}


