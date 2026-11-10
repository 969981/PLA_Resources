/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5b0c4; name: FUN_00d5b0c4
 */


long FUN_00d5b0c4(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_50 [24];
  long *local_38;
  
  if (*(short *)(param_1 + 0x161a) == 4) {
    lVar1 = 0;
  }
  else {
    if ((*(float *)(param_1 + 0x6f0) == 0.0) && (*(float *)(param_1 + 0x6f4) == 0.0)) {
      lVar1 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x6ef);
      if (*(byte *)(param_1 + 0x6ef) == 0) {
        lVar1 = 1;
      }
      else {
        uVar3 = (uint)*(byte *)(param_1 + 0x6ee);
        uVar5 = 0;
        lVar1 = param_1;
        do {
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            FUN_00d533f0(auStack_50,lVar1,2,uVar5 * uVar3);
            FUN_00d5beac(param_1,auStack_50,param_1 + 0x6e8);
            plVar2 = local_38;
            if (local_38 != (long *)0x0) {
              plVar2 = (long *)(**(code **)(*local_38 + 0x20))();
            }
            uVar3 = (uint)*(byte *)(param_1 + 0x6ee);
            if (1 < uVar3) {
              uVar4 = 1;
              do {
                FUN_00d533f0(auStack_50,plVar2,2,uVar4 + uVar5 * uVar3);
                FUN_00d5beac(param_1,auStack_50,param_1 + 0x6e8);
                plVar2 = local_38;
                if (local_38 != (long *)0x0) {
                  plVar2 = (long *)(**(code **)(*local_38 + 0x20))();
                }
                uVar3 = (uint)*(byte *)(param_1 + 0x6ee);
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar3);
            }
            uVar4 = (uint)*(byte *)(param_1 + 0x6ef);
          }
          uVar5 = uVar5 + 1;
          lVar1 = 1;
        } while (uVar5 < uVar4);
      }
    }
    if ((*(float *)(param_1 + 0x1610) != 0.0) || (*(float *)(param_1 + 0x1614) != 0.0)) {
      FUN_00d533f0(auStack_50,lVar1,2,0x2f);
      FUN_00d5beac(param_1,auStack_50,param_1 + 0x1608);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      lVar1 = 1;
    }
    *(short *)(param_1 + 0x161a) = *(short *)(param_1 + 0x161a) + 1;
  }
  return lVar1;
}


