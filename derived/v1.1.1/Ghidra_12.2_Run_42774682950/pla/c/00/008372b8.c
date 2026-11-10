/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008372b8; name: FUN_008372b8
 */


long FUN_008372b8(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,uint param_5
                 ,undefined8 param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_a0 [64];
  
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 0;
  }
  puVar1 = PTR_DAT_043773c0;
  uVar2 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar3 = FUN_00826d78(uVar2,param_2);
  if (lVar3 == 0) {
    uVar2 = FUN_00855004(*(undefined8 *)puVar1);
    lVar3 = FUN_00826e84(uVar2,param_7 & 1,param_2,param_6);
    if (lVar3 != 0) {
      FUN_0083fdc0(lVar3 + 0x98,param_4,param_5 & 1);
      if ((param_8 & 1) != 0) {
        FUN_0083fbc0(auStack_a0);
        FUN_0083fdb8(auStack_a0,param_3);
        FUN_0083fdb0(auStack_a0,param_2);
        FUN_0083fda8(auStack_a0,param_6);
        FUN_0083fdc0(auStack_a0,param_4,param_5 & 1);
        FUN_00825d4c(lVar3,auStack_a0);
        FUN_0083fc40(auStack_a0);
      }
      uVar4 = FUN_0082ef44(*(undefined8 *)PTR_DAT_04377ce8,lVar3,param_3,param_7 & 1);
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
      }
      else if ((((*(long *)(param_1 + 0x130) != 0) && ((param_7 & 1) == 0)) &&
               (uVar4 = FUN_0083ed5c(*(long *)(param_1 + 0x130),param_6),
               param_9 != (undefined1 *)0x0)) && ((uVar4 & 1) != 0)) {
        *param_9 = 1;
      }
    }
  }
  return lVar3;
}


